/*
 * XREFs of ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18010CFDC
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x1801302E8 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z @ 0x18005A8EC (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z.c)
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x18005A964 (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CInteractionRoot::Initialize(CInteractionRoot *this, struct IManipulationContext *a2, char a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // r8
  int v10; // [rsp+30h] [rbp-30h] BYREF
  int v11; // [rsp+34h] [rbp-2Ch] BYREF
  _DWORD v12[4]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v13[4]; // [rsp+48h] [rbp-18h] BYREF

  *((_QWORD *)this + 52) = a2;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         64LL);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 8) = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v5 + 16) = 0;
    *(_QWORD *)v5 = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
    *(_QWORD *)(v5 + 8) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_DWORD *)(v5 + 60) = 0;
    *(_BYTE *)(v5 + 56) &= ~1u;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 48) = 1065353216LL;
    *(_QWORD *)(v5 + 32) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    return (unsigned int)-2147024882;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         64LL);
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v6 + 16) = 0;
    *(_QWORD *)v6 = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
    *(_QWORD *)(v6 + 8) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_DWORD *)(v6 + 60) = 0;
    *(_BYTE *)(v6 + 56) &= ~1u;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_QWORD *)(v6 + 48) = 1065353216LL;
    *(_QWORD *)(v6 + 32) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = CInteractionProcessor::Initialize(
           (CInteractionRoot *)((char *)this + 32),
           (struct IInteractionContextWrapper *)v5,
           (struct IInteractionContextWrapper *)v6);
    if ( v7 >= 0 )
    {
      v12[0] = 1;
      v12[1] = -1;
      v12[2] = -1;
      v7 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 1, v12, 1u);
      if ( v7 >= 0 )
      {
        v13[0] = 1;
        v13[1] = -1;
        v13[2] = -1;
        v7 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 2, v13, 1u);
        if ( v7 >= 0 )
        {
          v11 = -1;
          v7 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 4, &v11, 1u);
          if ( v7 >= 0 )
          {
            v10 = -1;
            v7 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 3, &v10, 1u);
            if ( v7 >= 0 )
            {
              if ( a3 )
              {
                LOBYTE(v8) = a3;
                (*(void (__fastcall **)(CInteractionRoot *, _QWORD, __int64))(*(_QWORD *)this + 40LL))(this, 0LL, v8);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
