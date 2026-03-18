/*
 * XREFs of ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01EA898
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01E7FB4 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01E84D4 (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01E8654 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01E8868 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z @ 0x1C01EDB2C (-xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB9C (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 */

_BOOL8 __fastcall xxxDoTPDiscreteButtonProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        LARGE_INTEGER *a2,
        int *a3,
        int *a4)
{
  int v4; // ebp
  int v6; // r15d
  int v7; // r12d
  int v8; // edx
  unsigned int v11; // esi
  DWORD LowPart; // ecx
  int v13; // edi
  int v14; // esi
  DWORD v15; // eax
  unsigned int v16; // ecx
  DWORD v17; // ecx
  DWORD v18; // eax
  unsigned int v19; // ecx
  int v20; // r14d
  DWORD v21; // eax
  DWORD v22; // eax
  LARGE_INTEGER v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rdi
  LARGE_INTEGER v29; // rcx
  DWORD v30; // eax
  LARGE_INTEGER v31; // rcx
  DWORD v32; // eax
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  DWORD v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  LARGE_INTEGER v43; // rcx
  DWORD v44; // eax
  int v45; // ecx
  __int64 v46; // rcx
  DWORD v47; // eax
  int v48; // eax
  void *v49; // [rsp+78h] [rbp+10h]

  v4 = 0;
  v49 = (void *)*((_QWORD *)a1 + 7);
  v6 = 0;
  v7 = 0;
  v8 = 1;
  v11 = (unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 11) + 68LL);
  LowPart = a2[240].LowPart;
  v13 = (v11 >> 5) & 1;
  v14 = (v11 >> 6) & 1;
  if ( (unsigned __int8)(LowPart & 4) >> 2 == v13 )
    goto LABEL_11;
  v15 = a2[208].LowPart;
  if ( v15 == 3 || v15 == 6 )
  {
    if ( v13 )
    {
      v16 = LowPart | 0x80;
      goto LABEL_7;
    }
  }
  else if ( v13 )
  {
    goto LABEL_8;
  }
  if ( (LowPart & 0x80u) != 0 )
  {
    v6 = 1;
    v16 = LowPart & 0xFFFFFF7F;
LABEL_7:
    a2[240].LowPart = v16;
  }
LABEL_8:
  v4 = 1;
  a2[240].LowPart ^= (a2[240].LowPart ^ (4 * v13)) & 4;
  if ( v13 )
  {
    TPAAPSetCurtainState((struct tagTPSTATE *)a2, 0);
    v8 = 1;
  }
  *a3 = 1;
LABEL_11:
  v17 = a2[240].LowPart;
  if ( (unsigned __int8)(v17 & 8) >> 3 == v14 )
  {
    v20 = 0;
    goto LABEL_26;
  }
  v18 = a2[208].LowPart;
  if ( v18 == 3 || v18 == 6 )
  {
    if ( v14 )
    {
      v19 = v17 | 0x100;
      goto LABEL_17;
    }
  }
  else if ( v14 )
  {
    goto LABEL_18;
  }
  if ( (v17 & 0x100) != 0 )
  {
    v7 = 1;
    v19 = v17 & 0xFFFFFEFF;
LABEL_17:
    a2[240].LowPart = v19;
  }
LABEL_18:
  v20 = 1;
  a2[240].LowPart ^= (a2[240].LowPart ^ (8 * v14)) & 8;
  if ( v14 )
  {
    TPAAPSetCurtainState((struct tagTPSTATE *)a2, 0);
    v8 = 1;
  }
  *a4 = 1;
