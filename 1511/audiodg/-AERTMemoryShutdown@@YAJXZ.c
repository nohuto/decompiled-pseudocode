/*
 * XREFs of ?AERTMemoryShutdown@@YAJXZ @ 0x14003C5EC
 * Callers:
 *     wWinMain @ 0x14000195C (wWinMain.c)
 * Callees:
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14003C41C (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E008 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
 */

__int64 AERTMemoryShutdown(void)
{
  void *v0; // rdx
  _UNKNOWN **v1; // rcx
  unsigned __int64 v3; // [rsp+38h] [rbp-20h]
  unsigned __int64 v4; // [rsp+40h] [rbp-18h]
  WINBOOL fPending; // [rsp+60h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+68h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids);
  }
  if ( !InitOnceBeginInitialize(&gRTHeapInitOnce, 1u, &fPending, &Context) || fPending )
    goto LABEL_15;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids,
      (__int64)Context);
  }
  AERTDestroyHeap(Context, v0);
  v1 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
LABEL_16:
      if ( v1 != &WPP_GLOBAL_Control && (*((_DWORD *)v1 + 7) & 0x40000) != 0 && *((_BYTE *)v1 + 25) >= 4u )
        WPP_SF_((__int64)v1[2], 0x19u, (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids);
      goto LABEL_20;
    }
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids);
LABEL_15:
    v1 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_16;
  }
LABEL_20:
  AEWMILOG_MEMORY((unsigned int)v1, v0, 2u, 0LL, 0LL, 0LL, 0LL, v3, v4, 0LL);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids);
  }
  return 0LL;
}
