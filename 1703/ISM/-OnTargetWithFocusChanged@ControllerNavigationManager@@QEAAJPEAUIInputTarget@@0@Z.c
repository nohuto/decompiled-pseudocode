/*
 * XREFs of ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x180030E50
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006A00 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRect@@UControllerNavigationPoint@@@Z @ 0x180031010 (-NavigationEnable@ControllerNavigationManager@@UEAAJUtagMsgRoutingInfo@@IUControllerNavigationRe.c)
 *     ?NavigationDisable@ControllerNavigationManager@@UEAAJXZ @ 0x1800312C0 (-NavigationDisable@ControllerNavigationManager@@UEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::OnTargetWithFocusChanged(
        ControllerNavigationManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  struct IInputTarget *v8; // rcx
  char v9; // r14
  _OWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h]
  struct IInputTarget *v17; // [rsp+A8h] [rbp+28h] BYREF

  v17 = a2;
  v4 = 0;
  v5 = (_DWORD *)((char *)this + 152);
  *((_DWORD *)this + 38) = 0;
  if ( a3 )
  {
    v17 = 0LL;
    if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, struct IInputTarget **))a3)(
           a3,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v17) >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(struct IInputTarget *, _DWORD *))(*(_QWORD *)v17 + 32LL))(v17, v5);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 210, v6);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    v8 = v17;
    v17 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = 1;
  if ( *v5 )
  {
    v10 = (_OWORD *)((char *)this + 160);
    if ( *v5 == *((_DWORD *)this + 40) )
    {
      v14 = *(_OWORD *)((char *)this + 204);
      v15[0] = *v10;
      v15[1] = *((_OWORD *)this + 11);
      v16 = *((_QWORD *)this + 24);
      ControllerNavigationManager::NavigationEnable(
        (char *)this + 16,
        v15,
        *((unsigned int *)this + 50),
        &v14,
        *(_QWORD *)((char *)this + 220));
      v9 = 0;
    }
    else
    {
      memset(v10, 0, 0x48uLL);
    }
  }
  if ( *((_BYTE *)this + 88) )
  {
    if ( v9 )
    {
      v11 = ControllerNavigationManager::NavigationDisable((ControllerNavigationManager *)((char *)this + 16));
      v4 = v11;
      if ( v11 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 247, v11);
    }
  }
  return v4;
}
