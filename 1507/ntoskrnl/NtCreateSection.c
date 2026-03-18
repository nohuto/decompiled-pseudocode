/*
 * XREFs of NtCreateSection @ 0x1404B3660
 * Callers:
 *     PfpFileBuildReadSupport @ 0x14042D618 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x140473938 (PfSnGetSectionObject.c)
 *     VerifierNtCreateSection @ 0x140754010 (VerifierNtCreateSection.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     CcZeroEndOfLastPage @ 0x140088AE0 (CcZeroEndOfLastPage.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  int v7; // r13d
  PHANDLE v9; // r14
  int v11; // edx
  LONGLONG QuadPart; // rax
  char PreviousMode; // di
  int SessionId; // eax
  NTSTATUS result; // eax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  struct _FILE_OBJECT *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // [rsp+30h] [rbp-68h]
  LONGLONG v25; // [rsp+60h] [rbp-38h]
  int v26[2]; // [rsp+68h] [rbp-30h] BYREF
  PVOID Object; // [rsp+70h] [rbp-28h] BYREF
  __int64 v28; // [rsp+78h] [rbp-20h] BYREF
  char AllocationAttributesa; // [rsp+C8h] [rbp+30h]

  v7 = (int)ObjectAttributes;
  v9 = SectionHandle;
  if ( (AllocationAttributes & 0x3000000) == 0x3000000 )
    return -1073741580;
  v11 = 1;
  if ( (AllocationAttributes & 0x2100000) == 0 || (AllocationAttributes & 0x1100000) == 0x1100000 )
    v11 = 0;
  if ( (AllocationAttributes & 0x208FFF80) != 0 || (AllocationAttributes & 0xF100000) == 0 )
    return -1073741580;
  if ( (AllocationAttributes & 0x3100000) != 0 )
  {
    v23 = -868220928;
    if ( (AllocationAttributes & 0x2100000) != 0 )
      v23 = -872415232;
    if ( (v23 & AllocationAttributes) != 0 )
      return -1073741580;
  }
  if ( (AllocationAttributes & 0xC000000) == 0xC000000 )
    return -1073741580;
  if ( (SectionPageProtection & 0x701) != 0 )
    return -1073741755;
  if ( !KeGetCurrentThread()->PreviousMode )
  {
    if ( MaximumSize )
      QuadPart = MaximumSize->QuadPart;
    else
      QuadPart = 0LL;
    v25 = QuadPart;
    goto LABEL_19;
  }
  if ( v11 )
    return -1073741580;
  if ( (unsigned __int64)SectionHandle >= MmUserProbeAddress )
    SectionHandle = (PHANDLE)MmUserProbeAddress;
  *SectionHandle = *SectionHandle;
  if ( MaximumSize )
  {
    if ( ((unsigned __int8)MaximumSize & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = MaximumSize->QuadPart;
  }
  else
  {
    QuadPart = 0LL;
  }
  v25 = QuadPart;
LABEL_19:
  while ( 1 )
  {
    *(_QWORD *)v26 = QuadPart;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    AllocationAttributesa = PreviousMode == 1 ? BYTE1(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) : 0;
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    LOBYTE(v24) = AllocationAttributesa;
    result = MiCreateSection(
               (int)&Object,
               v7,
               0,
               (int)v26,
               SectionPageProtection,
               AllocationAttributes,
               v24,
               (__int64)FileHandle,
               0LL,
               PreviousMode,
               SessionId);
    if ( result >= 0 )
      break;
    if ( result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    QuadPart = v25;
  }
  v16 = Object;
  v17 = MiSectionControlArea((__int64)Object);
  v18 = v17;
  if ( v17 && *(_QWORD *)(v17 + 64) )
  {
    v19 = (struct _FILE_OBJECT *)MI_REFERENCE_CONTROL_AREA_FILE(v17);
    CcZeroEndOfLastPage(v19, v20, v21, v22);
    MI_DEREFERENCE_CONTROL_AREA_FILE(v18, (unsigned __int64)v19);
  }
  result = ObInsertObjectEx(v16, 0LL, DesiredAccess, 0LL, 0, 0LL, &v28);
  if ( result >= 0 )
    *v9 = (HANDLE)v28;
  return result;
}
