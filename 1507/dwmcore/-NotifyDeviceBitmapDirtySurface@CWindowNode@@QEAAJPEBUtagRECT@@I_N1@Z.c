/*
 * XREFs of ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x18007D060
 * Callers:
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18007E1E0 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180036258 (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18004DEA8 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DFC0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?SwapExisting@CMergedRect@@IEAAXII@Z @ 0x18005117C (-SwapExisting@CMergedRect@@IEAAXII@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18005D184 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x18005D808 (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800DE97C (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x1800FD0E8 (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x1800FD914 (-AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z.c)
 *     Template_xnn @ 0x180106B90 (Template_xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyDeviceBitmapDirtySurface(
        CWindowNode *this,
        const struct tagRECT *a2,
        unsigned int a3,
        _BYTE *a4,
        bool a5)
{
  char v6; // r12
  const struct tagRECT *v7; // rbx
  unsigned int v8; // r15d
  char v9; // r14
  _DWORD *v10; // rdi
  __int64 v11; // r12
  float left; // xmm6_4
  bool v13; // zf
  float v14; // xmm10_4
  float v15; // xmm11_4
  float top; // xmm7_4
  float right; // xmm8_4
  float bottom; // xmm9_4
  float v19; // xmm12_4
  float v20; // xmm13_4
  float v21; // xmm11_4
  float v22; // xmm10_4
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned int v26; // r14d
  char *v27; // rbx
  unsigned int v28; // esi
  unsigned int v29; // r11d
  float *v30; // r10
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float *v34; // rdx
  int v36; // eax
  unsigned int v37; // esi
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  __int64 v40; // rbx
  char v41; // al
  __int64 v42; // rax
  char v43; // cl
  bool v44; // al
  __int64 v46; // r10
  float v47; // xmm2_4
  float *v48; // r10
  float v49; // xmm1_4
  double v50; // xmm0_8
  float v51; // xmm5_4
  unsigned int v52; // eax
  unsigned int v53; // r10d
  _BYTE *v54; // rax
  unsigned int v55; // r9d
  float *v56; // rcx
  double v57; // xmm0_8
  float v58; // xmm4_4
  unsigned int v59; // r8d
  _BYTE *v60; // r11
  __int64 v61; // r9
  unsigned __int64 v62; // r14
  __int64 v63; // r15
  _DWORD *v64; // rax
  CDwmMetaRegion *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r14
  _DWORD *v68; // rax
  int v69; // [rsp+30h] [rbp-D8h]
  char v70; // [rsp+48h] [rbp-C0h]
  char v72; // [rsp+4Ch] [rbp-BCh]
  const struct tagRECT *v73; // [rsp+50h] [rbp-B8h]
  __int128 v74; // [rsp+58h] [rbp-B0h] BYREF
  struct tagRECT v75; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v76; // [rsp+78h] [rbp-90h] BYREF

  v70 = (char)a4;
  v73 = a2;
  v6 = (char)a4;
  v7 = a2;
  v8 = 0;
  v9 = 1;
  if ( a3 )
  {
    v10 = (_DWORD *)((char *)this + 952);
    v11 = 0LL;
    while ( 1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xnn(
          0,
          (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEWINDOW,
          *((_QWORD *)this + 109),
          (_BYTE)a4,
          (__int64)&v7[v8],
          v69,
          (__int64)v10);
      left = (float)v7[v11].left;
      v13 = (*((_BYTE *)this + 90) & 2) == 0;
      v14 = (float)(*((_DWORD *)this + 223) - *((_DWORD *)this + 239));
      v15 = (float)(*((_DWORD *)this + 222) - *v10);
      top = (float)v7[v11].top;
      right = (float)v7[v11].right;
      bottom = (float)v7[v11].bottom;
      v19 = v15 + left;
      v20 = v14 + top;
      v21 = v15 + right;
      v22 = v14 + bottom;
      *(_QWORD *)&v76 = __PAIR64__(LODWORD(v20), LODWORD(v19));
      *((_QWORD *)&v76 + 1) = __PAIR64__(LODWORD(v22), LODWORD(v21));
      if ( !v13 )
      {
        *((_DWORD *)this + 214) = 0;
        *(_QWORD *)((char *)this + 860) = 1LL;
        *((_BYTE *)this + 90) &= ~2u;
        CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1296));
      }
      if ( v21 <= v19 || v22 <= v20 )
        goto LABEL_46;
      if ( qword_1801930E8 )
      {
        v23 = *((_DWORD *)qword_1801930E8 + 18);
        v24 = 0;
        if ( v23 )
        {
          while ( 1 )
          {
            v25 = *(_QWORD *)(*((_QWORD *)qword_1801930E8 + 6) + 8LL * v24);
            if ( *(_BYTE *)(v25 + 149) || *(_BYTE *)(v25 + 148) || *(_BYTE *)(v25 + 288) || *(_DWORD *)(v25 + 284) )
              break;
            if ( ++v24 >= v23 )
              goto LABEL_16;
          }
          v65 = (CWindowNode *)((char *)this + 1296);
          v75.left = (int)left;
          v75.right = (int)right;
          v75.top = (int)top;
          v75.bottom = (int)bottom;
          if ( a5 )
            CDwmMetaRegion::AddRegionRectangleContainingMove(v65, &v75);
          else
            CDwmMetaRegion::AddDirtyRectangle(v65, &v75);
        }
      }
LABEL_16:
      v26 = -1;
      v27 = (char *)this + 792;
      v28 = -1;
      if ( (*((_BYTE *)this + 860) & 0xF) == 0 )
      {
        v52 = *((_DWORD *)this + 216);
        v53 = 0;
        *((_DWORD *)this + 215) = 1;
        if ( v52 > 1 )
        {
          while ( 1 )
          {
            v55 = 0;
            while ( 1 )
            {
              if ( v27[v55 + 64] )
              {
                v57 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v27[16 * v55]);
                if ( *(float *)&v57 > v58 )
                  v53 = v55;
                v59 = v55 + 1;
                if ( v55 + 1 < 4 )
                  break;
              }
LABEL_97:
              if ( ++v55 >= 4 )
                goto LABEL_85;
            }
            v60 = (char *)this + v59 + 856;
            while ( !*v60
                 || !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                       v56,
                       (float *)&v27[16 * v59]) )
            {
              ++v59;
              ++v60;
              if ( v59 >= 4 )
                goto LABEL_97;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v56, (float *)&v27[16 * v59]);
            v27[v61 + 64] = 0;
            --*((_DWORD *)this + 216);
          }
        }
        if ( v52 == 1 )
        {
          v54 = (char *)this + 856;
          while ( !*v54 )
          {
            ++v53;
            ++v54;
            if ( v53 >= 4 )
              goto LABEL_17;
          }
LABEL_85:
          if ( v53 )
            CMergedRect::SwapExisting((const __m128i *)((char *)this + 792), 0, v53);
        }
      }
LABEL_17:
      v29 = 0;
      a4 = (char *)this + 856;
      v30 = (float *)((char *)this + 796);
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
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v27[16 * v26], (float *)&v76);
          }
          else
          {
            *(_OWORD *)&v27[16 * v28] = v76;
            v27[v28 + 64] = 1;
            ++*((_DWORD *)this + 216);
          }
          ++*((_DWORD *)this + 215);
          goto LABEL_45;
        }
      }
      v31 = v30[1];
      v32 = *(v30 - 1);
      if ( v31 <= v32 )
        break;
      v33 = v30[2];
      if ( v33 <= *v30 || v21 <= v19 || v22 <= v20 || v31 <= v19 || v21 <= v32 || v33 <= v20 || v22 <= *v30 )
        break;
      v34 = (float *)&v27[16 * v29];
      if ( v34[2] <= *v34 || v34[3] <= v34[1] )
      {
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues(&v76) )
        {
          *(_OWORD *)v66 = v76;
        }
        else
        {
          *(_QWORD *)(v66 + 8) = 0LL;
          *(_QWORD *)v66 = 0LL;
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
      ++*((_DWORD *)this + 215);
LABEL_45:
      v7 = v73;
      v9 = 1;
LABEL_46:
      ++v8;
      v10 = (_DWORD *)((char *)this + 952);
      ++v11;
      if ( v8 >= a3 )
      {
        v6 = v70;
        goto LABEL_48;
      }
    }
    if ( *((_DWORD *)this + 216) == 4 )
    {
      v74 = *(_OWORD *)(v30 - 1);
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v74, (float *)&v76);
      v47 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v74)
          ? 0.0
          : (float)(*((float *)&v74 + 2) - *(float *)&v74) * (float)(*((float *)&v74 + 3) - *((float *)&v74 + 1));
      v49 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(v46 - 4))
          ? 0.0
          : (float)(v48[2] - *v48) * (float)(v48[1] - *(v48 - 1));
      v50 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v76);
      v22 = *((float *)&v76 + 3);
      v21 = *((float *)&v76 + 2);
      v20 = *((float *)&v76 + 1);
      LODWORD(v19) = v76;
      if ( v51 > (float)((float)(v47 - v49) - *(float *)&v50) )
        v26 = v29;
    }
    goto LABEL_20;
  }
LABEL_48:
  v36 = CDxAccumulationContext::ProcessGdiUpdate(this, 0);
  LODWORD(v73) = v36;
  v37 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x2EDu);
    return v37;
  }
  else
  {
    v38 = *((_QWORD *)this + 3);
    v39 = 0LL;
    if ( !v6 )
      v9 = 0;
    v72 = v9;
    if ( (v38 & 2) != 0 )
      v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v38) = v38 & 1;
    if ( (_DWORD)v38 )
    {
      v67 = (unsigned int)v38;
      do
      {
        v68 = (_DWORD *)CPtrArrayBase::operator[]((__int64 *)this + 3, v39);
        if ( v68 != *((_DWORD **)this + 10) )
          CResource::NotifyOnChanged(v68, 0, 0LL);
        ++v39;
        --v67;
      }
      while ( v67 );
      v9 = v72;
    }
    if ( v6 || v9 )
      CVisual::ResetVisibleRegionForAll(this);
    v40 = *((_QWORD *)this + 10);
    if ( v40 )
    {
      do
      {
        if ( !v6 || (v41 = *(_BYTE *)(v40 + 88), (v41 & 1) != 0) )
        {
          v41 = *(_BYTE *)(v40 + 88);
          if ( (v41 & 2) != 0 )
            break;
        }
        if ( v6 )
        {
          *(_BYTE *)(v40 + 712) |= 1u;
          *(_BYTE *)(v40 + 88) = v41 | 1;
        }
        *(_BYTE *)(v40 + 88) |= 2u;
        v42 = *(_QWORD *)(v40 + 24);
        if ( (v42 & 2) != 0 )
          v42 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v42) = v42 & 1;
        if ( (_DWORD)v42 )
        {
          v62 = 0LL;
          v63 = (unsigned int)v42;
          do
          {
            v64 = (_DWORD *)CPtrArrayBase::operator[]((__int64 *)(v40 + 24), v62);
            if ( v64 != *(_DWORD **)(v40 + 80) )
              CResource::NotifyOnChanged(v64, 0, 0LL);
            ++v62;
            --v63;
          }
          while ( v63 );
        }
        v40 = *(_QWORD *)(v40 + 80);
      }
      while ( v40 );
      v9 = v72;
    }
    if ( v6 )
    {
      *((_BYTE *)this + 88) |= 1u;
      *((_BYTE *)this + 712) |= 1u;
    }
    v43 = *((_BYTE *)this + 88);
    v44 = (v43 & 4) != 0 || v9;
    *((_BYTE *)this + 88) = v43 ^ (v43 ^ (4 * v44)) & 4 | 8;
    return (unsigned int)v73;
  }
}
