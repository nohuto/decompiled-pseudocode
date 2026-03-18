/*
 * XREFs of KiGetDeepIdleProcessors @ 0x1400D55E0
 * Callers:
 *     KeFlushQueuedDpcs @ 0x1400D4B60 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x14010C9A0 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

unsigned __int64 __fastcall KiGetDeepIdleProcessors(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  __int64 *v5; // rdx
  __int64 v6; // r8
  unsigned __int16 v7; // cx
  __int64 v8; // r9
  unsigned int i; // edx
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // ax
  unsigned __int16 j; // dx
  __int64 v14; // rcx
  unsigned __int64 result; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-108h] BYREF
  _BYTE v17[176]; // [rsp+20h] [rbp-E8h] BYREF

  _InterlockedOr(v16, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  *(_QWORD *)a1 = 1310721LL;
  memset(a1 + 4, 0, 0xA0uLL);
  if ( KeNumberNodes )
  {
    v5 = KeNodeBlock;
    v6 = (unsigned __int16)KeNumberNodes;
    do
    {
      v7 = *(_WORD *)(*v5 + 144);
      v8 = *(_QWORD *)(*v5 + 64);
      if ( *a1 <= v7 )
        *a1 = v7 + 1;
      ++v5;
      *(_QWORD *)&a1[4 * v7 + 4] |= v8;
      --v6;
    }
    while ( v6 );
  }
  __writecr8(CurrentIrql);
  for ( i = 0; i < *a1; *(_QWORD *)(a2 + 8 * v10 + 8) = ~*(_QWORD *)&a1[4 * v10 + 4] )
    v10 = i++;
  while ( i < a1[1] )
    *(_QWORD *)(a2 + 8LL * i++ + 8) = -1LL;
  *(_DWORD *)(a2 + 4) = 0;
  v11 = a1[1];
  *(_WORD *)a2 = v11;
  *(_WORD *)(a2 + 2) = a1[1];
  v12 = KeActiveProcessors[0];
  if ( v11 < LOWORD(KeActiveProcessors[0]) )
    v12 = v11;
  *(_WORD *)a2 = v12;
  for ( j = 0; j < *(_WORD *)a2; *(_QWORD *)(a2 + 8 * v14 + 8) &= qword_1403D15E8[v14] )
    v14 = j++;
  result = (unsigned __int64)v17;
  if ( (_BYTE *)a2 != v17 )
  {
    *(_WORD *)(a2 + 2) = 20;
    *(_DWORD *)(a2 + 4) = 0;
    if ( j < 0x14u )
    {
      do
      {
        result = j++;
        *(_QWORD *)(a2 + 8 * result + 8) = 0LL;
      }
      while ( j < *(_WORD *)(a2 + 2) );
    }
  }
  return result;
}
