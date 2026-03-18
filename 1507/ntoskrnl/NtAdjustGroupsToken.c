/*
 * XREFs of NtAdjustGroupsToken @ 0x14053F940
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046E0D8 (SeReleaseLuidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     SepAdjustGroups @ 0x14053FCC8 (SepAdjustGroups.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustGroupsToken(
        HANDLE TokenHandle,
        BOOLEAN ResetToDefault,
        PTOKEN_GROUPS NewState,
        ULONG BufferLength,
        PTOKEN_GROUPS PreviousState,
        PULONG ReturnLength)
{
  void *v10; // r12
  char PreviousMode; // di
  PTOKEN_GROUPS v12; // rbx
  _DWORD *v13; // rcx
  NTSTATUS result; // eax
  int v15; // esi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v17; // rsi
  int v18; // r8d
  PERESOURCE *v19; // r15
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  bool v27; // zf
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  signed __int32 v30[8]; // [rsp+0h] [rbp-A8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  PSID DestinationSid; // [rsp+30h] [rbp-78h]
  char v33; // [rsp+50h] [rbp-58h]
  ULONG v34; // [rsp+54h] [rbp-54h] BYREF
  NTSTATUS v35; // [rsp+58h] [rbp-50h]
  int GroupCount; // [rsp+5Ch] [rbp-4Ch]
  ULONG v37; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+64h] [rbp-44h] BYREF
  PERESOURCE *Object; // [rsp+68h] [rbp-40h] BYREF
  __int64 v40; // [rsp+70h] [rbp-38h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+10h] BYREF

  GroupCount = 0;
  v40 = 0LL;
  v38 = 0;
  v34 = 0;
  v10 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  if ( PreviousMode )
  {
    if ( !ResetToDefault && ((unsigned __int8)NewState & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      v13 = ReturnLength;
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = *v13;
    }
  }
  else
  {
    v12 = PreviousState;
  }
  if ( ResetToDefault
    || (GroupCount = NewState->GroupCount,
        result = SeCaptureSidAndAttributesArray(
                   (char *)NewState->Groups,
                   GroupCount,
                   PreviousMode,
                   0LL,
                   0,
                   (int)HandleInformation,
                   (int)DestinationSid,
                   (void **)&v40,
                   &v38),
        v35 = result,
        result >= 0) )
  {
    v15 = ObReferenceObjectByHandle(
            TokenHandle,
            v12 != 0LL ? 72 : 64,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            (PVOID *)&Object,
            0LL);
    if ( v15 < 0 )
    {
      if ( v40 )
        SeReleaseLuidAndAttributesArray((void *)v40, PreviousMode);
      return v15;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v17 = Object;
      ExAcquireResourceExclusiveLite(Object[6], 1u);
      _InterlockedOr(v30, 0);
      LOBYTE(v18) = ResetToDefault;
      v19 = Object;
      v20 = SepAdjustGroups(
              (int)Object,
              0,
              v18,
              GroupCount,
              v40,
              (__int64)v12,
              0LL,
              (__int64)&v34,
              (__int64)&v37,
              (__int64)&v41);
      v35 = v20;
      v22 = 0;
      if ( v12 )
      {
        v21 = (int)ReturnLength;
        *ReturnLength = v34;
      }
      if ( v20 < 0 )
      {
        _InterlockedOr(v30, 0);
        ExReleaseResourceLite(v17[6]);
        v25 = KeGetCurrentThread();
        v26 = v25->KernelApcDisable + 1;
        v25->KernelApcDisable = v26;
        if ( v26 || ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink == &v25->152 )
        {
LABEL_25:
          ObfDereferenceObject(Object);
          if ( v40 )
            SeReleaseLuidAndAttributesArray((void *)v40, PreviousMode);
          return v35;
        }
        v27 = v25->SpecialApcDisable == 0;
LABEL_39:
        if ( v27 )
          KiCheckForKernelApcDelivery();
        goto LABEL_25;
      }
      if ( !v12 )
      {
LABEL_19:
        LOBYTE(v22) = ResetToDefault;
        LOBYTE(v21) = 1;
        v35 = SepAdjustGroups(
                (int)v19,
                v21,
                v22,
                GroupCount,
                v40,
                (__int64)v12,
                v10,
                (__int64)&v34,
                (__int64)&v37,
                (__int64)&v41);
        if ( v12 )
          v12->GroupCount = v37;
        if ( (_BYTE)v41 )
          v19[7] = (PERESOURCE)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
        _InterlockedOr(v30, 0);
        ExReleaseResourceLite(v17[6]);
        v23 = KeGetCurrentThread();
        v24 = v23->KernelApcDisable + 1;
        v23->KernelApcDisable = v24;
        if ( v24 || ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink == &v23->152 )
          goto LABEL_25;
        v27 = v23->SpecialApcDisable == 0;
        goto LABEL_39;
      }
      if ( v34 <= BufferLength )
      {
        v10 = (void *)(((unsigned __int64)&v12->Groups[v37].Sid + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_19;
      }
      _InterlockedOr(v30, 0);
      ExReleaseResourceLite(v17[6]);
      v28 = KeGetCurrentThread();
      v29 = v28->KernelApcDisable + 1;
      v28->KernelApcDisable = v29;
      if ( !v29
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
        && !v28->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ObfDereferenceObject(Object);
      if ( v40 )
        SeReleaseLuidAndAttributesArray((void *)v40, PreviousMode);
      return -1073741789;
    }
  }
  return result;
}
