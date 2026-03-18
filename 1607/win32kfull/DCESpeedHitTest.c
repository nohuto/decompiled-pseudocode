/*
 * XREFs of DCESpeedHitTest @ 0x1C0058D3C
 * Callers:
 *     DetermineInputTarget @ 0x1C0058B9C (DetermineInputTarget.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     SpeedHitTestWithoutTargeting @ 0x1C02234F0 (SpeedHitTestWithoutTargeting.c)
 *     xxxDitCompositionInputSinkLuidFromPoint @ 0x1C0223944 (xxxDitCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     ResolveDCompInputHandleToPwnd @ 0x1C000C718 (ResolveDCompInputHandleToPwnd.c)
 *     SpeedHitTest @ 0x1C00591A0 (SpeedHitTest.c)
 *     xxxIsDCompSpeedHitTest @ 0x1C00593A0 (xxxIsDCompSpeedHitTest.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     GetBandOrdinal @ 0x1C007B43C (GetBandOrdinal.c)
 *     DCELayerHitTest @ 0x1C010E858 (DCELayerHitTest.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0155248 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01DB530 (DCEHitTestWindow.c)
 */

__int64 __fastcall DCESpeedHitTest(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rbx
  __int64 *v12; // r14
  __int64 result; // rax
  InputTransform *v14; // r15
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r9
  bool v20; // zf
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 TopLevelWindow; // rax
  __int64 v25; // rax
  __int128 **v26; // rcx
  __int16 v27; // cx
  int v28; // eax
  PVOID v29; // rcx
  __int64 v30; // rdx
  unsigned int BandOrdinal; // eax
  __int64 v32; // rcx
  unsigned int v33; // r14d
  int v34; // eax
  __int128 *v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  __int64 v40; // r14
  unsigned int v41; // r13d
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // [rsp+50h] [rbp-A1h] BYREF
  int v48; // [rsp+58h] [rbp-99h]
  __int64 *v49; // [rsp+60h] [rbp-91h]
  unsigned int v50; // [rsp+68h] [rbp-89h]
  __int64 v51; // [rsp+70h] [rbp-81h]
  __int64 v52; // [rsp+78h] [rbp-79h] BYREF
  __int64 v53; // [rsp+80h] [rbp-71h]
  __int64 v54; // [rsp+88h] [rbp-69h]
  __int64 v55; // [rsp+90h] [rbp-61h]
  _BYTE v56[16]; // [rsp+98h] [rbp-59h] BYREF
  _DWORD *v57; // [rsp+A8h] [rbp-49h]
  __int128 v58; // [rsp+B0h] [rbp-41h]
  __int128 v59; // [rsp+D8h] [rbp-19h] BYREF

  v11 = 0LL;
  v12 = a5;
  v51 = a8;
  v54 = a9;
  v53 = a10;
  result = 0LL;
  v55 = a4;
  v14 = 0LL;
  v48 = a3;
  v15 = 0;
  v50 = a2;
  v49 = a5;
  v57 = a7;
  v52 = 0LL;
  *a7 = 0;
  v59 = 0LL;
  if ( !a1 )
    return result;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v56);
  v17 = *(_QWORD *)(a1 + 96);
  v18 = *a5;
  v19 = 0LL;
  if ( !v17 )
  {
LABEL_76:
    v17 = a1;
    goto LABEL_77;
  }
  while ( 1 )
  {
    v20 = (*(_BYTE *)(v17 + 55) & 0x10) == 0;
    v11 = *v12;
    v47 = *v12;
    if ( v20 )
      goto LABEL_54;
    v21 = *(_QWORD *)(v17 + 88);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v17 + 24);
      v16 = v19;
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 8);
        if ( v23 )
          v16 = *(_QWORD *)(v23 + 16);
      }
      if ( v21 == v16 )
        goto LABEL_85;
    }
    if ( (*(_BYTE *)(v17 + 50) & 8) != 0
      && (TopLevelWindow = GetTopLevelWindow(v17, v16, v21, v19), v19 = 0LL, TopLevelWindow) )
    {
LABEL_85:
      v25 = *(_QWORD *)(v17 + 168);
      if ( !v25 )
        goto LABEL_21;
      v21 = (unsigned __int16)atomDWMProp;
      if ( !atomDWMProp )
        goto LABEL_21;
      v16 = *(unsigned int *)(v25 + 4);
      v26 = (__int128 **)(v25 + 8);
      if ( (_DWORD)v16 )
      {
        while ( *((_WORD *)v26 + 4) != atomDWMProp || (*((_BYTE *)v26 + 10) & 1) == 0 )
        {
          v26 += 2;
          v20 = (_DWORD)v16 == 1;
          v16 = (unsigned int)(v16 - 1);
          if ( v20 )
            goto LABEL_17;
        }
      }
      else
      {
LABEL_17:
        v26 = (__int128 **)v19;
      }
      if ( v26 && *v26 )
      {
        v58 = **v26;
        v27 = v58;
      }
      else
      {
LABEL_21:
        v27 = v58 & 0xE000;
      }
      v28 = v19;
      if ( (v27 & 0x400) != 0 )
        v28 = 1;
      if ( (v27 & 0x800) != 0 )
        v28 |= 2u;
    }
    else
    {
      v28 = v19;
    }
    if ( v28 )
      goto LABEL_54;
    v29 = *(PVOID *)(v17 + 24);
    if ( v29 )
    {
      if ( gbLockScreenActive != (_DWORD)v19 && grpdeskLogon != v29 )
      {
        GetBandOrdinal(*(unsigned int *)(v17 + 304), v16);
        BandOrdinal = GetBandOrdinal(17LL, v30);
        if ( (unsigned int)v21 < BandOrdinal )
          goto LABEL_54;
      }
    }
    v32 = *(_QWORD *)(v17 + 208);
    if ( *(_QWORD *)(v17 + 272) != v19 )
      break;
    if ( v32 )
    {
      v33 = HIDWORD(v47);
      v34 = GrePtInRegion(v32, (unsigned int)v11, HIDWORD(v47));
      v19 = 0LL;
      if ( v34 )
        goto LABEL_47;
    }
    else
    {
      if ( (int)v11 < *(_DWORD *)(v17 + 112) || (int)v11 >= *(_DWORD *)(v17 + 120) )
        goto LABEL_54;
      v33 = HIDWORD(v47);
      if ( SHIDWORD(v47) >= *(_DWORD *)(v17 + 116) && SHIDWORD(v47) < *(_DWORD *)(v17 + 124) )
        goto LABEL_47;
    }
