/*
 * XREFs of KdRegisterDebuggerDataBlock @ 0x1406AA3BC
 * Callers:
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

char __fastcall KdRegisterDebuggerDataBlock(__int64 a1, __int64 a2)
{
  KIRQL v3; // al
  __int64 *v4; // rcx
  KIRQL v5; // r8
  __int64 **v6; // rax
  __int64 *v8; // rdx

  v3 = KeAcquireSpinLockRaiseToDpc(&KdpDataSpinLock);
  v4 = (__int64 *)KdpDebuggerDataListHead;
  v5 = v3;
  while ( v4 != &KdpDebuggerDataListHead )
  {
    v8 = v4;
    v4 = (__int64 *)*v4;
    if ( v8 == (__int64 *)a2 || *((_DWORD *)v8 + 4) == 1195525195 )
    {
      KeReleaseSpinLock(&KdpDataSpinLock, v3);
      return 0;
    }
  }
  *(_DWORD *)(a2 + 16) = 1195525195;
  *(_DWORD *)(a2 + 20) = 864;
  v6 = (__int64 **)qword_1402EB718;
  *(_QWORD *)a2 = &KdpDebuggerDataListHead;
  *(_QWORD *)(a2 + 8) = v6;
  if ( *v6 != &KdpDebuggerDataListHead )
    __fastfail(3u);
  *v6 = (__int64 *)a2;
  qword_1402EB718 = a2;
  KeReleaseSpinLock(&KdpDataSpinLock, v5);
  return 1;
}
