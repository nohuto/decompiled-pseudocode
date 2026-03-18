/*
 * XREFs of ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18002A51C
 * Callers:
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18002A280 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180037978 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180029B84 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18002A770 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?UpdateDirtyAccum@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEA_N@Z @ 0x18002B1C0 (-UpdateDirtyAccum@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEA_N@Z.c)
 *     ?IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV2@@Z @ 0x18002E870 (-IntersectAliasedBoundsRectFWithSurfaceRect@@YA_NAEBUMilRectF@@AEBV-$TMilRect_@HUtagRECT@@UMilPo.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1800377F4 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180094200 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     Template_xxxxx @ 0x18011448C (Template_xxxxx.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801403AC (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessPresentHistoryToken(
        CGdiSpriteBitmap *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  unsigned int v2; // ebx
  struct tagRECT *v3; // rsi
  char v5; // r12
  char v6; // al
  char v7; // r12
  char *v8; // r14
  int updated; // eax
  int v10; // ecx
  unsigned int v11; // r15d
  __int64 v12; // rsi
  __int64 i; // rdx
  __int64 v14; // r13
  __int64 v15; // r15
  CWindowNode *v16; // r13
  unsigned int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  int v22; // eax
  LONG left; // ecx
  struct tagRECT v24; // xmm0
  LONG top; // eax
  int v26; // eax
  int v27; // eax
  signed __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  bool v31; // [rsp+40h] [rbp-40h] BYREF
  struct tagPOINT v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 v33; // [rsp+50h] [rbp-30h]
  struct tagRECT v34; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v35; // [rsp+68h] [rbp-18h] BYREF

  v2 = 0;
  v32 = (struct tagPOINT)a2;
  v3 = (struct tagRECT *)a2;
  if ( *((_QWORD *)this + 30) )
  {
    v5 = *((_BYTE *)this + 516);
    v31 = 0;
    v6 = v5 | 1;
    v7 = v5 & 1;
    *((_BYTE *)this + 516) = v6;
    if ( *(_DWORD *)a2 == 1 )
      v8 = (char *)a2 + 56;
    else
      v8 = (char *)a2 + 40;
    v33 = *((_QWORD *)a2 + 3);
    updated = CGdiSpriteBitmap::UpdateDirtyAccum(this, (const struct tagRECT *)(v8 + 4), *(_DWORD *)v8, &v31);
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
        v12 = v33;
        do
        {
          for ( i = 0LL; i < 4; ++i )
            *((float *)&v35.left + i) = (float)*(int *)((char *)&v35.left
                                                      + (_QWORD)&v8[4 * i + 4 + 16LL * v11 - (_QWORD)&v35]);
          v14 = *((_QWORD *)this + 30);
          v34.left = 0;
          v34.top = 0;
          v34.right = *(_DWORD *)(v14 + 184);
          v34.bottom = *(_DWORD *)(v14 + 188);
          if ( (unsigned __int8)IntersectAliasedBoundsRectFWithSurfaceRect(&v35, &v34, &v34) )
            CBitmapOfDeviceBitmaps::AddUpdateRect(v14, v12, &v34);
          ++v11;
        }
        while ( v11 < *(_DWORD *)v8 );
        v3 = (struct tagRECT *)v32;
      }
      v15 = 0LL;
      if ( *((_DWORD *)this + 148) )
      {
        while ( 1 )
        {
          v16 = *(CWindowNode **)(*((_QWORD *)this + 71) + 8 * v15);
          if ( !v7 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xxxxx(
              v10,
              (unsigned int)&EVTDESC_BIND_GDISPRITEBITMAP_FIRST_TOKEN,
              (_DWORD)this,
              v33,
              (char)v16,
              *((_QWORD *)v16 + 18),
              *((_QWORD *)this + 27));
          if ( qword_1801EFD28 )
          {
            v17 = *((_DWORD *)qword_1801EFD28 + 18);
            v18 = 0LL;
            if ( v17 )
            {
              while ( 1 )
              {
                v19 = *(_QWORD *)(*((_QWORD *)qword_1801EFD28 + 6) + 8 * v18);
                if ( *(_BYTE *)(v19 + 304) || *(_BYTE *)(v19 + 303) || *(_BYTE *)(v19 + 220) || *(_DWORD *)(v19 + 216) )
                  break;
                v18 = (unsigned int)(v18 + 1);
                if ( (unsigned int)v18 >= v17 )
                  goto LABEL_22;
              }
              if ( v3->left == 1 )
              {
                left = v3[3].left;
                if ( left || v3[3].top )
                {
                  v24 = v3[2];
                  v32.x = v3[3].left;
                  v34 = v24;
                  v34.right = left + v24.right;
                  v34.left = left + _mm_cvtsi128_si32((__m128i)v24);
                  top = v3[3].top;
                  v34.top = top + v24.top;
                  v34.bottom = top + v24.bottom;
                  v32.y = top;
                  v35 = v3[2];
                  v26 = CWindowNode::NotifyMoveOptimization(v16, &v35, 0LL, &v32, 0LL);
                  v2 = v26;
                  if ( v26 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x3D8u);
                    return v2;
                  }
                  v27 = CWindowNode::NotifyDeviceBitmapDirtySurface(v16, &v34, 1u, v7 == 0, 1);
                  v2 = v27;
                  if ( v27 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x3E2u);
                    return v2;
                  }
                }
              }
            }
          }
LABEL_22:
          v20 = CWindowNode::NotifyDeviceBitmapDirtySurface(
                  v16,
                  (const struct tagRECT *)(v8 + 4),
                  *(_DWORD *)v8,
                  v7 == 0,
                  0);
          v2 = v20;
          if ( v20 < 0 )
            break;
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= *((_DWORD *)this + 148) )
            goto LABEL_24;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x3E9u);
      }
      else
      {
LABEL_24:
        if ( !v31 && (*((_DWORD *)this + 150) == 2 || v7)
          || (v22 = CGdiSpriteBitmap::NotifyDirty((CGdiSpriteBitmap *)((char *)this + 144), 0LL, 2u, 0LL),
              v2 = v22,
              v22 >= 0) )
        {
          if ( v3->left == 3 )
          {
            v28 = *(_QWORD *)&v3[2].left;
            if ( v28 >= 0 )
            {
              if ( v28 )
              {
                v30 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(
                        (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 96LL),
                        v28);
                v2 = v30;
                if ( v30 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x408u);
              }
            }
            else
            {
              v29 = *((_QWORD *)this + 27);
              *((_BYTE *)this + 516) |= 0x10u;
              *((_QWORD *)this + 65) = v29;
              *((_QWORD *)this + 66) = *(_QWORD *)&v3[2].left;
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x3F6u);
        }
      }
    }
  }
  return v2;
}
