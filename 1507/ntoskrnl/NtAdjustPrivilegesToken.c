/*
 * XREFs of NtAdjustPrivilegesToken @ 0x14046D600
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x1406CC854 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepAdjustPrivileges @ 0x14046DB50 (SepAdjustPrivileges.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14046E008 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046E0D8 (SeReleaseLuidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // si
  char *v11; // rcx
  PTOKEN_PRIVILEGES v12; // rbx
  _DWORD *v13; // rcx
  NTSTATUS result; // eax
  __int64 v15; // rdx
  int v16; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v18; // r15
  __int64 v19; // r12
  int v20; // r8d
  _QWORD *v21; // rdi
  int v22; // edx
  int v23; // r8d
  ULONG v24; // eax
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  __int64 v27; // rdx
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  __int64 v30; // rdx
  signed __int32 v31[8]; // [rsp+0h] [rbp-A8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-88h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-78h]
  KPROCESSOR_MODE v35; // [rsp+50h] [rbp-58h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-54h]
  ULONG v37; // [rsp+58h] [rbp-50h] BYREF
  PVOID v38; // [rsp+60h] [rbp-48h] BYREF
  __int64 v39; // [rsp+68h] [rbp-40h] BYREF
  ULONG v40; // [rsp+70h] [rbp-38h] BYREF
  NTSTATUS v41; // [rsp+74h] [rbp-34h]
  int v42; // [rsp+78h] [rbp-30h]
  __int64 v43[5]; // [rsp+7Ch] [rbp-2Ch] BYREF
  char v44; // [rsp+B8h] [rbp+10h] BYREF

  PrivilegeCount = 0;
  v39 = 0LL;
  LODWORD(v43[0]) = 0;
  v37 = 0;
  v40 = 0;
  v44 = 0;
  v42 = 0;
  if ( !DisableAllPrivileges && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v35 = PreviousMode;
  if ( PreviousMode )
  {
    if ( !DisableAllPrivileges )
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      PrivilegeCount = NewState->PrivilegeCount;
      v42 = 12 * (PrivilegeCount - 1) + 16;
      if ( 12 * (PrivilegeCount - 1) != -16 )
      {
        v11 = (char *)&NewState->Privileges[PrivilegeCount];
        if ( (unsigned __int64)v11 > MmUserProbeAddress || v11 < (char *)NewState )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
    v12 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      v13 = ReturnLength;
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = *v13;
    }
LABEL_15:
    if ( !DisableAllPrivileges )
    {
      result = SeCaptureLuidAndAttributesArray(
                 NewState->Privileges,
                 (int)Object,
                 (int)HandleInformation,
                 v34,
                 (__int64)&v39,
                 (__int64)v43);
      v41 = result;
      if ( result < 0 )
        return result;
    }
    goto LABEL_17;
  }
  v12 = PreviousState;
  if ( !DisableAllPrivileges )
  {
    PrivilegeCount = NewState->PrivilegeCount;
    goto LABEL_15;
  }
LABEL_17:
  v16 = ObReferenceObjectByHandle(
          TokenHandle,
          v12 != 0LL ? 40 : 32,
          (POBJECT_TYPE)SeTokenObjectType,
          PreviousMode,
          &v38,
          0LL);
  if ( v16 < 0 )
  {
    if ( v39 )
    {
      LOBYTE(v15) = PreviousMode;
      SeReleaseLuidAndAttributesArray(v39, v15);
    }
    return v16;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v18 = (PERESOURCE *)v38;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v38 + 6), 1u);
    _InterlockedOr(v31, 0);
    v19 = v39;
    LOBYTE(v20) = DisableAllPrivileges;
    v21 = v38;
    SepAdjustPrivileges(
      (_DWORD)v38,
      0,
      v20,
      PrivilegeCount,
      v39,
      (__int64)v12,
      (__int64)&v37,
      (__int64)&v40,
      (__int64)&v44);
    if ( v12 && (*ReturnLength = v37, v37 > BufferLength) )
    {
      _InterlockedOr(v31, 0);
      ExReleaseResourceLite(v18[6]);
      v28 = KeGetCurrentThread();
      v29 = v28->KernelApcDisable + 1;
      v28->KernelApcDisable = v29;
      if ( !v29
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
        && !v28->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ObfDereferenceObject(v38);
      if ( v39 )
      {
        LOBYTE(v30) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v39, v30);
      }
      return -1073741789;
    }
    else
    {
      LOBYTE(v23) = DisableAllPrivileges;
      LOBYTE(v22) = 1;
      v41 = SepAdjustPrivileges(
              (_DWORD)v21,
              v22,
              v23,
              PrivilegeCount,
              v19,
              (__int64)v12,
              (__int64)&v37,
              (__int64)&v40,
              (__int64)&v44);
      if ( v12 )
      {
        v24 = v40;
        v12->PrivilegeCount = v40;
        if ( !v24 )
        {
          v12->Privileges[0].Luid = 0LL;
          v12->Privileges[0].Attributes = 0;
        }
      }
      if ( v44 )
        v21[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v31, 0);
      ExReleaseResourceLite(v18[6]);
      v25 = KeGetCurrentThread();
      v26 = v25->KernelApcDisable + 1;
      v25->KernelApcDisable = v26;
      if ( !v26
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
        && !v25->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ObfDereferenceObject(v38);
      if ( v39 )
      {
        LOBYTE(v27) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v39, v27);
      }
      return v41;
    }
  }
}
