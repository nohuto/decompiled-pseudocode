/*
 * XREFs of ExpAllocateHandleTableEntry @ 0x1404F0C60
 * Callers:
 *     ExCreateHandleEx @ 0x1404F0B70 (ExCreateHandleEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404ACFE4 (ExpAllocateHandleTableEntrySlow.c)
 */

__int64 __fastcall ExpAllocateHandleTableEntry(__int64 a1, _QWORD *a2)
{
  char v2; // al
  unsigned int Number; // r12d
  unsigned int v6; // r15d
  unsigned int v7; // esi
  int v8; // ebp
  __int64 v9; // rbx
  _BYTE *v10; // rax
  _BYTE *v11; // rdi
  char HandleTableEntrySlow; // di
  _BYTE *v13; // rax
  _BYTE *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  __int64 result; // rax
  unsigned int v19; // [rsp+70h] [rbp+18h]

  v2 = *(_BYTE *)(a1 + 44);
  if ( (v2 & 4) != 0 )
    return 0LL;
  if ( (v2 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v6 = dword_140757700;
  v7 = Number;
LABEL_5:
  v8 = 0;
  v19 = *(_DWORD *)a1;
  while ( 1 )
  {
    v9 = a1 + ((v7 + 1LL) << 6);
    if ( *(_QWORD *)(v9 + 8) )
    {
      v13 = (_BYTE *)KeAbPreAcquire(a1 + ((v7 + 1LL) << 6), 0LL, 0);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + ((v7 + 1LL) << 6)), v13, a1 + ((v7 + 1LL) << 6));
      if ( v14 )
        v14[26] |= 1u;
      v15 = *(_QWORD *)(v9 + 8);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 8);
        *(_QWORD *)(v9 + 8) = v16;
        if ( !v16 )
          *(_QWORD *)(v9 + 16) = 0LL;
        v17 = ++*(_DWORD *)(v9 + 24);
        if ( v17 > *(_DWORD *)(v9 + 28) )
          *(_DWORD *)(v9 + 28) = v17;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + ((v7 + 1LL) << 6)));
      KeAbPostRelease(a1 + ((v7 + 1LL) << 6));
      if ( v15 )
        break;
    }
    if ( ++v7 == v6 )
      v7 = 0;
    if ( ++v8 >= v6 )
    {
      v7 = Number;
      v10 = (_BYTE *)KeAbPreAcquire(a1 + 56, 0LL, 0);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 56), v10, a1 + 56);
      if ( v11 )
        v11[26] |= 1u;
      if ( v19 == *(_DWORD *)a1 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow((unsigned int *)a1, a1 + ((Number + 1LL) << 6));
      else
        HandleTableEntrySlow = 1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
      KeAbPostRelease(a1 + 56);
      if ( !HandleTableEntrySlow )
        return 0LL;
      goto LABEL_5;
    }
  }
  result = v15;
  *a2 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFF000uLL) + 8) + 4 * ((__int64)(v15 - (v15 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  return result;
}
