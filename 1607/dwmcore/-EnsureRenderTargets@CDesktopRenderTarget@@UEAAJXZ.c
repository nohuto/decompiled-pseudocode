/*
 * XREFs of ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800769A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180074110 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x180074380 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180076D60 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800770E0 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180077178 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800772E8 (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x1800B70B0 (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::EnsureRenderTargets(CDesktopRenderTarget *this)
{
  int v2; // ebp
  int v3; // r12d
  int v4; // r13d
  int v5; // r14d
  int v6; // esi
  unsigned int v7; // esi
  CHwndRenderTarget *v8; // rcx
  __int64 (*v9)(void); // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  int *v15; // rcx
  unsigned __int8 v16; // al
  int v17; // r10d
  char v18; // al
  int RenderTargets; // eax
  void *v20; // rcx
  CDesktopRenderTarget *v22; // rdi
  __int64 v23; // r15
  struct CHwndRenderTarget *v24; // r14
  struct CDisplay *DisplayNoRef; // rax
  unsigned int v26; // [rsp+20h] [rbp-78h]
  unsigned int v27; // [rsp+20h] [rbp-78h]
  char v28; // [rsp+28h] [rbp-70h]
  char v29; // [rsp+30h] [rbp-68h]
  char v30; // [rsp+38h] [rbp-60h]
  bool v31; // [rsp+40h] [rbp-58h]
  __int128 v32; // [rsp+50h] [rbp-48h] BYREF

  v2 = 0;
  v3 = 0;
  v31 = 0;
  v4 = 0;
  v5 = 0;
  if ( *((_BYTE *)this + 200) )
  {
    *((_BYTE *)this + 200) = 0;
    RenderTargets = CDesktopRenderTarget::CreateRenderTargets((CDesktopRenderTarget *)((char *)this - 152));
    v11 = RenderTargets;
    if ( RenderTargets < 0 )
    {
      v26 = 992;
      goto LABEL_29;
    }
    v31 = *((_DWORD *)this + 8) != 0;
  }
  v6 = *((_DWORD *)this + 32) - 1;
  if ( v6 >= 0 )
  {
    v22 = (CDesktopRenderTarget *)((char *)this - 152);
    v23 = 8LL * v6;
    while ( 1 )
    {
      v24 = *(struct CHwndRenderTarget **)(v23 + *((_QWORD *)this + 13));
      DisplayNoRef = CDesktopRenderTarget::FindDisplayNoRef(v22, v24);
      if ( DisplayNoRef )
      {
        v30 = *((_BYTE *)this + 274);
        v29 = *((_BYTE *)this + 260);
        v28 = *((_BYTE *)this + 272);
        v27 = *((_DWORD *)this + 60);
        v32 = *(_OWORD *)((char *)this + 244);
        RenderTargets = CHwndRenderTarget::InitFullScreen(
                          v24,
                          (__int64)v22,
                          (void (__fastcall ***)(_QWORD))DisplayNoRef,
                          &v32,
                          v27,
                          v28,
                          v29,
                          v30);
        v11 = RenderTargets;
        if ( RenderTargets < 0 )
        {
          v26 = 1018;
          goto LABEL_29;
        }
        RenderTargets = CDesktopRenderTarget::AddRenderTarget((CDesktopRenderTarget *)((char *)this - 152), v24);
        v11 = RenderTargets;
        if ( RenderTargets < 0 )
        {
          v26 = 1019;
          goto LABEL_29;
        }
        DynArray<CCursorVisual *,0>::RemoveAt((char *)this + 104, (unsigned int)v6);
        if ( v24 )
          (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v24 + 16LL))(v24);
        v22 = (CDesktopRenderTarget *)((char *)this - 152);
      }
      v23 -= 8LL;
      if ( --v6 < 0 )
      {
        v5 = 0;
        break;
      }
    }
  }
  v7 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    do
    {
      v8 = *(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8LL * v7);
      v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 256LL);
      if ( (char *)v9 == (char *)CHwndRenderTarget::EnsureRenderTarget )
        v10 = CHwndRenderTarget::EnsureRenderTarget(v8);
      else
        v10 = v9();
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v10, 0x40Au);
        return v11;
      }
      ++v7;
    }
    while ( v7 < *((_DWORD *)this + 8) );
    if ( *((_DWORD *)this + 8) )
    {
      v12 = *((_QWORD *)this + 1);
      v13 = *((unsigned int *)this + 8);
      do
      {
        v14 = *(_QWORD *)(*(_QWORD *)v12 + 152LL);
        if ( v14 )
          v15 = (int *)(v14 + 104);
        else
          v15 = (int *)(*(_QWORD *)v12 + 384LL);
        if ( v3 <= v5 || (v16 = 0, v2 <= v4) )
          v16 = 1;
        v17 = v16;
        if ( v15[2] <= *v15 || (v18 = 0, v15[3] <= v15[1]) )
          v18 = 1;
        if ( v17 )
        {
          if ( v18 )
          {
            v2 = 0;
            v3 = 0;
            v4 = 0;
            v5 = 0;
          }
          else
          {
            v32 = *(_OWORD *)v15;
            v2 = HIDWORD(v32);
            v3 = DWORD2(v32);
            v4 = DWORD1(v32);
            v5 = v32;
          }
        }
        else if ( !v18 )
        {
          if ( *v15 < v5 )
            v5 = *v15;
          if ( v15[1] < v4 )
            v4 = v15[1];
          if ( v15[2] > v3 )
            v3 = v15[2];
          if ( v15[3] > v2 )
            v2 = v15[3];
        }
        v12 += 8LL;
        --v13;
      }
      while ( v13 );
    }
  }
  *((float *)this + 54) = (float)v5;
  *((float *)this + 55) = (float)v4;
  *((float *)this + 56) = (float)v3;
  *((float *)this + 57) = (float)v2;
  RenderTargets = CDesktopRenderTarget::EnsureRemoteAppRenderTargets((CDesktopRenderTarget *)((char *)this - 152));
  v11 = RenderTargets;
  if ( RenderTargets < 0 )
  {
    v26 = 1054;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, RenderTargets, v26);
  }
  else
  {
    v20 = (void *)*((_QWORD *)this + 35);
    if ( v20 && v31 )
      SetEvent(v20);
  }
  return v11;
}
