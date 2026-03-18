/*
 * XREFs of ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18007E1E0
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180062648 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18007DF38 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x18007D060 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18007E670 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?UpdateDirtyAccum@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEA_N@Z @ 0x18007F070 (-UpdateDirtyAccum@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEA_N@Z.c)
 *     ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x18007FC10 (-AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180080990 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     floor_0 @ 0x180099B72 (floor_0.c)
 *     Template_xxxxx @ 0x1800E22AC (Template_xxxxx.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1800EFBE4 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801053D8 (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180134640 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 *     ?SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@@Z @ 0x180138520 (-SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNot.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessPresentHistoryToken(
        CGdiSpriteBitmap *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  unsigned int v2; // edi
  struct tagRECT *v3; // r15
  CGdiSpriteBitmap *v4; // rsi
  char v5; // al
  bool v6; // zf
  __int64 v7; // r14
  char *v8; // r13
  int updated; // eax
  int v10; // ecx
  int v11; // r12d
  __int64 v12; // r15
  LONG v13; // r14d
  LONG v14; // esi
  LONG v15; // edi
  LONG v16; // ebx
  __m128i v17; // xmm6
  __m128i v18; // xmm7
  __m128i v19; // xmm8
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rbx
  CWindowNode *v32; // rdi
  unsigned int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  int v38; // eax
  int valid; // eax
  LONG left; // ecx
  struct tagRECT v41; // xmm0
  LONG top; // eax
  int v43; // eax
  _BYTE *v44; // r9
  unsigned int v45; // esi
  int v46; // eax
  signed __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // eax
  char v50; // [rsp+40h] [rbp-99h]
  bool v51; // [rsp+41h] [rbp-98h] BYREF
  _BYTE v52[6]; // [rsp+42h] [rbp-97h] BYREF
  HGDIOBJ ho; // [rsp+48h] [rbp-91h] BYREF
  __int64 v54; // [rsp+50h] [rbp-89h]
  CGdiSpriteBitmap *v55; // [rsp+58h] [rbp-81h]
  int v56; // [rsp+60h] [rbp-79h]
  struct tagRECT v57; // [rsp+68h] [rbp-71h] BYREF
  struct tagRECT v58; // [rsp+78h] [rbp-61h] BYREF

  v2 = 0;
  *(_QWORD *)&v58.left = a2;
  v3 = (struct tagRECT *)a2;
  v4 = this;
  v55 = this;
  if ( *((_QWORD *)this + 21) )
  {
    v5 = *((_BYTE *)this + 444);
    v51 = 0;
    *((_BYTE *)this + 444) = v5 | 1;
    v6 = *(_DWORD *)a2 == 1;
    v7 = *((_QWORD *)a2 + 3);
    v54 = v7;
    v50 = v5 & 1;
    if ( v6 )
      v8 = (char *)a2 + 56;
    else
      v8 = (char *)a2 + 40;
    updated = CGdiSpriteBitmap::UpdateDirtyAccum(this, (const struct tagRECT *)(v8 + 4), *(_DWORD *)v8, &v51);
    v56 = updated;
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x394u);
    }
    else
    {
      v11 = 0;
      if ( *(_DWORD *)v8 )
      {
        while ( 1 )
        {
          v12 = *((_QWORD *)v4 + 21);
          v13 = 0;
          v14 = 0;
          *(_QWORD *)&v57.left = 0LL;
          v15 = *(_DWORD *)(v12 + 184);
          v16 = *(_DWORD *)(v12 + 188);
          v17 = _mm_cvtsi32_si128(*(_DWORD *)&v8[16 * v11 + 8]);
          v18 = _mm_cvtsi32_si128(*(_DWORD *)&v8[16 * v11 + 12]);
          v19 = _mm_cvtsi32_si128(*(_DWORD *)&v8[16 * v11 + 16]);
          v20 = (float)*(int *)&v8[16 * v11 + 4];
          v57.right = v15;
          v57.bottom = v16;
          LODWORD(v21) = _mm_cvtepi32_ps(v17).m128_u32[0];
          LODWORD(v22) = _mm_cvtepi32_ps(v18).m128_u32[0];
          LODWORD(v23) = _mm_cvtepi32_ps(v19).m128_u32[0];
          if ( v20 >= 16777216.0 || v21 >= 16777216.0 || v22 < -16777215.0 || v23 < -16777215.0 )
            goto LABEL_61;
          if ( v20 >= -16777215.0 )
          {
            v24 = ((int)floor_0((float)(v20 * 16.0) + 0.5) + 7) >> 4;
            if ( v24 > 0 )
            {
              v13 = v24;
              v57.left = v24;
            }
          }
          if ( v21 >= -16777215.0 )
          {
            v25 = ((int)floor_0((float)(v21 * 16.0) + 0.5) + 7) >> 4;
            if ( v25 > 0 )
            {
              v14 = v25;
              v57.top = v25;
            }
          }
          if ( v22 < 16777216.0 )
          {
            v26 = ((int)floor_0((float)(v22 * 16.0) + 0.5) + 7) >> 4;
            if ( v26 < v15 )
            {
              v15 = v26;
              v57.right = v26;
            }
          }
          if ( v23 < 16777216.0 )
          {
            v27 = ((int)floor_0((float)(v23 * 16.0) + 0.5) + 7) >> 4;
            if ( v27 < v16 )
            {
              v16 = v27;
              v57.bottom = v27;
            }
          }
          if ( v15 <= v13 || v16 <= v14 )
          {
LABEL_61:
            LODWORD(v7) = v54;
            *(_QWORD *)&v57.right = 0LL;
            *(_QWORD *)&v57.left = 0LL;
            goto LABEL_32;
          }
          LODWORD(v28) = *(_DWORD *)(v12 + 320);
          LODWORD(v7) = v54;
          ho = 0LL;
          v52[0] = 0;
          if ( !(_DWORD)v28 )
            goto LABEL_32;
          while ( 1 )
          {
            v28 = (unsigned int)(v28 - 1);
            v29 = *(_QWORD *)(v12 + 296) + 96 * v28;
            if ( *(_DWORD *)(v29 + 8) == (_DWORD)v7 )
              break;
            valid = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::SubtractValidRect(
                      *(_QWORD *)(v12 + 296) + 96 * v28,
                      &v57,
                      &ho);
            if ( valid < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, valid, 0x33Fu);
              goto LABEL_30;
            }
LABEL_52:
            if ( !(_DWORD)v28 )
              goto LABEL_30;
          }
          if ( g_LockAndReadSharedSurfaceTexture )
            CD3DDeviceLevel1::ReadTexture(
              *(CD3DDeviceLevel1 **)(*(_QWORD *)(v29 + 16) + 16LL),
              *(struct ID3D11Texture2D **)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 160LL) + 128LL));
          CBitmap::AddDirtyRect((CBitmap *)(v12 + 24), &v57);
          v30 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::AddValidRect(v29, &v57, &ho, v52);
          if ( v30 >= 0 )
            break;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x336u);
LABEL_30:
          v10 = (int)ho;
          if ( ho )
            DeleteObject(ho);
LABEL_32:
          v4 = v55;
          if ( (unsigned int)++v11 >= *(_DWORD *)v8 )
          {
            v2 = v56;
            v3 = *(struct tagRECT **)&v58.left;
            goto LABEL_34;
          }
        }
        if ( v52[0] )
          goto LABEL_30;
        goto LABEL_52;
      }
LABEL_34:
      v31 = 0LL;
      if ( *((_DWORD *)v4 + 130) )
      {
        while ( 1 )
        {
          v32 = *(CWindowNode **)(*((_QWORD *)v4 + 62) + 8 * v31);
          if ( !v50 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xxxxx(
              v10,
              (unsigned int)&EVTDESC_BIND_GDISPRITEBITMAP_FIRST_TOKEN,
              (_DWORD)v4,
              v7,
              (char)v32,
              *((_QWORD *)v32 + 10),
              *((_QWORD *)v4 + 18));
          if ( qword_1801930E8 )
          {
            v33 = *((_DWORD *)qword_1801930E8 + 18);
            v34 = 0LL;
            if ( v33 )
            {
              while ( 1 )
              {
                v35 = *(_QWORD *)(*((_QWORD *)qword_1801930E8 + 6) + 8 * v34);
                if ( *(_BYTE *)(v35 + 149) || *(_BYTE *)(v35 + 148) || *(_BYTE *)(v35 + 288) || *(_DWORD *)(v35 + 284) )
                  break;
                v34 = (unsigned int)(v34 + 1);
                if ( (unsigned int)v34 >= v33 )
                  goto LABEL_43;
              }
              if ( v3->left == 1 )
              {
                left = v3[3].left;
                if ( left || v3[3].top )
                {
                  v41 = v3[2];
                  LODWORD(ho) = v3[3].left;
                  v57 = v41;
                  v57.right = left + v41.right;
                  v57.left = left + _mm_cvtsi128_si32((__m128i)v41);
                  top = v3[3].top;
                  v57.top = top + v41.top;
                  v57.bottom = top + v41.bottom;
                  HIDWORD(ho) = top;
                  v58 = v3[2];
                  v43 = CWindowNode::NotifyMoveOptimization(v32, &v58, 0LL, (const struct tagPOINT *)&ho, 0LL);
                  v45 = v43;
                  if ( v43 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x3D8u);
                    return v45;
                  }
                  LOBYTE(v44) = v50 == 0;
                  v46 = CWindowNode::NotifyDeviceBitmapDirtySurface(v32, &v57, 1u, v44, 1);
                  v45 = v46;
                  if ( v46 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x3E2u);
                    return v45;
                  }
                  v4 = v55;
                }
              }
            }
          }
LABEL_43:
          v36 = CWindowNode::NotifyDeviceBitmapDirtySurface(
                  v32,
                  (const struct tagRECT *)(v8 + 4),
                  *(_DWORD *)v8,
                  (_BYTE *)(v50 == 0),
                  0);
          v2 = v36;
          if ( v36 < 0 )
            break;
          v31 = (unsigned int)(v31 + 1);
          if ( (unsigned int)v31 >= *((_DWORD *)v4 + 130) )
            goto LABEL_45;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x3E9u);
      }
      else
      {
LABEL_45:
        if ( !v51 && (*((_DWORD *)v4 + 132) == 2 || v50)
          || (v38 = CGdiSpriteBitmap::NotifyDirty((CGdiSpriteBitmap *)((char *)v4 + 72), 0LL, 2u, 0LL),
              v2 = v38,
              v38 >= 0) )
        {
          if ( v3->left == 3 )
          {
            v47 = *(_QWORD *)&v3[2].left;
            if ( v47 >= 0 )
            {
              if ( v47 )
              {
                v49 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(
                        (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)v4 + 4) + 40LL) + 96LL),
                        v47);
                v2 = v49;
                if ( v49 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x408u);
              }
            }
            else
            {
              v48 = *((_QWORD *)v4 + 18);
              *((_BYTE *)v4 + 444) |= 0x10u;
              *((_QWORD *)v4 + 56) = v48;
              *((_QWORD *)v4 + 57) = *(_QWORD *)&v3[2].left;
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x3F6u);
        }
      }
    }
  }
  return v2;
}
