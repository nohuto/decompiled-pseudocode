/*
 * XREFs of ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D5F0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ??_ECComplexShape@@UEAAPEAXI@Z @ 0x1800028B0 (--_ECComplexShape@@UEAAPEAXI@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004B848 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18004C8B8 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004FA24 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059930 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A580 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x18006A4C0 (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCDrawListCache@@@Z @ 0x180094B10 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800976A0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097A50 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x1800982D4 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800986DC (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CDrawListCache@@SAJW4DrawListRenderType@@PEAPEAV1@@Z @ 0x1800B0CD0 (-Create@CDrawListCache@@SAJW4DrawListRenderType@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x180111F20 (--1CpuClipShape@@QEAA@XZ.c)
 *     Template_ffff @ 0x180125254 (Template_ffff.c)
 */

__int64 __fastcall CDrawingContext::DrawPrimitiveGroup(
        const struct CVisualTree **this,
        struct CPrimitiveGroup *a2,
        struct CVisual *a3,
        char a4,
        unsigned int *a5)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64, _OWORD *); // rcx
  struct CVisual *v8; // r12
  __int64 v9; // rax
  char v10; // si
  unsigned int v12; // r15d
  __int64 (__fastcall *v13)(__int64, __int64, __int64, __int128 *); // rax
  int v14; // eax
  float v15; // xmm8_4
  int v16; // eax
  __int64 v17; // rcx
  const struct CVisualTree *v18; // rax
  int v19; // eax
  const struct CVisualTree *v20; // r10
  __int64 v21; // rsi
  const struct CVisualTree *v22; // r13
  int v23; // ebx
  struct _LIST_ENTRY *v24; // r15
  struct _LIST_ENTRY *v25; // rax
  int v26; // r12d
  unsigned int Blink; // r8d
  unsigned int v28; // edx
  struct _LIST_ENTRY *v29; // rcx
  __int64 v30; // rax
  _DWORD *v31; // rcx
  __int64 *v32; // r15
  CPrimitiveGroupDrawListGenerator **v33; // r13
  int v34; // edx
  int v35; // ecx
  const struct CVisualTree *v36; // r11
  struct _LIST_ENTRY *v37; // rbx
  struct _LIST_ENTRY *v38; // r10
  int v39; // eax
  unsigned int *v40; // rcx
  char v42; // r10
  unsigned int v43; // r8d
  unsigned int v44; // edx
  float *v45; // rcx
  float v46; // xmm1_4
  char v47; // al
  const struct CVisualTree *v48; // r14
  struct _LIST_ENTRY *v49; // r12
  struct _LIST_ENTRY *v50; // rcx
  CComplexShape *v51; // r15
  __int64 v52; // rax
  struct _LIST_ENTRY *TreeData; // rax
  int v54; // eax
  enum D2D1_ANTIALIAS_MODE v55; // r14d
  CPrimitiveGroupDrawListGenerator *v56; // rbx
  bool v57; // al
  int updated; // eax
  struct _LIST_ENTRY *v59; // rbx
  int v60; // eax
  __int64 v61; // r14
  int TopCpuClipInScope; // eax
  CRectanglesShape *v63; // rbx
  bool (__fastcall *v64)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool v65; // al
  __int64 (__fastcall *v66)(CRectanglesShape *, float *, _QWORD); // rax
  int TightBounds; // eax
  float v68; // xmm2_4
  float v69; // xmm4_4
  float v70; // xmm3_4
  float v71; // xmm5_4
  float v72; // xmm1_4
  float v73; // xmm0_4
  float v74; // xmm7_4
  float v75; // xmm6_4
  __int64 v76; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v78; // r10
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v80; // rax
  struct _LIST_ENTRY *v81; // rdx
  struct _LIST_ENTRY *v82; // rax
  struct _LIST_ENTRY *v83; // r11
  struct _LIST_ENTRY *v84; // rdx
  int v85; // eax
  LPVOID (__fastcall *v86)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  char *v87; // rax
  char *v88; // rcx
  char *v89; // rax
  struct _LIST_ENTRY *v90; // rcx
  __int64 Blink_low; // rax
  unsigned int v92; // edx
  int NewGenerator; // eax
  CComplexShape *(__fastcall *v94)(CComplexShape *, char); // rax
  int v95; // eax
  const struct CMILMatrix *TopByReference; // rax
  int v97; // ecx
  int v98; // r8d
  int v99; // r9d
  unsigned int v100; // [rsp+28h] [rbp-E0h]
  unsigned int v101; // [rsp+48h] [rbp-C0h]
  CRectanglesShape *v102; // [rsp+50h] [rbp-B8h] BYREF
  CVisual *v103; // [rsp+58h] [rbp-B0h]
  unsigned int *v104; // [rsp+60h] [rbp-A8h]
  __int128 v105; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v106; // [rsp+78h] [rbp-90h]
  __int128 v107; // [rsp+88h] [rbp-80h]
  __int128 v108; // [rsp+98h] [rbp-70h]
  int v109; // [rsp+A8h] [rbp-60h]
  float v110; // [rsp+B8h] [rbp-50h] BYREF
  float v111; // [rsp+BCh] [rbp-4Ch]
  float v112; // [rsp+C0h] [rbp-48h]
  float v113; // [rsp+C4h] [rbp-44h]
  __int128 v114; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v115; // [rsp+D8h] [rbp-30h] BYREF
  float v116[4]; // [rsp+E8h] [rbp-20h] BYREF
  CComplexShape *v117; // [rsp+F8h] [rbp-10h] BYREF
  void **v118; // [rsp+100h] [rbp-8h]
  _BYTE *v119; // [rsp+108h] [rbp+0h] BYREF
  _BYTE *v120; // [rsp+110h] [rbp+8h]
  int v121; // [rsp+118h] [rbp+10h]
  __int64 v122; // [rsp+11Ch] [rbp+14h]
  _BYTE v123[16]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v124; // [rsp+138h] [rbp+30h]
  char v125; // [rsp+140h] [rbp+38h]
  __int128 v126; // [rsp+148h] [rbp+40h] BYREF

  v6 = CPrimitiveGroup::GetBounds;
  v8 = a3;
  v104 = a5;
  v9 = *(_QWORD *)a2;
  v10 = 1;
  v12 = 0;
  v103 = a3;
  v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int128 *))(v9 + 128);
  v101 = 0;
  if ( v13 == CPrimitiveGroup::GetBounds )
    v126 = *(_OWORD *)((char *)a2 + 148);
  else
    v13((__int64)a2, 0LL, 0LL, &v126);
  if ( *((_BYTE *)this + 3048) || *((_DWORD *)this + 1621) )
  {
    v114 = _xmm;
    v39 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this, (struct MilRectF *)&v126);
    v23 = v39;
    if ( v39 >= 0 )
      goto LABEL_45;
    v100 = 2652;
