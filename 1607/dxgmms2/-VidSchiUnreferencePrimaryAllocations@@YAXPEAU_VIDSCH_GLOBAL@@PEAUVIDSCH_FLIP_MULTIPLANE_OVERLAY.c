/*
 * XREFs of ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIIH@Z @ 0x1C0011D68
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00105A0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
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
  int v9; // r11d
  unsigned int i; // r8d
  __int64 v11; // rdx
  __int64 v12; // rax

  if ( a4 )
  {
    v9 = 0;
    do
    {
      if ( (a4 & 1) != 0 )
      {
        if ( (a5 & 1) != 0 )
        {
          for ( i = 0; i < a3; ++i )
          {
            v11 = *(_QWORD *)((char *)a2
                            + 48 * i
                            + 48 * v9 * *((_DWORD *)a2 + 1)
                            + ((8 * *((_DWORD *)a2 + 2) + 167) & 0xFFFFFFF8) * *((_DWORD *)a2 + 1)
                            + 48);
            v12 = *(_QWORD *)(v11 + 96);
            _InterlockedDecrement((volatile signed __int32 *)(v11 + 104));
            if ( a6 )
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 16) + 8LL));
          }
        }
        ++v9;
      }
      a5 >>= 1;
      a4 >>= 1;
    }
    while ( a4 );
  }
}
