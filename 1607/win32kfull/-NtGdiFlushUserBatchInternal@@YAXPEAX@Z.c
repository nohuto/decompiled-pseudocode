/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C004EE70
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C004EE30 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0035130 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0035FA0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00394D4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C0048658 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00488E8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0048970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C004FDF0 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0051B58 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C010AD28 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 *     GreEnableAppContainerRestriction @ 0x1C012BF28 (GreEnableAppContainerRestriction.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter, __int64 a2, __int64 a3)
{
  struct _NT_TIB *Self; // rcx
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int SubSystemTib; // ebx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r12
  PVOID v10; // rcx
  struct _POINTL *v11; // rdx
  int v12; // r9d
  LONG x; // ecx
  LONG y; // ecx
  int v15; // r9d
  struct _POINTL v16; // rcx
  int v17; // edi
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  unsigned int v20; // esi
  unsigned int v21; // r14d
  unsigned int v22; // r15d
  int v23; // edx
  struct _POINTL v24; // rdx
  unsigned int v25; // ebx
  int v26; // r8d
  struct _POINTL v27; // rcx
  struct _POINTL v28; // rcx
  int v29; // edx
  LONG v30; // r14d
  LONG v31; // r15d
  int v32; // edi
  struct _POINTL *v33; // rcx
  struct _POINTL v34; // rdx
  int v35; // esi
  int v36; // r8d
  struct _POINTL v37; // rdx
  struct _POINTL v38; // rdx
  struct _POINTL v39; // r8
  int v40; // edx
  struct EXFORMOBJ *v41; // rdx
  struct SURFACE *v42; // rcx
  _DWORD *v43; // rcx
  int v44; // edi
  int v45; // esi
  int v46; // r14d
  int v47; // r15d
  struct _POINTL v48; // rcx
  struct _POINTL v49; // rcx
  struct _POINTL v50; // rcx
  struct _NT_TIB *v51; // rcx
  int v52; // ecx
  __int64 v53; // rbx
  int v54; // ecx
  PVOID v55; // rcx
  struct _NT_TIB *v56; // rcx
  char v57; // [rsp+70h] [rbp-248h]
  int StackLimit; // [rsp+88h] [rbp-230h]
  int v59; // [rsp+8Ch] [rbp-22Ch]
  int v60; // [rsp+8Ch] [rbp-22Ch]
  unsigned int v61; // [rsp+90h] [rbp-228h]
  unsigned int v62; // [rsp+90h] [rbp-228h]
  struct _POINTL *v63[6]; // [rsp+98h] [rbp-220h] BYREF
  unsigned __int64 p_Self; // [rsp+C8h] [rbp-1F0h]
  LONG v65; // [rsp+D0h] [rbp-1E8h]
  unsigned int v66; // [rsp+D4h] [rbp-1E4h]
  unsigned int v67; // [rsp+D8h] [rbp-1E0h]
  unsigned int v68; // [rsp+DCh] [rbp-1DCh]
  unsigned int v69; // [rsp+E0h] [rbp-1D8h]
  int v70; // [rsp+E4h] [rbp-1D4h]
  int v71; // [rsp+E8h] [rbp-1D0h]
  int v72; // [rsp+ECh] [rbp-1CCh]
  int v73; // [rsp+F0h] [rbp-1C8h]
  PVOID v74; // [rsp+F8h] [rbp-1C0h]
  HDC FiberData; // [rsp+100h] [rbp-1B8h]
  struct _NT_TIB *v76; // [rsp+108h] [rbp-1B0h]
  int v77; // [rsp+110h] [rbp-1A8h]
  int v78; // [rsp+114h] [rbp-1A4h]
  LONG v79; // [rsp+118h] [rbp-1A0h]
  LONG v80; // [rsp+11Ch] [rbp-19Ch]
  int v81; // [rsp+120h] [rbp-198h]
  int v82; // [rsp+124h] [rbp-194h]
  LONG v83; // [rsp+128h] [rbp-190h]
  PVOID v84; // [rsp+130h] [rbp-188h]
  PVOID v85; // [rsp+138h] [rbp-180h]
  PVOID v86; // [rsp+140h] [rbp-178h]
  __int64 v87; // [rsp+148h] [rbp-170h]
  PVOID v88; // [rsp+150h] [rbp-168h]
  PVOID v89; // [rsp+158h] [rbp-160h]
  LONG v90; // [rsp+160h] [rbp-158h]
  int v91; // [rsp+164h] [rbp-154h]
  int v92; // [rsp+168h] [rbp-150h]
  unsigned int v93; // [rsp+16Ch] [rbp-14Ch]
  unsigned int v94; // [rsp+170h] [rbp-148h]
  unsigned int v95; // [rsp+174h] [rbp-144h]
  unsigned int v96; // [rsp+178h] [rbp-140h]
  int v97; // [rsp+17Ch] [rbp-13Ch]
  int v98; // [rsp+180h] [rbp-138h]
  int v99; // [rsp+184h] [rbp-134h]
  int v100; // [rsp+188h] [rbp-130h]
  int v101; // [rsp+18Ch] [rbp-12Ch]
  unsigned int v102; // [rsp+190h] [rbp-128h]
  unsigned int v103; // [rsp+194h] [rbp-124h]
  unsigned int v104; // [rsp+198h] [rbp-120h]
  unsigned int v105; // [rsp+19Ch] [rbp-11Ch]
  unsigned int v106; // [rsp+1A0h] [rbp-118h]
  unsigned int v107; // [rsp+1A4h] [rbp-114h]
  int v108; // [rsp+1A8h] [rbp-110h]
  int v109; // [rsp+1ACh] [rbp-10Ch]
  unsigned int v110; // [rsp+1B0h] [rbp-108h]
  PVOID v111; // [rsp+1B8h] [rbp-100h]
  __int64 v112; // [rsp+1C0h] [rbp-F8h]
  __int64 v113; // [rsp+1C8h] [rbp-F0h]
  __int64 v114; // [rsp+1D0h] [rbp-E8h]
  LONG v115; // [rsp+1D8h] [rbp-E0h]
  _QWORD v116[2]; // [rsp+1E0h] [rbp-D8h] BYREF
  PVOID v117; // [rsp+1F0h] [rbp-C8h]
  _BYTE v118[112]; // [rsp+200h] [rbp-B8h] BYREF
  struct _POINTL v119; // [rsp+270h] [rbp-48h] BYREF
  int v120; // [rsp+278h] [rbp-40h]
  int v121; // [rsp+27Ch] [rbp-3Ch]
  struct _RECTL v122; // [rsp+280h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v76 = Self;
  v72 = 1;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  SubSystemTib = (unsigned int)Self[13].SubSystemTib;
  p_Self = (unsigned __int64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) <= 0x134 )
  {
    FiberData = 0LL;
    FiberData = (HDC)v76[13].FiberData;
    v6 = SubSystemTib >> 31;
    if ( FiberData )
    {
      DCOBJ::DCOBJ((DCOBJ *)v63, FiberData);
      if ( v63[0] )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v118);
        v57 = 0;
        if ( !gbDisableTrappedAcRendering && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v6 )
        {
          v57 = 1;
          GreEnableAppContainerRestriction(0LL);
        }
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v118, (struct XDCOBJ *)v63, 0) )
        {
          v72 = 0;
          v114 = *(_QWORD *)(*(_QWORD *)&v63[0][10] + 16LL);
          do
          {
            v7 = 1LL;
            v8 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
            v101 = v8;
            v9 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            if ( (unsigned __int64)p_ArbitraryUserPointer + v9 > p_Self )
              break;
            switch ( v8 )
            {
              case 0:
                if ( (unsigned int)v9 >= 0x48 && !v57 )
                {
                  v30 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v80 = v30;
                  v115 = v30;
                  v31 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v79 = v31;
                  v90 = v31;
                  v60 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v91 = v60;
                  v70 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                  v92 = v70;
                  v77 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                  v66 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                  v93 = v66;
                  v67 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                  v94 = v67;
                  v68 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                  v95 = v68;
                  v69 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                  v96 = v69;
                  v32 = (BYTE2(v77) << 8) | BYTE2(v77);
                  v78 = v32;
                  v77 = v32;
                  if ( (((unsigned __int8)v32 ^ (unsigned __int8)(4 * v32)) & 0xCC) == 0 )
                  {
                    v113 = *(_QWORD *)(*(_QWORD *)&v63[0][10] + 16LL);
                    v62 = 0;
                    v117 = p_ArbitraryUserPointer[3];
                    GreDCSelectBrush(v63[0], v117);
                    v33 = v63[0];
                    v34 = v63[0][10];
                    v81 = *(_DWORD *)(*(_QWORD *)&v34 + 48LL);
                    v35 = v81;
                    LODWORD(v74) = *(_DWORD *)(*(_QWORD *)&v34 + 52LL);
                    v97 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                    v36 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                    v98 = v36;
                    if ( v81 != v97 )
                    {
                      *(_DWORD *)(*(_QWORD *)&v34 + 48LL) = v97;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 52LL) = v36;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 8LL) |= 1u;
                      v33 = v63[0];
                    }
                    if ( (v33[14].x & 1) != 0 )
                    {
                      v37 = v33[10];
                      if ( *(_QWORD *)(*(_QWORD *)&v37 + 112LL) )
                      {
                        v62 = *(_DWORD *)(*(_QWORD *)&v37 + 8LL) & 0x40000;
                        *(_DWORD *)(*(_QWORD *)&v37 + 8LL) |= 0x40000u;
                        v33 = v63[0];
                        v38 = v63[0][10];
                        v71 = *(_DWORD *)(*(_QWORD *)&v38 + 136LL);
                        v99 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                        if ( v71 != v99 )
                        {
                          *(_DWORD *)(*(_QWORD *)&v38 + 136LL) = v99;
                          *(_DWORD *)(*(_QWORD *)&v63[0][10] + 8LL) |= 1u;
                          v33 = v63[0];
                        }
                      }
                    }
                    v39 = v33[10];
                    v87 = *(_QWORD *)(*(_QWORD *)&v39 + 336LL);
                    v25 = v87;
                    v112 = *(__int64 *)((char *)p_ArbitraryUserPointer + 52);
                    v40 = HIDWORD(v112);
                    if ( v87 != v112 )
                    {
                      *(_DWORD *)(*(_QWORD *)&v39 + 336LL) = v112;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 340LL) = v40;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 352LL) |= 0x2010u;
                    }
                    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v116, (struct XDCOBJ *)v63, 0x204u);
                    if ( (*(_DWORD *)(v116[0] + 32LL) & 1) != 0 )
                    {
                      v119.x = v30;
                      v119.y = v31;
                      v120 = v30 + v60;
                      v121 = v31 + v70;
                      EXFORMOBJ::bXform((EXFORMOBJ *)v116, &v119);
                      ERECTL::vOrder((ERECTL *)&v119);
                      if ( !ERECTL::bEmpty((ERECTL *)&v119) )
                      {
                        if ( (v63[0][4].y & 0xE0) != 0 )
                          XDCOBJ::vAccumulate((XDCOBJ *)v63, (struct ERECTL *)&v119);
                        v42 = (struct SURFACE *)v63[0][64];
                        if ( v42 )
                          GrePatBltLockedDC(v63, v41, (struct ERECTL *)&v119, v32, v42, v66, v67, v68, v69);
                      }
                    }
                    else
                    {
                      v43 = (_DWORD *)v63[0][10];
                      v44 = v43[10];
                      v45 = v43[8];
                      v46 = v43[11];
                      v47 = v43[9];
                      v43[10] = v66;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 32LL) = v67;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 44LL) = v68;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 36LL) = v69;
                      GreMaskBlt(FiberData, v70, 0LL, 0, 0, 0LL, 0, 0, v78 << 16, 0);
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 40LL) = v44;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 32LL) = v45;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 44LL) = v46;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 36LL) = v47;
                      v35 = v81;
                    }
                    v48 = v63[0][10];
                    if ( *(_QWORD *)(*(_QWORD *)&v48 + 16LL) != v113 )
                    {
                      *(_QWORD *)(*(_QWORD *)&v48 + 16LL) = v113;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 8LL) |= 0x1000u;
                    }
                    v49 = v63[0][10];
                    if ( v35 != *(_DWORD *)(*(_QWORD *)&v49 + 48LL) )
                    {
                      *(_DWORD *)(*(_QWORD *)&v49 + 48LL) = v35;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 52LL) = (_DWORD)v74;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 8LL) |= 1u;
                    }
                    if ( (v63[0][14].x & 1) != 0 )
                    {
                      v50 = v63[0][10];
                      if ( *(_QWORD *)(*(_QWORD *)&v50 + 112LL) )
                      {
                        if ( v71 != *(_DWORD *)(*(_QWORD *)&v50 + 136LL) )
                        {
                          *(_DWORD *)(*(_QWORD *)&v50 + 136LL) = v71;
                          *(_DWORD *)(*(_QWORD *)&v63[0][10] + 8LL) |= 1u;
                        }
                        if ( !v62 )
                          *(_DWORD *)(*(_QWORD *)&v63[0][10] + 8LL) &= ~0x40000u;
                      }
                    }
                    v28 = v63[0][10];
                    v29 = HIDWORD(v87);
                    if ( __PAIR64__(HIDWORD(v87), v25) != *(_QWORD *)(*(_QWORD *)&v28 + 336LL) )
                      goto LABEL_62;
                  }
                }
                break;
              case 1:
                if ( !v57 && (unsigned int)v9 >= 0x38 )
                {
                  if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                  {
                    if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( p_Self > W32UserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                      *W32UserProbeAddress = 0;
                  }
                  v102 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v15 = v102;
                  if ( v102 < 0xAAAAAAA && 24 * (unsigned __int64)v102 <= (unsigned int)(v9 - 48) )
                  {
                    v16 = v63[0][10];
                    v17 = *(_DWORD *)(*(_QWORD *)&v16 + 48LL);
                    v59 = *(_DWORD *)(*(_QWORD *)&v16 + 52LL);
                    v18 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                    v103 = v18;
                    v19 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                    v104 = v19;
                    v20 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                    v105 = v20;
                    v21 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                    v106 = v21;
                    v22 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                    v107 = v22;
                    v108 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                    v23 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                    v109 = v23;
                    v61 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                    v110 = v61;
                    if ( v17 != v108 )
                    {
                      *(_DWORD *)(*(_QWORD *)&v16 + 48LL) = v108;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 52LL) = v23;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 8LL) |= 1u;
                    }
                    v24 = v63[0][10];
                    v74 = *(PVOID *)(*(_QWORD *)&v24 + 336LL);
                    v25 = (unsigned int)v74;
                    v111 = p_ArbitraryUserPointer[5];
                    v26 = HIDWORD(v111);
                    if ( v74 != v111 )
                    {
                      *(_DWORD *)(*(_QWORD *)&v24 + 336LL) = (_DWORD)v111;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 340LL) = v26;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 352LL) |= 0x2010u;
                    }
                    GrePolyPatBltInternal(
                      (struct XDCOBJ *)v63,
                      v61,
                      (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                      v15,
                      v18,
                      v19,
                      v20,
                      v21,
                      v22);
                    v27 = v63[0][10];
                    if ( v17 != *(_DWORD *)(*(_QWORD *)&v27 + 48LL) )
                    {
                      *(_DWORD *)(*(_QWORD *)&v27 + 48LL) = v17;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 52LL) = v59;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 8LL) |= 1u;
                    }
                    v28 = v63[0][10];
                    v29 = HIDWORD(v74);
                    if ( __PAIR64__(HIDWORD(v74), v25) != *(_QWORD *)(*(_QWORD *)&v28 + 336LL) )
                    {
LABEL_62:
                      *(_DWORD *)(*(_QWORD *)&v28 + 336LL) = v25;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 340LL) = v29;
                      *(_DWORD *)(*(_QWORD *)&v63[0][10] + 352LL) |= 0x2010u;
                    }
                  }
                }
                break;
              case 2:
                if ( !v57 )
                  GreBatchTextOut(
                    (struct XDCOBJ *)v63,
                    (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer,
                    *(unsigned __int16 *)p_ArbitraryUserPointer);
                break;
              case 3:
                if ( !v57 )
                  GreBatchTextOutRect((struct XDCOBJ *)v63, (struct _BATCHTEXTOUTRECT *)p_ArbitraryUserPointer, v9);
                break;
              case 4:
                if ( (unsigned int)v9 >= 0xC )
                {
                  v83 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v65 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                }
                else
                {
                  LODWORD(v7) = 0;
                }
                if ( (_DWORD)v7 )
                {
                  v11 = v63[0];
                  v63[0][17].x = v83;
                  v11[17].y = v65;
                  v12 = v11[5].x & 1;
                  if ( v12 )
                    x = v11[177].x;
                  else
                    x = v11[176].x;
                  v11[197].x = v11[17].x + x;
                  if ( v12 )
                    y = v11[177].y;
                  else
                    y = v11[176].y;
                  v11[197].y = v65 + y;
                }
                break;
              case 5:
                if ( (unsigned int)v9 >= 0x18 )
                {
                  v122 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v82 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                }
                else
                {
                  LODWORD(v7) = 0;
                }
                if ( (_DWORD)v7 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v118, 0);
                  GreExtSelectClipRgnLocked((struct XDCOBJ *)v63, &v122, v82);
                }
                break;
              case 6:
                v86 = 0LL;
                if ( (unsigned int)v9 >= 0x10 )
                  v86 = p_ArbitraryUserPointer[1];
                else
                  LODWORD(v7) = 0;
                if ( (_DWORD)v7 )
                  GreSelectFontInternal(FiberData);
                break;
              case 7:
                v10 = 0LL;
                v84 = 0LL;
                if ( (unsigned int)v9 >= 0x10 )
                {
                  v10 = p_ArbitraryUserPointer[1];
                  v84 = v10;
                }
                else
                {
                  v7 = 0LL;
                }
                goto LABEL_24;
              case 8:
                v10 = 0LL;
                v85 = 0LL;
                if ( (unsigned int)v9 >= 0x10 )
                {
                  v10 = p_ArbitraryUserPointer[1];
                  v85 = v10;
                }
                else
                {
                  v7 = 0LL;
                }