LABEL_53:
    v12 = v49;
LABEL_54:
    v17 = *(_QWORD *)(v17 + 72);
    if ( !v17 )
      goto LABEL_76;
  }
  if ( v32 )
  {
    GreGetRgnBox(v32, &v59);
    v19 = 0LL;
  }
  v35 = &v59;
  if ( *(_QWORD *)(v17 + 208) == v19 )
    v35 = (__int128 *)(v17 + 112);
  v36 = DCEHitTestWindow(v35, *(_QWORD *)(v17 + 272), &v47, a6);
  v11 = v47;
  v19 = 0LL;
  if ( !v36 )
    goto LABEL_54;
  v33 = HIDWORD(v47);
LABEL_47:
  v37 = *(_QWORD *)(v17 + 200);
  if ( v37 || (v37 = *(_QWORD *)(v17 + 208)) != 0 )
  {
    v38 = GrePtInRegion(v37, (unsigned int)v11, v33);
    v19 = 0LL;
    if ( !v38 )
      goto LABEL_53;
  }
  if ( (*(_BYTE *)(v17 + 50) & 8) != 0 && (*(_DWORD *)(v17 + 288) & 0x20) == 0 )
  {
    v39 = DCELayerHitTest(v17, v11, v21, v19);
    v19 = 0LL;
    if ( !v39 )
      goto LABEL_53;
  }
  if ( *(_QWORD *)(v17 + 272) != v19 )
    v15 = 1;
  if ( (unsigned int)IsDwmInputThread() )
  {
    UserAtomicCheck::Detach((UserAtomicCheck *)v56);
    v40 = *(_QWORD *)v17;
  }
  else
  {
    v40 = 0LL;
  }
  v41 = v50;
  if ( (unsigned int)xxxIsDCompSpeedHitTest((struct tagWND *)v17, (__int64)&v52, v51, v54, v53) && v52 )
    v14 = ResolveDCompInputHandleToPwnd(v40, (struct tagWND *)v52, v41, v55, v51);
  v42 = IsDwmInputThread();
  v19 = 0LL;
  if ( !v42
    || (v43 = HMValidateHandleNoSecure(v40, 1LL), v19 = 0LL, (v17 = v43) != 0)
    && (LOBYTE(v44) = *(_BYTE *)(v43 + 43), (v44 & 0x80u) == 0LL) )
  {
    if ( *(_QWORD *)(v17 + 96)
      && (unsigned int)PtInRect(v17 + 128, v11)
      && (v46 = SpeedHitTest(v17, v41, v48, v55, v11, v18, v51, v54, v53), v19 = 0LL, v46)
      && (!v14 || v46 != v17) )
    {
      v17 = v46;
    }
    else if ( v14 )
    {
      v17 = (__int64)v14;
    }
  }
  else
  {
    EtwTraceDITSpeedHitTestFailedRevalidation(v40, v44, v45, 0LL);
    v19 = 0LL;
  }
LABEL_77:
  if ( v15 )
  {
    *v49 = v11;
    *v57 = 1;
  }
  if ( v17 )
  {
    if ( *(char *)(v17 + 43) < 0 )
      v17 = v19;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v56);
  return v17;
}
