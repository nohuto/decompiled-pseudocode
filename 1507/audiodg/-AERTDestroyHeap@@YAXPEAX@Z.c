/*
 * XREFs of ?AERTDestroyHeap@@YAXPEAX@Z @ 0x140017DDC
 * Callers:
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140017CC4 (-AERTMemoryShutdown@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E058 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
 */

void __fastcall AERTDestroyHeap(void *a1, void *a2)
{
  unsigned int v3; // ecx
  int v4; // edi
  unsigned __int64 v5; // [rsp+38h] [rbp-20h]
  unsigned __int64 v6; // [rsp+40h] [rbp-18h]

  v3 = WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      30LL,
      &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids,
      a1);
  }
  if ( a1 )
  {
    v4 = RtlDestroyMemoryBlockLookaside(a1);
    v3 = v4 & 0xC0000000;
    if ( (v4 & 0xC0000000) == 0xC0000000 )
    {
      v3 = WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 3u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          31LL,
          &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids,
          a1);
      }
    }
  }
  else
  {
    v4 = 0;
  }
  AEWMILOG_MEMORY(v3, a2, 4u, a1, 0LL, 0LL, 0LL, v5, v6, v4);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 32LL, &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids);
  }
}
