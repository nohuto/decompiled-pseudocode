/*
 * XREFs of ??_GTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001F960
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002684C (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink *__fastcall Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink *this,
        char a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::`vftable'{for `IVisualElementEventSink'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v4 = *((unsigned int *)this + 10);
  if ( (_DWORD)v4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x15,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tilenotificationsink.cpp",
        (const char *)(unsigned int)v5);
  }
  v6 = *((_QWORD *)this + 30);
  if ( v6 )
  {
    LOBYTE(v4) = v6 != (_QWORD)this + 184;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v4);
    *((_QWORD *)this + 30) = 0LL;
  }
  v7 = *((_QWORD *)this + 22);
  if ( v7 )
  {
    LOBYTE(v4) = v7 != (_QWORD)this + 120;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(v7, v4);
    *((_QWORD *)this + 22) = 0LL;
  }
  v8 = *((_QWORD *)this + 14);
  if ( v8 )
  {
    LOBYTE(v4) = v8 != (_QWORD)this + 56;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *((_DWORD *)this + 9) = -1073741823;
  v10 = *((_QWORD *)this + 3);
  if ( v10 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
