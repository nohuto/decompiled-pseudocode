/*
 * XREFs of AlpcpRegisterCompletionListDatabase @ 0x14052D210
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x14052CDBC (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRegisterCompletionListDatabase(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 *v10; // rcx
  __int64 **v11; // rax
  __int64 *v13; // rdx
  unsigned __int64 v14; // rax

  v5 = KeAbPreAcquire((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpCompletionListDatabase, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&AlpcpCompletionListDatabase, v5, (ULONG_PTR)&AlpcpCompletionListDatabase, v6);
  v9 = 0;
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = (__int64 *)qword_140332290;
  if ( (__int64 *)qword_140332290 != &qword_140332290 )
  {
    v13 = a1[2];
    do
    {
      v14 = v10[2];
      if ( v14 > (unsigned __int64)v13 )
        break;
      if ( (__int64 *)v14 == v13 )
      {
        if ( v10[5] >= (unsigned __int64)a1[6] )
          break;
        if ( v10[6] > (unsigned __int64)a1[5] )
          goto LABEL_8;
      }
      v10 = (__int64 *)*v10;
    }
    while ( v10 != &qword_140332290 );
  }
  v11 = (__int64 **)v10[1];
  *a1 = v10;
  a1[1] = (__int64 *)v11;
  if ( *v11 != v10 )
    __fastfail(3u);
  *v11 = (__int64 *)a1;
  v9 = 1;
  v10[1] = (__int64)a1;
  ++dword_140332288;
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
  return v9;
}
