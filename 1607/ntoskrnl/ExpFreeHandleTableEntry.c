/*
 * XREFs of ExpFreeHandleTableEntry @ 0x14051C094
 * Callers:
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     ExCreateHandleEx @ 0x1404F0B70 (ExCreateHandleEx.c)
 *     ExDestroyHandle @ 0x14051C038 (ExDestroyHandle.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExpGetHandleExtraInfo @ 0x1406AD68C (ExpGetHandleExtraInfo.c)
 */

unsigned __int64 __fastcall ExpFreeHandleTableEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  char v5; // bp
  unsigned int Number; // eax
  ULONG_PTR v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rax
  __int64 v12; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v14; // [rsp+38h] [rbp+10h]

  HIDWORD(v14) = HIDWORD(a2);
  v4 = a1;
  if ( *(_DWORD *)(a1 + 4) )
  {
    LODWORD(v14) = a2 & 0xFFFFFFFC;
    HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a1, v14, a3);
    if ( HandleExtraInfo )
    {
      *HandleExtraInfo = 0;
      HandleExtraInfo[1] = 0;
    }
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = *(_BYTE *)(v4 + 44) & 1;
  if ( v5 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v7 = v4 + ((Number + 1LL) << 6);
  v8 = (_BYTE *)KeAbPreAcquire(v7, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7, v8, v7);
  if ( v9 )
    v9[26] |= 1u;
  if ( v5 )
  {
    v10 = *(_QWORD *)(v7 + 16);
    if ( v10 )
      *(_QWORD *)(v10 + 8) = a3;
    else
      *(_QWORD *)(v7 + 8) = a3;
    *(_QWORD *)(v7 + 16) = a3;
  }
  else
  {
    v12 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(a3 + 8) = v12;
    if ( !v12 )
      *(_QWORD *)(v7 + 16) = a3;
    *(_QWORD *)(v7 + 8) = a3;
  }
  --*(_DWORD *)(v7 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  return KeAbPostRelease(v7);
}
