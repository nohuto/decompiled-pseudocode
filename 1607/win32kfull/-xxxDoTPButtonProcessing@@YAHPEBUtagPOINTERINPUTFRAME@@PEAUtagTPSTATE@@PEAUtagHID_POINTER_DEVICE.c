/*
 * XREFs of ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01E9BB8
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C015A618 (-SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C01E6968 (-ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPO.c)
 *     ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01E74D8 (-DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z.c)
 *     ?FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01E75B0 (-FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01E7FB4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@HPEAUtagPOINT@@@Z @ 0x1C01E7FD8 (-IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@HPEAUtagPOINT@@@Z.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01E84D4 (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01E8654 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01E8868 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z @ 0x1C01EDB2C (-xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB9C (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 */

__int64 __fastcall xxxDoTPButtonProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagPOINT *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        int a4,
        unsigned int a5,
        int *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  int v10; // r14d
  int v11; // esi
  unsigned __int128 v12; // rax
  LONG x; // ecx
  struct tagPOINT v14; // r12
  LONG v15; // eax
  unsigned int v16; // ecx
  LONG v17; // eax
  int v18; // ecx
  LONG v19; // eax
  unsigned __int16 *v20; // rsi
  __int64 v21; // rcx
  struct tagPOINT *v22; // r11
  BOOL v24; // r11d
  int v25; // r9d
  _QWORD *v26; // r10
  unsigned __int128 v27; // rax
  bool v28; // zf
  __int64 v29; // rcx
  LONG v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  char v36; // al
  int v37; // r12d
  unsigned __int64 v38; // r14
  LONG v39; // eax
  unsigned int v40; // r14d
  unsigned __int16 *v41; // r15
  __int64 v42; // rcx
  struct tagPOINT *v43; // r11
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  LONG v49; // ecx
  LONG v50; // r8d
  signed int v51; // r12d
  int v52; // r11d
  struct tagTPCONTACTSTATE *v53; // r10
  LONG v54; // eax
  unsigned int v55; // eax
  __int64 v56; // rdx
  unsigned int y; // r13d
  int *v58; // r8
  __int64 v59; // r14
  int v60; // eax
  struct tagTPCONTACTSTATE *v61; // r15
  int v62; // esi
  signed int v63; // r9d
  LONG v64; // r9d
  int v65; // edx
  LONG v66; // eax
  LONG v67; // eax
  LARGE_INTEGER *v68; // r12
  char v69; // r9
  LONG v70; // eax
  LONG v71; // eax
  int v72; // eax
  LONG v73; // r8d
  int v74; // esi
  int v75; // r14d
  __int64 v76; // rcx
  struct tagPOINT v77; // [rsp+38h] [rbp-30h] BYREF
  struct tagTPCONTACTSTATE *v78; // [rsp+40h] [rbp-28h]
  struct tagPOINT v79; // [rsp+48h] [rbp-20h] BYREF
  void *v80; // [rsp+50h] [rbp-18h]
  int v81; // [rsp+B0h] [rbp+48h]
  struct tagPOINTER_INFO *v82; // [rsp+B0h] [rbp+48h]
  int v83; // [rsp+B8h] [rbp+50h]
  struct tagPOINT v86; // [rsp+D8h] [rbp+70h]
  struct tagPOINT v87; // [rsp+D8h] [rbp+70h]

  v6 = 0;
  v80 = (void *)*((_QWORD *)a1 + 7);
  v8 = *((_QWORD *)a1 + 11);
  v81 = 0;
  v10 = 0;
  v83 = 0;
  v78 = 0LL;
  v11 = (*(unsigned __int8 *)(v8 + 68) >> 4) & 1;
  *(LARGE_INTEGER *)&v12 = KeQueryPerformanceCounter(0LL);
  x = a2[240].x;
  v14 = (struct tagPOINT)v12;
  *a6 = 0;
  if ( (x & 1) == v11 )
    goto LABEL_11;
  v15 = a2[208].x;
  if ( v15 == 3 || v15 == 6 )
  {
    if ( v11 )
    {
      v16 = x | 0x40;
      goto LABEL_7;
    }
  }
  else if ( v11 )
  {
    goto LABEL_8;
  }
  if ( (x & 0x40) != 0 )
  {
    v10 = 1;
    v16 = x & 0xFFFFFFBF;
LABEL_7:
    a2[240].x = v16;
  }
LABEL_8:
  v81 = 1;
  a2[240].x ^= (a2[240].x ^ v11) & 1;
  if ( v11 )
  {
    TPAAPSetCurtainState((struct tagTPSTATE *)a2, 0);
    v12 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    a2[224] = v14;
    a2[223] = *(struct tagPOINT *)((char *)&v12 + 8);
  }
  *a6 = 1;
