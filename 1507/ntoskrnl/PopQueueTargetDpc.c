/*
 * XREFs of PopQueueTargetDpc @ 0x140013A6C
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x1400139F0 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

LONG __fastcall PopQueueTargetDpc(__int64 a1, __int64 a2)
{
  unsigned __int16 **v2; // r8
  unsigned __int16 *v5; // r10
  unsigned int v6; // r9d
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v10; // rax
  unsigned __int16 *v11; // rcx

  v2 = *(unsigned __int16 ***)(a2 + 32);
  v5 = *v2;
  if ( *v2 )
    v6 = *v5;
  else
    v6 = *((unsigned __int16 *)v2 + 8) + 1;
  if ( v2[1] )
  {
LABEL_4:
    v7 = (unsigned __int64)v2[1];
    _BitScanForward64(&v8, v7);
    v2[1] = (unsigned __int16 *)(v7 & ~(1LL << v8));
    LODWORD(v7) = KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)v2 + 8) + (unsigned __int8)v8];
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = PopExecuteProcessorCallback;
    *(_WORD *)a1 = 787;
    *(_WORD *)(a1 + 2) = v7 + 640;
    *(_QWORD *)(a1 + 32) = a2;
    return KiInsertQueueDpc(a1, 0, 0, 0, 0);
  }
  else
  {
    while ( 1 )
    {
      v10 = (unsigned __int16)++*((_WORD *)v2 + 8);
      if ( (unsigned int)v10 >= v6 )
        return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
      v11 = *(unsigned __int16 **)&v5[4 * v10 + 4];
      v2[1] = v11;
      if ( v11 )
        goto LABEL_4;
    }
  }
}