LABEL_169:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, v100);
    goto LABEL_45;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v6, &EVTDESC_ETWGUID_DRAWEVENT_Start, 18LL, *((unsigned int *)this + 1620));
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v114 = v126;
    TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)(this + 67));
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)TopByReference, (__int64)&v114, (float *)&v115);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_ffff(v97, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v98, v99, SBYTE8(v115), SBYTE12(v115));
  }
  if ( a4 )
  {
    v12 = *((_DWORD *)a2 + 125);
    v10 = *((_BYTE *)a2 + 504);
    v114 = *(_OWORD *)((char *)a2 + 484);
    v101 = v12;
  }
  v14 = *((_DWORD *)this + 754);
  if ( !v14 )
  {
    v23 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xA7Au);
    goto LABEL_45;
  }
  v15 = *((float *)this[379] + (unsigned int)(v14 - 1));
  if ( v12 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - 1.0)) & _xmm) >= 0.0000011920929
      || !v10
      && ((v109 = 0,
           CBaseMatrixStack::Top((CBaseMatrixStack *)(this + 67), (struct CMILMatrix *)&v105),
           !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)&v105))
       || (CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v105, (__int64)&v114, v116),
           LOBYTE(v76) = 1,
           CScopedClipStack::GetTopGpuClipInScope(this + 114, v76, &v114),
           !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)v116, (float *)&v114))) )
    {
      v101 = 0;
    }
  }
  v16 = *((_DWORD *)this + 134);
  v109 = 0;
  if ( v16 )
  {
    v17 = (unsigned int)(v16 - 1);
    v18 = this[69];
    v105 = *(_OWORD *)((char *)v18 + 68 * v17);
    v106 = *(_OWORD *)((char *)v18 + 68 * v17 + 16);
    v107 = *(_OWORD *)((char *)v18 + 68 * v17 + 32);
    v108 = *(_OWORD *)((char *)v18 + 68 * v17 + 48);
    v19 = *((_DWORD *)v18 + 17 * v17 + 16);
  }
  else
  {
    v19 = dword_1801EAD50;
    v105 = CMILMatrix::Identity;
    v106 = xmmword_1801EAD20;
    v107 = xmmword_1801EAD30;
    v108 = xmmword_1801EAD40;
  }
  v20 = this[781];
  v21 = 0LL;
  v22 = this[54];
  v23 = -2003292412;
  v109 = v19;
  if ( *((_BYTE *)v20 + 32) )
  {
    v24 = (struct _LIST_ENTRY *)((char *)v8 + 320);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v8);
    if ( !TreeDataListHead )
      goto LABEL_31;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      goto LABEL_31;
    while ( 1 )
    {
      v24 = Flink - 14;
      if ( Flink[2].Flink == v78 )
        break;
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        goto LABEL_31;
    }
  }
  if ( v24 )
  {
    v25 = v24[8].Flink;
    v26 = 0;
    if ( v25 )
    {
      Blink = (unsigned int)v25[1].Blink;
      v28 = 0;
      if ( Blink )
      {
        v29 = v25->Flink;
        while ( (const struct CVisualTree *)v29[v28].Flink != v22 )
        {
          if ( ++v28 >= Blink )
            goto LABEL_122;
        }
        v30 = (__int64)&v29[v28];
        if ( v30 )
        {
LABEL_22:
          v23 = v26;
          if ( v26 >= 0 )
          {
            v31 = *(_DWORD **)(v30 + 8);
            v32 = (__int64 *)(v30 + 8);
            if ( v31 && v31[4] )
            {
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v31 + 8LL))(v31);
              *v32 = 0LL;
            }
            if ( *v32 || (v85 = CDrawListCache::Create(0LL, v32), v23 = v85, v85 >= 0) )
              v21 = *v32;
            else
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0x156u);
            goto LABEL_28;
          }
LABEL_148:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x14Cu);
LABEL_28:
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x83u);
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x55Eu);
          }
          v8 = v103;
          goto LABEL_31;
        }
      }
    }
    else
    {
      v86 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v86 == WPF::ProcessHeapImpl::Alloc )
        v87 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x40uLL);
      else
        v87 = (char *)v86(WPF::g_pProcessHeap, 64LL);
      v88 = v87;
      if ( v87 )
      {
        v89 = v87 + 32;
        *((_DWORD *)v88 + 4) = 2;
        *(_QWORD *)v88 = v89;
        *((_QWORD *)v88 + 1) = v89;
        *(_QWORD *)(v88 + 20) = 2LL;
      }
      v24[8].Flink = (struct _LIST_ENTRY *)v88;
      if ( !v88 )
      {
        v26 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12Du);
        v23 = -2147024882;
        goto LABEL_148;
      }
    }
