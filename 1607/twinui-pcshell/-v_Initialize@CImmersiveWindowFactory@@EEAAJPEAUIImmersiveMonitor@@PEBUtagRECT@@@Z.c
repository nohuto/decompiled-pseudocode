/*
 * XREFs of ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x18002BDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_LoadOrientationPreference@CImmersiveWindowFactory@@AEAAJXZ @ 0x18002BC54 (-_LoadOrientationPreference@CImmersiveWindowFactory@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactory::v_Initialize(
        CImmersiveWindowFactory *this,
        IUnknown *punk,
        const struct tagRECT *a3)
{
  HRESULT v3; // ebx
  void *v6; // rcx
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *(struct tagRECT *)((char *)this + 84) = *a3;
  }
  else
  {
    v8 = 0LL;
    v3 = IUnknown_QueryService(
           punk,
           (const GUID *const)&SID_SwitchController,
           &GUID_15328f88_3846_45be_ac4b_e083dca20ec2,
           &v8);
    if ( v3 >= 0 )
      v3 = (*(__int64 (__fastcall **)(void *, IUnknown *, _QWORD, _QWORD, char *))(*(_QWORD *)v8 + 56LL))(
             v8,
             punk,
             *((_QWORD *)this + 13),
             0LL,
             (char *)this + 84);
    v6 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  if ( v3 >= 0 )
    CImmersiveWindowFactory::_LoadOrientationPreference(this);
  return (unsigned int)v3;
}
