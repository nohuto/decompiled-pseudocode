/*
 * XREFs of VidSchiRundownUnorderedWaiterContext @ 0x1C0007F70
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0003618 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C00037C0 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C0007FE8 (VidSchiRundownUnorderedWaiterDevice.c)
 * Callees:
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C00137C4 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C001B2A8 (VidSchiUnwaitWaitQueuePacket.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterContext(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // r8
  bool v6; // zf
  int v7; // eax

  v2 = (_QWORD *)(a1 + 664);
  v4 = *(_QWORD **)(a1 + 664);
  while ( v4 != v2 )
  {
    v5 = v4 - 4;
    v6 = *((_DWORD *)v4 + 4) == 4;
    v4 = (_QWORD *)*v4;
    if ( v6 )
    {
      v7 = *((_DWORD *)v5 + 64);
      if ( (v7 & 4) != 0 )
      {
        VidSchiUnblockUnorderedWaitQueuePacket((struct _VIDSCH_QUEUE_PACKET *)v5, 1u);
      }
      else if ( (v7 & 8) != 0 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 2508LL) & 1) != 0 )
      {
        LOBYTE(a2) = 1;
        VidSchiUnwaitWaitQueuePacket(v5, a2);
      }
    }
  }
}
