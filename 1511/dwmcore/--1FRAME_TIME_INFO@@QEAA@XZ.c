/*
 * XREFs of ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x1800FC7E8
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x18008F880 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall FRAME_TIME_INFO::~FRAME_TIME_INFO(FRAME_TIME_INFO *this)
{
  __int64 i; // r15

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i));
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 4, 8u);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 4);
}