LABEL_26:
  v21 = a2[208].LowPart;
  if ( v21 != 3 && v21 != 6 && !v6 && !v7 )
  {
    if ( !v4 )
      goto LABEL_59;
    if ( !v13 )
    {
      v22 = a2[240].LowPart;
      if ( !__CFSHR__(v22, 16) )
        goto LABEL_47;
      if ( (v22 & 0x20) != 0 && ((v22 & 1) == 0 || (v22 & 0x1000) != 0 || (v22 & 2) == 0) )
      {
        a2[261] = KeQueryPerformanceCounter(0LL);
        if ( gdwInAtomicOperation )
        {
          v23.QuadPart = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
          (LARGE_INTEGER)v23.QuadPart,
          gdwInAtomicOperation);
        xxxSendTPAsMouse(
          gptCursorAsync,
          0x10u,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        EnterCrit(0LL, 1LL);
        a2[240].LowPart &= ~0x20u;
        goto LABEL_41;
      }
      if ( !__CFSHR__(a2[240].LowPart, 16) )
      {
LABEL_47:
        if ( (v22 & 0x10) != 0 && ((v22 & 1) == 0 || (v22 & 0x1000) != 0 || (v22 & 2) != 0) )
        {
          a2[261] = KeQueryPerformanceCounter(0LL);
          if ( gdwInAtomicOperation )
          {
            v29.QuadPart = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
            (LARGE_INTEGER)v29.QuadPart,
            gdwInAtomicOperation);
          xxxSendTPAsMouse(
            gptCursorAsync,
            4u,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          EnterCrit(0LL, 1LL);
          a2[240].LowPart &= ~0x10u;
LABEL_41:
          v27 = (unsigned __int64)v49;
          if ( !RevalidateTPDeviceState((unsigned __int64)v49, v24, v25, v26) )
            return 0LL;
LABEL_60:
          if ( !v20 )
            return 1LL;
          if ( !v14 )
          {
            v30 = a2[240].LowPart;
            if ( !__CFSHR__(v30, 16) )
              goto LABEL_92;
            if ( (v30 & 0x10) != 0 && ((v30 & 1) == 0 || (v30 & 0x1000) != 0 || (v30 & 2) != 0) )
            {
              a2[261] = KeQueryPerformanceCounter(0LL);
              if ( gdwInAtomicOperation )
              {
                v31.QuadPart = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
                (LARGE_INTEGER)v31.QuadPart,
                gdwInAtomicOperation);
              xxxSendTPAsMouse(
                gptCursorAsync,
                4u,
                (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
              EnterCrit(0LL, 1LL);
              a2[240].LowPart &= ~0x10u;
              return RevalidateTPDeviceState(v27, v40, v41, v42);
            }
            if ( !__CFSHR__(a2[240].LowPart, 16) )
            {
LABEL_92:
              if ( (v30 & 0x20) != 0 && ((v30 & 1) == 0 || (v30 & 0x1000) != 0 || (v30 & 2) == 0) )
              {
                a2[261] = KeQueryPerformanceCounter(0LL);
                if ( gdwInAtomicOperation )
                {
                  v43.QuadPart = gdwExtraInstrumentations;
                  if ( (gdwExtraInstrumentations & 1) != 0 )
                    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                }
                ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
                  (LARGE_INTEGER)v43.QuadPart,
                  gdwInAtomicOperation);
                xxxSendTPAsMouse(
                  gptCursorAsync,
                  0x10u,
                  (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
                EnterCrit(0LL, 1LL);
                a2[240].LowPart &= ~0x20u;
                return RevalidateTPDeviceState(v27, v40, v41, v42);
              }
            }
            return 1LL;
          }
          if ( a2[205].LowPart && (a2[240].LowPart & 0x8000) != 0 )
            a2[205].LowPart = 0;
          if ( (a2[240].LowPart & 0x200000) != 0 )
            zzzSendEndInertia((struct tagTPSTATE *)a2, v8);
          if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
          {
            a2[240].LowPart |= 0x100u;
            return 1LL;
          }
          v44 = a2[240].LowPart;
          if ( !__CFSHR__(v44, 16) )
          {
            if ( (v44 & 0x20) == 0 )
              goto LABEL_108;
            if ( !__CFSHR__(a2[240].LowPart, 16) )
              return 1LL;
          }
          if ( (v44 & 0x10) != 0 )
            return 1LL;
LABEL_108:
          if ( IsFirstActionAfterKey() )
          {
            v46 = (unsigned int)-v45;
            dword_1C0326D08 = 6 - ((_DWORD)v46 != 0);
          }
          else
          {
            v46 = (unsigned int)-v45;
            dword_1C0326D0C = 6 - ((_DWORD)v46 != 0);
          }
          ++dword_1C0326D4C;
          ++dword_1C0326D74;
          if ( gdwInAtomicOperation )
          {
            v46 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v46, gdwInAtomicOperation);
          xxxSendTPAsMouse(
            gptCursorAsync,
            (a2[240].LowPart & 0x8000) != 0 ? 2 : 8,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          EnterCrit(0LL, 1LL);
          v47 = a2[240].LowPart;
          if ( (v47 & 0x8000) != 0 )
            v48 = v47 | 0x10;
          else
            v48 = v47 | 0x20;
          a2[240].LowPart = v48;
          return RevalidateTPDeviceState(v27, v40, v41, v42);
        }
      }
LABEL_59:
      v27 = (unsigned __int64)v49;
      goto LABEL_60;
    }
    if ( a2[205].LowPart && (a2[240].LowPart & 0x8000) == 0 )
      a2[205].LowPart = 0;
    if ( (a2[240].LowPart & 0x200000) != 0 )
      zzzSendEndInertia((struct tagTPSTATE *)a2, 1);
    if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
    {
      a2[240].LowPart |= 0x80u;
      goto LABEL_59;
    }
    v32 = a2[240].LowPart;
    if ( !__CFSHR__(v32, 16) )
    {
      if ( (v32 & 0x10) == 0 )
        goto LABEL_74;
      if ( !__CFSHR__(a2[240].LowPart, 16) )
        goto LABEL_59;
    }
    if ( (v32 & 0x20) != 0 )
      goto LABEL_59;
LABEL_74:
    if ( IsFirstActionAfterKey() )
    {
      v34 = (unsigned int)-v33;
      dword_1C0326D08 = ((_DWORD)v34 != 0) + 5;
    }
    else
    {
      v34 = (unsigned int)-v33;
      dword_1C0326D0C = ((_DWORD)v34 != 0) + 5;
    }
    ++dword_1C0326D4C;
    ++dword_1C0326D74;
    if ( gdwInAtomicOperation )
    {
      v34 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v34, gdwInAtomicOperation);
    xxxSendTPAsMouse(
      gptCursorAsync,
      (a2[240].LowPart & 0x8000) != 0 ? 8 : 2,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    EnterCrit(0LL, 1LL);
    v38 = a2[240].LowPart;
    if ( (v38 & 0x8000) != 0 )
      v39 = v38 | 0x20;
    else
      v39 = v38 | 0x10;
    v27 = (unsigned __int64)v49;
    a2[240].LowPart = v39;
    if ( !RevalidateTPDeviceState((unsigned __int64)v49, v35, v36, v37) )
      return 0LL;
    goto LABEL_60;
  }
  return 1LL;
}
