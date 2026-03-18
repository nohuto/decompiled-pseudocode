/*
 * XREFs of CcGetLsnForFileObject @ 0x1401DD7AC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

__int64 __fastcall CcGetLsnForFileObject(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  ULONG_PTR v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 *v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 i; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int8 v19; // bp
  signed __int32 v20; // eax

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !v5 )
    return 0LL;
  v7 = v5 + 280;
  v8 = KeAbPreAcquire(v5 + 280, 0LL, 0LL, a4);
  v9 = v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)(v5 + 280), 0) )
    ExpAcquireFastMutexContended(v5 + 280, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v11 = (__int64 *)(v5 + 16);
  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v7 + 48) = CurrentIrql;
  for ( i = *v11; ; i = *v16 )
  {
    v15 = i - 16;
    v16 = (__int64 *)(v15 + 16);
    if ( (__int64 *)(v15 + 16) == v11 )
      break;
    if ( *(_WORD *)v15 == 765 )
    {
      if ( *(_BYTE *)(v15 + 2) )
      {
        v17 = *(_QWORD *)(v15 + 40);
        v18 = *(_QWORD *)(v15 + 48);
        if ( v17 )
        {
          if ( !v12 || v17 < v12 )
            v12 = v17;
          if ( v18 > v13 )
            v13 = v18;
        }
      }
    }
  }
  *(_QWORD *)(v7 + 8) = 0LL;
  v19 = *(_BYTE *)(v7 + 48);
  v20 = _InterlockedCompareExchange((volatile signed __int32 *)v7, 1, 0);
  if ( v20 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v7, v20);
  __writecr8(v19);
  KeAbPostRelease(v7);
  if ( a2 )
    *a2 = v12;
  return v13;
}
