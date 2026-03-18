/*
 * XREFs of ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180086800
 * Callers:
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x180086554 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800A5E54 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800637B0 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x180086E50 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?UpdateDirtyAccum@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEA_N@Z @ 0x180087910 (-UpdateDirtyAccum@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEA_N@Z.c)
 *     ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x180088340 (-AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180088BC0 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1800A5D00 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     floor_0 @ 0x1800BC872 (floor_0.c)
 *     ?SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@@Z @ 0x1800FEFC0 (-SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNot.c)
 *     Template_xxxxx @ 0x180100598 (Template_xxxxx.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180123A8C (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180145A54 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessPresentHistoryToken(
        CGdiSpriteBitmap *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  unsigned int v2; // ebx
  struct tagRECT *v3; // r12
  char v5; // al
  char v6; // r15
  bool v7; // zf
  char *v8; // r14
  unsigned int v9; // r8d
  int updated; // eax
  int v11; // ecx
  _BYTE *v12; // r9
  int v13; // r12d
  __int64 v14; // rsi
  LONG v15; // r15d
  LONG v16; // edi
  LONG v17; // ebx
  __m128i v18; // xmm0
  __m128i v19; // xmm6
  __m128i v20; // xmm7
  __m128i v21; // xmm8
  LONG v22; // r14d
  float v23; // xmm0_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rbx
  int v33; // eax
  int valid; // eax
  __int64 v35; // rdi
  CWindowNode *v36; // rbx
  __int64 v37; // rdx
  int v38; // edx
  unsigned int v39; // r8d
  LONG left; // ecx
  struct tagRECT v41; // xmm0
  LONG top; // eax
  int v43; // eax
  _BYTE *v44; // r9
  unsigned int v45; // esi
  int v46; // eax
  int v47; // eax
  int v48; // eax
  signed __int64 v50; // rdx
  __int64 v51; // rax
  int v52; // eax
  char v53; // [rsp+40h] [rbp-99h] BYREF
  bool v54; // [rsp+41h] [rbp-98h] BYREF
  char v55; // [rsp+42h] [rbp-97h]
  HGDIOBJ ho; // [rsp+48h] [rbp-91h] BYREF
  struct tagPOINT v57; // [rsp+50h] [rbp-89h] BYREF
  int v58; // [rsp+58h] [rbp-81h]
  __int64 v59; // [rsp+60h] [rbp-79h]
  struct tagRECT v60; // [rsp+68h] [rbp-71h] BYREF
  struct tagRECT v61; // [rsp+78h] [rbp-61h] BYREF

  v2 = 0;
  *(_QWORD *)&v61.left = a2;
  v3 = (struct tagRECT *)a2;
  if ( !*((_QWORD *)this + 21) )
    return v2;
  v5 = *((_BYTE *)this + 444);
  v54 = 0;
  v6 = v5 & 1;
  *((_BYTE *)this + 444) = v5 | 1;
  v7 = *(_DWORD *)a2 == 1;
  v55 = v5 & 1;
  if ( v7 )
    v8 = (char *)a2 + 56;
  else
    v8 = (char *)a2 + 40;
  v59 = *((_QWORD *)a2 + 3);
  v9 = *(_DWORD *)v8;
  v57 = (struct tagPOINT)v8;
  updated = CGdiSpriteBitmap::UpdateDirtyAccum(this, (const struct tagRECT *)(v8 + 4), v9, &v54);
  v58 = updated;
  v2 = updated;
  if ( updated >= 0 )
  {
    v7 = *(_DWORD *)v8 == 0;
    LODWORD(ho) = 0;
    if ( v7 )
      goto LABEL_48;
    v13 = (int)ho;
    while ( 1 )
    {
      v14 = *((_QWORD *)this + 21);
      v15 = 0;
      *(_QWORD *)&v60.left = 0LL;
      v16 = *(_DWORD *)(v14 + 184);
      v17 = *(_DWORD *)(v14 + 188);
      v18 = _mm_cvtsi32_si128(*(_DWORD *)&v8[16 * v13 + 4]);
      v19 = _mm_cvtsi32_si128(*(_DWORD *)&v8[16 * v13 + 8]);
      v20 = _mm_cvtsi32_si128(*(_DWORD *)&v8[16 * v13 + 12]);
      v21 = _mm_cvtsi32_si128(*(_DWORD *)&v8[16 * v13 + 16]);
      v22 = 0;
      v23 = _mm_cvtepi32_ps(v18).m128_f32[0];
      v60.right = v16;
      v60.bottom = v17;
      LODWORD(v24) = _mm_cvtepi32_ps(v19).m128_u32[0];
      LODWORD(v25) = _mm_cvtepi32_ps(v20).m128_u32[0];
      LODWORD(v26) = _mm_cvtepi32_ps(v21).m128_u32[0];
      if ( v23 >= 16777216.0 || v24 >= 16777216.0 || v25 < -16777215.0 || v26 < -16777215.0 )
        goto LABEL_45;
      if ( v23 >= -16777215.0 )
      {
        v27 = ((int)floor_0((float)(v23 * 16.0) + 0.5) + 7) >> 4;
        if ( v27 > 0 )
          v15 = v27;
        v60.left = v15;
      }
      if ( v24 >= -16777215.0 )
      {
        v28 = ((int)floor_0((float)(v24 * 16.0) + 0.5) + 7) >> 4;
        if ( v28 > 0 )
          v22 = v28;
        v60.top = v22;
      }
      if ( v25 < 16777216.0 )
      {
        v29 = ((int)floor_0((float)(v25 * 16.0) + 0.5) + 7) >> 4;
        if ( v29 < v16 )
          v16 = v29;
        v60.right = v16;
      }
      if ( v26 < 16777216.0 )
      {
        v30 = ((int)floor_0((float)(v26 * 16.0) + 0.5) + 7) >> 4;
        if ( v30 < v17 )
          v17 = v30;
        v60.bottom = v17;
      }
      if ( v16 <= v15 || v17 <= v22 )
      {
LABEL_45:
        *(_QWORD *)&v60.right = 0LL;
        *(_QWORD *)&v60.left = 0LL;
        goto LABEL_46;
      }
      LODWORD(v31) = *(_DWORD *)(v14 + 320);
      ho = 0LL;
      v53 = 0;
      if ( !(_DWORD)v31 )
        goto LABEL_46;
      while ( 1 )
      {
        v31 = (unsigned int)(v31 - 1);
        v32 = *(_QWORD *)(v14 + 296) + 96 * v31;
        if ( *(_DWORD *)(v32 + 8) == (_DWORD)v59 )
          break;
        valid = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::SubtractValidRect(
                  *(_QWORD *)(v14 + 296) + 96 * v31,
                  &v60,
                  &ho);
        if ( valid < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, valid, 0x33Fu);
          goto LABEL_43;
        }
LABEL_39:
        if ( !(_DWORD)v31 )
          goto LABEL_43;
      }
      if ( g_LockAndReadSharedSurfaceTexture )
        CD3DDeviceLevel1::ReadTexture(
          *(CD3DDeviceLevel1 **)(*(_QWORD *)(v32 + 16) + 16LL),
          *(struct ID3D11Texture2D **)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 160LL) + 128LL));
      CBitmap::AddDirtyRect((CBitmap *)(v14 + 24), &v60);
      v33 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::AddValidRect(v32, &v60, &ho, &v53);
      if ( v33 >= 0 )
        break;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x336u);
LABEL_43:
      v11 = (int)ho;
      if ( ho )
        DeleteObject(ho);
LABEL_46:
      v8 = (char *)v57;
      if ( (unsigned int)++v13 >= *(_DWORD *)v57.x )
      {
        v3 = *(struct tagRECT **)&v61.left;
        v2 = v58;
        v6 = v55;
LABEL_48:
        v35 = 0LL;
        if ( !*((_DWORD *)this + 130) )
        {
LABEL_65:
          if ( !v54 && (*((_DWORD *)this + 132) == 2 || v6)
            || (v48 = CGdiSpriteBitmap::NotifyDirty((CGdiSpriteBitmap *)((char *)this + 72), 0LL, 2u, 0LL),
                v2 = v48,
                v48 >= 0) )
          {
            if ( v3->left == 3 )
            {
              v50 = *(_QWORD *)&v3[2].left;
              if ( v50 >= 0 )
              {
                if ( v50 )
                {
                  v52 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(
                          (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 96LL),
                          v50);
                  v2 = v52;
                  if ( v52 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x408u);
                }
              }
              else
              {
                v51 = *((_QWORD *)this + 18);
                *((_BYTE *)this + 444) |= 0x10u;
                *((_QWORD *)this + 56) = v51;
                *((_QWORD *)this + 57) = *(_QWORD *)&v3[2].left;
              }
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x3F6u);
          }
          return v2;
        }
        while ( 1 )
        {
          v36 = *(CWindowNode **)(*((_QWORD *)this + 62) + 8 * v35);
          if ( !v6 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xxxxx(
              v11,
              (unsigned int)&EVTDESC_BIND_GDISPRITEBITMAP_FIRST_TOKEN,
              (_DWORD)this,
              v59,
              (char)v36,
              *((_QWORD *)v36 + 8),
              *((_QWORD *)this + 18));
          if ( qword_1801A39E8 )
          {
            v37 = 0LL;
            if ( *((_DWORD *)qword_1801A39E8 + 18) )
            {
              v12 = (_BYTE *)*((_QWORD *)qword_1801A39E8 + 6);
              while ( !(unsigned __int8)CDisplay::NeedsDesktopMoves(*(CDisplay **)&v12[8 * v37]) )
              {
                v37 = (unsigned int)(v38 + 1);
                if ( (unsigned int)v37 >= v39 )
                  goto LABEL_63;
              }
              if ( v3->left == 1 )
              {
                left = v3[3].left;
                if ( left || v3[3].top )
                {
                  v41 = v3[2];
                  v57.x = v3[3].left;
                  v60 = v41;
                  v60.right = left + v41.right;
                  v60.left = left + _mm_cvtsi128_si32((__m128i)v41);
                  top = v3[3].top;
                  v60.top = top + v41.top;
                  v60.bottom = top + v41.bottom;
                  v57.y = top;
                  v61 = v3[2];
                  v43 = CWindowNode::NotifyMoveOptimization(v36, &v61, 0LL, &v57, 0LL);
                  v45 = v43;
                  if ( v43 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x3D8u);
                    return v45;
                  }
                  LOBYTE(v44) = v6 == 0;
                  v46 = CWindowNode::NotifyDeviceBitmapDirtySurface(v36, &v60, 1u, v44, 1);
                  v45 = v46;
                  if ( v46 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x3E2u);
                    return v45;
                  }
                }
              }
            }
          }
LABEL_63:
          LOBYTE(v12) = v6 == 0;
          v47 = CWindowNode::NotifyDeviceBitmapDirtySurface(
                  v36,
                  (const struct tagRECT *)(v8 + 4),
                  *(_DWORD *)v8,
                  v12,
                  0);
          v2 = v47;
          if ( v47 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x3E9u);
            return v2;
          }
          v35 = (unsigned int)(v35 + 1);
          if ( (unsigned int)v35 >= *((_DWORD *)this + 130) )
            goto LABEL_65;
        }
      }
    }
    if ( v53 )
      goto LABEL_43;
    goto LABEL_39;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x394u);
  return v2;
}
