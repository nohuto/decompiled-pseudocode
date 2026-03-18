/*
 * XREFs of NtGdiFlushUserBatch @ 0x1C001BF90
 * Callers:
 *     <none>
 * Callees:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C0012BB8 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0019204 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00197B4 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C001DA60 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0032C68 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0086C10 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0086F64 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C009DC5C (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     GreEnableAppContainerRestriction @ 0x1C00FD3BC (GreEnableAppContainerRestriction.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

struct _NT_TIB *__fastcall NtGdiFlushUserBatch(__int64 a1, __int64 a2, __int64 a3)
{
  struct _NT_TIB *Self; // rcx
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int SubSystemTib; // ebx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r12
  PVOID v10; // rcx
  DC *v11; // rdx
  int v12; // r9d
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // r9d
  __int64 v16; // rcx
  int v17; // edi
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  unsigned int v20; // esi
  unsigned int v21; // r14d
  unsigned int v22; // r15d
  int v23; // edx
  __int64 v24; // rdx
  unsigned int v25; // ebx
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // edx
  int v30; // r14d
  int v31; // r15d
  unsigned int v32; // edi
  DC *v33; // rcx
  __int64 v34; // rdx
  int v35; // esi
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // edx
  struct EXFORMOBJ *v41; // rdx
  struct SURFACE *v42; // rcx
  _DWORD *v43; // rcx
  int v44; // edi
  int v45; // esi
  int v46; // r14d
  int v47; // r15d
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  struct _NT_TIB *v51; // rcx
  int v52; // ecx
  __int64 v53; // rbx
  int v54; // ecx
  PVOID v55; // rcx
  struct _NT_TIB *v56; // rcx
  struct _NT_TIB *result; // rax
  char v58; // [rsp+70h] [rbp-248h]
  int StackLimit; // [rsp+88h] [rbp-230h]
  int v60; // [rsp+8Ch] [rbp-22Ch]
  int v61; // [rsp+8Ch] [rbp-22Ch]
  unsigned int v62; // [rsp+90h] [rbp-228h]
  unsigned int v63; // [rsp+90h] [rbp-228h]
  DC *v64[6]; // [rsp+98h] [rbp-220h] BYREF
  unsigned __int64 p_Self; // [rsp+C8h] [rbp-1F0h]
  int v66; // [rsp+D0h] [rbp-1E8h]
  unsigned int v67; // [rsp+D4h] [rbp-1E4h]
  int v68; // [rsp+D8h] [rbp-1E0h]
  int v69; // [rsp+DCh] [rbp-1DCh]
  int v70; // [rsp+E0h] [rbp-1D8h]
  int v71; // [rsp+E4h] [rbp-1D4h]
  unsigned int v72; // [rsp+E8h] [rbp-1D0h]
  unsigned int v73; // [rsp+ECh] [rbp-1CCh]
  unsigned int v74; // [rsp+F0h] [rbp-1C8h]
  PVOID v75; // [rsp+F8h] [rbp-1C0h]
  struct _NT_TIB *v76; // [rsp+100h] [rbp-1B8h]
  HDC FiberData; // [rsp+108h] [rbp-1B0h]
  int v78; // [rsp+110h] [rbp-1A8h]
  int v79; // [rsp+114h] [rbp-1A4h]
  int v80; // [rsp+118h] [rbp-1A0h]
  unsigned int v81; // [rsp+11Ch] [rbp-19Ch]
  int v82; // [rsp+120h] [rbp-198h]
  unsigned int v83; // [rsp+124h] [rbp-194h]
  int v84; // [rsp+128h] [rbp-190h]
  PVOID v85; // [rsp+130h] [rbp-188h]
  __int64 v86; // [rsp+138h] [rbp-180h]
  PVOID v87; // [rsp+140h] [rbp-178h]
  PVOID v88; // [rsp+148h] [rbp-170h]
  PVOID v89; // [rsp+150h] [rbp-168h]
  PVOID v90; // [rsp+158h] [rbp-160h]
  int v91; // [rsp+160h] [rbp-158h]
  unsigned int v92; // [rsp+164h] [rbp-154h]
  unsigned int v93; // [rsp+168h] [rbp-150h]
  int v94; // [rsp+16Ch] [rbp-14Ch]
  int v95; // [rsp+170h] [rbp-148h]
  unsigned int v96; // [rsp+174h] [rbp-144h]
  int v97; // [rsp+178h] [rbp-140h]
  unsigned int v98; // [rsp+17Ch] [rbp-13Ch]
  unsigned int v99; // [rsp+180h] [rbp-138h]
  int v100; // [rsp+184h] [rbp-134h]
  int v101; // [rsp+188h] [rbp-130h]
  int v102; // [rsp+18Ch] [rbp-12Ch]
  PVOID v103; // [rsp+190h] [rbp-128h]
  unsigned int v104; // [rsp+198h] [rbp-120h]
  __int64 v105; // [rsp+1A0h] [rbp-118h]
  unsigned int v106; // [rsp+1A8h] [rbp-110h]
  __int64 v107; // [rsp+1B0h] [rbp-108h]
  unsigned int v108; // [rsp+1B8h] [rbp-100h]
  __int64 v109; // [rsp+1C0h] [rbp-F8h]
  int v110; // [rsp+1C8h] [rbp-F0h]
  unsigned int v111; // [rsp+1CCh] [rbp-ECh]
  int v112; // [rsp+1D0h] [rbp-E8h]
  int v113; // [rsp+1D4h] [rbp-E4h]
  int v114; // [rsp+1D8h] [rbp-E0h]
  unsigned int v115; // [rsp+1DCh] [rbp-DCh]
  unsigned int v116; // [rsp+1E0h] [rbp-D8h]
  _QWORD v117[2]; // [rsp+1E8h] [rbp-D0h] BYREF
  PVOID v118; // [rsp+1F8h] [rbp-C0h]
  _BYTE v119[112]; // [rsp+200h] [rbp-B8h] BYREF
  _DWORD v120[4]; // [rsp+270h] [rbp-48h] BYREF
  struct _RECTL v121; // [rsp+280h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v76 = Self;
  v71 = 1;
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
      DCOBJ::DCOBJ((DCOBJ *)v64, FiberData);
      if ( v64[0] )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v119);
        v58 = 0;
        if ( !gbDisableTrappedAcRendering && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v6 )
        {
          v58 = 1;
          GreEnableAppContainerRestriction(0LL);
        }
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v119, (struct XDCOBJ *)v64, 0) )
        {
          v71 = 0;
          v109 = *(_QWORD *)(*((_QWORD *)v64[0] + 10) + 16LL);
          do
          {
            v7 = 1LL;
            v8 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
            v97 = v8;
            v9 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            if ( (unsigned __int64)p_ArbitraryUserPointer + v9 > p_Self )
              break;
            switch ( v8 )
            {
              case 0:
                if ( (unsigned int)v9 >= 0x48 && !v58 )
                {
                  v30 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v82 = v30;
                  v101 = v30;
                  v31 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v80 = v31;
                  v112 = v31;
                  v61 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v114 = v61;
                  v66 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                  v94 = v66;
                  v81 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                  v72 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                  v108 = v72;
                  v67 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                  v96 = v67;
                  v74 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                  v111 = v74;
                  v73 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                  v98 = v73;
                  v32 = (BYTE2(v81) << 8) | BYTE2(v81);
                  v83 = v32;
                  v81 = v32;
                  if ( (((unsigned __int8)v32 ^ (unsigned __int8)(4 * v32)) & 0xCC) == 0 )
                  {
                    v107 = *(_QWORD *)(*((_QWORD *)v64[0] + 10) + 16LL);
                    v63 = 0;
                    v118 = p_ArbitraryUserPointer[3];
                    GreDCSelectBrush(v64[0], v118);
                    v33 = v64[0];
                    v34 = *((_QWORD *)v64[0] + 10);
                    v79 = *(_DWORD *)(v34 + 48);
                    v35 = v79;
                    LODWORD(v75) = *(_DWORD *)(v34 + 52);
                    v110 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                    v36 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                    v100 = v36;
                    if ( v79 != v110 )
                    {
                      *(_DWORD *)(v34 + 48) = v110;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 52LL) = v36;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 8LL) |= 1u;
                      v33 = v64[0];
                    }
                    if ( (*((_DWORD *)v33 + 28) & 1) != 0 )
                    {
                      v37 = *((_QWORD *)v33 + 10);
                      if ( *(_QWORD *)(v37 + 112) )
                      {
                        v63 = *(_DWORD *)(v37 + 8) & 0x40000;
                        *(_DWORD *)(v37 + 8) |= 0x40000u;
                        v33 = v64[0];
                        v38 = *((_QWORD *)v64[0] + 10);
                        v70 = *(_DWORD *)(v38 + 136);
                        v113 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                        if ( v70 != v113 )
                        {
                          *(_DWORD *)(v38 + 136) = v113;
                          *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 8LL) |= 1u;
                          v33 = v64[0];
                        }
                      }
                    }
                    v39 = *((_QWORD *)v33 + 10);
                    v86 = *(_QWORD *)(v39 + 336);
                    v25 = v86;
                    v105 = *(__int64 *)((char *)p_ArbitraryUserPointer + 52);
                    v40 = HIDWORD(v105);
                    if ( v86 != v105 )
                    {
                      *(_DWORD *)(v39 + 336) = v105;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 340LL) = v40;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 352LL) |= 0x2010u;
                    }
                    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v117, (struct XDCOBJ *)v64, 0x204u);
                    if ( (*(_DWORD *)(v117[0] + 32LL) & 1) != 0 )
                    {
                      v120[0] = v30;
                      v120[1] = v31;
                      v120[2] = v30 + v61;
                      v120[3] = v31 + v66;
                      EXFORMOBJ::bXform((EXFORMOBJ *)v117, (struct ERECTL *)v120);
                      ERECTL::vOrder((ERECTL *)v120);
                      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v120) )
                      {
                        if ( (*((_DWORD *)v64[0] + 9) & 0xE0) != 0 )
                          XDCOBJ::vAccumulate((XDCOBJ *)v64, (struct ERECTL *)v120);
                        v42 = (struct SURFACE *)*((_QWORD *)v64[0] + 64);
                        if ( v42 )
                          GrePatBltLockedDC(
                            (struct XDCOBJ *)v64,
                            v41,
                            (struct ERECTL *)v120,
                            v32,
                            v42,
                            v72,
                            v67,
                            v74,
                            v73);
                      }
                    }
                    else
                    {
                      v43 = (_DWORD *)*((_QWORD *)v64[0] + 10);
                      v44 = v43[10];
                      v45 = v43[8];
                      v46 = v43[11];
                      v47 = v43[9];
                      v43[10] = v72;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 32LL) = v67;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 44LL) = v74;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 36LL) = v73;
                      GreMaskBlt(FiberData, v66, 0LL, 0, 0, 0LL, 0, 0, v83 << 16, 0);
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 40LL) = v44;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 32LL) = v45;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 44LL) = v46;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 36LL) = v47;
                      v35 = v79;
                    }
                    v48 = *((_QWORD *)v64[0] + 10);
                    if ( *(_QWORD *)(v48 + 16) != v107 )
                    {
                      *(_QWORD *)(v48 + 16) = v107;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 8LL) |= 0x1000u;
                    }
                    v49 = *((_QWORD *)v64[0] + 10);
                    if ( v35 != *(_DWORD *)(v49 + 48) )
                    {
                      *(_DWORD *)(v49 + 48) = v35;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 52LL) = (_DWORD)v75;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 8LL) |= 1u;
                    }
                    if ( (*((_DWORD *)v64[0] + 28) & 1) != 0 )
                    {
                      v50 = *((_QWORD *)v64[0] + 10);
                      if ( *(_QWORD *)(v50 + 112) )
                      {
                        if ( v70 != *(_DWORD *)(v50 + 136) )
                        {
                          *(_DWORD *)(v50 + 136) = v70;
                          *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 8LL) |= 1u;
                        }
                        if ( !v63 )
                          *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 8LL) &= ~0x40000u;
                      }
                    }
                    v28 = *((_QWORD *)v64[0] + 10);
                    v29 = HIDWORD(v86);
                    if ( __PAIR64__(HIDWORD(v86), v25) != *(_QWORD *)(v28 + 336) )
                      goto LABEL_62;
                  }
                }
                break;
              case 1:
                if ( !v58 && (unsigned int)v9 >= 0x38 )
                {
                  if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                  {
                    if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( p_Self > W32UserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                      *W32UserProbeAddress = 0;
                  }
                  v115 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v15 = v115;
                  if ( v115 < 0xAAAAAAA && 24 * (unsigned __int64)v115 <= (unsigned int)(v9 - 48) )
                  {
                    v16 = *((_QWORD *)v64[0] + 10);
                    v17 = *(_DWORD *)(v16 + 48);
                    v60 = *(_DWORD *)(v16 + 52);
                    v18 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                    v104 = v18;
                    v19 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                    v116 = v19;
                    v20 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                    v106 = v20;
                    v21 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                    v92 = v21;
                    v22 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                    v93 = v22;
                    v95 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                    v23 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                    v91 = v23;
                    v62 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                    v99 = v62;
                    if ( v17 != v95 )
                    {
                      *(_DWORD *)(v16 + 48) = v95;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 52LL) = v23;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 8LL) |= 1u;
                    }
                    v24 = *((_QWORD *)v64[0] + 10);
                    v75 = *(PVOID *)(v24 + 336);
                    v25 = (unsigned int)v75;
                    v103 = p_ArbitraryUserPointer[5];
                    v26 = HIDWORD(v103);
                    if ( v75 != v103 )
                    {
                      *(_DWORD *)(v24 + 336) = (_DWORD)v103;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 340LL) = v26;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 352LL) |= 0x2010u;
                    }
                    GrePolyPatBltInternal(
                      (struct XDCOBJ *)v64,
                      v62,
                      (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                      v15,
                      v18,
                      v19,
                      v20,
                      v21,
                      v22);
                    v27 = *((_QWORD *)v64[0] + 10);
                    if ( v17 != *(_DWORD *)(v27 + 48) )
                    {
                      *(_DWORD *)(v27 + 48) = v17;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 52LL) = v60;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 8LL) |= 1u;
                    }
                    v28 = *((_QWORD *)v64[0] + 10);
                    v29 = HIDWORD(v75);
                    if ( __PAIR64__(HIDWORD(v75), v25) != *(_QWORD *)(v28 + 336) )
                    {
LABEL_62:
                      *(_DWORD *)(v28 + 336) = v25;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 340LL) = v29;
                      *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 352LL) |= 0x2010u;
                    }
                  }
                }
                break;
              case 2:
                if ( !v58 )
                  GreBatchTextOut((struct XDCOBJ *)v64, (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer, v9);
                break;
              case 3:
                if ( !v58 )
                  GreBatchTextOutRect((struct XDCOBJ *)v64, (struct _BATCHTEXTOUTRECT *)p_ArbitraryUserPointer, v9);
                break;
              case 4:
                if ( (unsigned int)v9 >= 0xC )
                {
                  v78 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v68 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                }
                else
                {
                  LODWORD(v7) = 0;
                }
                if ( (_DWORD)v7 )
                {
                  v11 = v64[0];
                  *((_DWORD *)v64[0] + 34) = v78;
                  *((_DWORD *)v11 + 35) = v68;
                  v12 = *((_DWORD *)v11 + 10) & 1;
                  if ( v12 )
                    v13 = *((_DWORD *)v11 + 354);
                  else
                    v13 = *((_DWORD *)v11 + 352);
                  *((_DWORD *)v11 + 394) = *((_DWORD *)v11 + 34) + v13;
                  if ( v12 )
                    v14 = *((_DWORD *)v11 + 355);
                  else
                    v14 = *((_DWORD *)v11 + 353);
                  *((_DWORD *)v11 + 395) = v68 + v14;
                }
                break;
              case 5:
                if ( (unsigned int)v9 >= 0x18 )
                {
                  v121 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v84 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                }
                else
                {
                  LODWORD(v7) = 0;
                }
                if ( (_DWORD)v7 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v119, 0);
                  GreExtSelectClipRgnLocked(v64, (struct tagRECT *)&v121, v84);
                }
                break;
              case 6:
                v89 = 0LL;
                if ( (unsigned int)v9 >= 0x10 )
                  v89 = p_ArbitraryUserPointer[1];
                else
                  LODWORD(v7) = 0;
                if ( (_DWORD)v7 )
                  GreSelectFontInternal(FiberData);
                break;
              case 7:
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
                goto LABEL_24;
              case 8:
                v10 = 0LL;
                v87 = 0LL;
                if ( (unsigned int)v9 >= 0x10 )
                {
                  v10 = p_ArbitraryUserPointer[1];
                  v87 = v10;
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
          *(_QWORD *)(*((_QWORD *)v64[0] + 10) + 16LL) = v109;
          *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 8LL) |= 0x1000u;
        }
        if ( v58 )
          GreEnableAppContainerRestriction(1LL);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v119);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v64);
    }
    if ( v71 )
    {
      while ( 1 )
      {
        v52 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
        v102 = v52;
        v53 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        v69 = *(unsigned __int16 *)p_ArbitraryUserPointer;
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
          v90 = 0LL;
          v55 = p_ArbitraryUserPointer[1];
          v90 = v55;
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
  result = v76;
  v76[13].FiberData = 0LL;
  return result;
}
