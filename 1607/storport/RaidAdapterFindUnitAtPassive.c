/*
 * XREFs of RaidAdapterFindUnitAtPassive @ 0x1C0002C38
 * Callers:
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RaidAdapterFindUnitAtPassive(__int64 a1, int a2)
{
  _QWORD *v3; // rdi
  _QWORD **v4; // rbx
  _QWORD *v5; // r9
  bool v6; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  v4 = (_QWORD **)(a1 + 120);
  v5 = *v4;
  v6 = *v4 == v4;
  if ( *v4 != v4 )
  {
    do
    {
      v3 = v5 - 6;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)v5 + 10)) | ((((unsigned __int8)*((_DWORD *)v5 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v5 + 10))) << 8)) == (BYTE2(a2) | ((BYTE1(a2) | ((unsigned __int8)a2 << 8)) << 8)) )
        break;
      v5 = (_QWORD *)*v5;
    }
    while ( v5 != v4 );
    v6 = v5 == v4;
  }
  if ( v6 )
    v3 = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