LABEL_11:
  v17 = a2[208].x;
  if ( v17 == 3 || v17 == 6 || v10 )
    return 1LL;
  v18 = v81;
  if ( v81 )
  {
    if ( v11 )
    {
      if ( a5 == 2 )
      {
        v19 = a2[240].x;
        if ( (v19 & 0x10000) == 0 )
        {
          a2[240].x = v19 | 0x1000;
          if ( *((_DWORD *)a1 + 10) )
          {
            v20 = (unsigned __int16 *)(*((_QWORD *)a1 + 11) + 48LL);
            do
            {
              v21 = (unsigned int)*v20 % a2[205].y;
              v22 = &a2[34 * v21];
              if ( (v22[33].x & 2) == 0 )
              {
                *v22 = v22[1];
                SetupDragRectsForContact((struct tagTPCONTACTSTATE *)&a2[34 * v21]);
              }
              v22[33].x &= ~4u;
              v20 += 108;
              ++v6;
            }
            while ( v6 < *((_DWORD *)a1 + 10) );
          }
          return 1LL;
        }
      }
    }
  }
  if ( (a2[240].x & 0x1000) != 0 )
  {
    v24 = 0;
    if ( v11 )
    {
      v24 = a5 != 2;
      v83 = v24;
    }
    v25 = 0;
    if ( *((_DWORD *)a1 + 10) )
    {
      v26 = (_QWORD *)(*((_QWORD *)a1 + 11) + 96LL);
      while ( 1 )
      {
        *(_QWORD *)&v12 = *v26;
        *((_QWORD *)&v12 + 1) = HIDWORD(*v26);
        v78 = (struct tagTPCONTACTSTATE *)&a2[34 * ((unsigned int)*((unsigned __int16 *)v26 - 24) % a2[205].y)];
        *((_QWORD *)&v12 + 1) = (int)((HIDWORD(*(_QWORD *)v78) - DWORD2(v12)) * (HIDWORD(*(_QWORD *)v78) - DWORD2(v12))
                                    + (*(_QWORD *)v78 - v12) * (*(_QWORD *)v78 - v12));
        if ( *((_QWORD *)&v12 + 1) > (unsigned __int64)(unsigned int)(dword_1C03280C4 * dword_1C03280C4) )
          break;
        *((_QWORD *)&v12 + 1) = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                              - *(_QWORD *)&a2[223];
        if ( *((_QWORD *)&v12 + 1) > (unsigned __int64)(unsigned int)dword_1C03280C0 )
          break;
        v26 += 27;
        if ( (unsigned int)++v25 >= *((_DWORD *)a1 + 10) )
          goto LABEL_36;
      }
      v24 = 1;
      v83 = 1;
LABEL_36:
      v18 = v81;
    }
    if ( !v24 )
    {
      if ( v18 && !v11 )
      {
        a2[240].x &= ~0x1000u;
        v27 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        v28 = (a2[240].x & 0x200000) == 0;
        a2[222] = *(struct tagPOINT *)((char *)&v27 + 8);
        if ( !v28 )
          zzzSendEndInertia((struct tagTPSTATE *)a2, SDWORD2(v27));
        if ( !ShouldSuppressClicks((const struct tagTPSTATE *)a2) && (a2[240].x & 0x20) == 0 )
        {
          a2[261] = v14;
          if ( gdwInAtomicOperation )
          {
            v29 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v29, gdwInAtomicOperation);
          xxxSendTPAsMouse(
            gptCursorAsync,
            8u,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          xxxSendTPAsMouse(
            gptCursorAsync,
            0x10u,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          EnterCrit(0LL, 1LL);
          if ( IsFirstActionAfterKey() )
            dword_1C0326D08 = 2;
          else
            dword_1C0326D0C = 2;
          ++dword_1C0326D58;
          ++dword_1C0326D74;
        }
      }
      return 1LL;
    }
    a2[240].x &= ~0x1000u;
    v81 = 1;
  }
  else
  {
    if ( !v81 )
    {
      v37 = 0;
      goto LABEL_90;
    }
    v24 = 0;
  }
  if ( v11 )
  {
    if ( v24 )
    {
      v38 = (unsigned __int64)a2[223];
    }
    else
    {
      v12 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      v38 = *((_QWORD *)&v12 + 1);
    }
    if ( (a2[240].x & 0x200000) != 0 )
      zzzSendEndInertia((struct tagTPSTATE *)a2, SDWORD2(v12));
    v37 = v83;
    if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
    {
      a2[240].x |= 0x40u;
LABEL_89:
      v18 = v81;
      goto LABEL_90;
    }
    v79 = 0LL;
    if ( v83 || !(unsigned int)IsTPRightClick(a1, (struct tagTPSTATE *)a2, a4, &v79) )
    {
      if ( (a2[240].x & 0x10) != 0 )
        goto LABEL_89;
      if ( IsFirstActionAfterKey() )
        dword_1C0326D08 = 5;
      else
        dword_1C0326D0C = 5;
      if ( a5 == 1 )
        qword_1C0326D88 = (__int64)v79;
      ++dword_1C0326D4C;
      ++dword_1C0326D74;
      if ( (dword_1C0328110 & 0x100) != 0 )
        DoTPButtonWarpBack((struct tagTPSTATE *)a2, a5);
      if ( gdwInAtomicOperation )
      {
        v48 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v48, gdwInAtomicOperation);
      xxxSendTPAsMouse(gptCursorAsync, 2u, v38);
      EnterCrit(0LL, 1LL);
      a2[240].x = a2[240].x & 0xFFFFFFED | 0x10;
    }
    else
    {
      if ( (a2[240].x & 0x20) != 0 )
        goto LABEL_89;
      if ( IsFirstActionAfterKey() )
        dword_1C0326D08 = 6;
      else
        dword_1C0326D0C = 6;
      ++dword_1C0326D50;
      ++dword_1C0326D74;
      qword_1C0326D90 = (__int64)v79;
      if ( (dword_1C0328110 & 0x100) != 0 )
        DoTPButtonWarpBack((struct tagTPSTATE *)a2, a5);
      if ( gdwInAtomicOperation )
      {
        v44 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v44, gdwInAtomicOperation);
      xxxSendTPAsMouse(gptCursorAsync, 8u, v38);
      EnterCrit(0LL, 1LL);
      a2[240].x |= 0x22u;
    }
    if ( !RevalidateTPDeviceState((unsigned __int64)v80, v45, v46, v47) )
      return 0LL;
    goto LABEL_89;
  }
  v30 = a2[240].x;
  if ( (v30 & 0x20) != 0 && (v30 & 2) != 0 )
  {
    v31 = (unsigned int)-__CFSHR__(v30, 16);
    if ( !__CFSHR__(v30, 16) )
      goto LABEL_61;
    if ( (v30 & 4) == 0 )
      goto LABEL_62;
    if ( !__CFSHR__(v30, 16) )
    {
LABEL_61:
      if ( (v30 & 8) == 0 )
      {
LABEL_62:
        a2[261] = v14;
        if ( gdwInAtomicOperation )
        {
          v31 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v31, gdwInAtomicOperation);
        xxxSendTPAsMouse(
          gptCursorAsync,
          0x10u,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        EnterCrit(0LL, 1LL);
        a2[240].x &= ~0x20u;
        goto LABEL_66;
      }
    }
  }
  if ( (v30 & 0x10) != 0 && (v30 & 2) == 0 )
  {
    v35 = (unsigned int)-__CFSHR__(v30, 16);
    if ( !__CFSHR__(v30, 16) )
      goto LABEL_73;
    if ( (v30 & 8) == 0 )
      goto LABEL_74;
    if ( !__CFSHR__(v30, 16) )
    {
LABEL_73:
      if ( (v30 & 4) == 0 )
      {
LABEL_74:
        a2[261] = v14;
        if ( gdwInAtomicOperation )
        {
          v35 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v35, gdwInAtomicOperation);
        xxxSendTPAsMouse(
          gptCursorAsync,
          4u,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        EnterCrit(0LL, 1LL);
        a2[240].x &= ~0x10u;
LABEL_66:
        if ( !RevalidateTPDeviceState((unsigned __int64)v80, v32, v33, v34) )
          return 0LL;
      }
    }
  }
  v36 = dword_1C0328110;
  a2[222] = (struct tagPOINT)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
  if ( (v36 & 8) != 0 )
    a2[240].x |= 0x4000000u;
  v37 = v83;
  v18 = v81;
  if ( (unsigned int)(a2[208].x - 4) <= 1 )
    a2[208].x = 1;
LABEL_90:
  if ( a5 > 2 )
  {
    if ( v11 )
      return 0LL;
    v39 = a2[240].x;
    if ( (v39 & 4) != 0 || (v39 & 8) != 0 || a2[205].x )
      return 0LL;
  }
  if ( a4 )
    return 1LL;
  if ( !v18 || v37 )
  {
    v82 = 0LL;
    v49 = 0;
    v50 = 0;
    v77 = 0LL;
    v51 = 0;
    v52 = 0;
    v53 = 0LL;
    if ( v11 || (v54 = a2[240].x, (v54 & 4) != 0) || (v54 & 8) != 0 || a2[205].x )
    {
      v55 = *((_DWORD *)a1 + 10);
      v56 = *((_QWORD *)a1 + 11);
      if ( v55 )
      {
        y = a2[205].y;
        v58 = (int *)(v56 + 68);
        v59 = v55;
        do
        {
          v60 = *v58;
          v61 = (struct tagTPCONTACTSTATE *)&a2[34 * (*((unsigned __int16 *)v58 - 10) % y)];
          v78 = v61;
          if ( (v60 & 0x40000) == 0 && v60 )
          {
            v62 = *((_DWORD *)v61 + 66);
            if ( (v62 & 4) != 0 )
            {
              v86.y = HIDWORD(*(_QWORD *)(v58 + 7)) - *((_DWORD *)v61 + 3);
              v86.x = *(_QWORD *)(v58 + 7) - *((_DWORD *)v61 + 2);
              v63 = abs32(v86.x) + abs32(v86.y);
              if ( v63 >= v51 )
              {
                v51 = v63;
                v77 = v86;
              }
              v53 = v61;
              v82 = (struct tagPOINTER_INFO *)(v58 - 3);
              if ( (v62 & 0x4000) == 0 )
                v52 = 1;
            }
            else if ( (v62 & 0x2000) != 0 )
            {
              v52 = 1;
            }
          }
          v58 += 54;
          --v59;
        }
        while ( v59 );
        v50 = v77.y;
        v49 = v77.x;
      }
      v64 = a2[208].x;
      v65 = 0;
      if ( v64 != 5
        && (a5 == 2 || (v66 = a2[240].x, (v66 & 4) != 0) || (v66 & 8) != 0)
        && ((v67 = a2[205].x) == 0 || v53)
        && (v64 != 2 || v53) )
      {
        v68 = (LARGE_INTEGER *)v78;
        a2[208].x = 5;
        if ( v67 && !v52 )
          v68[15].LowPart = 0;
        if ( IsFirstActionAfterKey() )
          dword_1C0326D08 = 8;
        else
          dword_1C0326D0C = 8;
        ++dword_1C0326D48;
        ++dword_1C0326D74;
      }
      else
      {
        v68 = (LARGE_INTEGER *)v78;
      }
      v69 = 4;
      if ( a2[208].x != 4 && a5 == 1 )
      {
        v70 = a2[240].x;
        if ( (v70 & 4) == 0 && (v70 & 8) == 0 && v53 )
        {
          a2[208].x = 4;
          *((_DWORD *)v53 + 30) = 0;
          if ( IsFirstActionAfterKey() )
            dword_1C0326D08 = 7;
          else
            dword_1C0326D0C = 7;
          ++dword_1C0326D44;
          ++dword_1C0326D74;
        }
      }
      if ( v65 )
      {
        a2[240].x &= ~0x80000000;
        a2[218] = 0LL;
        a2[219] = 0LL;
      }
      if ( a5 == 1 && (v71 = a2[240].x, ((unsigned __int8)v71 & (unsigned __int8)v69) == 0) && (v71 & 8) == 0
        || a2[205].x && !v52 )
      {
        if ( v53 )
        {
          v72 = ApplyElasticDragModeDeltas(a3, v53, v82, &v77);
          v50 = v77.y;
          v49 = v77.x;
          a2[240].x ^= (a2[240].x ^ (v72 << 14)) & 0x4000;
        }
      }
      v73 = a2[218].y + v50;
      v77.x = a2[218].x + v49;
      v77.y = v73;
      v87.x = 100 * v77.x / dword_1C03280C8;
      v74 = v87.x - a2[219].x;
      v87.y = 100 * v73 / dword_1C03280C8;
      v75 = v87.y - a2[219].y;
      a2[219] = v87;
      a2[218] = v77;
      if ( !(unsigned int)FilterMoveForStableContact(
                            (struct tagPOINT)__PAIR64__(v75, v74),
                            (struct tagTPSTATE *)a2,
                            v68)
        && (v74 || v75) )
      {
        a2[240].x |= 0x80000000;
        if ( gdwInAtomicOperation )
        {
          v76 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v76, gdwInAtomicOperation);
        xxxSendTPAsMouse(
          (struct tagPOINT)__PAIR64__(v75, v74),
          1u,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        EnterCrit(0LL, 1LL);
      }
    }
    return 1LL;
  }
  else
  {
    v40 = 0;
    if ( *((_DWORD *)a1 + 10) )
    {
      v41 = (unsigned __int16 *)(*((_QWORD *)a1 + 11) + 48LL);
      do
      {
        v42 = (unsigned int)*v41 % a2[205].y;
        v43 = &a2[34 * v42];
        if ( (v43[33].x & 2) == 0 )
        {
          *v43 = v43[1];
          SetupDragRectsForContact((struct tagTPCONTACTSTATE *)&a2[34 * v42]);
        }
        v43[33].x &= ~4u;
        v41 += 108;
        ++v40;
      }
      while ( v40 < *((_DWORD *)a1 + 10) );
    }
    if ( a2[208].x == 2 && !v11 )
      a2[240].x |= 0x100000u;
    *a6 = 1;
    return 1LL;
  }
}
