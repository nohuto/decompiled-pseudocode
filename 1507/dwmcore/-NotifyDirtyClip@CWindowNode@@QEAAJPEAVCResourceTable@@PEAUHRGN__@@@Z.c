/*
 * XREFs of ?NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z @ 0x18007CDE4
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18007E670 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18006F900 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 *     ?GetLatestValidSpriteImage@CWindowNode@@AEAAPEAVISpriteImage@@XZ @ 0x180079B78 (-GetLatestValidSpriteImage@CWindowNode@@AEAAPEAVISpriteImage@@XZ.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_n @ 0x180106A3C (Template_n.c)
 *     Template_xdd @ 0x180106A94 (Template_xdd.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 */

__int64 __fastcall CWindowNode::NotifyDirtyClip(CWindowNode *this, struct CResourceTable *a2, HRGN a3)
{
  struct _RGNDATA *v4; // r14
  struct _RGNDATA *v5; // r15
  signed int v7; // esi
  bool v8; // al
  int v9; // edx
  __int64 v10; // rcx
  struct ISpriteImage *LatestValidSpriteImage; // r12
  unsigned int *v12; // r8
  int v13; // eax
  int v14; // ebx
  int v15; // r13d
  int v16; // r8d
  HRGN v17; // rbx
  unsigned int *v18; // r8
  int v19; // eax
  BOOLEAN v20; // al
  struct CResourceTable *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  void **v24; // rcx
  int v25; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  DWORD v30; // ebx
  char *Buffer; // rsi
  signed int LastError; // eax
  DWORD v33; // ebx
  char *v34; // rsi
  signed int v35; // eax
  unsigned int v36; // [rsp+20h] [rbp-50h]
  struct _RGNDATA *v37; // [rsp+30h] [rbp-40h] BYREF
  struct _RGNDATA *v38; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v39; // [rsp+40h] [rbp-30h]
  HRGN hrgn; // [rsp+48h] [rbp-28h]
  struct CShape *v41; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp-18h] BYREF

  hrgn = a3;
  v4 = 0LL;
  v5 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  v7 = 0;
  v8 = GetRgnBox(a3, &rc) == 1;
  if ( (*((_BYTE *)this + 1273) || !*((_BYTE *)this + 1244)) && v8 )
    return (unsigned int)v7;
  v41 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xdd(v10, v9, *((_QWORD *)this + 109), *((_DWORD *)this + 272) != 0, *((_QWORD *)this + 135) != 0LL);
  if ( !*((_DWORD *)this + 272) || !*((_QWORD *)this + 135) )
    goto LABEL_21;
  LatestValidSpriteImage = CWindowNode::GetLatestValidSpriteImage(this);
  if ( LatestValidSpriteImage )
  {
    if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_PRE_DWMCLIPWINDOW) )
    {
      v27 = HrgnToRgnData(a3, &v37, v12);
      v7 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x328u);
        v5 = v37;
        goto LABEL_23;
      }
      v5 = v37;
      if ( v37->rdh.nCount )
      {
        v30 = 0;
        Buffer = v37->Buffer;
        do
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_n(v28, &EVTDESC_ETWGUID_PRE_DWMCLIPWINDOW, v29, &Buffer[16 * v30]);
          ++v30;
        }
        while ( v30 < v5->rdh.nCount );
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        Template_n(v28, &EVTDESC_ETWGUID_PRE_DWMCLIPWINDOW, v29, &v37->rdh.rcBound);
      }
    }
    v13 = (*(__int64 (__fastcall **)(struct ISpriteImage *, HRGN))(*(_QWORD *)LatestValidSpriteImage + 328LL))(
            LatestValidSpriteImage,
            a3);
    v7 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x33Fu);
      goto LABEL_23;
    }
  }
  v15 = *((_DWORD *)this + 222) - *((_DWORD *)this + 238);
  LODWORD(v37) = *((_DWORD *)this + 223) - *((_DWORD *)this + 239);
  v14 = (int)v37;
  SetLastError(0);
  v16 = v14;
  v17 = hrgn;
  if ( !OffsetRgn(hrgn, v15, v16) )
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    v36 = 839;
    goto LABEL_55;
  }
  v19 = HrgnToRgnData(v17, &v38, v18);
  v7 = v19;
  if ( v19 >= 0 )
  {
    v20 = EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DWMCLIPWINDOW);
    v4 = v38;
    if ( v20 )
    {
      if ( v38->rdh.nCount )
      {
        v33 = 0;
        v34 = v38->Buffer;
        do
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_n(v22, &EVTDESC_ETWGUID_DWMCLIPWINDOW, v23, &v34[16 * v33]);
          ++v33;
        }
        while ( v33 < v4->rdh.nCount );
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        Template_n(v22, &EVTDESC_ETWGUID_DWMCLIPWINDOW, v23, &v38->rdh.rcBound);
      }
    }
    v24 = (void **)*((_QWORD *)this + 135);
    v39 = 16 * v4->rdh.nCount;
    LODWORD(v38) = 247;
    v25 = CRgnGeometry::ProcessUpdate(v24, v21, (const struct MILCMD_RGNGEOMETRY *)&v38, v4->Buffer, v39);
    v7 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x4B3u);
    if ( v7 < 0 )
    {
      v36 = 865;
LABEL_57:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v36);
      goto LABEL_23;
    }
    if ( LatestValidSpriteImage
      && (*(unsigned __int8 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)LatestValidSpriteImage + 280LL))(LatestValidSpriteImage) )
    {
      CGeometry::GetShapeDataNoRef(*((CGeometry **)this + 135), (const struct D2D_SIZE_F *)((char *)this + 148), &v41);
    }
    *((_BYTE *)this + 1272) = 1;
    SetLastError(0);
    if ( OffsetRgn(hrgn, -v15, -(int)v37) )
    {
LABEL_21:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(v10, &EVTDESC_ETWGUID_DWMCLIPWINDOW_Stop, *((_QWORD *)this + 109));
      goto LABEL_23;
    }
    v35 = GetLastError();
    v7 = v35;
    if ( v35 > 0 )
      v7 = (unsigned __int16)v35 | 0x80070000;
    v36 = 880;
LABEL_55:
    if ( v7 >= 0 )
      v7 = -2003304445;
    goto LABEL_57;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x349u);
  v4 = v38;
LABEL_23:
  if ( v5 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
  if ( v4 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
  return (unsigned int)v7;
}
