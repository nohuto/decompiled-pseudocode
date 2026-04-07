/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180024570
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18000F7D8 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180023F2C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x180024000 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18003D184 (-Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004F1C0 (IsOpenThemeDataPresent.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CTopLevelWindow *this)
{
  int v1; // edi
  struct CVisual **v2; // rsi
  struct _MARGINS *v4; // rax
  int v5; // edi
  _DWORD *v6; // r9
  int v7; // r11d
  int v8; // edi
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int cxLeftWidth; // eax
  int cyTopHeight; // r8d
  int cxRightWidth; // r9d
  int cyBottomHeight; // edx
  __int64 v16; // rax
  __int128 v17; // xmm0
  struct CVisual *v18; // rax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rax
  __int128 v22; // xmm0
  struct CVisual *v23; // rax
  __int64 v24; // r8
  int v25; // eax
  _DWORD *v26; // rcx
  struct CVisual *v27; // rax
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rax
  __int64 v32; // r14
  int v33; // eax
  int inserted; // eax
  CVisual *v35; // rcx
  __m128i v36; // xmm1
  unsigned __int64 v37; // xmm0_8
  __int64 v38; // rax
  __m128i v39; // xmm2
  __int64 v40; // rcx
  unsigned __int64 v41; // xmm0_8
  int v42; // eax
  unsigned int v43; // [rsp+20h] [rbp-79h]
  struct _MARGINS v44; // [rsp+30h] [rbp-69h] BYREF
  struct _MARGINS v45; // [rsp+40h] [rbp-59h] BYREF
  __int64 v46; // [rsp+50h] [rbp-49h]
  double v47[3]; // [rsp+58h] [rbp-41h] BYREF
  int v48; // [rsp+70h] [rbp-29h] BYREF
  int v49; // [rsp+74h] [rbp-25h] BYREF
  struct _MARGINS v50; // [rsp+78h] [rbp-21h]
  __int128 v51; // [rsp+88h] [rbp-11h]
  int v52; // [rsp+98h] [rbp-1h] BYREF
  int v53; // [rsp+9Ch] [rbp+3h] BYREF
  __int128 v54; // [rsp+A0h] [rbp+7h]
  __int128 v55; // [rsp+B0h] [rbp+17h]
  __int128 v56; // [rsp+C0h] [rbp+27h]

  v1 = 0;
  v2 = (struct CVisual **)((char *)this + 496);
  if ( !*((_QWORD *)this + 62) )
  {
    v32 = *((_QWORD *)this + 93);
    if ( *(_DWORD *)(v32 + 128) )
    {
      v33 = CClientArea::Create(
              *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL),
              *(_DWORD *)(v32 + 128),
              (struct CClientArea **)this + 62);
      v1 = v33;
      if ( v33 >= 0 )
        *((_QWORD *)*v2 + 33) = v32;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x4Cu);
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x75Du);
        goto LABEL_2;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 69) + 32LL), *v2, 0LL, 1, 1);
      v1 = inserted;
      if ( inserted < 0 )
      {
        v43 = 1889;
LABEL_41:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, v43);
        goto LABEL_2;
      }
      v35 = *v2;
      v45 = 0LL;
      CVisual::SetInsetFromParent(v35, &v45);
      if ( (*((_BYTE *)this + 264) & 4) != 0 )
      {
        inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
        v1 = inserted;
        if ( inserted < 0 )
        {
          v43 = 1896;
          goto LABEL_41;
        }
      }
    }
  }
