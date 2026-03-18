/*
 * XREFs of DCESpeedHitTest @ 0x1C0065270
 * Callers:
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     DetermineInputTarget @ 0x1C008BA5C (DetermineInputTarget.c)
 *     SpeedHitTestWithoutTargeting @ 0x1C022D488 (SpeedHitTestWithoutTargeting.c)
 *     xxxDitCompositionInputSinkLuidFromPoint @ 0x1C022D7D4 (xxxDitCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     ResolveDCompInputHandleToPwnd @ 0x1C000776C (ResolveDCompInputHandleToPwnd.c)
 *     DCELayerHitTest @ 0x1C00104D8 (DCELayerHitTest.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     GetBandOrdinal @ 0x1C00664B0 (GetBandOrdinal.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     SpeedHitTest @ 0x1C008D450 (SpeedHitTest.c)
 *     xxxIsDCompSpeedHitTest @ 0x1C008D644 (xxxIsDCompSpeedHitTest.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01E47FC (DCEHitTestWindow.c)
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
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 *v13; // rcx
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // r14d
  unsigned int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // r14
  unsigned int v26; // esi
  int IsDCompSpeedHitTest; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r13d
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int BandOrdinal; // eax
  __int64 v37; // rdx
  __int64 v38; // r9
  unsigned int v39; // eax
  __int128 *v40; // rcx
  int v41; // eax
  __int64 v42; // [rsp+40h] [rbp-71h] BYREF
  __int64 *v43; // [rsp+48h] [rbp-69h]
  int v44; // [rsp+50h] [rbp-61h]
  int v45; // [rsp+54h] [rbp-5Dh]
  __int64 v46; // [rsp+58h] [rbp-59h]
  unsigned int v47; // [rsp+60h] [rbp-51h]
  __int64 v48; // [rsp+68h] [rbp-49h]
  __int64 v49; // [rsp+70h] [rbp-41h]
  __int64 v50; // [rsp+78h] [rbp-39h] BYREF
  __int64 v51; // [rsp+80h] [rbp-31h]
  _DWORD *v52; // [rsp+88h] [rbp-29h]
  __int128 v53; // [rsp+90h] [rbp-21h] BYREF

  v10 = 0LL;
  v42 = 0LL;
  v11 = 0LL;
  v44 = 0;
  v50 = 0LL;
  v13 = a5;
  v51 = a8;
  v47 = a2;
  v48 = a9;
  v46 = a4;
  *a7 = 0;
  v45 = a3;
  v43 = a5;
  v52 = a7;
  v49 = a10;
  v53 = 0LL;
  if ( !a1 )
    return 0LL;
  v14 = *(_QWORD *)(a1 + 96);
  if ( v14 )
  {
    while ( 1 )
    {
      v44 = 0;
      v15 = (*(_BYTE *)(v14 + 55) & 0x10) == 0;
      v16 = *v13;
      v42 = *v13;
      if ( !v15 )
        break;
LABEL_4:
      v14 = *(_QWORD *)(v14 + 72);
      if ( !v14 )
        goto LABEL_47;
    }
    if ( (unsigned int)GetWindowCloakState(v14)
      || (v20 = *(PVOID *)(v14 + 24)) != 0LL
      && gbLockScreenActive
      && grpdeskLogon != v20
      && (BandOrdinal = GetBandOrdinal(*(unsigned int *)(v14 + 304), v17, v18, v19),
          v39 = GetBandOrdinal(17LL, v37, BandOrdinal, v38),
          (unsigned int)v18 < v39) )
    {
LABEL_13:
      v13 = v43;
      goto LABEL_4;
    }
    v21 = *(_QWORD *)(v14 + 208);
    if ( *(_QWORD *)(v14 + 272) )
    {
      if ( v21 )
        GreGetRgnBox(v21, &v53);
      v40 = &v53;
      if ( !*(_QWORD *)(v14 + 208) )
        v40 = (__int128 *)(v14 + 112);
      v41 = DCEHitTestWindow(v40, *(_QWORD *)(v14 + 272), &v42, a6);
      v16 = v42;
      if ( !v41 )
        goto LABEL_13;
      v23 = HIDWORD(v42);
      v22 = v42;
      v44 = 1;
    }
    else
    {
      v22 = v42;
      if ( v21 )
      {
        v23 = HIDWORD(v42);
        if ( !(unsigned int)GrePtInRegion(v21, (unsigned int)v42, HIDWORD(v42)) )
          goto LABEL_13;
      }
      else
      {
        if ( (int)v42 < *(_DWORD *)(v14 + 112) )
          goto LABEL_13;
        if ( (int)v42 >= *(_DWORD *)(v14 + 120) )
          goto LABEL_13;
        v23 = HIDWORD(v42);
        if ( SHIDWORD(v42) < *(_DWORD *)(v14 + 116) || SHIDWORD(v42) >= *(_DWORD *)(v14 + 124) )
          goto LABEL_13;
      }
    }
    v24 = *(_QWORD *)(v14 + 200);
    if ( (!v24 && (v24 = *(_QWORD *)(v14 + 208)) == 0 || (unsigned int)GrePtInRegion(v24, v22, v23))
      && ((*(_BYTE *)(v14 + 50) & 8) == 0 || (*(_DWORD *)(v14 + 288) & 0x20) != 0 || DCELayerHitTest(v14, v16)) )
    {
      if ( (unsigned int)IsDwmInputThread(v24, v17, v18, v19) )
        v11 = *(_QWORD *)v14;
      v25 = v51;
      v26 = v47;
      IsDCompSpeedHitTest = xxxIsDCompSpeedHitTest((struct tagWND *)v14, (__int64)&v50, v51, v48, v49);
      v32 = v46;
      if ( IsDCompSpeedHitTest )
      {
        v28 = v50;
        if ( v50 )
          v10 = ResolveDCompInputHandleToPwnd(v11, (struct tagWND *)v50, v26, v46, v25);
      }
      if ( !(unsigned int)IsDwmInputThread(v29, v28, v30, v31)
        || (LOBYTE(v33) = 1, (v14 = HMValidateHandleNoSecure(v11, v33)) != 0) )
      {
        if ( *(_QWORD *)(v14 + 96)
          && (unsigned int)PtInRect(v14 + 128, v16)
          && (v34 = SpeedHitTest(v14, v26, v45, v32, v16, v25, v48, v49)) != 0
          && (!v10 || v34 != v14) )
        {
          v14 = v34;
        }
        else if ( v10 )
        {
          v14 = v10;
        }
      }
      else
      {
        EtwTraceDITSpeedHitTestFailedRevalidation(v11);
      }
      goto LABEL_29;
    }
    goto LABEL_13;
  }
  v16 = v42;
LABEL_47:
  v14 = a1;
LABEL_29:
  if ( v44 )
  {
    *v43 = v16;
    *v52 = 1;
  }
  return v14;
}
