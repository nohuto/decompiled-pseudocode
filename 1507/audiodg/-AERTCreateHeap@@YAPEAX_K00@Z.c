/*
 * XREFs of ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x140017EFC
 * Callers:
 *     ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x140017EA0 (-AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_SF_PPPL @ 0x14003D300 (WPP_SF_PPPL.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E058 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
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
    v7 = WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 3u )
    {
      WPP_SF_PPPL(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v4, v5, v1, v0, v2, v3);
    }
  }
  AEWMILOG_MEMORY(v7, v4, 3u, v11, v1, v0, v2, v9, v10, v6);
  return v11;
}
