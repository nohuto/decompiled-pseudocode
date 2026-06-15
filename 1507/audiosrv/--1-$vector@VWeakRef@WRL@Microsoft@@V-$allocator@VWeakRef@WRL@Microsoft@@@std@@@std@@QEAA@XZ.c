/*
 * XREFs of ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180090710
 * Callers:
 *     _CDeviceGraphObjectsStore::CDeviceGraphObjectsStore_::_1_::dtor$2 @ 0x180047598 (_CDeviceGraphObjectsStore--CDeviceGraphObjectsStore_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180066F94 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

void __fastcall std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(__int64 a1)
{
  if ( *(_QWORD *)a1 )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(
      a1,
      *(volatile int **)a1,
      *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 8));
    operator delete(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
