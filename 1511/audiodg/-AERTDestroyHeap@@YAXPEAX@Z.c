/*
 * XREFs of ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14003C41C
 * Callers:
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x14003C5EC (-AERTMemoryShutdown@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E008 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
 */

void __fastcall AERTDestroyHeap(void *a1, void *a2)
{
  unsigned int v3; // ecx
  int v4; // edi
  unsigned __int64 v5; // [rsp+38h] [rbp-20h]
  unsigned __int64 v6; // [rsp+40h] [rbp-18h]

  v3 = (unsigned int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids,
      (__int64)a1);
  }
  if ( a1 )
  {
    v4 = RtlDestroyMemoryBlockLookaside(a1);
    v3 = v4 & 0xC0000000;
    if ( (v4 & 0xC0000000) == 0xC0000000 )
    {
      v3 = (unsigned int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Fu,
          (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids,
          (__int64)a1);
      }
    }
  }
  else
  {
    v4 = 0;
  }
  AEWMILOG_MEMORY(v3, a2, 4u, a1, 0LL, 0LL, 0LL, v5, v6, v4);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids);
  }
}
