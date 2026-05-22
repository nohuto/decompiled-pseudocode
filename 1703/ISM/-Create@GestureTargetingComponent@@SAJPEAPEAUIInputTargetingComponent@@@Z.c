/*
 * XREFs of ?Create@GestureTargetingComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z @ 0x18000D858
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800094B8 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ??0GestureTargetingComponent@@IEAA@XZ @ 0x18000D698 (--0GestureTargetingComponent@@IEAA@XZ.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x18005C34C (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GestureTargetingComponent::Create(struct IInputTargetingComponent **a1)
{
  unsigned int v2; // ebx
  GestureTargetingComponent *v3; // rdi
  int v4; // r9d
  int v5; // eax
  __int64 v6; // rcx
  GestureTargetingComponent *v7; // rax
  __int64 v8; // rcx
  GestureTargetingComponent *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // esi
  PointerInfoAdapter *v13; // rax
  bool v14; // r8
  PointerInfoAdapter *v15; // rbx
  struct IInputTargetingComponent *v16; // rax

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    if ( GestureTargetingComponent::s_pTargetingComponent )
    {
      (*(void (__fastcall **)(GestureTargetingComponent *))(*(_QWORD *)GestureTargetingComponent::s_pTargetingComponent
                                                          + 8LL))(GestureTargetingComponent::s_pTargetingComponent);
      v16 = GestureTargetingComponent::s_pTargetingComponent;
    }
    else
    {
      if ( GestureTargetingComponent::s_pMessageSession )
      {
        v2 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v2;
        v4 = (_DWORD)GestureTargetingComponent::s_pTargetingComponent + 88;
        goto LABEL_4;
      }
      v5 = CoreUICreate(&GestureTargetingComponent::s_pMessageSession);
      v2 = v5;
      if ( v5 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v6, &MinInput_Warning_CheckResult, 4, 91, v5);
        goto LABEL_43;
      }
      v7 = (GestureTargetingComponent *)malloc(0x68uLL);
      v9 = v7;
      if ( v7 )
        memset(v7, 0, 0x68uLL);
      if ( v9 )
        v3 = GestureTargetingComponent::GestureTargetingComponent(v9);
      else
        v3 = 0LL;
      if ( !v3 )
      {
        v2 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v8, &MinInput_Warning_CheckResult, 4, 97, 14);
LABEL_44:
        if ( v3 )
          (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v3 + 2) + 24LL))((__int64)v3 + 16, 1LL);
        return v2;
      }
      v10 = RegistryWatcher::Create(
              v8,
              L"System\\Input",
              v3,
              GestureTargetingComponent::OnGestureTargetingRegistryKeyChangeStatic,
              (struct RegistryWatcher **)v3 + 4);
      v12 = v10;
      if ( v10 >= 0 )
      {
        v13 = (PointerInfoAdapter *)malloc(0x60uLL);
        v15 = v13;
        if ( v13 )
          memset(v13, 0, 0x60uLL);
        if ( v15 )
          v15 = PointerInfoAdapter::PointerInfoAdapter(v15, (GestureTargetingComponent *)((char *)v3 + 8), v14);
        if ( v15 )
          (*(void (__fastcall **)(PointerInfoAdapter *))(*(_QWORD *)v15 + 8LL))(v15);
        v11 = *((_QWORD *)v3 + 6);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        *((_QWORD *)v3 + 6) = v15;
        if ( !v15 )
        {
          v2 = -2147024882;
          LOBYTE(v12) = 14;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_43;
          Template_qqq(v11, &MinInput_Warning_CheckResult, 4, 65, 14);
          goto LABEL_36;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v11, &MinInput_Warning_CheckResult, 4, 54, v10);
      }
      v2 = v12;
      if ( v12 < 0 )
      {
LABEL_36:
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v11, &MinInput_Warning_CheckResult, 4, 100, v12);
LABEL_43:
        if ( (v2 & 0x80000000) == 0 )
          return v2;
        goto LABEL_44;
      }
      (*(void (__fastcall **)(GestureTargetingComponent *))(*(_QWORD *)v3 + 8LL))(v3);
      if ( GestureTargetingComponent::s_pTargetingComponent )
        (*(void (__fastcall **)(GestureTargetingComponent *))(*(_QWORD *)GestureTargetingComponent::s_pTargetingComponent
                                                            + 16LL))(GestureTargetingComponent::s_pTargetingComponent);
      v16 = v3;
      GestureTargetingComponent::s_pTargetingComponent = v3;
    }
    *a1 = v16;
    goto LABEL_43;
  }
  v2 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v4 = 81;
LABEL_4:
    Template_qqq(0LL, &MinInput_Warning_CheckResult, 4, v4, v2);
  }
  return v2;
}