LABEL_2:
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x156Fu);
  }
  else if ( *v2 )
  {
    v52 = 77;
    memset_0(&v53, 0, 0x34uLL);
    v48 = 76;
    memset_0(&v49, 0, 0x24uLL);
    v4 = (struct _MARGINS *)*((_QWORD *)this + 93);
    v5 = *((_DWORD *)this + 152);
    v45 = 0LL;
    v44 = v4[3];
    if ( (unsigned __int8)IsOpenThemeDataPresent() && (v5 & 6) != 0 )
    {
      if ( (*((_BYTE *)this + 264) & 4) != 0 )
        v6 = (_DWORD *)((char *)this + 660);
      else
        v6 = (_DWORD *)((char *)this + 644);
      v7 = v6[1];
      v8 = v6[3];
      v9 = *((_DWORD *)this + 157) - *v6 - *(_DWORD *)(*((_QWORD *)this + 43) + 24LL);
      if ( v9 < 0 )
        v9 = 0;
      v10 = *((_DWORD *)this + 158) - v7 - *(_DWORD *)(*((_QWORD *)this + 44) + 24LL);
      if ( v10 < 0 )
        v10 = 0;
      v11 = *((_DWORD *)this + 160) - v8 - *(_DWORD *)(*((_QWORD *)this + 46) + 28LL);
      if ( v11 < 0 )
        v11 = 0;
      cxLeftWidth = v9 + *v6;
      cyTopHeight = v6[2];
      cxRightWidth = v10 + v7;
      cyBottomHeight = v11 + v8;
    }
    else
    {
      cyBottomHeight = v45.cyBottomHeight;
      cyTopHeight = v45.cyTopHeight;
      cxRightWidth = v45.cxRightWidth;
      cxLeftWidth = v45.cxLeftWidth;
    }
    v44.cxLeftWidth += cxLeftWidth;
    v16 = *((_QWORD *)this + 93);
    v44.cxRightWidth += cyTopHeight;
    v44.cyBottomHeight -= cyBottomHeight;
    v44.cyTopHeight -= cxRightWidth;
    v54 = *(_OWORD *)(v16 + 188);
    v55 = *(_OWORD *)(v16 + 204);
    v17 = *(_OWORD *)(v16 + 220);
    v18 = *v2;
    v56 = v17;
    v19 = *((_QWORD *)v18 + 2);
    v53 = *(_DWORD *)(v19 + 24);
    v20 = MilResource_SendCommand(&v52, 0x38u, *(struct MIL_CHANNEL__ **)(v19 + 16));
    v1 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x86u);
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x1587u);
    }
    else
    {
      v21 = *((_QWORD *)this + 93);
      v50 = v44;
      v22 = *(_OWORD *)(v21 + 48);
      v23 = *v2;
      v51 = v22;
      v24 = *((_QWORD *)v23 + 2);
      v49 = *(_DWORD *)(v24 + 24);
      v25 = MilResource_SendCommand(&v48, 0x28u, *(struct MIL_CHANNEL__ **)(v24 + 16));
      v1 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x86u);
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x158Cu);
      }
      else
      {
        v26 = (_DWORD *)*((_QWORD *)this + 93);
        memset((char *)v47 + 4, 0, 20);
        LODWORD(v47[0]) = 44;
        v47[1] = (double)(v26[53] - v26[51]);
        v27 = *v2;
        v47[2] = (double)(v26[54] - v26[52]);
        v28 = *((_QWORD *)v27 + 2);
        HIDWORD(v47[0]) = *(_DWORD *)(v28 + 24);
        v29 = MilResource_SendCommand(v47, 0x18u, *(struct MIL_CHANNEL__ **)(v28 + 16));
        v1 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x86u);
        if ( v1 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x1593u);
        }
        else
        {
          v30 = *((_QWORD *)this + 100);
          v1 = 0;
          if ( v30 )
          {
            v45.cxLeftWidth = 120;
            v45.cxRightWidth = *(_DWORD *)(v30 + 24);
            *(_QWORD *)&v45.cyTopHeight = 0LL;
            v46 = 0LL;
            if ( *((_BYTE *)this + 796) )
            {
              v44 = 0LL;
              CTopLevelWindow::GetOutsideMargins(this, &v44);
              v36 = *(__m128i *)(*((_QWORD *)this + 93) + 48LL);
              v45.cyTopHeight = v44.cxLeftWidth;
              v45.cyBottomHeight = v44.cyTopHeight;
              v37 = _mm_srli_si128(v36, 8).m128i_u64[0];
              LODWORD(v46) = v37 - v44.cxRightWidth - v36.m128i_i32[0] - v44.cxLeftWidth;
              HIDWORD(v46) = HIDWORD(v37) - v36.m128i_i32[1] - v44.cyBottomHeight - v44.cyTopHeight;
            }
            else
            {
              v38 = *((_QWORD *)this + 93);
              v39 = *(__m128i *)(v38 + 204);
              v40 = *(_QWORD *)(v38 + 204);
              *(_QWORD *)&v44.cxLeftWidth = *(_QWORD *)(v38 + 172);
              v41 = _mm_srli_si128(v39, 8).m128i_u64[0];
              LODWORD(v46) = (int)(float)((float)((int)v41 - v40) * *(float *)&v44.cxLeftWidth);
              HIDWORD(v46) = (int)(float)((float)(HIDWORD(v41) - HIDWORD(v40)) * *(float *)&v44.cxRightWidth);
            }
            v42 = CResource::Send(*((CResource **)this + 100), &v45, 0x18u);
            v1 = v42;
            if ( v42 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v42, 0x181Bu);
          }
          if ( v1 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x1596u);
        }
      }
    }
  }
  return (unsigned int)v1;
}
