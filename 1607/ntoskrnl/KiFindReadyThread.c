/*
 * XREFs of KiFindReadyThread @ 0x1400CCDFC
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x14005B8A0 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     KiGetHeteroCpuPolicyThread @ 0x1400CCDEC (KiGetHeteroCpuPolicyThread.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400CCEEC (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400CE188 (KiCheckForMaxOverQuotaScb.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140110860 (KiRemoveThreadFromReadyQueue.c)
 */

_QWORD *__fastcall KiFindReadyThread(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rcx
  int v8; // r14d
  unsigned int v9; // eax
  _QWORD **v10; // r12
  _QWORD *v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // r13
  int HeteroCpuPolicyThread; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *result; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // [rsp+70h] [rbp+8h]
  __int64 v24; // [rsp+78h] [rbp+10h]
  unsigned int v26; // [rsp+88h] [rbp+20h]

  v5 = a2 + 22784;
  if ( !a2 )
    v5 = a3 + 16;
  v8 = 64;
  v24 = *(_QWORD *)(a1 + 1608);
  v23 = v5;
  while ( 2 )
  {
    _BitScanReverse(&v9, a4);
    a4 ^= 1 << v9;
    v10 = (_QWORD **)(v5 + 16LL * v9);
    v26 = v9;
    v11 = *v10;
    do
    {
      v12 = v11 - 27;
      v13 = v11[45];
      HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread((__int64)(v11 - 27), a1);
      if ( HeteroCpuPolicyThread )
      {
        v21 = *(_QWORD *)(a1 + 1600);
        v22 = 3 * (HeteroCpuPolicyThread + 8LL);
        v15 = v13 & *(_QWORD *)(v21 + 8 * v22);
        if ( v15 )
          v13 &= *(_QWORD *)(v21 + 8 * v22);
      }
      if ( (v13 & v24) != 0 )
      {
        v18 = v12[13];
        if ( !v18
          || (v19 = *(unsigned int *)(a1 + 1624) + v18) == 0
          || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v19, v15, v16, v17) )
        {
          if ( a2 )
            KiRemoveThreadFromReadyQueue(a2, v11, v26);
          else
            KiRemoveThreadFromSharedReadyQueue(a3, v11 - 27, v26);
          result = v11 - 27;
          *((_DWORD *)v12 + 134) = *(_DWORD *)(a1 + 36);
          return result;
        }
      }
      v11 = (_QWORD *)*v11;
      --v8;
    }
    while ( v11 != v10 && v8 );
    if ( a4 && v8 )
    {
      v5 = v23;
      continue;
    }
    break;
  }
  return 0LL;
}
