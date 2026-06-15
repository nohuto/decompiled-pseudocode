/*
 * XREFs of ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x180090C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x180043574 (--_M@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180066F94 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

CDeviceGraphObjectsStore *__fastcall CDeviceGraphObjectsStore::`vector deleting destructor'(
        CDeviceGraphObjectsStore *this,
        char a2)
{
  __int64 v4; // rcx
  volatile int *v5; // rdx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  `eh vector destructor iterator'(
    (char *)this + 80,
    (struct _GUID *)0x18,
    4,
    (void (__fastcall *)(char *))std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>);
  v5 = (volatile int *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(v4, v5, *((Microsoft::WRL::Details::WeakReferenceImpl ***)this + 8));
    operator delete(*((void **)this + 7));
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
