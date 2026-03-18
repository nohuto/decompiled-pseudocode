/*
 * XREFs of AlpcpRegisterCompletionListDatabase @ 0x140484F3C
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall AlpcpRegisterCompletionListDatabase(__int64 **a1)
{
  __int64 v2; // rax
  signed __int8 v3; // cf
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *v9; // rdx
  unsigned __int64 v10; // rax

  v2 = KeAbPreAcquire((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpCompletionListDatabase, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpCompletionListDatabase, v2, (ULONG_PTR)&AlpcpCompletionListDatabase);
  v5 = 0;
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v6 = (__int64 *)qword_1402E1E30;
  if ( (__int64 *)qword_1402E1E30 != &qword_1402E1E30 )
  {
    v9 = a1[2];
    do
    {
      v10 = v6[2];
      if ( v10 > (unsigned __int64)v9 )
        break;
      if ( (__int64 *)v10 == v9 )
      {
        if ( v6[5] >= (unsigned __int64)a1[6] )
          break;
        if ( v6[6] > (unsigned __int64)a1[5] )
          goto LABEL_8;
      }
      v6 = (__int64 *)*v6;
    }
    while ( v6 != &qword_1402E1E30 );
  }
  v7 = (__int64 **)v6[1];
  *a1 = v6;
  a1[1] = (__int64 *)v7;
  if ( *v7 != v6 )
    __fastfail(3u);
  *v7 = (__int64 *)a1;
  v5 = 1;
  v6[1] = (__int64)a1;
  ++dword_1402E1E28;
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
  return v5;
}