LABEL_122:
    v90 = v24[8].Flink;
    v114 = (unsigned __int64)v22;
    Blink_low = LODWORD(v90[1].Blink);
    v92 = Blink_low + 1;
    if ( (int)Blink_low + 1 < (unsigned int)Blink_low )
    {
      v26 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v92 <= HIDWORD(v90[1].Flink) )
      {
        v90->Flink[Blink_low] = (struct _LIST_ENTRY)v114;
        LODWORD(v90[1].Blink) = v92;
        goto LABEL_125;
      }
      v95 = DynArrayImpl<0>::AddMultipleAndSet(v90, 16LL, 1LL, &v114);
      v26 = v95;
      if ( v95 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v95, 0xC0u);
    }
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x134u);
      v30 = (__int64)v104;
      goto LABEL_22;
    }
LABEL_125:
    v30 = (__int64)&v24[8].Flink->Flink[LODWORD(v24[8].Flink[1].Blink) - 1];
    goto LABEL_22;
  }
LABEL_31:
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xAB3u);
    goto LABEL_45;
  }
  v23 = 0;
  v33 = (CPrimitiveGroupDrawListGenerator **)((char *)a2 + 216);
  if ( !*((_QWORD *)a2 + 27) )
  {
    NewGenerator = CPrimitiveGroup::CreateNewGenerator(a2, (struct CPrimitiveGroupDrawListGenerator **)a2 + 27);
    v23 = NewGenerator;
    if ( NewGenerator < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, NewGenerator, 0x202u);
  }
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xABAu);
    goto LABEL_45;
  }
  if ( CCommonRegistryData::m_fDisableDrawListCaching )
    goto LABEL_60;
  if ( !*(_QWORD *)(v21 + 24) )
    goto LABEL_60;
  v34 = *(_DWORD *)(v21 + 60);
  if ( (v34 & 2) != 0 && *((_BYTE *)this[3] + 1240) != ((v34 & 4) != 0) )
    goto LABEL_60;
  v35 = *((_DWORD *)this + 82);
  if ( *(_DWORD *)(v21 + 68) != (v35 != 0) )
    goto LABEL_60;
  if ( *(_DWORD *)(v21 + 16) )
    goto LABEL_43;
  if ( !*(_BYTE *)(v21 + 72) )
    goto LABEL_40;
  v42 = *(_BYTE *)(v21 + 73);
  if ( v35 || !*((_BYTE *)this[114] + 80 * (unsigned int)(*((_DWORD *)this + 234) - 1)) )
    goto LABEL_58;
  v43 = *((_DWORD *)this + 442);
  v44 = v43 - *((_DWORD *)this[114] + 20 * (unsigned int)(*((_DWORD *)this + 234) - 1) + 2);
  if ( v44 < v43 )
  {
    while ( *((_BYTE *)this[218] + 120 * v44 + 112) )
    {
      if ( ++v44 >= v43 )
        goto LABEL_55;
    }
    goto LABEL_135;
  }
