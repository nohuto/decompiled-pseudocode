/*
 * XREFs of ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14003C35C
 * Callers:
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140015480 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140015570 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14003C85C (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E008 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
 */

void __fastcall AERTAddMemoryToHeap(void *a1, unsigned __int64 a2)
{
  void *v4; // rdx
  int v5; // ebx
  unsigned int v6; // ecx
  unsigned __int64 v7; // [rsp+38h] [rbp-20h]
  unsigned __int64 v8; // [rsp+40h] [rbp-18h]

  v5 = ((__int64 (*)(void))RtlExtendMemoryBlockLookaside)();
  if ( v5 == -1073741663 && (int)IncreaseProcessWorkingSet(a2) >= 0 )
    v5 = RtlExtendMemoryBlockLookaside(a1, a2);
  v6 = -1073741824;
  if ( (v5 & 0xC0000000) == 0xC0000000 )
  {
    v6 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids,
        (__int64)a1);
    }
  }
  AEWMILOG_MEMORY(v6, v4, 5u, a1, a2, 0LL, 0LL, v7, v8, v5);
}
