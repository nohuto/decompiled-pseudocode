/*
 * XREFs of ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x180003710
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x180005608 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??$SetArrayConfiguration@UDwmTouchInteractionConfigurationPrimitive@@@?A0xe8837992@@YAJPEBXIPEAV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@@Z @ 0x1800A74E0 (--$SetArrayConfiguration@UDwmTouchInteractionConfigurationPrimitive@@@-A0xe8837992@@YAJPEBXIPEAV.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z @ 0x1800A7E10 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800A83F8 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionRoot::Initialize(CInteractionRoot *this, struct IManipulationContext *a2, char a3)
{
  CInteractionContextWrapper *v5; // rax
  struct IInteractionContextWrapper *v6; // rbp
  CInteractionContextWrapper *v7; // rax
  int v8; // edi
  __int64 v9; // r8
  int Src; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+24h] [rbp-44h]
  int v13; // [rsp+28h] [rbp-40h]

  *((_QWORD *)this + 85) = a2;
  v5 = (CInteractionContextWrapper *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 16LL))(
                                       WPF::g_pProcessHeap,
                                       336LL);
  if ( v5 )
    v6 = CInteractionContextWrapper::CInteractionContextWrapper(v5);
  else
    v6 = 0LL;
  if ( !v6 )
    return (unsigned int)-2147024882;
  v7 = (CInteractionContextWrapper *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 16LL))(
                                       WPF::g_pProcessHeap,
                                       336LL);
  if ( v7 )
    v7 = CInteractionContextWrapper::CInteractionContextWrapper(v7);
  if ( v7 )
  {
    v8 = CInteractionProcessor::Initialize((CInteractionRoot *)((char *)this + 32), v6, v7);
    if ( v8 >= 0 )
    {
      Src = 1;
      v12 = -1;
      v13 = -1;
      v8 = `anonymous namespace'::SetArrayConfiguration<DwmTouchInteractionConfigurationPrimitive>(&Src);
      if ( v8 >= 0 )
      {
        *((_BYTE *)this + 160) |= 1u;
        Src = 1;
        v12 = -1;
        v13 = -1;
        v8 = `anonymous namespace'::SetArrayConfiguration<DwmTouchInteractionConfigurationPrimitive>(&Src);
        if ( v8 >= 0 )
        {
          *((_BYTE *)this + 296) |= 1u;
          v8 = 0;
          *((_DWORD *)this + 77) = -1;
          *((_DWORD *)this + 76) = -1;
          if ( a3 )
          {
            LOBYTE(v9) = a3;
            (*(void (__fastcall **)(CInteractionRoot *, _QWORD, __int64))(*(_QWORD *)this + 40LL))(this, 0LL, v9);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
