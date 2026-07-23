/*
 * XREFs of IopInitializeActiveConnectBlock @ 0x14053A5C0
 * Callers:
 *     IoDisconnectInterrupt @ 0x140532A34 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14053A684 (IopAcquireReleaseConnectLockInternal.c)
 *     IopInsertActiveConnectListLocked @ 0x14053A724 (IopInsertActiveConnectListLocked.c)
 */

void *__fastcall IopInitializeActiveConnectBlock(__int64 a1, _QWORD *a2)
{
  void *result; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 i; // rcx
  unsigned int v8; // eax

  result = memset(a2, 0, 0x50uLL);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    a2[1] = a2;
    *a2 = a2;
    KeInitializeEvent((PRKEVENT)(a2 + 5), SynchronizationEvent, 1u);
    *((_DWORD *)a2 + 16) = 1;
    LOBYTE(v5) = 1;
    v6 = *(_DWORD *)(a1 + 64);
    *((_DWORD *)a2 + 4) = v6;
    IopAcquireReleaseConnectLockInternal(0LL, v5, 2LL);
    for ( i = ActiveConnectList; ; i = *(_QWORD *)i )
    {
      if ( (__int64 *)i == &ActiveConnectList )
        goto LABEL_4;
      v8 = *(_DWORD *)(i + 16);
      if ( v8 > v6 )
        goto LABEL_4;
      if ( v8 == v6 )
        break;
    }
    if ( !i )
    {
LABEL_4:
      a2[3] = a2 + 5;
      a2[4] = a2 + 8;
      goto LABEL_5;
    }
    a2[3] = *(_QWORD *)(i + 24);
    a2[4] = *(_QWORD *)(i + 32);
    _InterlockedIncrement(*(volatile signed __int32 **)(i + 32));
LABEL_5:
    IopInsertActiveConnectListLocked(a2, &ActiveConnectList);
    return (void *)IopAcquireReleaseConnectLockInternal(0LL, 0LL, 2LL);
  }
  return result;
}
