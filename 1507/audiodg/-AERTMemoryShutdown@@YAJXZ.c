/*
 * XREFs of ?AERTMemoryShutdown@@YAJXZ @ 0x140017CC4
 * Callers:
 *     wWinMain @ 0x1400177C0 (wWinMain.c)
 * Callees:
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x140017DDC (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E058 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
 */

__int64 AERTMemoryShutdown(void)
{
  void *v0; // rdx
  __int64 v1; // rcx
  unsigned __int64 v3; // [rsp+38h] [rbp-20h]
  unsigned __int64 v4; // [rsp+40h] [rbp-18h]
  WINBOOL fPending; // [rsp+60h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+68h] [rbp+10h] BYREF

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 22LL, &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids);
  }
  if ( !InitOnceBeginInitialize(&gRTHeapInitOnce, 1u, &fPending, &Context) || fPending )
    goto LABEL_24;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      23LL,
      &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids,
      Context);
  }
  AERTDestroyHeap(Context);
  v1 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
    {
LABEL_14:
      if ( (unsigned int *)v1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v1 + 28) & 0x40000) != 0
        && *(_BYTE *)(v1 + 25) >= 4u )
      {
        WPP_SF_(*(_QWORD *)(v1 + 16), 25LL, &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids);
      }
      goto LABEL_18;
    }
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 24LL, &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids);
LABEL_24:
    v1 = *(_QWORD *)&WPP_GLOBAL_Control;
    goto LABEL_14;
  }
LABEL_18:
  AEWMILOG_MEMORY(v1, v0, 2u, 0LL, 0LL, 0LL, 0LL, v3, v4, 0LL);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 26LL, &WPP_8330f1c7b0659dbd8336993b96b721f7_Traceguids);
  }
  return 0LL;
}
