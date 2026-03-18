/*
 * XREFs of NtMapViewOfSection @ 0x1404B5D50
 * Callers:
 *     VerifierNtMapViewOfSection @ 0x140754070 (VerifierNtMapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiMakeProtectionMask @ 0x14008E520 (MiMakeProtectionMask.c)
 *     RtlFindMostSignificantBit @ 0x140111C10 (RtlFindMostSignificantBit.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x140531A48 (DbgkMapViewOfSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG AccessProtection)
{
  ULONG_PTR v10; // r12
  int ProtectionMask; // eax
  char **v13; // r8
  KPROCESSOR_MODE PreviousMode; // bl
  _QWORD *v15; // rcx
  PSIZE_T v16; // rdx
  _QWORD *v17; // rcx
  _BYTE *v18; // rcx
  unsigned __int64 v19; // rdx
  NTSTATUS result; // eax
  int v21; // ebx
  PVOID v22; // rdi
  __int64 v23; // r14
  int v24; // r8d
  PVOID v25; // r15
  int v26; // eax
  char *v27; // r14
  LONGLONG QuadPart; // [rsp+68h] [rbp-80h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+70h] [rbp-78h]
  char *v30; // [rsp+78h] [rbp-70h] BYREF
  ULONG_PTR v31; // [rsp+80h] [rbp-68h] BYREF
  PVOID Object; // [rsp+88h] [rbp-60h] BYREF
  PVOID v33; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+98h] [rbp-50h]
  KPROCESSOR_MODE v37; // [rsp+108h] [rbp+20h]

  v10 = ZeroBits;
  if ( ZeroBits >= 0x20 )
  {
    v10 = 63 - RtlFindMostSignificantBit(ZeroBits);
  }
  else if ( ZeroBits )
  {
    v10 = ZeroBits + 32;
  }
  if ( v10 > 0x35 )
    return -1073741582;
  if ( (unsigned int)(InheritDisposition - 1) > 1 )
    return -1073741578;
  if ( (AllocationType & 0xDF2FDF80) != 0 )
    return -1073741577;
  ProtectionMask = MiMakeProtectionMask(AccessProtection & 0xBFFFFFFF);
  if ( ProtectionMask == -1 )
    return -1073741755;
  DesiredAccess = MmMakeSectionAccess[ProtectionMask & 7];
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = PreviousMode;
  if ( PreviousMode )
  {
    v15 = v13;
    if ( (unsigned __int64)v13 >= MmUserProbeAddress )
      v15 = (_QWORD *)MmUserProbeAddress;
    *v15 = *v15;
    v16 = ViewSize;
    v17 = ViewSize;
    if ( (unsigned __int64)ViewSize >= MmUserProbeAddress )
      v17 = (_QWORD *)MmUserProbeAddress;
    *v17 = *v17;
  }
  else
  {
    v16 = ViewSize;
  }
  if ( SectionOffset )
  {
    if ( PreviousMode )
    {
      v18 = SectionOffset;
      if ( ((unsigned __int8)SectionOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SectionOffset >= MmUserProbeAddress )
        v18 = (_BYTE *)MmUserProbeAddress;
      *v18 = *v18;
      v18[7] = v18[7];
    }
    QuadPart = SectionOffset->QuadPart;
  }
  else
  {
    QuadPart = 0LL;
  }
  v30 = *v13;
  v19 = *v16;
  v34 = v19;
  v31 = v19;
  if ( v30 > (char *)MmHighestUserAddress - 0x10000 || v19 > (_BYTE *)MmHighestUserAddress - v30 - 0xFFFF )
    return -1073741583;
  if ( (unsigned __int64)&v30[v19] > 0xFFFFFFFFFFFFFFFFuLL >> v10 )
    return -1073741582;
  result = ObReferenceObjectByHandleWithTag(
             ProcessHandle,
             8u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x77566D4Du,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v21 = ObReferenceObjectByHandle(SectionHandle, DesiredAccess, MmSectionObjectType, PreviousMode, &v33, 0LL);
    if ( v21 < 0 )
    {
LABEL_41:
      ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
      return v21;
    }
    v22 = v33;
    v23 = MiSectionControlArea((__int64)v33);
    v24 = *(_DWORD *)(v23 + 56);
    if ( (v24 & 0x20) == 0 && (AllocationType & 0x800000) != 0 )
    {
      v21 = -1073741577;
    }
    else if ( (v24 & 0x400) != 0 )
    {
      LODWORD(QuadPart) = QuadPart & 0xFFFFF000;
      if ( !v37 || QuadPart + v34 <= BugCheckParameter3 << 12 )
      {
LABEL_35:
        v25 = Object;
        v21 = MiMapViewOfSection(
                (_DWORD)v22,
                (_DWORD)Object,
                (unsigned int)&v30,
                v10,
                CommitSize,
                (__int64)&QuadPart,
                (__int64)&v31,
                InheritDisposition,
                AllocationType,
                AccessProtection,
                2,
                0LL);
        if ( v21 >= 0 )
        {
          v26 = *(_DWORD *)(v23 + 56);
          v27 = v30;
          if ( (v26 & 0x20) != 0 )
            DbgkMapViewOfSection(v25);
          *ViewSize = v31;
          *BaseAddress = v27;
          if ( SectionOffset )
            SectionOffset->QuadPart = QuadPart;
        }
        goto LABEL_40;
      }
      v21 = -1073741580;
    }
    else
    {
      if ( (AllocationType & 0x40000000) != 0 || !(_WORD)v30 && (!SectionOffset || !(_WORD)QuadPart) )
        goto LABEL_35;
      v21 = -1073741280;
    }
LABEL_40:
    ObfDereferenceObject(v22);
    goto LABEL_41;
  }
  return result;
}
