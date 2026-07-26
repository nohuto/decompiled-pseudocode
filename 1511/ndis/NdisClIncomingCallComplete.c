/*
 * XREFs of NdisClIncomingCallComplete @ 0x1C00F0420
 * Callers:
 *     NdisCmDispatchIncomingCall @ 0x1C00F0CD0 (NdisCmDispatchIncomingCall.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisClIncomingCallComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisVcHandle,
        PCO_CALL_PARAMETERS CallParameters)
{
  KIRQL v6; // al
  __int64 *v7; // rdx
  __int64 v8; // r8
  KIRQL v9; // r9
  __int64 **v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  KIRQL v13; // al
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !Status )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
    ++*(_DWORD *)NdisVcHandle;
    v7 = (__int64 *)((char *)NdisVcHandle + 32);
    v8 = *((_QWORD *)NdisVcHandle + 4);
    v9 = v6;
    v10 = (__int64 **)*((_QWORD *)NdisVcHandle + 5);
    if ( *(NDIS_HANDLE *)(v8 + 8) != (char *)NdisVcHandle + 32 || *v10 != v7 )
      __fastfail(3u);
    *v10 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v10;
    v11 = (__int64 *)(*((_QWORD *)NdisVcHandle + 10) + 1080LL);
    v12 = *v11;
    *v7 = *v11;
    *((_QWORD *)NdisVcHandle + 5) = v11;
    if ( *(__int64 **)(v12 + 8) != v11 )
      __fastfail(Status + 3);
    *(_QWORD *)(v12 + 8) = v7;
    *v11 = (__int64)v7;
    KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL), v9);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
    *((_DWORD *)NdisVcHandle + 1) |= 8u;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v13);
  }
  v14 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v14 + 392) >= 6u )
    v15 = *(_QWORD *)(v14 + 32);
  else
    v15 = *(_QWORD *)(v14 + 24);
  (*(void (__fastcall **)(_QWORD, _QWORD, PCO_CALL_PARAMETERS))(v15 + 72))(
    (unsigned int)Status,
    *((_QWORD *)NdisVcHandle + 18),
    CallParameters);
}
