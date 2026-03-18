/*
 * XREFs of ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x18014DF4C
 * Callers:
 *     ??_GCCompiledEffectTemplate@@MEAAPEAXI@Z @ 0x18012B770 (--_GCCompiledEffectTemplate@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompiledEffectTemplate::~CCompiledEffectTemplate(CCompiledEffectTemplate *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CCompiledEffectTemplate::`vftable';
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  if ( *((_QWORD *)this + 18) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 18) = 0LL;
  }
  if ( *((_QWORD *)this + 19) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_DWORD *)this + 40) = 0;
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
