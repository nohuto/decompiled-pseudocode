/*
 * XREFs of NtAdjustGroupsToken @ 0x140476094
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045F304 (SeReleaseLuidAndAttributesArray.c)
 *     SepAdjustGroups @ 0x1404763C0 (SepAdjustGroups.c)
 *     SeCaptureSidAndAttributesArray @ 0x140477B10 (SeCaptureSidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustGroupsToken(
        HANDLE TokenHandle,
        BOOLEAN ResetToDefault,
        PTOKEN_GROUPS NewState,
        ULONG BufferLength,
        PTOKEN_GROUPS PreviousState,
        PULONG ReturnLength)
{
  void *v9; // r12
  char PreviousMode; // di
  PTOKEN_GROUPS v11; // rbx
  __int64 v12; // rcx
  NTSTATUS result; // eax
  int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v16; // rsi
  __int64 v17; // r13
  int v18; // r8d
  _QWORD *v19; // r14
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  signed __int32 v29[8]; // [rsp+0h] [rbp-A8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  PSID DestinationSid; // [rsp+30h] [rbp-78h]
  char v32; // [rsp+50h] [rbp-58h]
  ULONG v33; // [rsp+54h] [rbp-54h] BYREF
  NTSTATUS v34; // [rsp+58h] [rbp-50h]
  int GroupCount; // [rsp+5Ch] [rbp-4Ch]
  ULONG v36; // [rsp+60h] [rbp-48h] BYREF
  int v37; // [rsp+64h] [rbp-44h] BYREF
  PVOID Object; // [rsp+68h] [rbp-40h] BYREF
  __int64 v39; // [rsp+70h] [rbp-38h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v41; // [rsp+C8h] [rbp+20h]

  v41 = BufferLength;
  GroupCount = 0;
  v39 = 0LL;
  v37 = 0;
  v33 = 0;
  v9 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v32 = PreviousMode;
  if ( PreviousMode )
  {
    if ( !ResetToDefault && ((unsigned __int8)NewState & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      v12 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v11 = PreviousState;
  }
  if ( ResetToDefault
    || (GroupCount = NewState->GroupCount,
        result = SeCaptureSidAndAttributesArray(
                   NewState->Groups,
                   0,
                   (int)HandleInformation,
                   (int)DestinationSid,
                   (__int64)&v39,
                   (__int64)&v37),
        v34 = result,
        result >= 0) )
  {
    v14 = ObReferenceObjectByHandle(
            TokenHandle,
            v11 != 0LL ? 72 : 64,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            &Object,
            0LL);
    if ( v14 < 0 )
    {
      if ( v39 )
        SeReleaseLuidAndAttributesArray((void *)v39, PreviousMode);
      return v14;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v16 = (PERESOURCE *)Object;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
      _InterlockedOr(v29, 0);
      v17 = v39;
      LOBYTE(v18) = ResetToDefault;
      v19 = Object;
      v20 = SepAdjustGroups(
              (int)Object,
              0,
              v18,
              GroupCount,
              v39,
              (__int64)v11,
              0LL,
              (__int64)&v33,
              (__int64)&v36,
              (__int64)&v40);
      v34 = v20;
      if ( v11 )
      {
        v21 = (int)ReturnLength;
        *ReturnLength = v33;
      }
      if ( v20 < 0 )
        goto LABEL_24;
      if ( !v11 )
      {
LABEL_20:
        LOBYTE(v22) = ResetToDefault;
        LOBYTE(v21) = 1;
        v34 = SepAdjustGroups(
                (int)v19,
                v21,
                v22,
                GroupCount,
                v17,
                (__int64)v11,
                v9,
                (__int64)&v33,
                (__int64)&v36,
                (__int64)&v40);
        if ( v11 )
          v11->GroupCount = v36;
        if ( (_BYTE)v40 )
          v19[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_24:
        _InterlockedOr(v29, 0);
        ExReleaseResourceLite(v16[6]);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
        ObfDereferenceObject(Object);
        if ( v39 )
          SeReleaseLuidAndAttributesArray((void *)v39, PreviousMode);
        return v34;
      }
      if ( v33 <= v41 )
      {
        v9 = (void *)(((unsigned __int64)&v11->Groups[v36].Sid + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_20;
      }
      _InterlockedOr(v29, 0);
      ExReleaseResourceLite(v16[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
      ObfDereferenceObject(Object);
      if ( v39 )
        SeReleaseLuidAndAttributesArray((void *)v39, PreviousMode);
      return -1073741789;
    }
  }
  return result;
}
