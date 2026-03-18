/*
 * XREFs of ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C015A618 (-SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01E6EE4 (-CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?CrossedTPLiftWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01E73F0 (-CrossedTPLiftWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z.c)
 *     ?FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01E75B0 (-FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01E7FB4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01E8654 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z @ 0x1C01E88B0 (-TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01E8A00 (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01ED1FC (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?xxxSendMouseDownAtPoint@@YAXI_K0UtagPOINT@@@Z @ 0x1C01ED9F8 (-xxxSendMouseDownAtPoint@@YAXI_K0UtagPOINT@@@Z.c)
 *     ?xxxSendMouseUpIfPending@@YAXPEAI_K@Z @ 0x1C01EDAAC (-xxxSendMouseUpIfPending@@YAXPEAI_K@Z.c)
 *     ?xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z @ 0x1C01EDB2C (-xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB9C (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?TraceLoggingPTPWarpBack@@YAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C021ECE8 (-TraceLoggingPTPWarpBack@@YAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 */

__int64 __fastcall xxxDoTPMouseProcessing(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // r14
  int v6; // r12d
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v8; // r9d
  __int64 v9; // rbx
  LARGE_INTEGER v10; // r13
  int v11; // ebp
  int v12; // r8d
  __int64 v13; // r14
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // r9d
  int v18; // r15d
  bool v19; // zf
  int v20; // ebp
  int v22; // eax
  union _LARGE_INTEGER v23; // rbx
  int v24; // eax
  __int64 v25; // r14
  struct tagPOINT v26; // rbx
  __int16 v27; // cx
  unsigned __int128 v28; // rax
  BOOL v29; // r12d
  int v30; // eax
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  unsigned int v33; // edx
  unsigned __int16 *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r11
  unsigned int v37; // edx
  __int64 v38; // rax
  int v39; // ecx
  LARGE_INTEGER *v40; // r8
  int v41; // r9d
  int v42; // ecx
  int v43; // ecx
  LONG x; // r14d
  int y; // ebp
  __int64 v46; // rcx
  int v47[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v48; // [rsp+38h] [rbp-70h]
  __int64 v49; // [rsp+48h] [rbp-60h]
  __int64 v50; // [rsp+50h] [rbp-58h]
  __int64 v51; // [rsp+58h] [rbp-50h]
  __int64 v52; // [rsp+60h] [rbp-48h]
  struct tagPOINT v54; // [rsp+B0h] [rbp+8h]
  unsigned int v56; // [rsp+C8h] [rbp+20h]

  v3 = 0;
  v4 = a1;
  v51 = 0LL;
  v52 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  v6 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 88);
  v10 = PerformanceCounter;
  v48 = v9;
  v56 = 0;
  if ( !*(_DWORD *)(v4 + 40) )
    return 1LL;
  v11 = 0;
  do
  {
    v12 = *(_DWORD *)(v9 + 68);
    if ( !v12 )
      goto LABEL_24;
    v13 = a3 + 272LL * ((unsigned int)*(unsigned __int16 *)(v9 + 48) % *(_DWORD *)(a3 + 1644));
    if ( (v12 & 0x40000) == 0 && (v14 = *(_DWORD *)(v13 + 264), (v14 & 4) != 0) && ((v14 & 0x80u) == 0 || a2 == 1) )
    {
      if ( *(_DWORD *)(a3 + 1664) != 2 )
      {
        v15 = *(_DWORD *)(a3 + 1920);
        if ( (v15 & 0x80000) == 0 && (v15 & 0x40000) != 0 )
        {
          *(LARGE_INTEGER *)(a3 + 1840) = v10;
          *(_DWORD *)(a3 + 1920) = v15 | 0x80000;
        }
      }
      v16 = *(_DWORD *)(a3 + 1920);
      if ( (v16 & 0x8000000) == 0 && (v16 & 0x4000000) != 0 && a2 == 1 )
      {
        *(LARGE_INTEGER *)(a3 + 1856) = v10;
        *(_DWORD *)(a3 + 1920) = v16 | 0x8000000;
      }
      v17 = *(_DWORD *)(a3 + 1920);
      if ( ((v17 & 0x40000) == 0
         || v10.QuadPart - *(_QWORD *)(a3 + 1840) > (unsigned __int64)(gliQpcFreq.QuadPart
                                                                     * (unsigned int)dword_1C03280EC
                                                                     / 1000))
        && ((v17 & 0x4000000) == 0
         || v10.QuadPart - *(_QWORD *)(a3 + 1856) > (unsigned __int64)(33 * gliQpcFreq.QuadPart / 1000)) )
      {
        v47[0] = 0;
        if ( (unsigned int)TPAAPShouldAllowMoveNow((struct tagTPSTATE *)a3, (struct tagTPCONTACTSTATE *)v13, v47) )
        {
          v11 = 1;
          v51 = v9;
          v49 = v13;
        }
        else if ( v47[0] )
        {
          if ( (*(_DWORD *)(v13 + 264) & 2) == 0 )
          {
            *(_QWORD *)v13 = *(_QWORD *)(v13 + 8);
            SetupDragRectsForContact((struct tagTPCONTACTSTATE *)v13);
          }
          *(_DWORD *)(v13 + 264) &= ~4u;
          *(_DWORD *)(a3 + 1664) = 1;
        }
      }
    }
    else
    {
      if ( (*(_DWORD *)(a3 + 1920) & 0x20000) == 0 && *(_DWORD *)(a3 + 1664) != 2 && (v12 & 0x48000) == 0x40000 )
      {
        v22 = *(_DWORD *)(v13 + 264);
        if ( (v22 & 0x10) != 0 && (v22 & 8) == 0 && ((v22 & 0x400000) == 0 || (v22 & 4) == 0) )
        {
          v6 = 1;
          v50 = v9;
          goto LABEL_23;
        }
      }
      if ( (dword_1C0328110 & 0x100) == 0 || (v12 & 0x48000) != 0x40000 )
        goto LABEL_23;
      v23 = gliQpcFreq;
      *(_QWORD *)v47 = v10.QuadPart - *(_QWORD *)(v13 + 88);
      if ( *(_QWORD *)v47 > gliQpcFreq.QuadPart * (unsigned __int64)(unsigned int)gTPThresholds / 0x3E8 )
      {
        v9 = v48;
        goto LABEL_23;
      }
      if ( !CrossedTPLiftWarpBackThreshold((struct tagTPCONTACTSTATE *)v13, *(struct tagPOINT *)(v13 + 8))
        && !*(_DWORD *)(a3 + 1660) )
      {
        if ( v23.QuadPart )
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TraceLoggingPTPWarpBack)(
            14LL,
            gptCursorAsync,
            *(_QWORD *)(v13 + 24),
            (unsigned __int64)(1000LL * *(_QWORD *)v47) / v23.QuadPart);
        zzzInternalSetCursorPos(*(_DWORD *)(v13 + 24), *(_DWORD *)(v13 + 28), 2);
      }
      v9 = v48;
    }
    v8 = v56;
LABEL_23:
    v4 = a1;
LABEL_24:
    v9 += 216LL;
    ++v8;
    v48 = v9;
    v56 = v8;
  }
  while ( v8 < *(_DWORD *)(v4 + 40) );
  v18 = v52;
  v19 = v11 == 0;
  v20 = 0;
  if ( v19 )
  {
    if ( !v6 )
      return 1LL;
LABEL_55:
    v25 = a3 + 272LL * ((unsigned int)*(unsigned __int16 *)(v50 + 48) % *(_DWORD *)(a3 + 1644));
    if ( *(_QWORD *)(a3 + 1776) <= *(_QWORD *)(v25 + 104) )
    {
      v26 = gptCursorAsync;
      if ( (unsigned int)TPAAPShouldAllowNow(10, 1, 1, (struct tagTPSTATE *)a3) )
      {
        if ( *(_DWORD *)(a1 + 40) != 2 )
          goto LABEL_61;
        v27 = WORD6(gTouchPadParameters);
        if ( (WORD6(gTouchPadParameters) & 0x400) != 0 )
        {
          if ( xxxProcess2FingerTap(*(struct tagPOINTERINFONODE **)(a1 + 88), (struct tagTPSTATE *)a3, 0, 2u) )
            return 2LL;
LABEL_61:
          v27 = WORD6(gTouchPadParameters);
        }
        if ( (v27 & 0x200) != 0 )
        {
          v29 = CheckDoubleTap((struct tagTPSTATE *)a3, (struct tagTPCONTACTSTATE *)v25);
          if ( v29 )
          {
            v26 = *(struct tagPOINT *)(a3 + 1712);
          }
          else
          {
            *(struct tagPOINT *)(a3 + 1712) = gptCursorAsync;
            *(_QWORD *)(a3 + 1720) = *(_QWORD *)v25;
            v28 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
            *(_QWORD *)(a3 + 1768) = *((_QWORD *)&v28 + 1);
          }
          if ( (*(_DWORD *)(a3 + 1920) & 0x200000) != 0 )
            zzzSendEndInertia((struct tagTPSTATE *)a3, SDWORD2(v28));
          if ( ShouldSuppressClicks((const struct tagTPSTATE *)a3) )
            return 2LL;
          if ( IsFirstActionAfterKey() )
            dword_1C0326D08 = 1;
          else
            dword_1C0326D0C = 1;
          ++dword_1C0326D54;
          ++dword_1C0326D74;
          qword_1C0326D78 += v10.QuadPart - *(_QWORD *)(v25 + 56);
          v30 = *(_DWORD *)(a3 + 1640);
          *(LARGE_INTEGER *)(a3 + 2088) = v10;
          if ( v30 == 4 )
          {
            *(_DWORD *)(a3 + 1920) &= ~0x10u;
          }
          else if ( v30 == 16 )
          {
            *(_DWORD *)(a3 + 1920) &= ~0x20u;
          }
          xxxSendMouseUpIfPending((unsigned int *)(a3 + 1640), *(_QWORD *)(a3 + 1768));
          if ( (*(_DWORD *)(a3 + 1920) & 0x10) == 0 )
          {
            if ( v29 )
            {
              *(_QWORD *)(a3 + 1768) = 0LL;
              if ( gdwInAtomicOperation )
              {
                v31 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v31, gdwInAtomicOperation);
              xxxSendTPAsMouse(v26, 2u, *(_QWORD *)(v25 + 104));
              v32 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
              v33 = 4;
              goto LABEL_124;
            }
            if ( (*(_DWORD *)(v25 + 264) & 4) != 0 )
            {
              if ( (dword_1C0328110 & 0x100) != 0
                && !*(_DWORD *)(a3 + 1660)
                && (*(_DWORD *)(v25 + 24) != gptCursorAsync.x || *(_DWORD *)(v25 + 28) != gptCursorAsync.y) )
              {
                if ( gliQpcFreq.QuadPart )
                  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TraceLoggingPTPWarpBack)(
                    15LL,
                    gptCursorAsync,
                    *(_QWORD *)(v25 + 24),
                    (unsigned __int64)(1000 * (v10.QuadPart - *(_QWORD *)(v25 + 88))) / gliQpcFreq.QuadPart);
                zzzInternalSetCursorPos(*(_DWORD *)(v25 + 24), *(_DWORD *)(v25 + 28), 2);
              }
              xxxSendMouseDownAtPoint(
                v31,
                *(_QWORD *)(v25 + 104),
                *(_QWORD *)(a3 + 1768),
                *(struct tagPOINT *)(v25 + 24));
              *(_DWORD *)(v25 + 264) &= ~4u;
            }
            else
            {
              xxxSendMouseDownAtPoint(v31, *(_QWORD *)(v25 + 104), *(_QWORD *)(a3 + 1768), gptCursorAsync);
            }
            *(_DWORD *)(a3 + 1920) |= 0x10u;
            if ( *(_DWORD *)(a1 + 40) )
            {
              v34 = (unsigned __int16 *)(*(_QWORD *)(a1 + 88) + 48LL);
              do
              {
                v35 = (unsigned int)*v34 % *(_DWORD *)(a3 + 1644);
                v36 = a3 + 272 * v35;
                if ( (*(_DWORD *)(v36 + 264) & 2) == 0 )
                {
                  *(_QWORD *)v36 = *(_QWORD *)(v36 + 8);
                  SetupDragRectsForContact((struct tagTPCONTACTSTATE *)(a3 + 272 * v35));
                }
                *(_DWORD *)(v36 + 264) &= ~4u;
                v34 += 108;
                ++v3;
              }
              while ( v3 < *(_DWORD *)(a1 + 40) );
            }
            return 2LL;
          }
        }
      }
    }
    return 1LL;
  }
  if ( v6 )
  {
    v24 = *(_DWORD *)(v49 + 264);
    if ( (v24 & 0x80u) == 0 && (v24 & 8) != 0 )
      v6 = 0;
    if ( v6 )
      goto LABEL_55;
  }
  v37 = (unsigned int)*(unsigned __int16 *)(v51 + 48) % *(_DWORD *)(a3 + 1644);
  v38 = *(_QWORD *)(v51 + 96);
  v39 = *(_DWORD *)(a3 + 1920);
  v40 = (LARGE_INTEGER *)(a3 + 272LL * v37);
  if ( (v39 & 0x8000000) != 0 )
    *(_DWORD *)(a3 + 1920) = v39 & 0xF3FFFFFF;
  if ( *(_DWORD *)(a3 + 1664) == 2 )
  {
    v41 = 0;
  }
  else
  {
    v41 = 1;
    v42 = *(_DWORD *)(a3 + 1920) | 0x10000;
    *(_DWORD *)(a3 + 1664) = 2;
    *(_DWORD *)(a3 + 1632) = v37;
    *(_DWORD *)(a3 + 1920) = v42 & 0xFFF3FFFF;
    v40[10] = v10;
  }
  v43 = *(_DWORD *)(a3 + 1920);
  if ( (v43 & 0x100000) != 0 )
  {
    *(_DWORD *)(a3 + 1920) = v43 & 0xFFEFFFFF;
    goto LABEL_107;
  }
  if ( v41 )
  {
    *(_DWORD *)(a3 + 1920) = v43 & 0x7FFFFFFF;
    qword_1C0326D80 += v10.QuadPart - v40[7].QuadPart;
LABEL_107:
    if ( (v40[33].LowPart & 2) == 0 )
    {
      v20 = v38 - v40[1].LowPart;
      v18 = HIDWORD(v38) - v40[1].HighPart;
    }
    *(LARGE_INTEGER *)(a3 + 1728) = v40[1];
    if ( IsFirstActionAfterKey() )
      dword_1C0326D08 = 10;
    else
      dword_1C0326D0C = 10;
    ++dword_1C0326D6C;
  }
  else
  {
    v20 = v38 - *(_DWORD *)(a3 + 1728);
    v18 = HIDWORD(v38) - *(_DWORD *)(a3 + 1732);
  }
  v54.x = 100 * v20 / dword_1C03280C8;
  x = v54.x;
  v54.y = 100 * v18 / dword_1C03280C8;
  y = v54.y;
  v26 = v54;
  if ( !v41 )
  {
    x = v54.x - *(_DWORD *)(a3 + 1736);
    y = v54.y - *(_DWORD *)(a3 + 1740);
    v26 = (struct tagPOINT)__PAIR64__(y, x);
  }
  *(struct tagPOINT *)(a3 + 1736) = v54;
  if ( !(unsigned int)FilterMoveForStableContact(v26, (struct tagTPSTATE *)a3, v40) && (x || y) )
  {
    *(_DWORD *)(a3 + 1920) |= 0x80000000;
    if ( gdwInAtomicOperation )
    {
      v46 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v46, gdwInAtomicOperation);
    v32 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v33 = 1;
LABEL_124:
    xxxSendTPAsMouse(v26, v33, v32);
    EnterCrit(0LL, 1LL);
  }
  return 2LL;
}
