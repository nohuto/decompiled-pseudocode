/*
 * XREFs of ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18003B164
 * Callers:
 *     ?UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z @ 0x18003CC2C (-UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z.c)
 * Callees:
 *     ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x180036510 (-IsStereoEnabled@CDisplaySet@@QEBA_NXZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsStereoDisplay@CDesktopRenderTarget@@UEAAJIPEA_N@Z @ 0x180075E10 (-IsStereoDisplay@CDesktopRenderTarget@@UEAAJIPEA_N@Z.c)
 *     ?GetNumberOfDisplays@CDesktopRenderTarget@@UEAAJPEAI@Z @ 0x180075E80 (-GetNumberOfDisplays@CDesktopRenderTarget@@UEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::CheckStereoState(CComposition *this)
{
  int CurrentDisplaySet; // eax
  CDisplaySet *v3; // r14
  unsigned int v4; // ebx
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  CDesktopRenderTarget *v8; // rdi
  __int64 v9; // rcx
  int v10; // r15d
  int v11; // r13d
  int v12; // r12d
  __int64 (__fastcall *v13)(CDesktopRenderTarget *__hidden, unsigned int *); // rax
  int NumberOfDisplays; // eax
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 (__fastcall *v17)(CDesktopRenderTarget *__hidden, unsigned int, bool *); // rax
  int v18; // eax
  __int64 v19; // rcx
  int v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-10h]
  CDisplaySet *v23; // [rsp+78h] [rbp+48h] BYREF
  bool IsStereoEnabled; // [rsp+80h] [rbp+50h]
  unsigned int v25; // [rsp+88h] [rbp+58h] BYREF

  v23 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v23);
  v3 = v23;
  v4 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v22 = 4060;
    v21 = CurrentDisplaySet;
    goto LABEL_35;
  }
  IsStereoEnabled = CDisplaySet::IsStereoEnabled(v23);
  PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(this);
  v8 = PrimaryDesktopRenderTargetNoRef;
  if ( !PrimaryDesktopRenderTargetNoRef )
    goto LABEL_20;
  v9 = *(_QWORD *)PrimaryDesktopRenderTargetNoRef;
  v25 = 0;
  v10 = 0;
  v11 = *((_DWORD *)this + 53);
  v12 = 0;
  v13 = *(__int64 (__fastcall **)(CDesktopRenderTarget *__hidden, unsigned int *))(v9 + 184);
  if ( v13 == CDesktopRenderTarget::GetNumberOfDisplays )
    NumberOfDisplays = CDesktopRenderTarget::GetNumberOfDisplays(v8, &v25);
  else
    NumberOfDisplays = v13(v8, &v25);
  v4 = NumberOfDisplays;
  if ( NumberOfDisplays >= 0 )
  {
    v15 = 0;
    if ( v25 )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)v8;
        LOBYTE(v23) = 0;
        v17 = *(__int64 (__fastcall **)(CDesktopRenderTarget *__hidden, unsigned int, bool *))(v16 + 248);
        v18 = v17 == CDesktopRenderTarget::IsStereoDisplay
            ? CDesktopRenderTarget::IsStereoDisplay(v8, v15, (bool *)&v23)
            : v17(v8, v15, (bool *)&v23);
        v4 = v18;
        if ( v18 < 0 )
          break;
        if ( (_BYTE)v23 )
          ++v10;
        if ( ++v15 >= v25 )
          goto LABEL_13;
      }
      v22 = 4090;
      goto LABEL_27;
    }
LABEL_13:
    if ( *((_DWORD *)v3 + 18) )
    {
      v19 = *((_QWORD *)v3 + 6);
      v6 = *((unsigned int *)v3 + 18);
      do
      {
        if ( *(_BYTE *)(*(_QWORD *)v19 + 296LL) )
          ++v12;
        v19 += 8LL;
        --v6;
      }
      while ( v6 );
    }
    if ( IsStereoEnabled )
    {
      if ( !v10 && v12 && v11 )
      {
LABEL_33:
        (*(void (__fastcall **)(CDesktopRenderTarget *))(*(_QWORD *)v8 + 256LL))(v8);
        goto LABEL_20;
      }
      if ( v11 )
        goto LABEL_20;
    }
    if ( !v10 )
      goto LABEL_20;
    goto LABEL_33;
  }
  v22 = 4084;
LABEL_27:
  v21 = v4;
LABEL_35:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v22);
LABEL_20:
  if ( v3 )
    CDisplaySet::Release(v3, v6, v7);
  return v4;
}