LABEL_55:
  if ( CMILMatrix::Is2DAffine<1>((__int64)this[114] + 80 * (unsigned int)(*((_DWORD *)this + 234) - 1) + 12, 1)
    && (v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v45[1] - 0.0)) & _xmm), v46 < 0.00012207031)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v45[4] - 0.0)) & _xmm) < 0.00012207031
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v45 - 0.0)) & _xmm) < 0.00012207031
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v45[5] - 0.0)) & _xmm) < 0.00012207031 )
  {
LABEL_58:
    v47 = 0;
    goto LABEL_59;
  }
LABEL_135:
  v47 = 1;
LABEL_59:
  if ( v42 != v47 )
    goto LABEL_60;
LABEL_40:
  v36 = this[781];
  v37 = *(struct _LIST_ENTRY **)(v21 + 24);
  if ( *((_BYTE *)v36 + 32) )
  {
    v38 = (struct _LIST_ENTRY *)((char *)v8 + 320);
  }
  else
  {
    v80 = CVisual::GetTreeDataListHead(v8);
    if ( v80 )
    {
      v81 = v80->Flink;
      if ( v80->Flink != v80 )
      {
        while ( (const struct CVisualTree *)v81[2].Flink != v36 )
        {
          v81 = v81->Flink;
          if ( v81 == v80 )
            goto LABEL_42;
        }
        v38 = v81 - 14;
      }
    }
  }
