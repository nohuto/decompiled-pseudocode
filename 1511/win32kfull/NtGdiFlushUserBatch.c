/*
 * XREFs of NtGdiFlushUserBatch @ 0x1C0030EB0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0019BFC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C810 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C85C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C002CD28 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0033EB0 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C00342EC (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C003C8F0 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0040258 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C00405AC (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     GreEnableAppContainerRestriction @ 0x1C0103A24 (GreEnableAppContainerRestriction.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

struct _NT_TIB *__fastcall NtGdiFlushUserBatch(__int64 a1, __int64 a2, __int64 a3)
{
  struct _NT_TIB *Self; // rax
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int SubSystemTib; // edi
  unsigned int v6; // edi
  int v7; // ecx
  __int64 v8; // rbx
  int v9; // ecx
  PVOID v10; // rcx
  struct _NT_TIB *v11; // rax
  struct _NT_TIB *result; // rax
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // r12
  __int64 v16; // rax
  struct _NT_TIB *v17; // rax
  PVOID v18; // rcx
  _DWORD *v19; // rdx
  int v20; // r9d
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // r9d
  __int64 v24; // rcx
  int v25; // edi
  unsigned int v26; // r10d
  unsigned int v27; // r11d
  unsigned int v28; // esi
  unsigned int v29; // r14d
  unsigned int v30; // r15d
  int v31; // edx
  __int64 v32; // rdx
  int v33; // ebx
  int v34; // r8d
  __int64 v35; // rcx
  int v36; // edx
  __int64 v37; // rcx
  LONG v38; // r14d
  LONG v39; // r15d
  unsigned int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // esi
  int v44; // r8d
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  int v49; // edx
  struct EXFORMOBJ *v50; // rdx
  struct SURFACE *v51; // rcx
  _DWORD *v52; // rcx
  int v53; // edi
  int v54; // esi
  int v55; // r14d
  int v56; // r15d
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  char v60; // [rsp+70h] [rbp-208h]
  _QWORD v61[2]; // [rsp+78h] [rbp-200h] BYREF
  int v62; // [rsp+88h] [rbp-1F0h]
  char v63; // [rsp+8Ch] [rbp-1ECh]
  PVOID *v64; // [rsp+90h] [rbp-1E8h]
  int v65; // [rsp+98h] [rbp-1E0h]
  int StackLimit; // [rsp+9Ch] [rbp-1DCh]
  int v67; // [rsp+A0h] [rbp-1D8h]
  unsigned int v68; // [rsp+A4h] [rbp-1D4h]
  unsigned __int64 p_Self; // [rsp+A8h] [rbp-1D0h]
  int v70; // [rsp+B0h] [rbp-1C8h]
  unsigned int v71; // [rsp+B4h] [rbp-1C4h]
  int v72; // [rsp+B8h] [rbp-1C0h]
  int v73; // [rsp+BCh] [rbp-1BCh]
  int v74; // [rsp+C0h] [rbp-1B8h]
  int v75; // [rsp+C4h] [rbp-1B4h]
  unsigned int v76; // [rsp+C8h] [rbp-1B0h]
  unsigned int v77; // [rsp+CCh] [rbp-1ACh]
  unsigned int v78; // [rsp+D0h] [rbp-1A8h]
  PVOID v79; // [rsp+D8h] [rbp-1A0h]
  struct _NT_TIB *v80; // [rsp+E0h] [rbp-198h]
  HDC FiberData; // [rsp+E8h] [rbp-190h]
  int v82; // [rsp+F0h] [rbp-188h]
  int v83; // [rsp+F4h] [rbp-184h]
  LONG v84; // [rsp+F8h] [rbp-180h]
  unsigned int v85; // [rsp+FCh] [rbp-17Ch]
  LONG v86; // [rsp+100h] [rbp-178h]
  unsigned int v87; // [rsp+104h] [rbp-174h]
  int v88; // [rsp+108h] [rbp-170h]
  PVOID v89; // [rsp+110h] [rbp-168h]
  __int64 v90; // [rsp+118h] [rbp-160h]
  PVOID v91; // [rsp+120h] [rbp-158h]
  PVOID v92; // [rsp+128h] [rbp-150h]
  __int64 v93; // [rsp+130h] [rbp-148h]
  PVOID v94; // [rsp+138h] [rbp-140h]
  int v95; // [rsp+140h] [rbp-138h]
  unsigned int v96; // [rsp+144h] [rbp-134h]
  unsigned int v97; // [rsp+148h] [rbp-130h]
  int v98; // [rsp+14Ch] [rbp-12Ch]
  int v99; // [rsp+150h] [rbp-128h]
  unsigned int v100; // [rsp+154h] [rbp-124h]
  int v101; // [rsp+158h] [rbp-120h]
  unsigned int v102; // [rsp+15Ch] [rbp-11Ch]
  unsigned int v103; // [rsp+160h] [rbp-118h]
  int v104; // [rsp+164h] [rbp-114h]
  LONG v105; // [rsp+168h] [rbp-110h]
  int v106; // [rsp+16Ch] [rbp-10Ch]
  PVOID v107; // [rsp+170h] [rbp-108h]
  unsigned int v108; // [rsp+178h] [rbp-100h]
  __int64 v109; // [rsp+180h] [rbp-F8h]
  unsigned int v110; // [rsp+188h] [rbp-F0h]
  __int64 v111; // [rsp+190h] [rbp-E8h]
  unsigned int v112; // [rsp+198h] [rbp-E0h]
  __int64 v113; // [rsp+1A0h] [rbp-D8h]
  int v114; // [rsp+1A8h] [rbp-D0h]
  unsigned int v115; // [rsp+1ACh] [rbp-CCh]
  unsigned int v116; // [rsp+1B0h] [rbp-C8h]
  LONG v117; // [rsp+1B4h] [rbp-C4h]
  int v118; // [rsp+1B8h] [rbp-C0h]
  int v119; // [rsp+1BCh] [rbp-BCh]
  unsigned int v120; // [rsp+1C0h] [rbp-B8h]
  _QWORD v121[2]; // [rsp+1C8h] [rbp-B0h] BYREF
  PVOID v122; // [rsp+1D8h] [rbp-A0h]
  _BYTE v123[80]; // [rsp+1E0h] [rbp-98h] BYREF
  struct _POINTL v124; // [rsp+230h] [rbp-48h] BYREF
  int v125; // [rsp+238h] [rbp-40h]
  int v126; // [rsp+23Ch] [rbp-3Ch]
  struct _RECTL v127; // [rsp+240h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v80 = Self;
  v75 = 1;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  v64 = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  SubSystemTib = (unsigned int)Self[13].SubSystemTib;
  p_Self = (unsigned __int64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) <= 0x134 )
  {
    FiberData = 0LL;
    v63 = 1;
    FiberData = (HDC)v80[13].FiberData;
    v6 = SubSystemTib >> 31;
    v63 = v6;
    if ( FiberData )
    {
      v61[1] = 0LL;
      LOBYTE(a2) = 1;
      v61[0] = HmgLockEx(FiberData, a2, 0LL);
      if ( v61[0] )
      {
        if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v61) )
        {
          if ( v61[0] )
          {
            DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v123);
            v60 = 0;
            if ( !gbDisableTrappedAcRendering && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v6 )
            {
              v60 = 1;
              GreEnableAppContainerRestriction(0LL);
            }
            if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v123, (struct XDCOBJ *)v61, 0) )
            {
              v75 = 0;
              v113 = *(_QWORD *)(*(_QWORD *)(v61[0] + 80LL) + 16LL);
              do
              {
                v13 = 1LL;
                v65 = 1;
                v14 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
                v101 = v14;
                v15 = *(unsigned __int16 *)p_ArbitraryUserPointer;
                v62 = *(unsigned __int16 *)p_ArbitraryUserPointer;
                if ( (unsigned __int64)p_ArbitraryUserPointer + v15 > p_Self )
                  break;
                if ( v14 == 2 )
                {
                  if ( !v60 )
                    GreBatchTextOut(
                      (struct XDCOBJ *)v61,
                      (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer,
                      (unsigned int)v15);
                }
                else if ( v14 == 6 )
                {
                  v16 = 0LL;
                  v90 = 0LL;
                  if ( (unsigned int)v15 < 0x10 )
                  {
                    LODWORD(v13) = 0;
                    v65 = 0;
                  }
                  else
                  {
                    v16 = (__int64)p_ArbitraryUserPointer[1];
                    v90 = v16;
                  }
                  if ( (_DWORD)v13 )
                    GreSelectFont((__int64)FiberData, v16);
                }
                else
                {
                  switch ( v14 )
                  {
                    case 0:
                      if ( (unsigned int)v15 >= 0x48 && !v60 )
                      {
                        v38 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                        v86 = v38;
                        v105 = v38;
                        v39 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                        v84 = v39;
                        v117 = v39;
                        v67 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                        v119 = v67;
                        v70 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                        v98 = v70;
                        v85 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                        v76 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                        v112 = v76;
                        v71 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                        v100 = v71;
                        v78 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                        v115 = v78;
                        v77 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                        v102 = v77;
                        v40 = (BYTE2(v85) << 8) | BYTE2(v85);
                        v87 = v40;
                        v85 = v40;
                        if ( (((unsigned __int8)v40 ^ (unsigned __int8)(4 * v40)) & 0xCC) == 0 )
                        {
                          v111 = *(_QWORD *)(*(_QWORD *)(v61[0] + 80LL) + 16LL);
                          v68 = 0;
                          v122 = p_ArbitraryUserPointer[3];
                          GreDCSelectBrush(v61[0], v122);
                          v41 = v61[0];
                          v42 = *(_QWORD *)(v61[0] + 80LL);
                          v83 = *(_DWORD *)(v42 + 48);
                          v43 = v83;
                          LODWORD(v79) = *(_DWORD *)(v42 + 52);
                          v114 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                          v44 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                          v104 = v44;
                          if ( v83 != v114 )
                          {
                            *(_DWORD *)(v42 + 48) = v114;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 52LL) = v44;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 8LL) |= 1u;
                            v41 = v61[0];
                          }
                          if ( (*(_DWORD *)(v41 + 112) & 1) != 0 )
                          {
                            v45 = *(_QWORD *)(v41 + 80);
                            if ( *(_QWORD *)(v45 + 112) )
                            {
                              v46 = *(_DWORD *)(v45 + 8);
                              v68 = v46 & 0x40000;
                              *(_DWORD *)(v45 + 8) = v46 | 0x40000;
                              v41 = v61[0];
                              v47 = *(_QWORD *)(v61[0] + 80LL);
                              v74 = *(_DWORD *)(v47 + 136);
                              v118 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                              if ( v74 != v118 )
                              {
                                *(_DWORD *)(v47 + 136) = v118;
                                *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 8LL) |= 1u;
                                v41 = v61[0];
                              }
                            }
                          }
                          v48 = *(_QWORD *)(v41 + 80);
                          v93 = *(_QWORD *)(v48 + 336);
                          v33 = v93;
                          v109 = *(__int64 *)((char *)p_ArbitraryUserPointer + 52);
                          v49 = HIDWORD(v109);
                          if ( v93 != v109 )
                          {
                            *(_DWORD *)(v48 + 336) = v109;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 340LL) = v49;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 352LL) |= 0x2010u;
                          }
                          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v121, (struct XDCOBJ *)v61, 0x204u);
                          if ( (*(_DWORD *)(v121[0] + 32LL) & 1) != 0 )
                          {
                            v124.x = v38;
                            v124.y = v39;
                            v125 = v38 + v67;
                            v126 = v39 + v70;
                            EXFORMOBJ::bXform((EXFORMOBJ *)v121, &v124);
                            ERECTL::vOrder((ERECTL *)&v124);
                            if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v124) )
                            {
                              if ( (*(_DWORD *)(v61[0] + 36LL) & 0xE0) != 0 )
                                XDCOBJ::vAccumulate((XDCOBJ *)v61, (struct ERECTL *)&v124);
                              v51 = *(struct SURFACE **)(v61[0] + 512LL);
                              if ( v51 )
                                GrePatBltLockedDC(
                                  (struct XDCOBJ *)v61,
                                  v50,
                                  (struct ERECTL *)&v124,
                                  v40,
                                  v51,
                                  v76,
                                  v71,
                                  v78,
                                  v77);
                            }
                          }
                          else
                          {
                            v52 = *(_DWORD **)(v61[0] + 80LL);
                            v53 = v52[10];
                            v54 = v52[8];
                            v55 = v52[11];
                            v56 = v52[9];
                            v52[10] = v76;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 32LL) = v71;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 44LL) = v78;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 36LL) = v77;
                            GreMaskBlt(FiberData, v70, 0LL, 0, 0, 0LL, 0, 0, v87 << 16, 0);
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 40LL) = v53;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 32LL) = v54;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 44LL) = v55;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 36LL) = v56;
                            v43 = v83;
                          }
                          v57 = *(_QWORD *)(v61[0] + 80LL);
                          if ( *(_QWORD *)(v57 + 16) != v111 )
                          {
                            *(_QWORD *)(v57 + 16) = v111;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 8LL) |= 0x1000u;
                          }
                          v58 = *(_QWORD *)(v61[0] + 80LL);
                          if ( v43 != *(_DWORD *)(v58 + 48) )
                          {
                            *(_DWORD *)(v58 + 48) = v43;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 52LL) = (_DWORD)v79;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 8LL) |= 1u;
                          }
                          if ( (*(_DWORD *)(v61[0] + 112LL) & 1) != 0 )
                          {
                            v59 = *(_QWORD *)(v61[0] + 80LL);
                            if ( *(_QWORD *)(v59 + 112) )
                            {
                              if ( v74 != *(_DWORD *)(v59 + 136) )
                              {
                                *(_DWORD *)(v59 + 136) = v74;
                                *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 8LL) |= 1u;
                              }
                              if ( !v68 )
                                *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 8LL) &= ~0x40000u;
                            }
                          }
                          v36 = HIDWORD(v93);
                          goto LABEL_81;
                        }
                      }
                      break;
                    case 1:
                      if ( !v60 && (unsigned int)v15 >= 0x38 )
                      {
                        if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                        {
                          if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                            ExRaiseDatatypeMisalignment();
                          if ( p_Self > W32UserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                            *W32UserProbeAddress = 0;
                        }
                        v120 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                        v23 = v120;
                        if ( v120 < 0xAAAAAAA && 24 * (unsigned __int64)v120 <= (unsigned int)(v15 - 48) )
                        {
                          v24 = *(_QWORD *)(v61[0] + 80LL);
                          v25 = *(_DWORD *)(v24 + 48);
                          v67 = *(_DWORD *)(v24 + 52);
                          v26 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                          v108 = v26;
                          v27 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                          v116 = v27;
                          v28 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                          v110 = v28;
                          v29 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                          v96 = v29;
                          v30 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                          v97 = v30;
                          v99 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                          v31 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                          v95 = v31;
                          v68 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                          v103 = v68;
                          if ( v25 != v99 )
                          {
                            *(_DWORD *)(v24 + 48) = v99;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 52LL) = v31;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 8LL) |= 1u;
                          }
                          v32 = *(_QWORD *)(v61[0] + 80LL);
                          v79 = *(PVOID *)(v32 + 336);
                          v33 = (int)v79;
                          v107 = p_ArbitraryUserPointer[5];
                          v34 = HIDWORD(v107);
                          if ( v79 != v107 )
                          {
                            *(_DWORD *)(v32 + 336) = (_DWORD)v107;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 340LL) = v34;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 352LL) |= 0x2010u;
                          }
                          GrePolyPatBltInternal(
                            (struct XDCOBJ *)v61,
                            v68,
                            (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                            v23,
                            v26,
                            v27,
                            v28,
                            v29,
                            v30);
                          v35 = *(_QWORD *)(v61[0] + 80LL);
                          if ( v25 != *(_DWORD *)(v35 + 48) )
                          {
                            *(_DWORD *)(v35 + 48) = v25;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 52LL) = v67;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 8LL) |= 1u;
                          }
                          v36 = HIDWORD(v79);
LABEL_81:
                          v37 = *(_QWORD *)(v61[0] + 80LL);
                          if ( v33 != *(_DWORD *)(v37 + 336) || v36 != *(_DWORD *)(v37 + 340) )
                          {
                            *(_DWORD *)(v37 + 336) = v33;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 340LL) = v36;
                            *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 352LL) |= 0x2010u;
                          }
                        }
                      }
                      break;
                    case 3:
                      if ( !v60 )
                        GreBatchTextOutRect(
                          (struct XDCOBJ *)v61,
                          (struct _BATCHTEXTOUTRECT *)p_ArbitraryUserPointer,
                          v15);
                      break;
                    case 4:
                      if ( (unsigned int)v15 < 0xC )
                      {
                        LODWORD(v13) = 0;
                        v65 = 0;
                      }
                      else
                      {
                        v82 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                        v72 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                      }
                      if ( (_DWORD)v13 )
                      {
                        v19 = (_DWORD *)v61[0];
                        *(_DWORD *)(v61[0] + 136LL) = v82;
                        v19[35] = v72;
                        v20 = v19[10] & 1;
                        if ( v20 )
                          v21 = v19[354];
                        else
                          v21 = v19[352];
                        v19[388] = v19[34] + v21;
                        if ( v20 )
                          v22 = v19[355];
                        else
                          v22 = v19[353];
                        v19[389] = v72 + v22;
                      }
                      break;
                    case 5:
                      if ( (unsigned int)v15 < 0x18 )
                      {
                        LODWORD(v13) = 0;
                        v65 = 0;
                      }
                      else
                      {
                        v127 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                        v88 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                      }
                      if ( (_DWORD)v13 )
                      {
                        DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v123, 0);
                        GreExtSelectClipRgnLocked((struct XDCOBJ *)v61, &v127, v88);
                      }
                      break;
                    case 7:
                      v18 = 0LL;
                      v89 = 0LL;
                      if ( (unsigned int)v15 < 0x10 )
                      {
                        v13 = 0LL;
                        v65 = 0;
                      }
                      else
                      {
                        v18 = p_ArbitraryUserPointer[1];
                        v89 = v18;
                      }
                      goto LABEL_49;
                    case 8:
                      v18 = 0LL;
                      v91 = 0LL;
                      if ( (unsigned int)v15 < 0x10 )
                      {
                        v13 = 0LL;
                        v65 = 0;
                      }
                      else
                      {
                        v18 = p_ArbitraryUserPointer[1];
                        v91 = v18;
                      }
LABEL_49:
                      if ( (_DWORD)v13 )
                        NtGdiDeleteObjectApp(v18, v13, 0x1C0000000uLL);
                      break;
                    default:
                      break;
                  }
                }
                --StackLimit;
                p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v15 + 7) & 0xFFFFFFF8));
                v64 = p_ArbitraryUserPointer;
                if ( !StackLimit )
                  break;
              }
              while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
              v17 = v80;
              LODWORD(v80[106].StackLimit) = 0;
              LODWORD(v17[13].SubSystemTib) &= 0x80000000;
              LODWORD(v17[13].SubSystemTib) &= ~0x80000000;
              *(_QWORD *)(*(_QWORD *)(v61[0] + 80LL) + 16LL) = v113;
              *(_DWORD *)(*(_QWORD *)(v61[0] + 80LL) + 8LL) |= 0x1000u;
            }
            if ( v61[0] )
            {
              XDCOBJ::RestoreAttributes((XDCOBJ *)v61);
              _InterlockedDecrement((volatile signed __int32 *)(v61[0] + 12LL));
              v61[0] = 0LL;
              p_ArbitraryUserPointer = v64;
            }
            if ( v60 )
              GreEnableAppContainerRestriction(1LL);
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v123);
          }
        }
        else
        {
          _InterlockedDecrement((volatile signed __int32 *)(v61[0] + 12LL));
          p_ArbitraryUserPointer = v64;
        }
      }
    }
    if ( v75 )
    {
      while ( 1 )
      {
        v7 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
        v106 = v7;
        v8 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        v73 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        if ( (unsigned __int64)p_ArbitraryUserPointer + v8 > p_Self )
        {
LABEL_10:
          v11 = v80;
          LODWORD(v80[106].StackLimit) = 0;
          LODWORD(v11[13].SubSystemTib) &= 0x80000000;
          break;
        }
        v9 = v7 - 7;
        if ( v9 )
        {
          if ( v9 != 1 )
            goto LABEL_9;
          v92 = 0LL;
          v10 = p_ArbitraryUserPointer[1];
          v92 = v10;
        }
        else
        {
          v94 = 0LL;
          v10 = p_ArbitraryUserPointer[1];
          v94 = v10;
        }
        NtGdiDeleteObjectApp(v10, 1LL, a3);
LABEL_9:
        --StackLimit;
        p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v8 + 7) & 0xFFFFFFF8));
        v64 = p_ArbitraryUserPointer;
        if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
          goto LABEL_10;
      }
    }
  }
  result = v80;
  v80[13].FiberData = 0LL;
  return result;
}
