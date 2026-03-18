/*
 * XREFs of ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A2E8
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SupportsMoveOptimization@CDWMSwapChain@@MEBA_NXZ @ 0x18007A4E0 (-SupportsMoveOptimization@CDWMSwapChain@@MEBA_NXZ.c)
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A6E0 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800B9B18 (-TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xx @ 0x18011436C (Template_xx.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180169220 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CSwapChainBase::Present(
        HRGN *this,
        HRGN a2,
        unsigned int a3,
        unsigned int a4,
        struct RenderTargetPresentParameters *a5)
{
  __int64 (*v9)(void); // rax
  char v10; // al
  int (*v11)(CDWMSwapChain *__hidden, HRGN, unsigned int, unsigned int, struct RenderTargetPresentParameters *); // rax
  int v12; // eax
  signed int v13; // ebx
  HRGN v14; // rcx
  HRGN v15; // rcx
  HRGN v16; // rcx
  bool (__fastcall *v17)(CDWMSwapChain *__hidden); // rax
  bool v18; // al
  __int64 v19; // rcx
  bool v21; // si
  HRGN RectRgn; // rax
  signed int v23; // eax
  int v24; // edx
  unsigned int v25; // ecx
  int v26; // r8d
  signed int v27; // eax
  int v28; // edx
  unsigned int v29; // ecx
  int v30; // r8d
  signed int v31; // eax
  int v32; // edx
  unsigned int v33; // ecx
  int v34; // r8d
  signed int LastError; // eax
  int v36; // edx
  unsigned int v37; // ecx
  int v38; // r8d
  signed int v39; // eax
  int v40; // edx
  unsigned int v41; // ecx
  int v42; // r8d

  v9 = (__int64 (*)(void))*((_QWORD *)*this + 10);
  if ( (char *)v9 == (char *)CDWMSwapChain::SupportsMoveOptimization )
    v10 = CDWMSwapChain::SupportsMoveOptimization((CDWMSwapChain *)this);
  else
    v10 = v9();
  if ( !v10 )
  {
LABEL_4:
    v11 = (int (*)(CDWMSwapChain *__hidden, HRGN, unsigned int, unsigned int, struct RenderTargetPresentParameters *))*((_QWORD *)*this + 33);
    if ( v11 == CDWMSwapChain::PresentInternal )
      v12 = CDWMSwapChain::PresentInternal((CDWMSwapChain *)this, a2, a3, a4, a5);
    else
      v12 = ((__int64 (__fastcall *)(HRGN *, HRGN, _QWORD, _QWORD, struct RenderTargetPresentParameters *))v11)(
              this,
              a2,
              a3,
              a4,
              a5);
    v13 = v12;
    goto LABEL_7;
  }
  v21 = CSwapChainBase::TryToOrderMetaData((CSwapChainBase *)this);
  SetLastError(0);
  RectRgn = CreateRectRgn(0, 0, 0, 0);
  this[26] = RectRgn;
  if ( RectRgn )
  {
    if ( v21 )
    {
      if ( !a2 )
        goto LABEL_4;
      SetLastError(0);
      if ( CombineRgn(this[26], this[26], a2, 2) )
      {
        if ( !this[25] || (SetLastError(0), CombineRgn(this[26], this[26], this[25], 4)) )
        {
          if ( !this[27] )
            goto LABEL_4;
          SetLastError(0);
          if ( CombineRgn(this[26], this[26], this[27], 2) )
            goto LABEL_4;
          LastError = GetLastError();
          v13 = LastError;
          if ( LastError > 0 )
            v13 = (unsigned __int16)LastError | 0x80070000;
          if ( v13 >= 0 )
            v13 = CheckGUIHandleQuota(v37, v36, v38);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xDAu);
        }
        else
        {
          v31 = GetLastError();
          v13 = v31;
          if ( v31 > 0 )
            v13 = (unsigned __int16)v31 | 0x80070000;
          if ( v13 >= 0 )
            v13 = CheckGUIHandleQuota(v33, v32, v34);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xD2u);
        }
      }
      else
      {
        v27 = GetLastError();
        v13 = v27;
        if ( v27 > 0 )
          v13 = (unsigned __int16)v27 | 0x80070000;
        if ( v13 >= 0 )
          v13 = CheckGUIHandleQuota(v29, v28, v30);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xCBu);
      }
    }
    else
    {
      SetLastError(0);
      if ( CombineRgn(this[26], this[26], a2, 2) )
        goto LABEL_4;
      v39 = GetLastError();
      v13 = v39;
      if ( v39 > 0 )
        v13 = (unsigned __int16)v39 | 0x80070000;
      if ( v13 >= 0 )
        v13 = CheckGUIHandleQuota(v41, v40, v42);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xE3u);
    }
  }
  else
  {
    v23 = GetLastError();
    v13 = v23;
    if ( v23 > 0 )
      v13 = (unsigned __int16)v23 | 0x80070000;
    if ( v13 >= 0 )
      v13 = CheckGUIHandleQuota(v25, v24, v26);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC2u);
  }
LABEL_7:
  v14 = this[25];
  if ( v14 )
  {
    DeleteObject(v14);
    this[25] = 0LL;
  }
  v15 = this[27];
  if ( v15 )
  {
    DeleteObject(v15);
    this[27] = 0LL;
  }
  v16 = this[26];
  if ( v16 )
  {
    DeleteObject(v16);
    this[26] = 0LL;
  }
  *((_DWORD *)this + 62) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 28, 48LL);
  v17 = (bool (__fastcall *)(CDWMSwapChain *__hidden))*((_QWORD *)*this + 10);
  if ( v17 == CDWMSwapChain::SupportsMoveOptimization )
    v18 = CDWMSwapChain::SupportsMoveOptimization((CDWMSwapChain *)this);
  else
    v18 = v17((CDWMSwapChain *)this);
  if ( v18 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xx(v19, &EVTDESC_REMOTEAPP_METADATA_STATS, this + 28, *((unsigned int *)this + 62));
  return (unsigned int)v13;
}
