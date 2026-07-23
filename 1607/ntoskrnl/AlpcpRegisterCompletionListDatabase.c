/*
 * XREFs of AlpcpRegisterCompletionListDatabase @ 0x1404C1558
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x1404C1114 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRegisterCompletionListDatabase(__int64 **a1)
{
  _BYTE *v2; // rax
  signed __int8 v3; // cf
  _BYTE *v4; // rbx
  unsigned int v5; // esi
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *v9; // rdx
  unsigned __int64 v10; // rax

  v2 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL, 0);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpCompletionListDatabase, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&AlpcpCompletionListDatabase, v2, (ULONG_PTR)&AlpcpCompletionListDatabase);
  v5 = 0;
  if ( v4 )
    v4[26] |= 1u;
  v6 = (__int64 *)qword_140307350;
  if ( (__int64 *)qword_140307350 != &qword_140307350 )
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
    while ( v6 != &qword_140307350 );
  }
  v7 = (__int64 **)v6[1];
  if ( *v7 != v6 )
    __fastfail(3u);
  *a1 = v6;
  v5 = 1;
  a1[1] = (__int64 *)v7;
  *v7 = (__int64 *)a1;
  v6[1] = (__int64)a1;
  ++dword_140307348;
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
  return v5;
}
