/*
 * XREFs of ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14003C74C
 * Callers:
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x14003AA30 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E008 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
 */

__int64 __fastcall AERTUnlockZoneHeap(void *a1, void *a2)
{
  unsigned int v3; // ecx
  int v4; // ebx
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]
  unsigned __int64 v7; // [rsp+40h] [rbp-18h]

  v3 = (unsigned int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x38u,
      (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids,
      (__int64)a1);
  }
  if ( a1 )
  {
    v4 = RtlUnlockMemoryZone(a1);
    v3 = v4 & 0xC0000000;
    if ( (v4 & 0xC0000000) == 0xC0000000 )
    {
      v3 = (unsigned int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids);
      }
    }
  }
  else
  {
    v4 = 0;
  }
  AEWMILOG_MEMORY(v3, a2, 9u, a1, 0LL, 0LL, 0LL, v6, v7, v4);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Au, (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids);
  }
  return v4 | 0x10000000u;
}
