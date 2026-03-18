/*
 * XREFs of ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x180111888
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FRAME_TIME_INFO::~FRAME_TIME_INFO(FRAME_TIME_INFO *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i));
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 32, 8u);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 32);
}
