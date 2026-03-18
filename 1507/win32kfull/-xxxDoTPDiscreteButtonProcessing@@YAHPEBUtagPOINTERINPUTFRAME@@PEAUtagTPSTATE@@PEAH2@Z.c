/*
 * XREFs of ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01F3CDC
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?IsFirstActionAfterKey@@YAHXZ @ 0x1C01F1948 (-IsFirstActionAfterKey@@YAHXZ.c)
 *     ?RevalidateTPDeviceState@@YAHPEAX@Z @ 0x1C01F2010 (-RevalidateTPDeviceState@@YAHPEAX@Z.c)
 *     ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F202C (-SendEndInertia@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F20AC (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F2258 (-TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z @ 0x1C01F6544 (-xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z.c)
 */

_BOOL8 __fastcall xxxDoTPDiscreteButtonProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        LARGE_INTEGER *a2,
        int *a3,
        int *a4)
{
  int v4; // ebp
  int v5; // r15d
  int v6; // r12d
  unsigned int v10; // esi
  DWORD LowPart; // ecx
  int v12; // edi
  int v13; // esi
  DWORD v14; // eax
  unsigned int v15; // ecx
  DWORD v16; // ecx
  DWORD v17; // eax
  unsigned int v18; // ecx
  int v19; // r14d
  DWORD v20; // eax
  DWORD v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  DWORD v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  DWORD v31; // eax
  __int64 v32; // rdx
  int v33; // ecx
  __int64 v34; // rcx
  DWORD v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  DWORD v39; // eax
  __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rcx
  DWORD v43; // eax
  int v44; // eax
  void *v45; // [rsp+68h] [rbp+10h]

  v4 = 0;
  v5 = 0;
  v45 = (void *)*((_QWORD *)a1 + 5);
  v6 = 0;
  v10 = (unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 9) + 68LL);
  LowPart = a2[158].LowPart;
  v12 = (v10 >> 5) & 1;
  v13 = (v10 >> 6) & 1;
  if ( (unsigned __int8)(LowPart & 4) >> 2 == v12 )
    goto LABEL_11;
  v14 = a2[135].LowPart;
  if ( v14 == 3 || v14 == 6 )
  {
    if ( v12 )
    {
      v15 = LowPart | 0x80;
      goto LABEL_7;
    }
  }
  else if ( v12 )
  {
    goto LABEL_8;
  }
  if ( (LowPart & 0x80u) != 0 )
  {
    v5 = 1;
    v15 = LowPart & 0xFFFFFF7F;
LABEL_7:
    a2[158].LowPart = v15;
  }
LABEL_8:
  v4 = 1;
  a2[158].LowPart ^= (a2[158].LowPart ^ (4 * v12)) & 4;
  if ( v12 )
    TPAAPSetCurtainState((struct tagTPSTATE *)a2, 0);
  *a3 = 1;
LABEL_11:
  v16 = a2[158].LowPart;
  if ( (unsigned __int8)(v16 & 8) >> 3 == v13 )
  {
    v19 = 0;
    goto LABEL_26;
  }
  v17 = a2[135].LowPart;
  if ( v17 == 3 || v17 == 6 )
  {
    if ( v13 )
    {
      v18 = v16 | 0x100;
      goto LABEL_17;
    }
  }
  else if ( v13 )
  {
    goto LABEL_18;
  }
  if ( (v16 & 0x100) != 0 )
  {
    v6 = 1;
    v18 = v16 & 0xFFFFFEFF;
LABEL_17:
    a2[158].LowPart = v18;
  }
LABEL_18:
  v19 = 1;
  a2[158].LowPart ^= (a2[158].LowPart ^ (8 * v13)) & 8;
  if ( v13 )
    TPAAPSetCurtainState((struct tagTPSTATE *)a2, 0);
  *a4 = 1;
