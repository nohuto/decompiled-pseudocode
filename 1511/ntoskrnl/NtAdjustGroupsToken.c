/*
 * XREFs of NtAdjustGroupsToken @ 0x1404AD974
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1403C334C (SeReleaseLuidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478E80 (SeCaptureSidAndAttributesArray.c)
 *     SepAdjustGroups @ 0x1404ADC94 (SepAdjustGroups.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  signed __int32 v23[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+28h] [rbp-80h]
  PSID DestinationSid; // [rsp+30h] [rbp-78h]
  char v26; // [rsp+50h] [rbp-58h]
  NTSTATUS v27; // [rsp+54h] [rbp-54h]
  ULONG v28; // [rsp+58h] [rbp-50h] BYREF
  ULONG GroupCount; // [rsp+5Ch] [rbp-4Ch]
  ULONG v30; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-44h] BYREF
  PERESOURCE *Object; // [rsp+68h] [rbp-40h] BYREF
  __int64 v33; // [rsp+70h] [rbp-38h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+10h] BYREF

  GroupCount = 0;
  v33 = 0LL;
  v31 = 0;
  v10 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = PreviousMode;
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
                   v24,
                   (int)DestinationSid,
                   (void **)&v33,
                   &v31),
        v27 = result,
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
      if ( v33 )
        SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
      return v15;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v17 = Object;
      ExAcquireResourceExclusiveLite(Object[6], 1u);
      _InterlockedOr(v23, 0);
      LOBYTE(v18) = ResetToDefault;
      v19 = Object;
      v20 = SepAdjustGroups(
              (int)Object,
              0,
              v18,
              GroupCount,
              v33,
              (__int64)v12,
              0LL,
              (__int64)&v28,
              (__int64)&v30,
              (__int64)&v34);
      v27 = v20;
      if ( v12 )
      {
        v21 = (int)ReturnLength;
        *ReturnLength = v28;
      }
      if ( v20 < 0 )
        goto LABEL_23;
      if ( !v12 )
      {
LABEL_19:
        LOBYTE(v22) = ResetToDefault;
        LOBYTE(v21) = 1;
        v27 = SepAdjustGroups(
                (int)v19,
                v21,
                v22,
                GroupCount,
                v33,
                (__int64)v12,
                v10,
                (__int64)&v28,
                (__int64)&v30,
                (__int64)&v34);
        if ( v12 )
          v12->GroupCount = v30;
        if ( (_BYTE)v34 )
          v19[7] = (PERESOURCE)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
LABEL_23:
        _InterlockedOr(v23, 0);
        ExReleaseResourceLite(v17[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        if ( v33 )
          SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
        return v27;
      }
      if ( v28 <= BufferLength )
      {
        v10 = (void *)(((unsigned __int64)&v12->Groups[v30].Sid + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_19;
      }
      _InterlockedOr(v23, 0);
      ExReleaseResourceLite(v17[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(Object);
      if ( v33 )
        SeReleaseLuidAndAttributesArray((void *)v33, PreviousMode);
      return -1073741789;
    }
  }
  return result;
}
