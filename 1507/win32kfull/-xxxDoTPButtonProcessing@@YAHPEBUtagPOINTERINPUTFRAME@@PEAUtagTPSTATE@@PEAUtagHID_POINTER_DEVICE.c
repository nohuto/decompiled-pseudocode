/*
 * XREFs of ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3238
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C01F0CC8 (-ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPO.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01F1948 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@H@Z @ 0x1C01F196C (-IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@H@Z.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01F2010 (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F202C (-SendEndInertia@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F20AC (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F2258 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z @ 0x1C01F6544 (-xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z.c)
 */

__int64 __fastcall xxxDoTPButtonProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        LARGE_INTEGER *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        int a4,
        unsigned int a5,
        int *a6)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8; // r13
  int *v10; // r10
  int v12; // r15d
  DWORD LowPart; // ecx
  int v14; // edx
  int v15; // r12d
  int v16; // esi
  DWORD v17; // eax
  unsigned int v18; // ecx
  DWORD v19; // eax
  DWORD v20; // eax
  unsigned __int16 *v21; // r9
  LARGE_INTEGER *v22; // rdx
  DWORD v23; // r8d
  int v25; // r8d
  _QWORD *v26; // r9
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // rcx
  DWORD v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned __int64 QuadPart; // r13
  DWORD v37; // eax
  unsigned int v38; // r8d
  unsigned __int16 *v39; // r9
  LARGE_INTEGER *v40; // rdx
  DWORD v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct tagPOINTER_INFO *v46; // r13
  LONG x; // ecx
  LONG y; // r9d
  signed int v49; // r12d
  int v50; // r11d
  LARGE_INTEGER *v51; // r10
  DWORD v52; // eax
  unsigned int v53; // eax
  __int64 v54; // r8
  unsigned int HighPart; // r14d
  __int64 v56; // r8
  __int64 v57; // rsi
  LARGE_INTEGER *v58; // r15
  DWORD v59; // r9d
  int v60; // ecx
  signed int v61; // r10d
  DWORD v62; // r8d
  int v63; // edx
  DWORD v64; // eax
  DWORD v65; // eax
  char v66; // r8
  DWORD v67; // eax
  DWORD v68; // eax
  int v69; // eax
  LONG v70; // r9d
  int v71; // r8d
  __int64 v72; // rdx
  int v73; // eax
  struct tagPOINT v74; // rcx
  LARGE_INTEGER *v75; // [rsp+20h] [rbp-18h]
  void *v76; // [rsp+28h] [rbp-10h]
  int v77; // [rsp+80h] [rbp+48h]
  struct tagPOINT v78; // [rsp+88h] [rbp+50h] BYREF
  struct tagHID_POINTER_DEVICE_INFO *v79; // [rsp+90h] [rbp+58h]
  int v80; // [rsp+98h] [rbp+60h]

  v80 = a4;
  v79 = a3;
  v6 = *((_QWORD *)a1 + 9);
  v7 = 0;
  v8 = *((_QWORD *)a1 + 5);
  v10 = a6;
  v12 = 0;
  v77 = 0;
  LowPart = a2[158].LowPart;
  v14 = 0;
  v15 = 0;
  v16 = (*(unsigned __int8 *)(v6 + 68) >> 4) & 1;
  v75 = 0LL;
  v76 = (void *)v8;
  *a6 = 0;
  if ( (LowPart & 1) == v16 )
    goto LABEL_11;
  v17 = a2[135].LowPart;
  if ( v17 == 3 || v17 == 6 )
  {
    if ( v16 )
    {
      v18 = LowPart | 0x40;
      goto LABEL_7;
    }
  }
  else if ( v16 )
  {
    goto LABEL_8;
  }
  if ( (LowPart & 0x40) != 0 )
  {
    v12 = 1;
    v18 = LowPart & 0xFFFFFFBF;
LABEL_7:
    a2[158].LowPart = v18;
  }
LABEL_8:
  v14 = 1;
  v77 = 1;
  a2[158].LowPart ^= (a2[158].LowPart ^ v16) & 1;
  if ( v16 )
  {
    TPAAPSetCurtainState((struct tagTPSTATE *)a2, 0);
    v10 = a6;
    a2[150].QuadPart = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v14 = 1;
  }
  *v10 = 1;