LABEL_42:
  if ( v37 < v38[12].Blink )
  {
    if ( *(_BYTE *)(v21 + 72) )
      goto LABEL_60;
    if ( *((_BYTE *)this[114] + 80 * (unsigned int)(*((_DWORD *)this + 234) - 1)) )
    {
      v59 = 0LL;
      v115 = *(_OWORD *)(v21 + 44);
      if ( *((_BYTE *)v36 + 32) )
      {
        v59 = (struct _LIST_ENTRY *)((char *)v8 + 320);
      }
      else
      {
        v82 = CVisual::GetTreeDataListHead(v8);
        if ( v82 )
        {
          v84 = v82->Flink;
          if ( v82->Flink != v82 )
          {
            while ( v84[2].Flink != v83 )
            {
              v84 = v84->Flink;
              if ( v84 == v82 )
                goto LABEL_75;
            }
            v59 = v84 - 14;
          }
        }
      }
LABEL_75:
      v60 = *((_DWORD *)this + 234);
      v61 = (__int64)v59[9].Blink;
      if ( v60 )
      {
        if ( *((_DWORD *)this[114] + 20 * (unsigned int)(v60 - 1) + 2) )
        {
          v102 = 0LL;
          TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope((CScopedClipStack *)(this + 114), &v102);
          if ( TopCpuClipInScope < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, TopCpuClipInScope, 0x179u);
            goto LABEL_43;
          }
          v63 = v102;
          v64 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v102 + 32LL);
          v65 = v64 == CRectanglesShape::IsRectangles
              ? CRectanglesShape::IsRectangles(v102, (unsigned int *)&v102)
              : v64(v102, (unsigned int *)&v102);
          if ( !v65 || (_DWORD)v102 != 1 )
            goto LABEL_60;
          v66 = *(__int64 (__fastcall **)(CRectanglesShape *, float *, _QWORD))(*(_QWORD *)v63 + 24LL);
          if ( (char *)v66 == (char *)CRectanglesShape::GetTightBounds )
            TightBounds = CRectanglesShape::GetTightBounds(v63, &v110);
          else
            TightBounds = v66(v63, &v110, 0LL);
          if ( TightBounds < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x17Fu);
            goto LABEL_43;
          }
          if ( v112 <= v110 || v113 <= v111 )
            goto LABEL_60;
          v68 = v110 + -0.015625;
          v69 = v111 + -0.015625;
          v70 = v112 + 0.015625;
          v71 = v113 + 0.015625;
          v110 = v110 + -0.015625;
          v111 = v111 + -0.015625;
          v112 = v112 + 0.015625;
          v113 = v113 + 0.015625;
          if ( v61 )
          {
            CMILMatrix::Transform2DBoundsHelper<0>(v61, (__int64)&v115, v116);
            v71 = v113;
            v70 = v112;
            v69 = v111;
            v68 = v110;
            v72 = v116[2];
            v73 = v116[0];
            v74 = v116[3];
            v75 = v116[1];
          }
          else
          {
            v73 = *(float *)&v115;
            v75 = *((float *)&v115 + 1);
            v72 = *((float *)&v115 + 2);
            v74 = *((float *)&v115 + 3);
          }
          if ( v72 > v73 && v74 > v75 && (v73 < v68 || v75 < v69 || v70 < v72 || v71 < v74) )
          {
LABEL_60:
            v48 = this[781];
            v49 = CVisual::FindTreeData(v8, v48)[12].Blink;
            v50 = (struct _LIST_ENTRY *)*((_QWORD *)this[3] + 44);
            v118 = &CRectanglesShape::`vftable';
            v121 = 1;
            v119 = v123;
            if ( v50 > v49 )
              v49 = v50;
            v122 = 1LL;
            v120 = v123;
            v51 = 0LL;
            v52 = (unsigned int)(*((_DWORD *)this + 234) - 1);
            v117 = 0LL;
            v124 = 0LL;
            v125 = 0;
            if ( *((_BYTE *)this[114] + 80 * v52) )
            {
              TreeData = CVisual::FindTreeData(v103, v48);
              v54 = CpuClipShape::Initialize(
                      &v117,
                      (struct CScopedClipStack *)(this + 114),
                      (const struct CMILMatrix *)TreeData[9].Blink);
              v23 = v54;
              if ( v54 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0xAC8u);
                goto LABEL_164;
              }
              v51 = v117;
            }
            v55 = *((_DWORD *)this + 82) != 0;
            v56 = *v33;
            v57 = CDrawingContext::UseAntialiasingForCpuClipping((CDrawingContext *)this);
            updated = CPrimitiveGroupDrawListGenerator::UpdateHWDrawListCache(
                        v56,
                        (unsigned __int64)v49,
                        (struct CDrawListPrimitiveBuilder *)(this + 478),
                        v55,
                        (const struct CMILMatrix *)&v105,
                        v51,
                        v57,
                        (struct CDrawListCache *)v21);
            v23 = updated;
            if ( updated >= 0 )
            {
              if ( v125 && v117 )
              {
                v94 = **(CComplexShape *(__fastcall ***)(CComplexShape *, char))v117;
                if ( v94 == CComplexShape::`vector deleting destructor' )
                  CComplexShape::`vector deleting destructor'(v117, 1);
                else
                  v94(v117, 1);
              }
              v117 = 0LL;
              v118 = &CRectanglesShape::`vftable';
              v125 = 0;
              HIDWORD(v122) = 0;
              DynArrayImpl<0>::ShrinkToSize(&v119, 16LL);
              if ( v124 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v124 + 16LL))(v124);
                v124 = 0LL;
              }
              if ( v119 != v120 )
                (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
              goto LABEL_43;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xAD3u);
LABEL_164:
            CpuClipShape::~CpuClipShape((CpuClipShape *)&v117);
            goto LABEL_45;
          }
        }
      }
    }
  }
LABEL_43:
  v39 = CDrawListCache::Render(v21, (CDrawingContext *)this, (float *)&v105, v15);
  v23 = v39;
  if ( v39 < 0 )
  {
    v100 = 2778;
    goto LABEL_169;
  }
  v40 = v104;
  *v104 = v101;
LABEL_45:
  if ( !*((_BYTE *)this + 3048) && !*((_DWORD *)this + 1621) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v40, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 18LL, *((unsigned int *)this + 1620));
  return (unsigned int)v23;
}
