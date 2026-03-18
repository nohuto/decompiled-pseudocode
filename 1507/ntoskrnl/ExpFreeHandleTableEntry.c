/*
 * XREFs of ExpFreeHandleTableEntry @ 0x140505270
 * Callers:
 *     ExCreateHandleEx @ 0x140424CD0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ExDestroyHandle @ 0x140505200 (ExDestroyHandle.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpGetHandleExtraInfo @ 0x1406F01F4 (ExpGetHandleExtraInfo.c)
 */

void __fastcall ExpFreeHandleTableEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  unsigned int v6; // edx
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v17; // [rsp+38h] [rbp+10h]

  HIDWORD(v17) = HIDWORD(a2);
  v5 = a1;
  if ( *(_DWORD *)(a1 + 4) )
  {
    LODWORD(v17) = a2 & 0xFFFFFFFC;
    HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a1, v17);
    if ( HandleExtraInfo )
      *HandleExtraInfo = 0;
  }
  if ( (*(_BYTE *)(v5 + 44) & 1) != 0 )
    v6 = 0;
  else
    v6 = KeGetPcr()->Prcb.Number % dword_14077E03C;
  *(_QWORD *)(a3 + 8) = 0LL;
  v7 = v5 + ((v6 + 1LL) << 6);
  if ( (*(_BYTE *)(v5 + 44) & 1) != 0 )
  {
    v8 = KeAbPreAcquire(v7, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7, v8, v7, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = *(_QWORD *)(v7 + 16);
    if ( v11 )
      *(_QWORD *)(v11 + 8) = a3;
    else
      *(_QWORD *)(v7 + 8) = a3;
    *(_QWORD *)(v7 + 16) = a3;
  }
  else
  {
    v12 = KeAbPreAcquire(v7, 0LL, 0LL, a4);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7, v12, v7, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v15 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(a3 + 8) = v15;
    if ( !v15 )
      *(_QWORD *)(v7 + 16) = a3;
    *(_QWORD *)(v7 + 8) = a3;
  }
  --*(_DWORD *)(v7 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease(v7);
}
