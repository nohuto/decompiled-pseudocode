/*
 * XREFs of ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4538
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01F107C (-CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01F1948 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F202C (-SendEndInertia@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F20AC (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z @ 0x1C01F22A0 (-TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F23EC (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01F5D68 (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?xxxSendMouseDown@@YAXI_K0@Z @ 0x1C01F6488 (-xxxSendMouseDown@@YAXI_K0@Z.c)
 *     ?xxxSendMouseUpIfPending@@YAXPEAI_K@Z @ 0x1C01F6500 (-xxxSendMouseUpIfPending@@YAXPEAI_K@Z.c)
 *     ?xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z @ 0x1C01F6544 (-xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z.c)
 */

__int64 __fastcall xxxDoTPMouseProcessing(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  int v5; // eax
  int v7; // r11d
  __int64 v9; // r10
  int v10; // r15d
  int v11; // r12d
  unsigned int v12; // r9d
  int v13; // r8d
  __int64 v14; // r14
  int v15; // eax
  int v16; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  int v18; // edx
  __int64 v19; // rcx
  int v20; // ecx
  int v22; // eax
  __int64 v23; // r14
  struct tagPOINT v24; // rbx
  __int16 v25; // cx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned int v30; // edx
  unsigned __int16 *v31; // r8
  __int64 v32; // rdx
  int v33; // ecx
  unsigned int v34; // edx
  __int64 v35; // rbx
  LARGE_INTEGER *v36; // r14
  unsigned int v37; // eax
  int v38; // r9d
  int v39; // eax
  LONG x; // r8d
  int v41; // eax
  __int64 v42; // rdx
  int v43; // [rsp+20h] [rbp-20h]
  int v44[3]; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v45; // [rsp+30h] [rbp-10h]
  __int64 v46; // [rsp+38h] [rbp-8h]
  int v47; // [rsp+80h] [rbp+40h]
  BOOL v48; // [rsp+80h] [rbp+40h]
  struct tagPOINT v49; // [rsp+80h] [rbp+40h]
  int v51; // [rsp+98h] [rbp+58h]

  v3 = *(_QWORD *)(a1 + 72);
  v4 = 0;
  v5 = 0;
  v7 = a2;
  v9 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v47 = 0;
  v51 = 0;
  v43 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
    return 1LL;
  do
  {
    v13 = *(_DWORD *)(v3 + 68);
    if ( !v13 )
      goto LABEL_21;
    v14 = a3 + 176LL * ((unsigned int)*(unsigned __int16 *)(v3 + 48) % *(_DWORD *)(a3 + 1068));
    if ( (v13 & 0x40000) == 0 )
    {
      v15 = *(_DWORD *)(v14 + 168);
      if ( (v15 & 4) != 0 && ((v15 & 0x80u) == 0 || v7 == 1) )
      {
        if ( *(_DWORD *)(a3 + 1080) != 2 )
        {
          v16 = *(_DWORD *)(a3 + 1264);
          if ( (v16 & 0x100000) == 0 && (v16 & 0x80000) != 0 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            *(_DWORD *)(a3 + 1264) |= 0x100000u;
            *(LARGE_INTEGER *)(a3 + 1224) = PerformanceCounter;
          }
        }
        if ( (*(_DWORD *)(a3 + 1264) & 0x80000) == 0
          || (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(a3 + 1224)) > gliQpcFreq.QuadPart * (unsigned int)dword_1C03236CC / 1000 )
        {
          v44[0] = 0;
          if ( (unsigned int)TPAAPShouldAllowMoveNow((struct tagTPSTATE *)a3, (struct tagTPCONTACTSTATE *)v14, v44) )
          {
            v5 = v51;
            v18 = 1;
            v12 = v43;
            v19 = v3;
            v9 = v46;
            v7 = a2;
            v47 = 1;
            v45 = v3;
            goto LABEL_22;
          }
          if ( v44[0] )
          {
            v20 = *(_DWORD *)(v14 + 168);
            if ( (v20 & 2) == 0 )
              *(_QWORD *)v14 = *(_QWORD *)(v14 + 8);
            *(_DWORD *)(v14 + 168) = v20 & 0xFFFFFFFB;
            *(_DWORD *)(a3 + 1080) = 1;
          }
        }
        v12 = v43;
        v9 = v46;
        v7 = a2;
LABEL_20:
        v5 = v51;
LABEL_21:
        v18 = v47;
        v19 = v45;
        goto LABEL_22;
      }
    }
    if ( (*(_DWORD *)(a3 + 1264) & 0x40000) != 0 )
      goto LABEL_20;
    if ( *(_DWORD *)(a3 + 1080) == 2 )
    {
      v19 = v45;
      v18 = v47;
    }
    else
    {
      if ( (v13 & 0x48000) != 0x40000 )
        goto LABEL_20;
      v22 = *(_DWORD *)(v14 + 168);
      if ( (v22 & 0x10) == 0 || (v22 & 8) != 0 )
        goto LABEL_20;
      v19 = v45;
      v18 = v47;
      if ( (v22 & 4) == 0 )
      {
        v5 = 1;
        v46 = v3;
        v51 = 1;
        v9 = v3;
        goto LABEL_22;
      }
    }
    v5 = v51;
LABEL_22:
    v3 += 216LL;
    v43 = ++v12;
  }
  while ( v12 < *(_DWORD *)(a1 + 24) );
  if ( !v18 )
  {
    if ( !v5 )
      return 1LL;
LABEL_36:
    v23 = a3 + 176LL * ((unsigned int)*(unsigned __int16 *)(v9 + 48) % *(_DWORD *)(a3 + 1068));
    if ( *(_QWORD *)(a3 + 1192) <= *(_QWORD *)(v23 + 72) )
    {
      v24 = gptCursorAsync;
      if ( !(unsigned int)TPAAPShouldAllowNow(10, 1, 1, (struct tagTPSTATE *)a3) )
        return 1LL;
      if ( *(_DWORD *)(a1 + 24) != 2 )
        goto LABEL_43;
      v25 = WORD6(gTouchPadParameters);
      if ( (WORD6(gTouchPadParameters) & 0x400) != 0 )
      {
        if ( (unsigned int)xxxProcess2FingerTap(
                             *(struct tagPOINTERINFONODE **)(a1 + 72),
                             (struct tagTPSTATE *)a3,
                             0,
                             2u) )
          return 2LL;
LABEL_43:
        v25 = WORD6(gTouchPadParameters);
      }
      if ( (v25 & 0x200) == 0 )
        return 1LL;
      v48 = CheckDoubleTap((struct tagTPSTATE *)a3, (struct tagTPCONTACTSTATE *)v23);
      if ( v48 )
      {
        v24 = *(struct tagPOINT *)(a3 + 1128);
      }
      else
      {
        *(struct tagPOINT *)(a3 + 1128) = gptCursorAsync;
        *(_QWORD *)(a3 + 1136) = *(_QWORD *)v23;
        *(_QWORD *)(a3 + 1184) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      }
      if ( (*(_DWORD *)(a3 + 1264) & 0x400000) != 0 )
        SendEndInertia((struct tagTPSTATE *)a3);
      if ( !ShouldSuppressClicks((const struct tagTPSTATE *)a3) )
      {
        if ( IsFirstActionAfterKey() )
          dword_1C0321BD0 = 1;
        else
          dword_1C0321BD4 = 1;
        ++dword_1C0321C14;
        ++dword_1C0321C24;
        *(LARGE_INTEGER *)(a3 + 1296) = KeQueryPerformanceCounter(0LL);
        v26 = *(_DWORD *)(a3 + 1064);
        if ( v26 == 4 )
        {
          *(_DWORD *)(a3 + 1264) &= ~0x10u;
        }
        else if ( v26 == 16 )
        {
          *(_DWORD *)(a3 + 1264) &= ~0x20u;
        }
        xxxSendMouseUpIfPending((unsigned int *)(a3 + 1064), *(_QWORD *)(a3 + 1184));
        if ( (*(_DWORD *)(a3 + 1264) & 0x10) != 0 )
          return 1LL;
        if ( v48 )
        {
          *(_QWORD *)(a3 + 1184) = 0LL;
          UserSessionSwitchLeaveCrit(v28, v27);
          xxxSendTPAsMouse(v24, 2u, *(_QWORD *)(v23 + 72));
          v29 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          v30 = 4;
          goto LABEL_85;
        }
        xxxSendMouseDown(v28, *(_QWORD *)(v23 + 72), *(_QWORD *)(a3 + 1184));
        *(_DWORD *)(a3 + 1264) |= 0x10u;
        if ( *(_DWORD *)(a1 + 24) )
        {
          v31 = (unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 48LL);
          do
          {
            v32 = a3 + 176LL * ((unsigned int)*v31 % *(_DWORD *)(a3 + 1068));
            v33 = *(_DWORD *)(v32 + 168);
            if ( (v33 & 2) == 0 )
              *(_QWORD *)v32 = *(_QWORD *)(v32 + 8);
            v31 += 108;
            ++v4;
            *(_DWORD *)(v32 + 168) = v33 & 0xFFFFFFFB;
          }
          while ( v4 < *(_DWORD *)(a1 + 24) );
        }
      }
      return 2LL;
    }
    return 1LL;
  }
  if ( v5 )
    goto LABEL_36;
  v34 = (unsigned int)*(unsigned __int16 *)(v19 + 48) % *(_DWORD *)(a3 + 1068);
  v35 = *(_QWORD *)(v19 + 96);
  v36 = (LARGE_INTEGER *)(a3 + 176LL * v34);
  if ( *(_DWORD *)(a3 + 1080) == 2 )
  {
    v38 = 0;
  }
  else
  {
    v37 = *(_DWORD *)(a3 + 1264) & 0xFFE7FFFF;
    *(_DWORD *)(a3 + 1080) = 2;
    *(_DWORD *)(a3 + 1056) = v34;
    *(_DWORD *)(a3 + 1264) = v37 | 0x10000;
    v36[8] = KeQueryPerformanceCounter(0LL);
    v38 = 1;
  }
  v39 = *(_DWORD *)(a3 + 1264);
  if ( (v39 & 0x200000) != 0 )
  {
    v38 = 1;
    *(_DWORD *)(a3 + 1264) = v39 & 0xFFDFFFFF;
  }
  if ( v38 )
  {
    if ( (v36[21].LowPart & 2) == 0 )
    {
      v10 = v35 - v36[1].LowPart;
      v11 = HIDWORD(v35) - v36[1].HighPart;
    }
    *(LARGE_INTEGER *)(a3 + 1144) = v36[1];
    if ( IsFirstActionAfterKey() )
      dword_1C0321BD0 = 10;
    else
      dword_1C0321BD4 = 10;
  }
  else
  {
    v10 = v35 - *(_DWORD *)(a3 + 1144);
    v11 = HIDWORD(v35) - *(_DWORD *)(a3 + 1148);
  }
  v49.x = 100 * v10 / dword_1C03236A8;
  x = v49.x;
  v42 = (unsigned int)((100 * v11) >> 31);
  LODWORD(v42) = 100 * v11 % dword_1C03236A8;
  v41 = 100 * v11 / dword_1C03236A8;
  v49.y = v41;
  v24 = v49;
  if ( !v38 )
  {
    x = v49.x - *(_DWORD *)(a3 + 1152);
    v41 -= *(_DWORD *)(a3 + 1156);
    v24 = (struct tagPOINT)__PAIR64__(v41, x);
  }
  *(struct tagPOINT *)(a3 + 1152) = v49;
  if ( x || v41 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(v49, v42);
    v29 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v30 = 1;
LABEL_85:
    xxxSendTPAsMouse(v24, v30, v29);
    EnterCrit(1LL);
  }
  return 2LL;
}
