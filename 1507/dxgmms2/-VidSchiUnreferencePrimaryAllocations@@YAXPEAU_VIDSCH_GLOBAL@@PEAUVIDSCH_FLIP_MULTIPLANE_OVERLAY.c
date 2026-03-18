/*
 * XREFs of ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIIH@Z @ 0x1C00139E4
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00014D0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C00157C8 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiUnreferencePrimaryAllocations(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  int i; // r11d
  unsigned int j; // edx
  __int64 v10; // rax
  __int64 v11; // rcx

  for ( i = 0; a4; a4 >>= 1 )
  {
    if ( (a4 & 1) != 0 )
    {
      if ( (a5 & 1) != 0 )
      {
        for ( j = 0; j < a3; ++j )
        {
          v10 = *((_QWORD *)a2 + 7 * j + 7 * i * *((_DWORD *)a2 + 1) + 2);
          v11 = *(_QWORD *)(v10 + 96);
          _InterlockedDecrement((volatile signed __int32 *)(v10 + 104));
          if ( a6 )
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 16) + 8LL));
        }
      }
      ++i;
    }
    a5 >>= 1;
  }
}
