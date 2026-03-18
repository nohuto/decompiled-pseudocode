/*
 * XREFs of DCESpeedHitTest @ 0x1C0066310
 * Callers:
 *     DetermineInputTarget @ 0x1C0066180 (DetermineInputTarget.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     SpeedHitTestWithoutTargeting @ 0x1C022D78C (SpeedHitTestWithoutTargeting.c)
 *     xxxDitCompositionInputSinkLuidFromPoint @ 0x1C022DBD8 (xxxDitCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     ResolveDCompInputHandleToPwnd @ 0x1C0008CE0 (ResolveDCompInputHandleToPwnd.c)
 *     DCELayerHitTest @ 0x1C003C760 (DCELayerHitTest.c)
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     GetBandOrdinal @ 0x1C0056824 (GetBandOrdinal.c)
 *     SpeedHitTest @ 0x1C0066700 (SpeedHitTest.c)
 *     xxxIsDCompSpeedHitTest @ 0x1C0066924 (xxxIsDCompSpeedHitTest.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01E4C8C (DCEHitTestWindow.c)
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
  __int64 *v11; // rcx
  __int64 v12; // r15
  unsigned __int64 v13; // r12
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // edx
  __int128 **v23; // rcx
  __int16 v24; // dx
  int v25; // ecx
  PVOID v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // r14d
  unsigned int v29; // esi
  __int64 v30; // rcx
  __int64 v31; // r14
  unsigned int v32; // esi
  int IsDCompSpeedHitTest; // eax
  int v34; // r13d
  __int64 v35; // rax
  unsigned int BandOrdinal; // eax
  unsigned int v38; // r8d
  __int128 *v39; // rcx
  int v40; // eax
  __int64 v41; // [rsp+40h] [rbp-91h] BYREF
  __int64 *v42; // [rsp+48h] [rbp-89h]
  int v43; // [rsp+50h] [rbp-81h]
  int v44; // [rsp+54h] [rbp-7Dh]
  unsigned int v45; // [rsp+58h] [rbp-79h]
  __int64 v46; // [rsp+60h] [rbp-71h]
  __int64 v47; // [rsp+68h] [rbp-69h] BYREF
  __int64 v48; // [rsp+70h] [rbp-61h]
  __int64 v49; // [rsp+78h] [rbp-59h]
  __int64 v50; // [rsp+80h] [rbp-51h]
  _DWORD *v51; // [rsp+88h] [rbp-49h]
  __int128 v52; // [rsp+90h] [rbp-41h]
  __int128 v53; // [rsp+B8h] [rbp-19h] BYREF

  v50 = a8;
  v11 = a5;
  v12 = 0LL;
  v45 = a2;
  v13 = 0LL;
  v49 = a9;
  v48 = a10;
  v46 = a4;
  v44 = a3;
  v42 = a5;
  v51 = a7;
  v41 = 0LL;
  v43 = 0;
  v47 = 0LL;
  *a7 = 0;
  v53 = 0LL;
  if ( !a1 )
    return 0LL;
  v14 = *(_QWORD *)(a1 + 96);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = (*(_BYTE *)(v14 + 55) & 0x10) == 0;
      v16 = *v11;
      v41 = *v11;
      v43 = 0;
      if ( !v15 )
        break;
LABEL_4:
      v14 = *(_QWORD *)(v14 + 72);
      if ( !v14 )
        goto LABEL_5;
    }
    v17 = *(_QWORD *)(v14 + 88);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v14 + 24);
      v19 = 0LL;
      if ( v18 )
      {
        v20 = *(_QWORD *)(v18 + 8);
        if ( v20 )
          v19 = *(_QWORD *)(v20 + 16);
      }
      if ( v17 == v19 )
        goto LABEL_11;
    }
    if ( (*(_BYTE *)(v14 + 50) & 8) != 0 && GetTopLevelWindow(v14) )
    {
LABEL_11:
      v21 = *(_QWORD *)(v14 + 168);
      if ( !v21 || !atomDWMProp )
        goto LABEL_50;
      v22 = *(_DWORD *)(v21 + 4);
      v23 = (__int128 **)(v21 + 8);
      if ( v22 )
      {
        while ( *((_WORD *)v23 + 4) != atomDWMProp || (*((_BYTE *)v23 + 10) & 1) == 0 )
        {
          v23 += 2;
          if ( !--v22 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        v23 = 0LL;
      }
      if ( v23 && *v23 )
      {
        v52 = **v23;
        v24 = v52;
      }
      else
      {
LABEL_50:
        v24 = v52 & 0xE000;
      }
      v25 = (v24 & 0x400) != 0;
      if ( (v24 & 0x800) != 0 )
        v25 |= 2u;
    }
    else
    {
      v25 = 0;
    }
    if ( v25
      || (v26 = *(PVOID *)(v14 + 24)) != 0LL
      && gbLockScreenActive
      && grpdeskLogon != v26
      && (GetBandOrdinal(*(_DWORD *)(v14 + 304)), BandOrdinal = GetBandOrdinal(17), v38 < BandOrdinal) )
    {
LABEL_30:
      v11 = v42;
      goto LABEL_4;
    }
    v27 = *(_QWORD *)(v14 + 208);
    if ( *(_QWORD *)(v14 + 272) )
    {
      if ( v27 )
        GreGetRgnBox(v27, &v53);
      v39 = &v53;
      if ( !*(_QWORD *)(v14 + 208) )
        v39 = (__int128 *)(v14 + 112);
      v40 = DCEHitTestWindow(v39, *(_QWORD *)(v14 + 272), &v41, a6);
      v16 = v41;
      if ( !v40 )
        goto LABEL_30;
      v29 = HIDWORD(v41);
      v43 = 1;
      v28 = v41;
    }
    else
    {
      v28 = v41;
      if ( v27 )
      {
        v29 = HIDWORD(v41);
        if ( !(unsigned int)GrePtInRegion(v27, (unsigned int)v41, HIDWORD(v41)) )
          goto LABEL_30;
      }
      else
      {
        if ( (int)v41 < *(_DWORD *)(v14 + 112) )
          goto LABEL_30;
        if ( (int)v41 >= *(_DWORD *)(v14 + 120) )
          goto LABEL_30;
        v29 = HIDWORD(v41);
        if ( SHIDWORD(v41) < *(_DWORD *)(v14 + 116) || SHIDWORD(v41) >= *(_DWORD *)(v14 + 124) )
          goto LABEL_30;
      }
    }
    v30 = *(_QWORD *)(v14 + 200);
    if ( (!v30 && (v30 = *(_QWORD *)(v14 + 208)) == 0 || (unsigned int)GrePtInRegion(v30, v28, v29))
      && ((*(_BYTE *)(v14 + 50) & 8) == 0 || (*(_DWORD *)(v14 + 288) & 0x20) != 0 || DCELayerHitTest(v14, v16)) )
    {
      if ( (unsigned int)IsDwmInputThread() )
        v13 = *(_QWORD *)v14;
      v31 = v50;
      v32 = v45;
      IsDCompSpeedHitTest = xxxIsDCompSpeedHitTest((struct tagWND *)v14, (__int64)&v47, v50, v49, v48);
      v34 = v46;
      if ( IsDCompSpeedHitTest && v47 )
        v12 = ResolveDCompInputHandleToPwnd(v13, (struct tagWND *)v47, v32, v46, v31);
      if ( !(unsigned int)IsDwmInputThread() || (v14 = HMValidateHandleNoSecure(v13, 1)) != 0 )
      {
        if ( *(_QWORD *)(v14 + 96)
          && (unsigned int)PtInRect(v14 + 128, v16)
          && (v35 = SpeedHitTest(v14, v32, v44, v34, v16, v31, v49, v48)) != 0
          && (!v12 || v35 != v14) )
        {
          v14 = v35;
        }
        else if ( v12 )
        {
          v14 = v12;
        }
      }
      else
      {
        EtwTraceDITSpeedHitTestFailedRevalidation(v13);
      }
      goto LABEL_46;
    }
    goto LABEL_30;
  }
  v16 = v41;
LABEL_5:
  v14 = a1;
LABEL_46:
  if ( v43 )
  {
    *v42 = v16;
    *v51 = 1;
  }
  return v14;
}
