/*
 * XREFs of ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18007E670
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180062648 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18007DF38 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18007E1E0 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x180108310 (-ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFY.c)
 * Callees:
 *     ?AddDirtyRect@CGdiSpriteBitmap@@UEAAJAEBUtagRECT@@@Z @ 0x18000DB50 (-AddDirtyRect@CGdiSpriteBitmap@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800622A0 (-GetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z @ 0x18007CDE4 (-NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z @ 0x18007D784 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N11@Z.c)
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18007DF38 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x18007EEA0 (-EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801053D8 (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::NotifyDirty(
        CGdiSpriteBitmap *this,
        struct CResourceTable *a2,
        char a3,
        __int64 a4)
{
  struct _RGNDATA *v5; // r14
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rcx
  unsigned int *v12; // r8
  HRGN v13; // r15
  int v14; // eax
  __int64 v15; // r9
  int v16; // r15d
  DWORD nCount; // r12d
  char *Buffer; // r13
  unsigned int v19; // r15d
  bool v20; // zf
  void (__fastcall *v21)(WPF::ProcessHeapImpl *, void *); // rdi
  unsigned int v23; // r15d
  unsigned int i; // r12d
  unsigned int v25; // [rsp+28h] [rbp-49h]
  HGDIOBJ v26; // [rsp+38h] [rbp-39h] BYREF
  HGDIOBJ ho; // [rsp+40h] [rbp-31h] BYREF
  HGDIOBJ v28; // [rsp+48h] [rbp-29h] BYREF
  HGDIOBJ v29; // [rsp+50h] [rbp-21h] BYREF
  struct tagPOINT v30; // [rsp+58h] [rbp-19h] BYREF
  struct _RGNDATA *v31; // [rsp+60h] [rbp-11h] BYREF
  int v32; // [rsp+68h] [rbp-9h] BYREF
  __int64 v33; // [rsp+70h] [rbp-1h] BYREF
  __int128 v34; // [rsp+78h] [rbp+7h]
  __int128 v35; // [rsp+88h] [rbp+17h]
  struct tagPOINT *v36; // [rsp+98h] [rbp+27h]
  __int64 v37; // [rsp+A0h] [rbp+2Fh]
  unsigned int v38; // [rsp+D8h] [rbp+67h] BYREF

  v32 = 56;
  v33 = 0LL;
  v36 = 0LL;
  v5 = 0LL;
  v37 = 0LL;
  ho = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v9 = CGdiSpriteBitmap::EnsureRedirSurface((CGdiSpriteBitmap *)((char *)this - 72));
  v38 = v9;
  v10 = v9;
  if ( v9 < 0 )
  {
    v25 = 1073;
    goto LABEL_56;
  }
  if ( a2 && (a3 & 6) == 6 )
  {
    v9 = CGdiSpriteBitmap::Dirty((CGdiSpriteBitmap *)((char *)this - 72));
    v38 = v9;
    v10 = v9;
    if ( v9 < 0 )
    {
      v25 = 1088;
LABEL_56:
      MilInstrumentationCheckHR(0x14u, &dword_18016AB30, 4u, v9, v25);
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  if ( (a3 & 4) != 0 )
    a4 = 0LL;
  v33 = a4;
  *(_QWORD *)&v34 = (unsigned __int64)&ho & -(__int64)((a3 & 1) != 0);
  v11 = *((_QWORD *)this + 61);
  *((_QWORD *)&v34 + 1) = (unsigned __int64)&v26 & -(__int64)((a3 & 2) != 0);
  *(_QWORD *)&v35 = &v28;
  *((_QWORD *)&v35 + 1) = &v29;
  v36 = &v30;
  if ( (int)CRedirectedGDISurface::GetInformation(v11 + 16, 0, &v32, (__int64)&v33) < 0 )
    goto LABEL_21;
  if ( (a3 & 5) != 0 )
    *((_BYTE *)this + 372) |= 2u;
  if ( (a3 & 4) != 0 && v26 )
  {
    if ( ho )
    {
      DeleteObject(ho);
      ho = 0LL;
    }
    v13 = (HRGN)v26;
  }
  else
  {
    v13 = (HRGN)ho;
  }
  if ( HIDWORD(v37) && v29 )
  {
    for ( i = 0; i < *((_DWORD *)this + 112); ++i )
      CWindowNode::NotifyMoveOptimization(
        *(CWindowNode **)(*((_QWORD *)this + 53) + 8LL * i),
        0LL,
        (HRGN *)&v29,
        &v30,
        (HRGN)v28);
    v28 = 0LL;
  }
  if ( v13 )
  {
    v14 = HrgnToRgnData(v13, &v31, v12);
    v38 = v14;
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016AB30, 4u, v14, 0x48Bu);
      v5 = v31;
      goto LABEL_24;
    }
    v5 = v31;
    v16 = 0;
    nCount = v31->rdh.nCount;
    Buffer = v31->Buffer;
    if ( nCount )
    {
      while ( 1 )
      {
        v9 = CGdiSpriteBitmap::AddDirtyRect(this, (const struct tagRECT *)&Buffer[16 * v16]);
        v38 = v9;
        v10 = v9;
        if ( v9 < 0 )
          break;
        if ( ++v16 >= nCount )
          goto LABEL_16;
      }
      v25 = 1171;
      goto LABEL_56;
    }
LABEL_16:
    v19 = 0;
    if ( *((_DWORD *)this + 112) )
    {
      while ( 1 )
      {
        v9 = CWindowNode::NotifyDirtySurface(
               *(CWindowNode **)(*((_QWORD *)this + 53) + 8LL * v19),
               (const struct tagRECT *)Buffer,
               nCount,
               v15,
               (*((_BYTE *)this + 372) & 1) == 0,
               HIDWORD(v37) != 0);
        v38 = v9;
        v10 = v9;
        if ( v9 < 0 )
          break;
        if ( ++v19 >= *((_DWORD *)this + 112) )
          goto LABEL_19;
      }
      v25 = 1180;
      goto LABEL_56;
    }
LABEL_19:
    *((_BYTE *)this + 372) |= 1u;
  }
  if ( !v26 )
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
      v9 = CWindowNode::NotifyDirtyClip(*(CWindowNode **)(*((_QWORD *)this + 53) + 8LL * v23), 0LL, (HRGN)v26);
      v38 = v9;
      v10 = v9;
      if ( v9 < 0 )
        break;
      if ( ++v23 >= *((_DWORD *)this + 112) )
        goto LABEL_21;
    }
    v25 = 1190;
    goto LABEL_56;
  }
LABEL_22:
  if ( v20 )
    CResource::NotifyOnChanged((_DWORD *)this - 14, 0, 0LL);
LABEL_24:
  TranslateDXGIorD3DErrorInContext(v10, 18, &v38);
  if ( v5 )
  {
    v21 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v21 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v5);
    else
      v21(WPF::g_pProcessHeap, v5);
  }
  if ( ho )
    DeleteObject(ho);
  if ( v26 )
    DeleteObject(v26);
  if ( v28 )
    DeleteObject(v28);
  if ( v29 )
    DeleteObject(v29);
  return v38;
}
