/*
 * XREFs of ?NotifyDirtyClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEAUHRGN__@@@Z @ 0x180029928
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18002A770 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 * Callees:
 *     ?GetLatestValidSpriteImage@CWindowNode@@AEAAPEAVISpriteImage@@XZ @ 0x180026534 (-GetLatestValidSpriteImage@CWindowNode@@AEAAPEAVISpriteImage@@XZ.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18002FC98 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     Template_n @ 0x180140DFC (Template_n.c)
 *     Template_xdd @ 0x180140E54 (Template_xdd.c)
 */

__int64 __fastcall CWindowNode::NotifyDirtyClip(CWindowNode *this, struct CResourceTable *a2, HRGN a3)
{
  struct _RGNDATA *v4; // rsi
  struct _RGNDATA *v5; // r14
  signed int v7; // ebx
  bool v8; // al
  int v9; // edx
  __int64 v10; // rcx
  struct ISpriteImage *LatestValidSpriteImage; // r15
  unsigned int *v12; // r8
  int v13; // eax
  int v14; // r12d
  int v15; // r13d
  HRGN v16; // rbx
  unsigned int *v17; // r8
  int v18; // eax
  BOOLEAN v19; // al
  struct CResourceTable *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  CRgnGeometry *v23; // rcx
  int v24; // eax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  DWORD v29; // ebx
  char *v30; // r12
  signed int v31; // eax
  DWORD v32; // ebx
  char *Buffer; // r12
  signed int LastError; // eax
  unsigned int v35; // [rsp+20h] [rbp-50h]
  struct _RGNDATA *v36; // [rsp+30h] [rbp-40h] BYREF
  struct _RGNDATA *v37; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v38; // [rsp+40h] [rbp-30h]
  HRGN hrgn; // [rsp+48h] [rbp-28h]
  struct CShape *v40; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp-18h] BYREF

  hrgn = a3;
  v4 = 0LL;
  v5 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  v7 = 0;
  v8 = GetRgnBox(a3, &rc) == 1;
  if ( (*((_BYTE *)this + 1033) || !*((_BYTE *)this + 1004)) && v8 )
    return (unsigned int)v7;
  v40 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xdd(v10, v9, *((_QWORD *)this + 79), *((_DWORD *)this + 212) != 0, *((_QWORD *)this + 105) != 0LL);
  if ( !*((_DWORD *)this + 212) || !*((_QWORD *)this + 105) )
    goto LABEL_21;
  LatestValidSpriteImage = CWindowNode::GetLatestValidSpriteImage(this);
  if ( !LatestValidSpriteImage )
  {
LABEL_11:
    v15 = *((_DWORD *)this + 162) - *((_DWORD *)this + 178);
    LODWORD(v36) = *((_DWORD *)this + 163) - *((_DWORD *)this + 179);
    v14 = (int)v36;
    SetLastError(0);
    v16 = hrgn;
    if ( OffsetRgn(hrgn, v15, v14) )
    {
      v18 = HrgnToRgnData(v16, &v37, v17);
      v7 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x34Au);
        v4 = v37;
        goto LABEL_23;
      }
      v19 = EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DWMCLIPWINDOW);
      v4 = v37;
      if ( v19 )
      {
        if ( v37->rdh.nCount )
        {
          v32 = 0;
          Buffer = v37->Buffer;
          do
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              Template_n(v21, &EVTDESC_ETWGUID_DWMCLIPWINDOW, v22, &Buffer[16 * v32]);
            ++v32;
          }
          while ( v32 < v4->rdh.nCount );
          v14 = (int)v36;
        }
        else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          Template_n(v21, &EVTDESC_ETWGUID_DWMCLIPWINDOW, v22, &v37->rdh.rcBound);
        }
      }
      v23 = (CRgnGeometry *)*((_QWORD *)this + 105);
      v38 = 16 * v4->rdh.nCount;
      LODWORD(v37) = 347;
      v24 = CRgnGeometry::ProcessUpdate(v23, v20, (const struct MILCMD_RGNGEOMETRY *)&v37, v4->Buffer, v38);
      v7 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x4B4u);
      if ( v7 < 0 )
      {
        v35 = 866;
LABEL_42:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v35);
        goto LABEL_23;
      }
      if ( LatestValidSpriteImage
        && (*(unsigned __int8 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)LatestValidSpriteImage + 192LL))(LatestValidSpriteImage) )
      {
        CGeometry::GetShapeDataNoRef(*((CGeometry **)this + 105), (const struct D2D_SIZE_F *)this + 24, &v40);
      }
      *((_BYTE *)this + 1032) = 1;
      SetLastError(0);
      if ( OffsetRgn(hrgn, -v15, -v14) )
      {
LABEL_21:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_x(v10, &EVTDESC_ETWGUID_DWMCLIPWINDOW_Stop, *((_QWORD *)this + 79));
        goto LABEL_23;
      }
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      v35 = 881;
    }
    else
    {
      v31 = GetLastError();
      v7 = v31;
      if ( v31 > 0 )
        v7 = (unsigned __int16)v31 | 0x80070000;
      v35 = 840;
    }
    if ( v7 >= 0 )
      v7 = -2003304445;
    goto LABEL_42;
  }
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_PRE_DWMCLIPWINDOW) )
  {
    v26 = HrgnToRgnData(a3, &v36, v12);
    v7 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x329u);
      v5 = v36;
      goto LABEL_23;
    }
    v5 = v36;
    if ( v36->rdh.nCount )
    {
      v29 = 0;
      v30 = v36->Buffer;
      do
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_n(v27, &EVTDESC_ETWGUID_PRE_DWMCLIPWINDOW, v28, &v30[16 * v29]);
        ++v29;
      }
      while ( v29 < v5->rdh.nCount );
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      Template_n(v27, &EVTDESC_ETWGUID_PRE_DWMCLIPWINDOW, v28, &v36->rdh.rcBound);
    }
  }
  v13 = (*(__int64 (__fastcall **)(struct ISpriteImage *, HRGN))(*(_QWORD *)LatestValidSpriteImage + 240LL))(
          LatestValidSpriteImage,
          a3);
  v7 = v13;
  if ( v13 >= 0 )
    goto LABEL_11;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x340u);
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
