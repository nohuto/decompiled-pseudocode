/*
 * XREFs of UserSetWindowedSwapChain @ 0x1402024A8
 * Callers:
 *     UserSetWindowedSwapChainApiExt @ 0x140202490 (UserSetWindowedSwapChainApiExt.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14000FD08 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     CreateVisRgnTracker @ 0x140018348 (CreateVisRgnTracker.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1402026DC (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x14020272C (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     ?CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z @ 0x1402027FC (-CreateSwapChainProp@CSwapChainProp@@SAHPEAXPEAPEAV1@@Z.c)
 *     ?ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ @ 0x140202888 (-ClearCompositionSurfaceObj@CSwapChainProp@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserSetWindowedSwapChain(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  int v10; // eax
  int v11; // eax
  __int64 v12; // r9
  int v13; // r14d
  CSwapChainProp *v14; // rbx
  void *v15; // rbp
  void *v17; // [rsp+30h] [rbp-38h] BYREF
  CSwapChainProp *v18; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v6 = 0;
  EnterCrit(1LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    v10 = *(_WORD *)(v8 + 42) & 0x2FFF;
    if ( v10 != 669 && v10 != 671 && *(char *)(v8 + 19) >= 0 && *(char *)(v8 + 20) >= 0 && *(__int16 *)(v8 + 42) >= 0 )
    {
      v8 = *((_QWORD *)v9 + 2);
      if ( !v8 || (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 520), 0, 0) & 1) == 0 )
      {
        v11 = IsWindowDesktopComposed(v9);
        LOBYTE(v12) = 1;
        v13 = v11;
        if ( (int)DxgkReferenceCompositionObject(a3, 1LL, 1LL, v12, &v17) >= 0 )
        {
          CWindowProp::GetProp<CSwapChainProp>(v9, &v18);
          v14 = v18;
          if ( !v18 )
          {
            if ( !(unsigned int)CSwapChainProp::CreateSwapChainProp(v17, &v18) )
              goto LABEL_19;
            v14 = v18;
            v6 = CWindowProp::SetProp(v18, (unsigned __int64)v9);
            if ( v6 )
            {
              if ( (int)CreateVisRgnTracker(v9, 2) >= 0 )
              {
LABEL_17:
                v6 = 1;
                if ( v13 )
                  v6 = CSwapChainProp::NotifyDwm(v14, v9);
                goto LABEL_19;
              }
              v6 = 0;
            }
            (**(void (__fastcall ***)(CSwapChainProp *))v14)(v14);
            goto LABEL_19;
          }
          v15 = v17;
          if ( *((void **)v18 + 3) == v17 )
          {
            *((_DWORD *)v18 + 8) = 0;
            v6 = 1;
            DxgkReleaseCompositionObjectReference(v17);
            goto LABEL_19;
          }
          if ( a2 || *((_DWORD *)v18 + 8) )
          {
            CSwapChainProp::ClearCompositionSurfaceObj(v18);
            if ( *((_QWORD *)v14 + 3) )
            {
              LODWORD(v18) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 92LL);
            }
            *((_QWORD *)v14 + 3) = v15;
            *((_DWORD *)v14 + 8) = 0;
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
