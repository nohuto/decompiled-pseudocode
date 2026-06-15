/*
 * XREFs of ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14003CE24
 * Callers:
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140016240 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x1400162C0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14003D114 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E058 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
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
    v6 = WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 3u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x1Cu,
        (__int64)&WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids,
        (__int64)a1);
    }
  }
  AEWMILOG_MEMORY(v6, v4, 5u, a1, a2, 0LL, 0LL, v7, v8, v5);
}
