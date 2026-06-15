/*
 * XREFs of ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18008DFA0
 * Callers:
 *     _CDeviceGraphObjectsStore::CDeviceGraphObjectsStore_::_1_::dtor$2 @ 0x180049A6D (_CDeviceGraphObjectsStore--CDeviceGraphObjectsStore_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180065874 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

void __fastcall std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(__int64 *a1)
{
  if ( *a1 )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Destroy((__int64)a1, *a1, a1[1]);
    operator delete((void *)*a1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
