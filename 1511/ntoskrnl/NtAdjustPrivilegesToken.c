/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1403C28D4
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x1406497D0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepAdjustPrivileges @ 0x1403C2C94 (SepAdjustPrivileges.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1403C334C (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1403C3368 (SeCaptureLuidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v25; // rdx
  __int64 v26; // rdx
  signed __int32 v27[8]; // [rsp+0h] [rbp-A8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-88h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  __int64 v30; // [rsp+30h] [rbp-78h]
  KPROCESSOR_MODE v31; // [rsp+50h] [rbp-58h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-54h]
  ULONG v33; // [rsp+58h] [rbp-50h] BYREF
  PVOID v34; // [rsp+60h] [rbp-48h] BYREF
  __int64 v35; // [rsp+68h] [rbp-40h] BYREF
  ULONG v36; // [rsp+70h] [rbp-38h] BYREF
  NTSTATUS v37; // [rsp+74h] [rbp-34h]
  int v38; // [rsp+78h] [rbp-30h]
  __int64 v39[5]; // [rsp+7Ch] [rbp-2Ch] BYREF
  char v40; // [rsp+B8h] [rbp+10h] BYREF

  PrivilegeCount = 0;
  v35 = 0LL;
  LODWORD(v39[0]) = 0;
  v33 = 0;
  v36 = 0;
  v40 = 0;
  v38 = 0;
  if ( !DisableAllPrivileges && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v31 = PreviousMode;
  if ( PreviousMode )
  {
    if ( !DisableAllPrivileges )
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      PrivilegeCount = NewState->PrivilegeCount;
      v38 = 12 * (PrivilegeCount - 1) + 16;
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
                 v30,
                 (__int64)&v35,
                 (__int64)v39);
      v37 = result;
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
          &v34,
          0LL);
  if ( v16 < 0 )
  {
    if ( v35 )
    {
      LOBYTE(v15) = PreviousMode;
      SeReleaseLuidAndAttributesArray(v35, v15);
    }
    return v16;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v18 = (PERESOURCE *)v34;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v34 + 6), 1u);
    _InterlockedOr(v27, 0);
    v19 = v35;
    LOBYTE(v20) = DisableAllPrivileges;
    v21 = v34;
    SepAdjustPrivileges(
      (_DWORD)v34,
      0,
      v20,
      PrivilegeCount,
      v35,
      (__int64)v12,
      (__int64)&v33,
      (__int64)&v36,
      (__int64)&v40);
    if ( v12 && (*ReturnLength = v33, v33 > BufferLength) )
    {
      _InterlockedOr(v27, 0);
      ExReleaseResourceLite(v18[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(v34);
      if ( v35 )
      {
        LOBYTE(v26) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v35, v26);
      }
      return -1073741789;
    }
    else
    {
      LOBYTE(v23) = DisableAllPrivileges;
      LOBYTE(v22) = 1;
      v37 = SepAdjustPrivileges(
              (_DWORD)v21,
              v22,
              v23,
              PrivilegeCount,
              v19,
              (__int64)v12,
              (__int64)&v33,
              (__int64)&v36,
              (__int64)&v40);
      if ( v12 )
      {
        v24 = v36;
        v12->PrivilegeCount = v36;
        if ( !v24 )
        {
          v12->Privileges[0].Luid = 0LL;
          v12->Privileges[0].Attributes = 0;
        }
      }
      if ( v40 )
        v21[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v27, 0);
      ExReleaseResourceLite(v18[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(v34);
      if ( v35 )
      {
        LOBYTE(v25) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v35, v25);
      }
      return v37;
    }
  }
}
