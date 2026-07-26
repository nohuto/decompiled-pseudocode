/*
 * XREFs of ndisMQueueNewWorkItem @ 0x1C005A41C
 * Callers:
 *     NdisIMQueueMiniportCallback @ 0x1C0057E40 (NdisIMQueueMiniportCallback.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qLq @ 0x1C00409D8 (WPP_SF_qLq.c)
 */

__int64 __fastcall ndisMQueueNewWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  unsigned int v9; // edi

  if ( (unsigned __int8)byte_1C0083713 >= 4u )
    WPP_SF_qq(0x2Au, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, a3);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a4 != 0 ? 32 : 24, 0x6977444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = a3;
    *((_DWORD *)PoolWithTag + 2) = 6;
    if ( a4 )
      PoolWithTag[3] = a4;
    if ( (unsigned __int8)byte_1C0083713 >= 4u )
      WPP_SF_qLq(0x2Cu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64)PoolWithTag, 6);
    *v8 = *(_QWORD *)(a1 + 872);
    *(_QWORD *)(a1 + 872) = v8;
    v9 = 0;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0083713 >= 2u )
      WPP_SF_q(0x2Bu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
    v9 = -1073741823;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x48000) == 0x8000 && !v9 )
    KeInsertQueueDpc((PRKDPC)(a1 + 1528), 0LL, 0LL);
  if ( (unsigned __int8)byte_1C0083713 >= 4u )
    WPP_SF_qq(0x2Du, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, a3);
  return v9;
}
