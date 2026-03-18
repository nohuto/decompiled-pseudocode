/*
 * XREFs of ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C0152F88 (-SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01F0FDC (-CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@@Z @ 0x1C01F12B4 (-FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@@Z.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01F1AF4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?QueuePTPMouseEvent@@YAXUtagPOINT@@KK@Z @ 0x1C01F2154 (-QueuePTPMouseEvent@@YAXUtagPOINT@@KK@Z.c)
 *     ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F22D8 (-SendEndInertia@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F2358 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z @ 0x1C01F25EC (-TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F273C (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01F6240 (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?xxxSendMouseDown@@YAXIKK@Z @ 0x1C01F6968 (-xxxSendMouseDown@@YAXIKK@Z.c)
 *     ?xxxSendMouseUpIfPending@@YAXPEAIK@Z @ 0x1C01F69E0 (-xxxSendMouseUpIfPending@@YAXPEAIK@Z.c)
 */

__int64 __fastcall xxxDoTPMouseProcessing(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // esi
  int v5; // eax
  int v7; // r11d
  __int64 v9; // r10
  int v10; // r12d
  unsigned int v11; // r9d
  int v12; // r8d
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  int v17; // eax
  LARGE_INTEGER v18; // rax
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r15d
  int v23; // eax
  __int64 v24; // r14
  struct tagPOINT v25; // rbx
  __int16 v26; // cx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int16 *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r11
  unsigned int v33; // edx
  __int64 v34; // rbx
  int v35; // eax
  LARGE_INTEGER *v36; // r14
  int v37; // eax
  int v38; // r8d
  int v39; // eax
  LONG x; // r14d
  int y; // r15d
  struct tagPOINT v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // [rsp+20h] [rbp-20h]
  int v46[3]; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v47; // [rsp+30h] [rbp-10h]
  __int64 v48; // [rsp+38h] [rbp-8h]
  int v49; // [rsp+80h] [rbp+40h]
  BOOL v50; // [rsp+80h] [rbp+40h]
  struct tagPOINT v51; // [rsp+80h] [rbp+40h]
  int v53; // [rsp+98h] [rbp+58h]

  v3 = *(_QWORD *)(a1 + 72);
  v4 = 0;
  v5 = 0;
  v7 = a2;
  v53 = 0;
  v47 = 0LL;
  v9 = 0LL;
  v48 = 0LL;
  v10 = 0;
  v49 = 0;
  v11 = 0;
  v45 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
    return 1LL;
  do
  {
    v12 = *(_DWORD *)(v3 + 68);
    if ( !v12 )
      goto LABEL_27;
    v13 = a3 + 216LL * ((unsigned int)*(unsigned __int16 *)(v3 + 48) % *(_DWORD *)(a3 + 1308));
    if ( (v12 & 0x40000) == 0 )
    {
      v14 = *(_DWORD *)(v13 + 212);
      if ( (v14 & 4) != 0 && ((v14 & 0x80u) == 0 || v7 == 1) )
      {
        if ( *(_DWORD *)(a3 + 1320) != 2 )
        {
          v15 = *(_DWORD *)(a3 + 1544);
          if ( (v15 & 0x100000) == 0 && (v15 & 0x80000) != 0 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            *(_DWORD *)(a3 + 1544) |= 0x100000u;
            v7 = a2;
            *(LARGE_INTEGER *)(a3 + 1464) = PerformanceCounter;
          }
        }
        v17 = *(_DWORD *)(a3 + 1544);
        if ( (v17 & 0x20000000) == 0 && (v17 & 0x10000000) != 0 && v7 == 1 )
        {
          v18 = KeQueryPerformanceCounter(0LL);
          *(_DWORD *)(a3 + 1544) |= 0x20000000u;
          *(LARGE_INTEGER *)(a3 + 1480) = v18;
        }
        if ( ((*(_DWORD *)(a3 + 1544) & 0x80000) == 0
           || (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(a3 + 1464)) > gliQpcFreq.QuadPart * (unsigned int)dword_1C0321F2C / 1000)
          && ((*(_DWORD *)(a3 + 1544) & 0x10000000) == 0
           || (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(a3 + 1480)) > 33 * gliQpcFreq.QuadPart / 1000) )
        {
          v46[0] = 0;
          if ( (unsigned int)TPAAPShouldAllowMoveNow((struct tagTPSTATE *)a3, (struct tagTPCONTACTSTATE *)v13, v46) )
          {
            v5 = v53;
            v19 = 1;
            v11 = v45;
            v20 = v3;
            v9 = v48;
            v7 = a2;
            v49 = 1;
            v47 = v3;
            goto LABEL_28;
          }
          if ( v46[0] )
          {
            if ( (*(_DWORD *)(v13 + 212) & 2) == 0 )
            {
              *(_QWORD *)v13 = *(_QWORD *)(v13 + 8);
              SetupDragRectsForContact((struct tagTPCONTACTSTATE *)v13);
            }
            *(_DWORD *)(v13 + 212) &= ~4u;
            *(_DWORD *)(a3 + 1320) = 1;
          }
        }
        v11 = v45;
        v9 = v48;
        v7 = a2;
LABEL_26:
        v5 = v53;
LABEL_27:
        v20 = v47;
        v19 = v49;
        goto LABEL_28;
      }
    }
    if ( (*(_DWORD *)(a3 + 1544) & 0x40000) != 0 )
      goto LABEL_26;
    if ( *(_DWORD *)(a3 + 1320) == 2 )
    {
      v20 = v47;
      v19 = v49;
    }
    else
    {
      if ( (v12 & 0x48000) != 0x40000 )
        goto LABEL_26;
      v23 = *(_DWORD *)(v13 + 212);
      if ( (v23 & 0x10) == 0 || (v23 & 8) != 0 )
        goto LABEL_26;
      v20 = v47;
      v19 = v49;
      if ( (v23 & 4) == 0 )
      {
        v5 = 1;
        v48 = v3;
        v53 = 1;
        v9 = v3;
        goto LABEL_28;
      }
    }
    v5 = v53;
LABEL_28:
    ++v11;
    v3 += 216LL;
    v45 = v11;
  }
  while ( v11 < *(_DWORD *)(a1 + 24) );
  v21 = 0;
  if ( !v19 )
  {
    if ( !v5 )
      return 1LL;
LABEL_42:
    v24 = a3 + 216LL * ((unsigned int)*(unsigned __int16 *)(v9 + 48) % *(_DWORD *)(a3 + 1308));
    if ( *(_DWORD *)(a3 + 1424) <= *(_DWORD *)(v24 + 72) )
    {
      v25 = gptCursorAsync;
      if ( !(unsigned int)TPAAPShouldAllowNow(10, 1, 1, (struct tagTPSTATE *)a3) )
        return 1LL;
      if ( *(_DWORD *)(a1 + 24) != 2 )
        goto LABEL_49;
      v26 = WORD6(gTouchPadParameters);
      if ( (WORD6(gTouchPadParameters) & 0x400) != 0 )
      {
        if ( (unsigned int)xxxProcess2FingerTap(
                             *(struct tagPOINTERINFONODE **)(a1 + 72),
                             (struct tagTPSTATE *)a3,
                             0,
                             2u) )
          return 2LL;
LABEL_49:
        v26 = WORD6(gTouchPadParameters);
      }
      if ( (v26 & 0x200) == 0 )
        return 1LL;
      v50 = CheckDoubleTap((struct tagTPSTATE *)a3, (struct tagTPCONTACTSTATE *)v24);
      if ( v50 )
      {
        v25 = *(struct tagPOINT *)(a3 + 1368);
      }
      else
      {
        *(struct tagPOINT *)(a3 + 1368) = gptCursorAsync;
        *(_QWORD *)(a3 + 1376) = *(_QWORD *)v24;
        *(_DWORD *)(a3 + 1420) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      }
      if ( (*(_DWORD *)(a3 + 1544) & 0x400000) != 0 )
        SendEndInertia((struct tagTPSTATE *)a3);
      if ( ShouldSuppressClicks((const struct tagTPSTATE *)a3) )
        return 2LL;
      if ( IsFirstActionAfterKey() )
        dword_1C0321C20 = 1;
      else
        dword_1C0321C24 = 1;
      ++dword_1C0321C64;
      ++dword_1C0321C78;
      *(LARGE_INTEGER *)(a3 + 1584) = KeQueryPerformanceCounter(0LL);
      v27 = *(_DWORD *)(a3 + 1304);
      if ( v27 == 4 )
      {
        *(_DWORD *)(a3 + 1544) &= ~0x10u;
      }
      else if ( v27 == 16 )
      {
        *(_DWORD *)(a3 + 1544) &= ~0x20u;
      }
      xxxSendMouseUpIfPending((unsigned int *)(a3 + 1304), *(_DWORD *)(a3 + 1420));
      if ( (*(_DWORD *)(a3 + 1544) & 0x10) == 0 )
      {
        if ( v50 )
        {
          *(_DWORD *)(a3 + 1420) = 0;
          UserSessionSwitchLeaveCrit(v29, v28);
          QueuePTPMouseEvent(v25, 2, *(_DWORD *)(v24 + 72));
          QueuePTPMouseEvent(v25, 4, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          goto LABEL_95;
        }
        xxxSendMouseDown(v29, *(_DWORD *)(v24 + 72), *(_DWORD *)(a3 + 1420));
        *(_DWORD *)(a3 + 1544) |= 0x10u;
        if ( *(_DWORD *)(a1 + 24) )
        {
          v30 = (unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 48LL);
          do
          {
            v31 = (unsigned int)*v30 % *(_DWORD *)(a3 + 1308);
            v32 = a3 + 216 * v31;
            if ( (*(_DWORD *)(v32 + 212) & 2) == 0 )
            {
              *(_QWORD *)v32 = *(_QWORD *)(v32 + 8);
              SetupDragRectsForContact((struct tagTPCONTACTSTATE *)(a3 + 216 * v31));
            }
            *(_DWORD *)(v32 + 212) &= ~4u;
            v30 += 108;
            ++v4;
          }
          while ( v4 < *(_DWORD *)(a1 + 24) );
        }
        return 2LL;
      }
    }
    return 1LL;
  }
  if ( v5 )
    goto LABEL_42;
  v33 = (unsigned int)*(unsigned __int16 *)(v20 + 48) % *(_DWORD *)(a3 + 1308);
  v34 = *(_QWORD *)(v20 + 96);
  v35 = *(_DWORD *)(a3 + 1544);
  v36 = (LARGE_INTEGER *)(a3 + 216LL * v33);
  if ( (v35 & 0x20000000) != 0 )
    *(_DWORD *)(a3 + 1544) = v35 & 0xCFFFFFFF;
  if ( *(_DWORD *)(a3 + 1320) == 2 )
  {
    v38 = 0;
  }
  else
  {
    v37 = *(_DWORD *)(a3 + 1544) | 0x10000;
    *(_DWORD *)(a3 + 1320) = 2;
    *(_DWORD *)(a3 + 1296) = v33;
    *(_DWORD *)(a3 + 1544) = v37 & 0xFFE7FFFF;
    v36[8] = KeQueryPerformanceCounter(0LL);
    v38 = 1;
  }
  v39 = *(_DWORD *)(a3 + 1544);
  if ( (v39 & 0x200000) != 0 )
  {
    *(_DWORD *)(a3 + 1544) = v39 & 0xFFDFFFFF;
    goto LABEL_82;
  }
  if ( v38 )
  {
    *(_DWORD *)(a3 + 1548) &= 0xFFFFFFF4;
LABEL_82:
    if ( (v36[26].HighPart & 2) == 0 )
    {
      v21 = v34 - v36[1].LowPart;
      v10 = HIDWORD(v34) - v36[1].HighPart;
    }
    *(LARGE_INTEGER *)(a3 + 1384) = v36[1];
    if ( IsFirstActionAfterKey() )
      dword_1C0321C20 = 10;
    else
      dword_1C0321C24 = 10;
  }
  else
  {
    v21 = v34 - *(_DWORD *)(a3 + 1384);
    v10 = HIDWORD(v34) - *(_DWORD *)(a3 + 1388);
  }
  v51.x = 100 * v21 / dword_1C0321F08;
  x = v51.x;
  v51.y = 100 * v10 / dword_1C0321F08;
  y = v51.y;
  v42 = v51;
  if ( !v38 )
  {
    x = v51.x - *(_DWORD *)(a3 + 1392);
    y = v51.y - *(_DWORD *)(a3 + 1396);
    v42 = (struct tagPOINT)__PAIR64__(y, x);
  }
  *(struct tagPOINT *)(a3 + 1392) = v51;
  if ( !(unsigned int)FilterMoveForStableContact(v42, (LARGE_INTEGER *)a3) && (x || y) )
  {
    *(_DWORD *)(a3 + 1548) |= 8u;
    UserSessionSwitchLeaveCrit(v44, v43);
    QueuePTPMouseEvent(v42, 1, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
LABEL_95:
    EnterCrit(0LL, 1LL);
  }
  return 2LL;
}