LABEL_26:
  v20 = a2[135].LowPart;
  if ( v20 == 3 || v20 == 6 || v5 || v6 )
    return 1LL;
  if ( !v4 )
    goto LABEL_53;
  if ( v12 )
  {
    if ( a2[133].LowPart && (a2[158].LowPart & 0x8000) == 0 )
      a2[133].LowPart = 0;
    if ( (a2[158].LowPart & 0x400000) != 0 )
      SendEndInertia((struct tagTPSTATE *)a2);
    if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
    {
      a2[158].LowPart |= 0x80u;
      goto LABEL_53;
    }
    v31 = a2[158].LowPart;
    if ( !__CFSHR__(v31, 16) )
    {
      if ( (v31 & 0x10) == 0 )
        goto LABEL_68;
      if ( !__CFSHR__(a2[158].LowPart, 16) )
        goto LABEL_53;
    }
    if ( (v31 & 0x20) != 0 )
      goto LABEL_53;
LABEL_68:
    if ( IsFirstActionAfterKey() )
    {
      v34 = (unsigned int)-v33;
      dword_1C0321BD0 = ((_DWORD)v34 != 0) + 5;
    }
    else
    {
      v34 = (unsigned int)-v33;
      dword_1C0321BD4 = ((_DWORD)v34 != 0) + 5;
    }
    ++dword_1C0321C0C;
    ++dword_1C0321C24;
    UserSessionSwitchLeaveCrit(v34, v32);
    xxxSendTPAsMouse(
      gptCursorAsync,
      (a2[158].LowPart & 0x8000) != 0 ? 8 : 2,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    EnterCrit(1LL);
    v35 = a2[158].LowPart;
    if ( (v35 & 0x8000) != 0 )
      v36 = v35 | 0x20;
    else
      v36 = v35 | 0x10;
    v24 = (unsigned __int64)v45;
    a2[158].LowPart = v36;
    if ( !RevalidateTPDeviceState((unsigned __int64)v45) )
      return 0LL;
    goto LABEL_54;
  }
  v21 = a2[158].LowPart;
  if ( __CFSHR__(v21, 16) )
  {
    if ( (v21 & 0x20) != 0 && ((v21 & 1) == 0 || (v21 & 0x1000) != 0 || (v21 & 2) == 0) )
    {
      a2[162] = KeQueryPerformanceCounter(0LL);
      UserSessionSwitchLeaveCrit(v23, v22);
      xxxSendTPAsMouse(
        gptCursorAsync,
        0x10u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
      EnterCrit(1LL);
      a2[158].LowPart &= ~0x20u;
      goto LABEL_38;
    }
    if ( __CFSHR__(a2[158].LowPart, 16) )
      goto LABEL_53;
  }
  if ( (v21 & 0x10) == 0 || (v21 & 1) != 0 && (v21 & 0x1000) == 0 && (v21 & 2) == 0 )
  {
LABEL_53:
    v24 = (unsigned __int64)v45;
    goto LABEL_54;
  }
  a2[162] = KeQueryPerformanceCounter(0LL);
  UserSessionSwitchLeaveCrit(v27, v26);
  xxxSendTPAsMouse(
    gptCursorAsync,
    4u,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
  EnterCrit(1LL);
  a2[158].LowPart &= ~0x10u;
LABEL_38:
  v24 = (unsigned __int64)v45;
  if ( !RevalidateTPDeviceState((unsigned __int64)v45) )
    return 0LL;
LABEL_54:
  if ( !v19 )
    return 1LL;
  if ( !v13 )
  {
    v28 = a2[158].LowPart;
    if ( __CFSHR__(v28, 16) )
    {
      if ( (v28 & 0x10) != 0 && ((v28 & 1) == 0 || (v28 & 0x1000) != 0 || (v28 & 2) != 0) )
      {
        a2[162] = KeQueryPerformanceCounter(0LL);
        UserSessionSwitchLeaveCrit(v30, v29);
        xxxSendTPAsMouse(
          gptCursorAsync,
          4u,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        EnterCrit(1LL);
        a2[158].LowPart &= ~0x10u;
        return RevalidateTPDeviceState(v24);
      }
      if ( __CFSHR__(a2[158].LowPart, 16) )
        return 1LL;
    }
    if ( (v28 & 0x20) == 0 || (v28 & 1) != 0 && (v28 & 0x1000) == 0 && (v28 & 2) != 0 )
      return 1LL;
    a2[162] = KeQueryPerformanceCounter(0LL);
    UserSessionSwitchLeaveCrit(v38, v37);
    xxxSendTPAsMouse(
      gptCursorAsync,
      0x10u,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    EnterCrit(1LL);
    a2[158].LowPart &= ~0x20u;
    return RevalidateTPDeviceState(v24);
  }
  if ( a2[133].LowPart && (a2[158].LowPart & 0x8000) != 0 )
    a2[133].LowPart = 0;
  if ( (a2[158].LowPart & 0x400000) != 0 )
    SendEndInertia((struct tagTPSTATE *)a2);
  if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
  {
    a2[158].LowPart |= 0x100u;
    return 1LL;
  }
  v39 = a2[158].LowPart;
  if ( __CFSHR__(v39, 16) )
    goto LABEL_92;
  if ( (v39 & 0x20) != 0 )
  {
    if ( !__CFSHR__(a2[158].LowPart, 16) )
      return 1LL;
LABEL_92:
    if ( (v39 & 0x10) != 0 )
      return 1LL;
  }
  if ( IsFirstActionAfterKey() )
  {
    v42 = (unsigned int)-v41;
    dword_1C0321BD0 = 6 - ((_DWORD)v42 != 0);
  }
  else
  {
    v42 = (unsigned int)-v41;
    dword_1C0321BD4 = 6 - ((_DWORD)v42 != 0);
  }
  ++dword_1C0321C0C;
  ++dword_1C0321C24;
  UserSessionSwitchLeaveCrit(v42, v40);
  xxxSendTPAsMouse(
    gptCursorAsync,
    (a2[158].LowPart & 0x8000) != 0 ? 2 : 8,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
  EnterCrit(1LL);
  v43 = a2[158].LowPart;
  if ( (v43 & 0x8000) != 0 )
    v44 = v43 | 0x10;
  else
    v44 = v43 | 0x20;
  a2[158].LowPart = v44;
  return RevalidateTPDeviceState(v24);
}