LABEL_24:
                if ( (_DWORD)v7 )
                  NtGdiDeleteObjectApp(v10, v7, 0x1C0000000uLL);
                break;
              default:
                break;
            }
            --StackLimit;
            p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v9 + 7) & 0xFFFFFFF8));
            if ( !StackLimit )
              break;
          }
          while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
          v51 = v76;
          LODWORD(v76[106].StackLimit) = 0;
          LODWORD(v51[13].SubSystemTib) &= 0x80000000;
          LODWORD(v51[13].SubSystemTib) &= ~0x80000000;
          *(_QWORD *)(*(_QWORD *)&v63[0][10] + 16LL) = v114;
          *(_DWORD *)(*(_QWORD *)&v63[0][10] + 8LL) |= 0x1000u;
        }
        if ( v57 )
          GreEnableAppContainerRestriction(1LL);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v118);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v63);
    }
    if ( v72 )
    {
      while ( 1 )
      {
        v52 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
        v100 = v52;
        v53 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        v73 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        if ( (unsigned __int64)p_ArbitraryUserPointer + v53 > p_Self )
        {
LABEL_108:
          v56 = v76;
          LODWORD(v76[106].StackLimit) = 0;
          LODWORD(v56[13].SubSystemTib) &= 0x80000000;
          break;
        }
        v54 = v52 - 7;
        if ( v54 )
        {
          if ( v54 != 1 )
            goto LABEL_106;
          v88 = 0LL;
          v55 = p_ArbitraryUserPointer[1];
          v88 = v55;
        }
        else
        {
          v89 = 0LL;
          v55 = p_ArbitraryUserPointer[1];
          v89 = v55;
        }
        NtGdiDeleteObjectApp(v55, 1LL, a3);
LABEL_106:
        --StackLimit;
        p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v53 + 7) & 0xFFFFFFF8));
        if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
          goto LABEL_108;
      }
    }
  }
  v76[13].FiberData = 0LL;
}
