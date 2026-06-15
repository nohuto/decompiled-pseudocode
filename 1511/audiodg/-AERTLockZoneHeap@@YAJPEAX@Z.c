/*
 * XREFs of ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14003C52C
 * Callers:
 *     ?Start@CCrossProcessControl@@UEAAJXZ @ 0x14003A8F0 (-Start@CCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14003C85C (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E008 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
 */

__int64 __fastcall AERTLockZoneHeap(void *a1, void *a2)
{
  int v3; // ebx
  unsigned int v4; // ecx
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]
  unsigned __int64 v7; // [rsp+40h] [rbp-18h]

  if ( a1 )
  {
    v3 = ((__int64 (*)(void))RtlLockMemoryZone)();
    if ( v3 == -1073741663 && (int)IncreaseProcessWorkingSet(0x100000uLL) >= 0 )
      v3 = RtlLockMemoryZone(a1);
  }
  else
  {
    v3 = 0;
  }
  v4 = -1073741824;
  if ( (v3 & 0xC0000000) == 0xC0000000 )
  {
    v4 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x37u, (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids);
    }
  }
  AEWMILOG_MEMORY(v4, a2, 8u, a1, 0LL, 0LL, 0LL, v6, v7, v3);
  return v3 | 0x10000000u;
}
