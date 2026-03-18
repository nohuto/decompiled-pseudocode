/*
 * XREFs of ExpFreeHandleTableEntry @ 0x1403F21B0
 * Callers:
 *     ExDestroyHandle @ 0x1403F2154 (ExDestroyHandle.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ExCreateHandleEx @ 0x140424F50 (ExCreateHandleEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExpGetHandleExtraInfo @ 0x14066C9D8 (ExpGetHandleExtraInfo.c)
 */

void __fastcall ExpFreeHandleTableEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  unsigned int v5; // edx
  ULONG_PTR v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v14; // [rsp+38h] [rbp+10h]

  HIDWORD(v14) = HIDWORD(a2);
  v4 = a1;
  if ( *(_DWORD *)(a1 + 4) )
  {
    LODWORD(v14) = a2 & 0xFFFFFFFC;
    HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a1, v14);
    if ( HandleExtraInfo )
      *HandleExtraInfo = 0;
  }
  if ( (*(_BYTE *)(v4 + 44) & 1) != 0 )
    v5 = 0;
  else
    v5 = KeGetPcr()->Prcb.Number % dword_1406FB03C;
  *(_QWORD *)(a3 + 8) = 0LL;
  v6 = v4 + ((v5 + 1LL) << 6);
  if ( (*(_BYTE *)(v4 + 44) & 1) != 0 )
  {
    v7 = KeAbPreAcquire(v6, 0LL, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, v7, v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v9 = *(_QWORD *)(v6 + 16);
    if ( v9 )
      *(_QWORD *)(v9 + 8) = a3;
    else
      *(_QWORD *)(v6 + 8) = a3;
    *(_QWORD *)(v6 + 16) = a3;
  }
  else
  {
    v10 = KeAbPreAcquire(v6, 0LL, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, v10, v6);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(a3 + 8) = v12;
    if ( !v12 )
      *(_QWORD *)(v6 + 16) = a3;
    *(_QWORD *)(v6 + 8) = a3;
  }
  --*(_DWORD *)(v6 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease(v6);
}
