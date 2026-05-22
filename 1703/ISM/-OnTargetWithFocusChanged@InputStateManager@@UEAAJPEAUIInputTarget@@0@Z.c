/*
 * XREFs of ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006A00
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180006BA8 (-NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z.c)
 *     ?GetValues@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEAY0BAA@PEAUIInputProcessor@@PEAI@Z @ 0x18000728C (-GetValues@-$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEAY0BAA@PEAUIInputProcessor@@PEAI@.c)
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003088C (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 *     ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x180030E50 (-OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnTargetWithFocusChanged(
        InputStateManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r9
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  ControllerNavigationManager *Instance; // rax
  struct IInputTarget *v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v21[256]; // [rsp+58h] [rbp-B0h] BYREF

  v20[1] = -2LL;
  LODWORD(v20[0]) = 0;
  FixedSizeMap<unsigned long,IInputProcessor *,256>::GetValues((char *)this + 56, v21, v20);
  v6 = 0LL;
  if ( !LODWORD(v20[0]) )
  {
LABEL_14:
    Instance = ControllerNavigationManager::GetInstance();
    v16 = ControllerNavigationManager::OnTargetWithFocusChanged(Instance, v15, a3);
    v12 = v16;
    if ( v16 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v17, &MinInput_Warning_CheckResult, 1, 427, v16);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    InputStateManager::NotifyForegroundChange((InputStateManager *)((char *)this - 16), a2, a3);
    return v12;
  }
  while ( 1 )
  {
    v7 = 0LL;
    v19 = 0LL;
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v21[v6];
    if ( !v8 )
      goto LABEL_6;
    v9 = (**v8)(v21[v6], &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, &v19);
    v7 = v19;
    if ( v9 < 0 )
      goto LABEL_6;
    v10 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v19 + 24LL))(
            v19,
            a2,
            a3);
    v12 = v10;
    if ( v10 < 0 )
      break;
    v7 = v19;
LABEL_6:
    v19 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= LODWORD(v20[0]) )
      goto LABEL_14;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v11, &MinInput_Warning_CheckResult, 1, 418, v10);
  v13 = v19;
  v19 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v12;
}