LABEL_11:
  v19 = a2[135].LowPart;
  if ( v19 == 3 || v19 == 6 || v12 )
    return 1LL;
  if ( v14 )
  {
    if ( v16 )
    {
      if ( a5 == 2 )
      {
        v20 = a2[158].LowPart;
        if ( (v20 & 0x10000) == 0 )
        {
          a2[158].LowPart = v20 | 0x1000;
          if ( *((_DWORD *)a1 + 6) )
          {
            v21 = (unsigned __int16 *)(*((_QWORD *)a1 + 9) + 48LL);
            do
            {
              v22 = &a2[22 * ((unsigned int)*v21 % a2[133].HighPart)];
              v23 = v22[21].LowPart;
              if ( (v23 & 2) == 0 )
                *v22 = v22[1];
              v21 += 108;
              ++v7;
              v22[21].LowPart = v23 & 0xFFFFFFFB;
            }
            while ( v7 < *((_DWORD *)a1 + 6) );
          }
          return 1LL;
        }
      }
    }
  }
  if ( (a2[158].LowPart & 0x1000) != 0 )
  {
    if ( v16 && a5 != 2 )
      v15 = 1;
    v25 = 0;
    if ( *((_DWORD *)a1 + 6) )
    {
      v26 = (_QWORD *)(*((_QWORD *)a1 + 9) + 96LL);
      while ( 1 )
      {
        v75 = &a2[22 * ((unsigned int)*((unsigned __int16 *)v26 - 24) % a2[133].HighPart)];
        if ( (int)((v75->QuadPart - *v26) * (v75->QuadPart - *v26)
                 + (HIDWORD(v75->QuadPart) - HIDWORD(*v26)) * (HIDWORD(v75->QuadPart) - HIDWORD(*v26))) > (unsigned __int64)(unsigned int)(dword_1C03236A4 * dword_1C03236A4)
          || (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                              - a2[150].QuadPart) > (unsigned int)dword_1C03236A0 )
        {
          break;
        }
        v26 += 27;
        if ( (unsigned int)++v25 >= *((_DWORD *)a1 + 6) )
          goto LABEL_37;
      }
      v15 = 1;
LABEL_37:
      v14 = v77;
    }
    if ( !v15 )
    {
      if ( v14 && !v16 )
      {
        a2[158].LowPart &= ~0x1000u;
        v27 = (a2[158].LowPart & 0x400000) == 0;
        a2[149].QuadPart = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        if ( !v27 )
          SendEndInertia((struct tagTPSTATE *)a2);
        if ( !ShouldSuppressClicks((const struct tagTPSTATE *)a2) && (a2[158].LowPart & 0x20) == 0 )
        {
          a2[162] = KeQueryPerformanceCounter(0LL);
          UserSessionSwitchLeaveCrit(v29, v28);
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
          EnterCrit(1LL);
          if ( IsFirstActionAfterKey() )
            dword_1C0321BD0 = 2;
          else
            dword_1C0321BD4 = 2;
          ++dword_1C0321C18;
          ++dword_1C0321C24;
        }
        return 1LL;
      }
      return 1LL;
    }
    a2[158].LowPart &= ~0x1000u;
    v77 = 1;
  }
  else if ( !v14 )
  {
    goto LABEL_79;
  }
  if ( v16 )
  {
    if ( v15 )
      QuadPart = a2[150].QuadPart;
    else
      QuadPart = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    if ( (a2[158].LowPart & 0x400000) != 0 )
      SendEndInertia((struct tagTPSTATE *)a2);
    if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
    {
      a2[158].LowPart |= 0x40u;
LABEL_78:
      v10 = a6;
      v14 = v77;
      goto LABEL_79;
    }
    if ( v15 || !(unsigned int)IsTPRightClick(a1, (struct tagTPSTATE *)a2, v80) )
    {
      if ( (a2[158].LowPart & 0x10) != 0 )
        goto LABEL_78;
      if ( IsFirstActionAfterKey() )
        dword_1C0321BD0 = 5;
      else
        dword_1C0321BD4 = 5;
      ++dword_1C0321C0C;
      ++dword_1C0321C24;
      UserSessionSwitchLeaveCrit(v45, v44);
      xxxSendTPAsMouse(gptCursorAsync, 2u, QuadPart);
      EnterCrit(1LL);
      a2[158].LowPart = a2[158].LowPart & 0xFFFFFFED | 0x10;
    }
    else
    {
      if ( (a2[158].LowPart & 0x20) != 0 )
        goto LABEL_78;
      if ( IsFirstActionAfterKey() )
        dword_1C0321BD0 = 6;
      else
        dword_1C0321BD4 = 6;
      ++dword_1C0321C10;
      ++dword_1C0321C24;
      UserSessionSwitchLeaveCrit(v43, v42);
      xxxSendTPAsMouse(gptCursorAsync, 8u, QuadPart);
      EnterCrit(1LL);
      a2[158].LowPart |= 0x22u;
    }
    if ( !RevalidateTPDeviceState((unsigned __int64)v76) )
      return 0LL;
    goto LABEL_78;
  }
  v30 = a2[158].LowPart;
  if ( (v30 & 0x20) != 0 && (v30 & 2) != 0 )
  {
    if ( !__CFSHR__(v30, 16) )
      goto LABEL_58;
    if ( (v30 & 4) == 0 )
    {
LABEL_59:
      a2[162] = KeQueryPerformanceCounter(0LL);
      UserSessionSwitchLeaveCrit(v32, v31);
      xxxSendTPAsMouse(
        gptCursorAsync,
        0x10u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
      EnterCrit(1LL);
      a2[158].LowPart &= ~0x20u;
      goto LABEL_60;
    }
    if ( !__CFSHR__(v30, 16) )
    {
LABEL_58:
      if ( (v30 & 8) == 0 )
        goto LABEL_59;
    }
  }
  if ( (v30 & 0x10) != 0 && (v30 & 2) == 0 )
  {
    if ( !__CFSHR__(v30, 16) )
      goto LABEL_67;
    if ( (v30 & 8) == 0 )
    {
LABEL_68:
      a2[162] = KeQueryPerformanceCounter(0LL);
      UserSessionSwitchLeaveCrit(v34, v33);
      xxxSendTPAsMouse(
        gptCursorAsync,
        4u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
      EnterCrit(1LL);
      a2[158].LowPart &= ~0x10u;
LABEL_60:
      if ( !RevalidateTPDeviceState(v8) )
        return 0LL;
      goto LABEL_69;
    }
    if ( !__CFSHR__(v30, 16) )
    {
LABEL_67:
      if ( (v30 & 4) == 0 )
        goto LABEL_68;
    }
  }
LABEL_69:
  v10 = a6;
  v35 = a2[135].LowPart - 4;
  a2[149].QuadPart = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v14 = v77;
  if ( v35 <= 1 )
    a2[135].LowPart = 1;
LABEL_79:
  if ( a5 > 2 )
  {
    if ( v16 )
      return 0LL;
    v37 = a2[158].LowPart;
    if ( (v37 & 4) != 0 || (v37 & 8) != 0 || a2[133].LowPart )
      return 0LL;
  }
  if ( v80 )
    return 1LL;
  if ( v14 && !v15 )
  {
    v38 = 0;
    if ( *((_DWORD *)a1 + 6) )
    {
      v39 = (unsigned __int16 *)(*((_QWORD *)a1 + 9) + 48LL);
      do
      {
        v40 = &a2[22 * ((unsigned int)*v39 % a2[133].HighPart)];
        v41 = v40[21].LowPart;
        if ( (v41 & 2) == 0 )
          *v40 = v40[1];
        v39 += 108;
        ++v38;
        v40[21].LowPart = v41 & 0xFFFFFFFB;
      }
      while ( v38 < *((_DWORD *)a1 + 6) );
    }
    if ( a2[135].LowPart == 2 && !v16 )
      a2[158].LowPart |= 0x200000u;
    *v10 = 1;
    return 1LL;
  }
  a6 = 0LL;
  v46 = 0LL;
  v78 = 0LL;
  x = 0;
  y = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0LL;
  if ( v16 || (v52 = a2[158].LowPart, (v52 & 4) != 0) || (v52 & 8) != 0 || a2[133].LowPart )
  {
    v53 = *((_DWORD *)a1 + 6);
    v54 = *((_QWORD *)a1 + 9);
    if ( v53 )
    {
      HighPart = a2[133].HighPart;
      v56 = v54 + 68;
      v57 = v53;
      do
      {
        v58 = &a2[22 * (*(unsigned __int16 *)(v56 - 20) % HighPart)];
        v75 = v58;
        if ( (*(_DWORD *)v56 & 0x40000) == 0 && *(_DWORD *)v56 )
        {
          v59 = v58[21].LowPart;
          if ( (v59 & 4) != 0 )
          {
            v60 = *(_QWORD *)(v56 + 28) - v58[1].LowPart;
            HIDWORD(a6) = HIDWORD(*(_QWORD *)(v56 + 28)) - v58[1].HighPart;
            LODWORD(a6) = v60;
            v61 = abs32(v60) + abs32(SHIDWORD(a6));
            if ( v61 >= v49 )
            {
              v49 = v61;
              v78 = (struct tagPOINT)a6;
            }
            v46 = (struct tagPOINTER_INFO *)(v56 - 12);
            v51 = v58;
            if ( (v59 & 0x4000) == 0 )
              v50 = 1;
          }
          else if ( (v59 & 0x2000) != 0 )
          {
            v50 = 1;
          }
        }
        v56 += 216LL;
        --v57;
      }
      while ( v57 );
      y = v78.y;
      x = v78.x;
    }
    v62 = a2[135].LowPart;
    v63 = 0;
    if ( v62 != 5 )
    {
      if ( a5 == 2 || (v64 = a2[158].LowPart, (v64 & 4) != 0) || (v64 & 8) != 0 )
      {
        v65 = a2[133].LowPart;
        if ( (!v65 || v51) && (v62 != 2 || v51) )
        {
          a2[135].LowPart = 5;
          if ( v65 && !v50 )
            v75[10].LowPart = 0;
          if ( IsFirstActionAfterKey() )
            dword_1C0321BD0 = 8;
          else
            dword_1C0321BD4 = 8;
          ++dword_1C0321C08;
          ++dword_1C0321C24;
        }
      }
    }
    v66 = 4;
    if ( a2[135].LowPart != 4 && a5 == 1 )
    {
      v67 = a2[158].LowPart;
      if ( (v67 & 4) == 0 && (v67 & 8) == 0 && v51 )
      {
        a2[135].LowPart = 4;
        v51[10].LowPart = 0;
        if ( IsFirstActionAfterKey() )
          dword_1C0321BD0 = 7;
        else
          dword_1C0321BD4 = 7;
        ++dword_1C0321C04;
        ++dword_1C0321C24;
      }
    }
    if ( v63 )
    {
      a2[145].QuadPart = 0LL;
      a2[146].QuadPart = 0LL;
    }
    if ( a5 == 1 && (v68 = a2[158].LowPart, ((unsigned __int8)v68 & (unsigned __int8)v66) == 0) && (v68 & 8) == 0
      || a2[133].LowPart && !v50 )
    {
      if ( v51 )
      {
        v69 = ApplyElasticDragModeDeltas(v79, (struct tagTPCONTACTSTATE *)v51, v46, &v78);
        y = v78.y;
        x = v78.x;
        a2[158].LowPart ^= (a2[158].LowPart ^ (v69 << 14)) & 0x4000;
      }
    }
    v70 = a2[145].HighPart + y;
    v78.x = a2[145].LowPart + x;
    v78.y = v70;
    LODWORD(a6) = 100 * v78.x / dword_1C03236A8;
    v71 = (_DWORD)a6 - a2[146].LowPart;
    v72 = (unsigned int)((100 * v70) >> 31);
    LODWORD(v72) = 100 * v70 % dword_1C03236A8;
    HIDWORD(a6) = 100 * v70 / dword_1C03236A8;
    v73 = HIDWORD(a6) - a2[146].HighPart;
    a2[146].QuadPart = (LONGLONG)a6;
    v74 = v78;
    a2[145] = (LARGE_INTEGER)v78;
    a6 = (int *)__PAIR64__(v73, v71);
    if ( v71 || v73 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(v74, v72);
      xxxSendTPAsMouse(
        (struct tagPOINT)a6,
        1u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
      EnterCrit(1LL);
    }
  }
  return 1LL;
}
