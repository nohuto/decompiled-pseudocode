/*
 * XREFs of ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3568
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C0152F88 (-SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C01F0C28 (-ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPO.c)
 *     ?FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@@Z @ 0x1C01F12B4 (-FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@@Z.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01F1AF4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@H@Z @ 0x1C01F1B18 (-IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@H@Z.c)
 *     ?QueuePTPMouseEvent@@YAXUtagPOINT@@KK@Z @ 0x1C01F2154 (-QueuePTPMouseEvent@@YAXUtagPOINT@@KK@Z.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01F22BC (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F22D8 (-SendEndInertia@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F2358 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F25A4 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 */

__int64 __fastcall xxxDoTPButtonProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        LARGE_INTEGER *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        int a4,
        unsigned int a5,
        int *a6)
{
  unsigned int v6; // edi
  int *v7; // r12
  __int64 v10; // rax
  int v11; // edx
  DWORD LowPart; // ecx
  int v13; // r15d
  int v14; // r13d
  int v15; // esi
  DWORD v16; // eax
  unsigned int v17; // ecx
  DWORD v18; // eax
  DWORD v19; // eax
  unsigned __int16 *v20; // rsi
  __int64 v21; // rcx
  LARGE_INTEGER *v22; // r11
  int v24; // r9d
  _QWORD *v25; // r10
  int v26; // ecx
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // rcx
  DWORD v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v35; // al
  unsigned __int64 v36; // r15
  DWORD v37; // eax
  unsigned int v38; // r15d
  unsigned __int16 *v39; // r12
  __int64 v40; // rcx
  LARGE_INTEGER *v41; // r11
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  LONG x; // ecx
  struct tagPOINTER_INFO *v47; // r13
  LONG y; // r8d
  signed int v49; // r15d
  int v50; // r11d
  LARGE_INTEGER *v51; // r10
  DWORD v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rdx
  unsigned int HighPart; // r14d
  __int64 v56; // r8
  __int64 v57; // rsi
  LARGE_INTEGER *v58; // r12
  LONG v59; // r9d
  int v60; // ecx
  signed int v61; // r10d
  DWORD v62; // r9d
  int v63; // edx
  DWORD v64; // eax
  DWORD v65; // eax
  char v66; // r9
  DWORD v67; // eax
  DWORD v68; // eax
  int v69; // eax
  LONG v70; // r8d
  int v71; // esi
  int v72; // r14d
  __int64 v73; // rdx
  __int64 v74; // rcx
  void *v75; // [rsp+20h] [rbp-18h]
  LARGE_INTEGER *v76; // [rsp+28h] [rbp-10h]
  int v77; // [rsp+80h] [rbp+48h]
  struct tagPOINT v78; // [rsp+88h] [rbp+50h] BYREF
  struct tagHID_POINTER_DEVICE_INFO *v79; // [rsp+90h] [rbp+58h]
  int v80; // [rsp+98h] [rbp+60h]

  v80 = a4;
  v79 = a3;
  v6 = 0;
  v7 = a6;
  v75 = (void *)*((_QWORD *)a1 + 5);
  v10 = *((_QWORD *)a1 + 9);
  v11 = 0;
  v77 = 0;
  LowPart = a2[193].LowPart;
  v13 = 0;
  v14 = 0;
  v76 = 0LL;
  v15 = (*(unsigned __int8 *)(v10 + 68) >> 4) & 1;
  *a6 = 0;
  if ( (LowPart & 1) == v15 )
    goto LABEL_11;
  v16 = a2[165].LowPart;
  if ( v16 == 3 || v16 == 6 )
  {
    if ( v15 )
    {
      v17 = LowPart | 0x40;
      goto LABEL_7;
    }
  }
  else if ( v15 )
  {
    goto LABEL_8;
  }
  if ( (LowPart & 0x40) != 0 )
  {
    v13 = 1;
    v17 = LowPart & 0xFFFFFFBF;
LABEL_7:
    a2[193].LowPart = v17;
  }
LABEL_8:
  v11 = 1;
  v77 = 1;
  a2[193].LowPart ^= (a2[193].LowPart ^ v15) & 1;
  if ( v15 )
  {
    TPAAPSetCurtainState((struct tagTPSTATE *)a2, 0);
    v11 = 1;
    a2[178].HighPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  *v7 = 1;
LABEL_11:
  v18 = a2[165].LowPart;
  if ( v18 == 3 || v18 == 6 || v13 )
    return 1LL;
  if ( v11 )
  {
    if ( v15 )
    {
      if ( a5 == 2 )
      {
        v19 = a2[193].LowPart;
        if ( (v19 & 0x10000) == 0 )
        {
          a2[193].LowPart = v19 | 0x1000;
          if ( *((_DWORD *)a1 + 6) )
          {
            v20 = (unsigned __int16 *)(*((_QWORD *)a1 + 9) + 48LL);
            do
            {
              v21 = (unsigned int)*v20 % a2[163].HighPart;
              v22 = &a2[27 * v21];
              if ( (v22[26].HighPart & 2) == 0 )
              {
                *v22 = v22[1];
                SetupDragRectsForContact((struct tagTPCONTACTSTATE *)&a2[27 * v21]);
              }
              v22[26].HighPart &= ~4u;
              v20 += 108;
              ++v6;
            }
            while ( v6 < *((_DWORD *)a1 + 6) );
          }
          return 1LL;
        }
      }
    }
  }
  if ( (a2[193].LowPart & 0x1000) != 0 )
  {
    if ( v15 && a5 != 2 )
      v14 = 1;
    v24 = 0;
    if ( *((_DWORD *)a1 + 6) )
    {
      v25 = (_QWORD *)(*((_QWORD *)a1 + 9) + 96LL);
      while ( 1 )
      {
        v76 = &a2[27 * ((unsigned int)*((unsigned __int16 *)v25 - 24) % a2[163].HighPart)];
        v26 = v76->QuadPart - *v25;
        if ( (int)((HIDWORD(v76->QuadPart) - HIDWORD(*v25)) * (HIDWORD(v76->QuadPart) - HIDWORD(*v25)) + v26 * v26) > (unsigned __int64)(unsigned int)(dword_1C0321F04 * dword_1C0321F04)
          || (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
           - a2[178].HighPart > dword_1C0321F00 )
        {
          break;
        }
        v25 += 27;
        if ( (unsigned int)++v24 >= *((_DWORD *)a1 + 6) )
          goto LABEL_37;
      }
      v14 = 1;
LABEL_37:
      v11 = v77;
    }
    if ( !v14 )
    {
      if ( v11 && !v15 )
      {
        a2[193].LowPart &= ~0x1000u;
        v27 = (a2[193].LowPart & 0x400000) == 0;
        a2[178].LowPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( !v27 )
          SendEndInertia((struct tagTPSTATE *)a2);
        if ( !ShouldSuppressClicks((const struct tagTPSTATE *)a2) && (a2[193].LowPart & 0x20) == 0 )
        {
          a2[198] = KeQueryPerformanceCounter(0LL);
          UserSessionSwitchLeaveCrit(v29, v28);
          QueuePTPMouseEvent(
            gptCursorAsync,
            8,
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          QueuePTPMouseEvent(
            gptCursorAsync,
            16,
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          EnterCrit(0LL, 1LL);
          if ( IsFirstActionAfterKey() )
            dword_1C0321C20 = 2;
          else
            dword_1C0321C24 = 2;
          ++dword_1C0321C68;
          ++dword_1C0321C78;
        }
        return 1LL;
      }
      return 1LL;
    }
    a2[193].LowPart &= ~0x1000u;
    v77 = 1;
  }
  else if ( !v11 )
  {
    goto LABEL_81;
  }
  if ( v15 )
  {
    if ( v14 )
      LODWORD(v36) = a2[178].HighPart;
    else
      v36 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (a2[193].LowPart & 0x400000) != 0 )
      SendEndInertia((struct tagTPSTATE *)a2);
    if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
    {
      a2[193].LowPart |= 0x40u;
LABEL_80:
      v11 = v77;
      goto LABEL_81;
    }
    if ( v14 || !(unsigned int)IsTPRightClick(a1, (struct tagTPSTATE *)a2, v80) )
    {
      if ( (a2[193].LowPart & 0x10) != 0 )
        goto LABEL_80;
      if ( IsFirstActionAfterKey() )
        dword_1C0321C20 = 5;
      else
        dword_1C0321C24 = 5;
      ++dword_1C0321C5C;
      ++dword_1C0321C78;
      UserSessionSwitchLeaveCrit(v45, v44);
      QueuePTPMouseEvent(gptCursorAsync, 2, v36);
      EnterCrit(0LL, 1LL);
      a2[193].LowPart = a2[193].LowPart & 0xFFFFFFED | 0x10;
    }
    else
    {
      if ( (a2[193].LowPart & 0x20) != 0 )
        goto LABEL_80;
      if ( IsFirstActionAfterKey() )
        dword_1C0321C20 = 6;
      else
        dword_1C0321C24 = 6;
      ++dword_1C0321C60;
      ++dword_1C0321C78;
      UserSessionSwitchLeaveCrit(v43, v42);
      QueuePTPMouseEvent(gptCursorAsync, 8, v36);
      EnterCrit(0LL, 1LL);
      a2[193].LowPart |= 0x22u;
    }
    if ( !RevalidateTPDeviceState((unsigned __int64)v75) )
      return 0LL;
    goto LABEL_80;
  }
  v30 = a2[193].LowPart;
  if ( (v30 & 0x20) != 0 && (v30 & 2) != 0 )
  {
    if ( !__CFSHR__(v30, 16) )
      goto LABEL_58;
    if ( (v30 & 4) == 0 )
    {
LABEL_59:
      a2[198] = KeQueryPerformanceCounter(0LL);
      UserSessionSwitchLeaveCrit(v32, v31);
      QueuePTPMouseEvent(
        gptCursorAsync,
        16,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      EnterCrit(0LL, 1LL);
      a2[193].LowPart &= ~0x20u;
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
      a2[198] = KeQueryPerformanceCounter(0LL);
      UserSessionSwitchLeaveCrit(v34, v33);
      QueuePTPMouseEvent(
        gptCursorAsync,
        4,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      EnterCrit(0LL, 1LL);
      a2[193].LowPart &= ~0x10u;
LABEL_60:
      if ( !RevalidateTPDeviceState((unsigned __int64)v75) )
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
  v35 = dword_1C0321F50;
  a2[178].LowPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v35 & 8) != 0 )
    a2[193].LowPart |= 0x10000000u;
  v11 = v77;
  if ( a2[165].LowPart - 4 <= 1 )
    a2[165].LowPart = 1;
LABEL_81:
  if ( a5 > 2 )
  {
    if ( v15 )
      return 0LL;
    v37 = a2[193].LowPart;
    if ( (v37 & 4) != 0 || (v37 & 8) != 0 || a2[163].LowPart )
      return 0LL;
  }
  if ( v80 )
    return 1LL;
  if ( v11 && !v14 )
  {
    v38 = 0;
    if ( *((_DWORD *)a1 + 6) )
    {
      v39 = (unsigned __int16 *)(*((_QWORD *)a1 + 9) + 48LL);
      do
      {
        v40 = (unsigned int)*v39 % a2[163].HighPart;
        v41 = &a2[27 * v40];
        if ( (v41[26].HighPart & 2) == 0 )
        {
          *v41 = v41[1];
          SetupDragRectsForContact((struct tagTPCONTACTSTATE *)&a2[27 * v40]);
        }
        v41[26].HighPart &= ~4u;
        v39 += 108;
        ++v38;
      }
      while ( v38 < *((_DWORD *)a1 + 6) );
    }
    if ( a2[165].LowPart == 2 && !v15 )
      a2[193].LowPart |= 0x200000u;
    *a6 = 1;
    return 1LL;
  }
  a6 = 0LL;
  x = 0;
  v78.x = 0;
  v47 = 0LL;
  v78.y = 0;
  y = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0LL;
  if ( v15 || (v52 = a2[193].LowPart, (v52 & 4) != 0) || (v52 & 8) != 0 || a2[163].LowPart )
  {
    v53 = *((_DWORD *)a1 + 6);
    v54 = *((_QWORD *)a1 + 9);
    if ( v53 )
    {
      HighPart = a2[163].HighPart;
      v56 = v54 + 68;
      v57 = v53;
      do
      {
        v58 = &a2[27 * (*(unsigned __int16 *)(v56 - 20) % HighPart)];
        v76 = v58;
        if ( (*(_DWORD *)v56 & 0x40000) == 0 && *(_DWORD *)v56 )
        {
          v59 = v58[26].HighPart;
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
            v47 = (struct tagPOINTER_INFO *)(v56 - 12);
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
    v62 = a2[165].LowPart;
    v63 = 0;
    if ( v62 != 5 )
    {
      if ( a5 == 2 || (v64 = a2[193].LowPart, (v64 & 4) != 0) || (v64 & 8) != 0 )
      {
        v65 = a2[163].LowPart;
        if ( (!v65 || v51) && (v62 != 2 || v51) )
        {
          a2[165].LowPart = 5;
          if ( v65 && !v50 )
            v76[9].HighPart = 0;
          if ( IsFirstActionAfterKey() )
            dword_1C0321C20 = 8;
          else
            dword_1C0321C24 = 8;
          ++dword_1C0321C58;
          ++dword_1C0321C78;
        }
      }
    }
    v66 = 4;
    if ( a2[165].LowPart != 4 && a5 == 1 )
    {
      v67 = a2[193].LowPart;
      if ( (v67 & 4) == 0 && (v67 & 8) == 0 && v51 )
      {
        a2[165].LowPart = 4;
        v51[9].HighPart = 0;
        if ( IsFirstActionAfterKey() )
          dword_1C0321C20 = 7;
        else
          dword_1C0321C24 = 7;
        ++dword_1C0321C54;
        ++dword_1C0321C78;
      }
    }
    if ( v63 )
    {
      a2[193].HighPart &= 0xFFFFFFF4;
      a2[175].QuadPart = 0LL;
      a2[176].QuadPart = 0LL;
    }
    if ( a5 == 1 && (v68 = a2[193].LowPart, ((unsigned __int8)v68 & (unsigned __int8)v66) == 0) && (v68 & 8) == 0
      || a2[163].LowPart && !v50 )
    {
      if ( v51 )
      {
        v69 = ApplyElasticDragModeDeltas(v79, (struct tagTPCONTACTSTATE *)v51, v47, &v78);
        y = v78.y;
        x = v78.x;
        a2[193].LowPart ^= (a2[193].LowPart ^ (v69 << 14)) & 0x4000;
      }
    }
    v70 = a2[175].HighPart + y;
    v78.x = a2[175].LowPart + x;
    v78.y = v70;
    LODWORD(a6) = 100 * v78.x / dword_1C0321F08;
    v71 = (_DWORD)a6 - a2[176].LowPart;
    HIDWORD(a6) = 100 * v70 / dword_1C0321F08;
    v72 = HIDWORD(a6) - a2[176].HighPart;
    a2[176].QuadPart = (LONGLONG)a6;
    a2[175] = (LARGE_INTEGER)v78;
    a6 = (int *)__PAIR64__(v72, v71);
    if ( !(unsigned int)FilterMoveForStableContact((struct tagPOINT)__PAIR64__(v72, v71), a2) && (v71 || v72) )
    {
      a2[193].HighPart |= 8u;
      UserSessionSwitchLeaveCrit(v74, v73);
      QueuePTPMouseEvent(
        (struct tagPOINT)a6,
        1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      EnterCrit(0LL, 1LL);
    }
  }
  return 1LL;
}
