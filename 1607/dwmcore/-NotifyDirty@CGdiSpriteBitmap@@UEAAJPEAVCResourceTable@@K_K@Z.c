/*
 * XREFs of ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18002A770
 * Callers:
 *     ?ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x180021160 (-ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFY.c)
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18002A280 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18002A51C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180037978 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z @ 0x180029928 (-NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x180029C9C (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z.c)
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18002A280 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x18002B014 (-EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?AddDirtyRect@CGdiSpriteBitmap@@UEAAJAEBUtagRECT@@@Z @ 0x18002B5E0 (-AddDirtyRect@CGdiSpriteBitmap@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800B12E4 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801403AC (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::NotifyDirty(
        CGdiSpriteBitmap *this,
        struct CResourceTable *a2,
        char a3,
        __int64 a4)
{
  struct _RGNDATA *v8; // r14
  int v9; // ebx
  __int64 v10; // rcx
  unsigned int *v11; // r8
  HRGN v12; // r15
  int v13; // eax
  __int64 v14; // r9
  int v15; // r15d
  DWORD nCount; // r12d
  char *Buffer; // r13
  int v18; // eax
  unsigned int v19; // r15d
  bool v20; // zf
  void (*v21)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  unsigned int v23; // r15d
  int v24; // eax
  int v25; // r9d
  unsigned int i; // r12d
  unsigned int v27; // [rsp+28h] [rbp-49h]
  HGDIOBJ v28; // [rsp+38h] [rbp-39h] BYREF
  HGDIOBJ ho; // [rsp+40h] [rbp-31h] BYREF
  HGDIOBJ v30; // [rsp+48h] [rbp-29h] BYREF
  HGDIOBJ v31; // [rsp+50h] [rbp-21h] BYREF
  int v32; // [rsp+58h] [rbp-19h] BYREF
  struct tagPOINT v33; // [rsp+60h] [rbp-11h] BYREF
  struct _RGNDATA *v34; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v35[6]; // [rsp+70h] [rbp-1h] BYREF
  int v36; // [rsp+A4h] [rbp+33h]
  unsigned int v37; // [rsp+D8h] [rbp+67h] BYREF

  memset_0(v35, 0, 0x38uLL);
  v32 = 56;
  ho = 0LL;
  v28 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v9 = CGdiSpriteBitmap::EnsureRedirSurface((CGdiSpriteBitmap *)((char *)this - 144));
  v37 = v9;
  if ( v9 < 0 )
  {
    v27 = 1073;
    v25 = v9;
    goto LABEL_58;
  }
  if ( a2 && (a3 & 6) == 6 )
  {
    v24 = CGdiSpriteBitmap::Dirty((CGdiSpriteBitmap *)((char *)this - 144));
    v37 = v24;
    v9 = v24;
    if ( v24 < 0 )
    {
      v27 = 1088;
      v25 = v24;
LABEL_58:
      MilInstrumentationCheckHR(0x14u, &dword_1801B8DA8, 4u, v25, v27);
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  if ( (a3 & 4) != 0 )
    a4 = 0LL;
  v35[0] = a4;
  v35[1] = (unsigned __int64)&ho & -(__int64)((a3 & 1) != 0);
  v10 = *((_QWORD *)this + 61);
  v35[2] = (unsigned __int64)&v28 & -(__int64)((a3 & 2) != 0);
  v35[3] = &v30;
  v35[4] = &v31;
  v35[5] = &v33;
  if ( (int)CRedirectedGDISurface::GetInformation(v10, 0LL, &v32, v35) < 0 )
    goto LABEL_21;
  if ( (a3 & 5) != 0 )
    *((_BYTE *)this + 372) |= 2u;
  if ( (a3 & 4) != 0 && v28 )
  {
    if ( ho )
    {
      DeleteObject(ho);
      ho = 0LL;
    }
    v12 = (HRGN)v28;
  }
  else
  {
    v12 = (HRGN)ho;
  }
  if ( v36 && v31 )
  {
    for ( i = 0; i < *((_DWORD *)this + 112); ++i )
      CWindowNode::NotifyMoveOptimization(
        *(CWindowNode **)(*((_QWORD *)this + 53) + 8LL * i),
        0LL,
        (HRGN *)&v31,
        &v33,
        (HRGN)v30);
    v30 = 0LL;
  }
  if ( v12 )
  {
    v13 = HrgnToRgnData(v12, &v34, v11);
    v37 = v13;
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B8DA8, 4u, v13, 0x48Bu);
      v8 = v34;
      goto LABEL_24;
    }
    v8 = v34;
    v15 = 0;
    nCount = v34->rdh.nCount;
    Buffer = v34->Buffer;
    if ( nCount )
    {
      while ( 1 )
      {
        v18 = CGdiSpriteBitmap::AddDirtyRect(this, (const struct tagRECT *)&Buffer[16 * v15]);
        v37 = v18;
        v9 = v18;
        if ( v18 < 0 )
          break;
        if ( ++v15 >= nCount )
          goto LABEL_16;
      }
      v27 = 1171;
      goto LABEL_54;
    }
LABEL_16:
    v19 = 0;
    if ( *((_DWORD *)this + 112) )
    {
      while ( 1 )
      {
        v18 = CWindowNode::NotifyDirtySurface(
                *(CWindowNode **)(*((_QWORD *)this + 53) + 8LL * v19),
                (const struct tagRECT *)Buffer,
                nCount,
                v14,
                (*((_BYTE *)this + 372) & 1) == 0,
                v36 != 0);
        v37 = v18;
        v9 = v18;
        if ( v18 < 0 )
          break;
        if ( ++v19 >= *((_DWORD *)this + 112) )
          goto LABEL_19;
      }
      v27 = 1180;
      goto LABEL_54;
    }
LABEL_19:
    *((_BYTE *)this + 372) |= 1u;
  }
  if ( !v28 )
  {
LABEL_21:
    v20 = *((_DWORD *)this + 112) == 0;
    goto LABEL_22;
  }
  v23 = 0;
  v20 = *((_DWORD *)this + 112) == 0;
  if ( *((_DWORD *)this + 112) )
  {
    while ( 1 )
    {
      v18 = CWindowNode::NotifyDirtyClip(*(CWindowNode **)(*((_QWORD *)this + 53) + 8LL * v23), 0LL, (HRGN)v28);
      v37 = v18;
      v9 = v18;
      if ( v18 < 0 )
        break;
      if ( ++v23 >= *((_DWORD *)this + 112) )
        goto LABEL_21;
    }
    v27 = 1190;
LABEL_54:
    v25 = v18;
    goto LABEL_58;
  }
LABEL_22:
  if ( v20 )
    CResource::NotifyOnChanged((char *)this - 128, 0LL, 0LL);
LABEL_24:
  TranslateDXGIorD3DErrorInContext((unsigned int)v9, 13LL, &v37);
  if ( v8 )
  {
    v21 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v21 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v8);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, struct _RGNDATA *))v21)(WPF::g_pProcessHeap, v8);
  }
  if ( ho )
    DeleteObject(ho);
  if ( v28 )
    DeleteObject(v28);
  if ( v30 )
    DeleteObject(v30);
  if ( v31 )
    DeleteObject(v31);
  return v37;
}
