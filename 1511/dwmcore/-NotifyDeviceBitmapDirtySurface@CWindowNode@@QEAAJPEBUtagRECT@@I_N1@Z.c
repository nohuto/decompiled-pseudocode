/*
 * XREFs of ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800637B0
 * Callers:
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180086800 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036CE0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180036D30 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180048C68 (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18006459C (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x180064814 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x180064A40 (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800FBD14 (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x1801161AC (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x1801169D8 (-AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z.c)
 *     Template_xnn @ 0x180124694 (Template_xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyDeviceBitmapDirtySurface(
        CWindowNode *this,
        const struct tagRECT *a2,
        unsigned int a3,
        _BYTE *a4,
        bool a5)
{
  char v6; // r12
  unsigned int v7; // r15d
  char v8; // di
  _DWORD *v9; // rbx
  LONG *p_right; // rsi
  bool v12; // zf
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm10_4
  float v16; // xmm11_4
  float v17; // xmm12_4
  float v18; // xmm13_4
  float v19; // xmm8_4
  float v20; // xmm9_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned int v26; // r14d
  char *v27; // rbx
  unsigned int v28; // edi
  unsigned int v29; // r11d
  float *v30; // r10
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm3_4
  float *v34; // rdx
  int v36; // eax
  unsigned int v37; // esi
  __int64 v38; // rax
  __int64 v39; // rbx
  char v40; // al
  __int64 v41; // rax
  char v42; // cl
  bool v43; // al
  int v45; // r11d
  double v46; // xmm0_8
  float v47; // xmm4_4
  float v48; // xmm5_4
  unsigned int v49; // eax
  unsigned int v50; // r10d
  _BYTE *v51; // rax
  unsigned int i; // r8d
  float *v53; // rcx
  double v54; // xmm0_8
  float v55; // xmm4_4
  __int64 v56; // r9
  _BYTE *v57; // r11
  __int64 v58; // r9
  __int64 v59; // r14
  __int64 v60; // r15
  __int64 v61; // rax
  CDwmMetaRegion *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // r14
  __int64 v66; // rax
  int v67; // [rsp+30h] [rbp-D8h]
  char v68; // [rsp+48h] [rbp-C0h]
  char v70; // [rsp+4Ch] [rbp-BCh]
  struct tagRECT v71; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v72; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v73; // [rsp+70h] [rbp-98h] BYREF

  v68 = (char)a4;
  v6 = (char)a4;
  v7 = 0;
  v8 = 1;
  if ( a3 )
  {
    v9 = (_DWORD *)((char *)this + 904);
    p_right = &a2->right;
    while ( 1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xnn(
          0,
          (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEWINDOW,
          *((_QWORD *)this + 103),
          (_BYTE)a4,
          (__int64)&a2[v7],
          v67,
          (__int64)v9);
      v12 = *((_BYTE *)this + 73) >= 0;
      v13 = (float)(*((_DWORD *)this + 211) - *((_DWORD *)this + 227));
      v14 = (float)(*((_DWORD *)this + 210) - *v9);
      v15 = (float)*(p_right - 2);
      v16 = (float)*(p_right - 1);
      v17 = (float)*p_right;
      v18 = (float)p_right[1];
      v19 = v14 + v15;
      v20 = v13 + v16;
      v21 = v14 + v17;
      v22 = v13 + v18;
      *(_QWORD *)&v73 = __PAIR64__(LODWORD(v20), LODWORD(v19));
      *((_QWORD *)&v73 + 1) = __PAIR64__(LODWORD(v22), LODWORD(v21));
      if ( !v12 )
      {
        *((_DWORD *)this + 202) = 0;
        *(_QWORD *)((char *)this + 812) = 1LL;
        *((_BYTE *)this + 73) &= ~0x80u;
        CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1248));
      }
      if ( v21 <= v19 || v22 <= v20 )
        goto LABEL_46;
      if ( qword_1801A39E8 )
      {
        v23 = *((_DWORD *)qword_1801A39E8 + 18);
        v24 = 0;
        if ( v23 )
        {
          while ( 1 )
          {
            v25 = *(_QWORD *)(*((_QWORD *)qword_1801A39E8 + 6) + 8LL * v24);
            if ( *(_BYTE *)(v25 + 304) || *(_BYTE *)(v25 + 303) || *(_BYTE *)(v25 + 220) || *(_DWORD *)(v25 + 216) )
              break;
            if ( ++v24 >= v23 )
              goto LABEL_16;
          }
          v62 = (CWindowNode *)((char *)this + 1248);
          v71.left = (int)v15;
          v71.right = (int)v17;
          v71.top = (int)v16;
          v71.bottom = (int)v18;
          if ( a5 )
            CDwmMetaRegion::AddRegionRectangleContainingMove(v62, &v71);
          else
            CDwmMetaRegion::AddDirtyRectangle(v62, &v71);
        }
      }
LABEL_16:
      v26 = -1;
      v27 = (char *)this + 744;
      v28 = -1;
      if ( (*((_BYTE *)this + 812) & 0xF) != 0 )
        goto LABEL_17;
      v49 = *((_DWORD *)this + 204);
      *((_DWORD *)this + 203) = 1;
      v50 = 0;
      if ( v49 > 1 )
        break;
      if ( v49 == 1 )
      {
        v51 = (char *)this + 808;
        while ( !*v51 )
        {
          ++v50;
          ++v51;
          if ( v50 >= 4 )
            goto LABEL_17;
        }
LABEL_83:
        if ( v50 )
          CMergedRectBase<4>::SwapExisting((char *)this + 744, 0LL, v50);
      }
LABEL_17:
      v29 = 0;
      a4 = (char *)this + 808;
      v30 = (float *)((char *)this + 756);
      while ( !*a4 )
      {
        v28 = v29;
LABEL_20:
        ++v29;
        ++a4;
        v30 += 4;
        if ( v29 >= 4 )
        {
          if ( v28 == -1 )
          {
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v27[16 * v26], (float *)&v73);
          }
          else
          {
            *(_OWORD *)&v27[16 * v28] = v73;
            v27[v28 + 64] = 1;
            ++*((_DWORD *)this + 204);
          }
          ++*((_DWORD *)this + 203);
          goto LABEL_45;
        }
      }
      v31 = *(v30 - 1);
      v32 = *(v30 - 3);
      if ( v31 <= v32
        || (v33 = *(v30 - 2), *v30 <= v33)
        || v21 <= v19
        || v22 <= v20
        || v31 <= v19
        || v21 <= v32
        || *v30 <= v20
        || v22 <= v33 )
      {
        if ( *((_DWORD *)this + 204) == 4 )
        {
          v72 = *(_OWORD *)(v30 - 3);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v72, (float *)&v73);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v72);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v27[16 * v45]);
          v46 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v73);
          v22 = *((float *)&v73 + 3);
          v21 = *((float *)&v73 + 2);
          v20 = *((float *)&v73 + 1);
          LODWORD(v19) = v73;
          if ( v48 > (float)(v47 - *(float *)&v46) )
            v26 = v29;
        }
        goto LABEL_20;
      }
      v34 = (float *)&v27[16 * v29];
      if ( v34[2] <= *v34 || v34[3] <= v34[1] )
      {
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues(&v73) )
        {
          *(_OWORD *)v63 = v73;
        }
        else
        {
          *(_QWORD *)(v63 + 8) = 0LL;
          *(_QWORD *)v63 = 0LL;
        }
      }
      else
      {
        if ( *v34 > v19 )
          *v34 = v19;
        if ( v34[1] > v20 )
          v34[1] = v20;
        if ( v21 > v34[2] )
          v34[2] = v21;
        if ( v22 > v34[3] )
          v34[3] = v22;
      }
      ++*((_DWORD *)this + 203);
LABEL_45:
      v9 = (_DWORD *)((char *)this + 904);
      v8 = 1;
LABEL_46:
      ++v7;
      p_right += 4;
      if ( v7 >= a3 )
      {
        v6 = v68;
        goto LABEL_48;
      }
    }
    for ( i = 0; i < 4; ++i )
    {
      while ( v27[i + 64] )
      {
        v54 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v27[16 * i]);
        if ( *(float *)&v54 > v55 )
          v50 = i;
        LODWORD(v56) = i + 1;
        if ( i + 1 >= 4 )
          break;
        v57 = (char *)this + (unsigned int)v56 + 808;
        while ( !*v57
             || !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                   v53,
                   (float *)&v27[16 * (unsigned int)v56]) )
        {
          LODWORD(v56) = v56 + 1;
          ++v57;
          if ( (unsigned int)v56 >= 4 )
            goto LABEL_82;
        }
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v53, (float *)&v27[16 * v56]);
        v27[v58 + 64] = 0;
        --*((_DWORD *)this + 204);
        i = 0;
      }
LABEL_82:
      ;
    }
    goto LABEL_83;
  }
LABEL_48:
  v36 = CDxAccumulationContext::ProcessGdiUpdate(this, 0);
  LODWORD(v73) = v36;
  v37 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x2EEu);
  }
  else
  {
    v38 = *((_QWORD *)this + 3);
    if ( !v6 )
      v8 = 0;
    v70 = v8;
    if ( (v38 & 2) != 0 )
      v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v38) = v38 & 1;
    if ( (_DWORD)v38 )
    {
      v64 = 0LL;
      v65 = (unsigned int)v38;
      do
      {
        v66 = CPtrArrayBase::operator[]((char *)this + 24, v64);
        if ( v66 != *((_QWORD *)this + 8) )
          CResource::NotifyOnChanged(v66, 0LL, 0LL);
        ++v64;
        --v65;
      }
      while ( v65 );
      v8 = v70;
    }
    if ( v6 || v8 )
      CVisual::ResetVisibleRegionForAll(this);
    v39 = *((_QWORD *)this + 8);
    if ( v39 )
    {
      do
      {
        if ( !v6 || (v40 = *(_BYTE *)(v39 + 72), (v40 & 1) != 0) )
        {
          v40 = *(_BYTE *)(v39 + 72);
          if ( (v40 & 2) != 0 )
            break;
        }
        if ( v6 )
        {
          *(_BYTE *)(v39 + 696) |= 1u;
          *(_BYTE *)(v39 + 72) = v40 | 1;
        }
        *(_BYTE *)(v39 + 72) |= 2u;
        v41 = *(_QWORD *)(v39 + 24);
        if ( (v41 & 2) != 0 )
          v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v41) = v41 & 1;
        if ( (_DWORD)v41 )
        {
          v59 = 0LL;
          v60 = (unsigned int)v41;
          do
          {
            v61 = CPtrArrayBase::operator[](v39 + 24, v59);
            if ( v61 != *(_QWORD *)(v39 + 64) )
              CResource::NotifyOnChanged(v61, 0LL, 0LL);
            ++v59;
            --v60;
          }
          while ( v60 );
        }
        v39 = *(_QWORD *)(v39 + 64);
      }
      while ( v39 );
      v8 = v70;
    }
    if ( v6 )
    {
      *((_BYTE *)this + 72) |= 1u;
      *((_BYTE *)this + 696) |= 1u;
    }
    v42 = *((_BYTE *)this + 72);
    v37 = v73;
    v43 = (v42 & 4) != 0 || v8;
    *((_BYTE *)this + 72) = v42 ^ (v42 ^ (4 * v43)) & 4 | 8;
  }
  return v37;
}
