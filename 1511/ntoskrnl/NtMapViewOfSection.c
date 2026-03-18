/*
 * XREFs of NtMapViewOfSection @ 0x140493120
 * Callers:
 *     VerifierNtMapViewOfSection @ 0x1406D05A4 (VerifierNtMapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     RtlFindMostSignificantBit @ 0x1400D0454 (RtlFindMostSignificantBit.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiMapViewOfSection @ 0x140419680 (MiMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x140493500 (DbgkMapViewOfSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  ULONG_PTR v10; // r15
  int ProtectionMask; // eax
  _BYTE **v12; // r8
  void *v13; // r10
  KPROCESSOR_MODE PreviousMode; // bl
  _QWORD *v15; // rcx
  PSIZE_T v16; // rdx
  _QWORD *v17; // rcx
  _BYTE *v18; // rcx
  unsigned __int64 v19; // r13
  NTSTATUS result; // eax
  NTSTATUS v21; // ebx
  __int64 v22; // rsi
  int v23; // r8d
  int v24; // eax
  void *v25; // rsi
  ACCESS_MASK DesiredAccess; // [rsp+64h] [rbp-74h]
  LONGLONG QuadPart; // [rsp+68h] [rbp-70h] BYREF
  _BYTE *v28; // [rsp+70h] [rbp-68h] BYREF
  PVOID v29; // [rsp+78h] [rbp-60h] BYREF
  PVOID Object; // [rsp+80h] [rbp-58h] BYREF
  size_t v31[10]; // [rsp+88h] [rbp-50h] BYREF
  KPROCESSOR_MODE v34; // [rsp+F8h] [rbp+20h]

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
  v34 = PreviousMode;
  if ( PreviousMode )
  {
    v15 = v12;
    if ( (unsigned __int64)v12 >= MmUserProbeAddress )
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
  v28 = *v12;
  v19 = *v16;
  v31[0] = *v16;
  if ( v28 > (char *)MmHighestUserAddress - 0x10000 || v19 > (_BYTE *)MmHighestUserAddress - v28 - 0xFFFF )
    return -1073741583;
  if ( (unsigned __int64)&v28[v19] > 0xFFFFFFFFFFFFFFFFuLL >> v10 )
    return -1073741582;
  result = ObReferenceObjectByHandleWithTag(
             v13,
             8u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x77566D4Du,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v21 = ObReferenceObjectByHandle(SectionHandle, DesiredAccess, MmSectionObjectType, PreviousMode, &v29, 0LL);
    if ( v21 < 0 )
    {
LABEL_42:
      ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
      return v21;
    }
    v22 = MiSectionControlArea((__int64)v29);
    v23 = *(_DWORD *)(v22 + 56);
    if ( (v23 & 0x20) == 0 && (AllocationType & 0x800000) != 0 )
    {
      v21 = -1073741577;
    }
    else if ( (v23 & 0x400) != 0 )
    {
      LODWORD(QuadPart) = QuadPart & 0xFFFFF000;
      if ( !v34 || v19 + QuadPart <= BugCheckParameter3 << 12 )
      {
LABEL_35:
        v21 = MiMapViewOfSection(
                (__int64)v29,
                (struct _KPROCESS *)Object,
                (void **)&v28,
                v10,
                CommitSize,
                &QuadPart,
                v31,
                InheritDisposition,
                AllocationType,
                AccessProtection,
                2,
                0LL);
        if ( v21 >= 0 )
          goto LABEL_36;
        if ( v28 )
          ++dword_1402FED68;
        else
          ++dword_1402FED64;
        if ( v28 )
        {
          if ( (MiAllocationDebug & 8) == 0 )
            goto LABEL_36;
        }
        else if ( (MiAllocationDebug & 4) == 0 )
        {
LABEL_36:
          if ( v21 >= 0 )
          {
            v24 = *(_DWORD *)(v22 + 56);
            v25 = v28;
            if ( (v24 & 0x20) != 0 )
              DbgkMapViewOfSection(Object);
            *ViewSize = v31[0];
            *BaseAddress = v25;
            if ( SectionOffset )
              SectionOffset->QuadPart = QuadPart;
          }
          goto LABEL_41;
        }
        __debugbreak();
        goto LABEL_36;
      }
      v21 = -1073741580;
    }
    else
    {
      if ( (AllocationType & 0x40000000) != 0 || !(_WORD)v28 && (!SectionOffset || !(_WORD)QuadPart) )
        goto LABEL_35;
      v21 = -1073741280;
    }
LABEL_41:
    ObfDereferenceObject(v29);
    goto LABEL_42;
  }
  return result;
}
