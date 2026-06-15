/*
 * XREFs of ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x140016730
 * Callers:
 *     ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1400167D0 (-AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_SF_PPPL @ 0x14003CA48 (WPP_SF_PPPL.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E008 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
 */

void *__fastcall AERTCreateHeap()
{
  unsigned __int64 v0; // rdi
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  int v3; // eax
  void *v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rbp
  unsigned int v7; // ecx
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]
  unsigned __int64 v10; // [rsp+40h] [rbp-18h]
  void *v11; // [rsp+70h] [rbp+18h] BYREF

  v0 = gMinSize;
  v1 = gInitialSize;
  v2 = gMaxSize;
  v11 = 0LL;
  v3 = RtlCreateMemoryBlockLookaside(&v11, 0LL, gInitialSize, gMinSize, gMaxSize);
  v6 = v3;
  v7 = v3 & 0xC0000000;
  if ( (v3 & 0xC0000000) == 0xC0000000 )
  {
    v7 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_PPPL(*((_QWORD *)WPP_GLOBAL_Control + 2), v4, v5, v1, v0, v2, v3);
    }
  }
  AEWMILOG_MEMORY(v7, v4, 3u, v11, v1, v0, v2, v9, v10, v6);
  return v11;
}
