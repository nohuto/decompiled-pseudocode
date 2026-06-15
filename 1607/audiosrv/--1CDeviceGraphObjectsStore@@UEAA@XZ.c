/*
 * XREFs of ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800765B0
 * Callers:
 *     ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x180076B50 (--_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180035F78 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180051154 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDeviceGraphObjectsStore::~CDeviceGraphObjectsStore(CDeviceGraphObjectsStore *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rdx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  `eh vector destructor iterator'(
    (char *)this + 80,
    24LL,
    4LL,
    (void (*)(void *))std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>);
  v3 = (__int64 *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(v2, v3, *((__int64 **)this + 8));
    std::_Deallocate(*((_QWORD **)this + 7), (__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) >> 3, 8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
