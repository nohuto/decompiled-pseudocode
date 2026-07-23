/*
 * XREFs of NtMapViewOfSection @ 0x140435610
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     RtlFindMostSignificantBit @ 0x14009D954 (RtlFindMostSignificantBit.c)
 *     MiMapViewOfSection @ 0x140431EE0 (MiMapViewOfSection.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkMapViewOfSection @ 0x1404B07BC (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x1406A5940 (EtwTiLogMapExecView.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
  ULONG_PTR v10; // rdi
  NTSTATUS result; // eax
  int ProtectionMask; // eax
  void **v14; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  ULONG_PTR v19; // rcx
  _KPROCESS *v20; // rsi
  int v21; // ebx
  PVOID v22; // r12
  int v23; // ecx
  int v24; // r15d
  int v25; // eax
  unsigned __int64 v26; // rdi
  __int64 v27; // r13
  ACCESS_MASK DesiredAccess; // [rsp+64h] [rbp-74h]
  LONGLONG QuadPart; // [rsp+68h] [rbp-70h] BYREF
  ULONG_PTR v30; // [rsp+70h] [rbp-68h]
  int v31; // [rsp+78h] [rbp-60h]
  unsigned __int64 v32; // [rsp+80h] [rbp-58h] BYREF
  PVOID v33; // [rsp+88h] [rbp-50h] BYREF
  size_t v34; // [rsp+90h] [rbp-48h] BYREF
  PVOID *v35; // [rsp+98h] [rbp-40h]
  PVOID Object; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-30h]
  unsigned __int8 v39; // [rsp+F8h] [rbp+20h]

  v10 = ZeroBits;
  v35 = BaseAddress;
  if ( ZeroBits < 0x20 )
  {
    if ( ZeroBits )
      v10 = ZeroBits + 32;
  }
  else
  {
    v10 = 63 - RtlFindMostSignificantBit(ZeroBits);
  }
  if ( v10 > 0x35 )
    return -1073741582;
  if ( (unsigned int)(InheritDisposition - 1) > 1 )
    return -1073741578;
  if ( (AllocationType & 0x9F2FDF80) != 0 )
    return -1073741577;
  ProtectionMask = MiMakeProtectionMask(AccessProtection & 0xBFFFFFFF);
  if ( ProtectionMask == -1 )
    return -1073741755;
  v31 = ProtectionMask & 7;
  DesiredAccess = MmMakeSectionAccess[ProtectionMask & 7];
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = PreviousMode;
  if ( PreviousMode )
  {
    v16 = (__int64)v14;
    if ( (unsigned __int64)v14 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    v17 = (__int64)ViewSize;
    if ( (unsigned __int64)ViewSize >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  if ( SectionOffset )
  {
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)SectionOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (__int64)SectionOffset;
      if ( (unsigned __int64)SectionOffset >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v18 = *(_BYTE *)v18;
      *(_BYTE *)(v18 + 7) = *(_BYTE *)(v18 + 7);
    }
    QuadPart = SectionOffset->QuadPart;
  }
  else
  {
    QuadPart = 0LL;
  }
  v32 = (unsigned __int64)*v14;
  v19 = *ViewSize;
  v30 = v19;
  v34 = v19;
  if ( v32 > 0x7FFFFFFDFFFFLL || v19 > 0x7FFFFFFE0000LL - v32 )
    return -1073741583;
  if ( v19 + v32 > 0xFFFFFFFFFFFFFFFFuLL >> v10 )
    return -1073741582;
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2002152781, (__int64)&v33, 0LL, 0LL);
  if ( result >= 0 )
  {
    v20 = (_KPROCESS *)v33;
    if ( (AllocationType & 0x40000000) != 0 && !*((_QWORD *)v33 + 226) )
    {
      v21 = -1073741577;
LABEL_62:
      ObfDereferenceObjectWithTag(v20, 0x77566D4Du);
      return v21;
    }
    v21 = ObReferenceObjectByHandle(SectionHandle, DesiredAccess, MmSectionObjectType, PreviousMode, &Object, 0LL);
    if ( v21 < 0 )
      goto LABEL_62;
    v22 = Object;
    v37 = MiSectionControlArea((__int64)Object);
    v23 = *(_DWORD *)(v37 + 56);
    if ( (v23 & 0x20) == 0 && (AllocationType & 0x800000) != 0 )
    {
      v21 = -1073741577;
LABEL_61:
      ObfDereferenceObject(v22);
      goto LABEL_62;
    }
    if ( (v23 & 0x400) != 0 )
    {
      LODWORD(QuadPart) = QuadPart & 0xFFFFF000;
      v24 = v30;
      if ( v39 && v30 + QuadPart > BugCheckParameter3 << 12 )
      {
        v21 = -1073741580;
        goto LABEL_61;
      }
    }
    else
    {
      if ( (AllocationType & 0x40000000) == 0 && ((_WORD)v32 || SectionOffset && (_WORD)QuadPart) )
      {
        v21 = -1073741280;
        goto LABEL_61;
      }
      v24 = v30;
    }
    v25 = MiMapViewOfSection(
            (__int64)v22,
            v20,
            (void **)&v32,
            v10,
            CommitSize,
            &QuadPart,
            &v34,
            InheritDisposition,
            AllocationType,
            AccessProtection,
            2,
            0LL);
    v21 = v25;
    v26 = v32;
    if ( v25 < 0 )
    {
      if ( v32 )
        ++dword_140327178;
      else
        ++dword_140327174;
    }
    if ( v25 >= 0 )
    {
      v27 = v37;
      if ( (*(_DWORD *)(v37 + 56) & 0x20) != 0 )
        DbgkMapViewOfSection(v20);
      if ( (v31 & 2) != 0 && (*(_DWORD *)(v27 + 56) & 0x20) == 0 )
        EtwTiLogMapExecView((_DWORD)v20, v39, v26, v24, AllocationType, AccessProtection);
      *ViewSize = v34;
      *v35 = (PVOID)v26;
      if ( SectionOffset )
        SectionOffset->QuadPart = QuadPart;
    }
    goto LABEL_61;
  }
  return result;
}
