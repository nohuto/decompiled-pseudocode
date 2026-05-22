/*
 * XREFs of ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x180066150
 * Callers:
 *     ?HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z @ 0x180066108 (-HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VSpatialInteractionController@SpatialInteractionDevices@@@std@@EEAAXXZ @ 0x18007B430 (-_Destroy@-$_Ref_count_obj@VSpatialInteractionController@SpatialInteractionDevices@@@std@@EEAAXX.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE(SpatialInteractionDevices::HID_HANDLE *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  unsigned __int64 v9; // rdx
  void *v10; // rcx
  signed int LastError; // eax
  unsigned __int64 v12; // rcx

  v2 = (void *)*((_QWORD *)this + 31);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 30);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 29);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_QWORD *)this + 27);
  if ( v5 )
    operator delete(v5);
  v6 = (void *)*((_QWORD *)this + 25);
  if ( v6 )
    operator delete(v6);
  v7 = (void *)*((_QWORD *)this + 23);
  if ( v7 )
    operator delete(v7);
  v8 = (void *)*((_QWORD *)this + 21);
  if ( v8 )
    operator delete(v8);
  v9 = *((_QWORD *)this + 5);
  if ( v9 >= 8 )
    std::_Deallocate(*((char **)this + 2), v9 + 1, 2uLL);
  v10 = (void *)*((_QWORD *)this + 1);
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::`vftable';
  if ( v10 != (void *)-1LL )
  {
    if ( !CloseHandle(v10) )
    {
      LastError = GetLastError();
      v12 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v12 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v12);
      JUMPOUT(0x18006622ELL);
    }
    *((_QWORD *)this + 1) = -1LL;
  }
}
