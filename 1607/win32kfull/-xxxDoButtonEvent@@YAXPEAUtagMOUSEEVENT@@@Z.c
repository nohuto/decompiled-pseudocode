/*
 * XREFs of ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00072B4 (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     DetermineInputTarget @ 0x1C0058B9C (DetermineInputTarget.c)
 *     HasHidTable @ 0x1C005C980 (HasHidTable.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     PhkFirstValid @ 0x1C00A3CFC (PhkFirstValid.c)
 *     ValidatePtiKbd @ 0x1C00A41F0 (ValidatePtiKbd.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C00DEF30 (FixupPromotedMouseExtraInfoForHook.c)
 *     RawInputRequestedForMouse @ 0x1C00E15EC (RawInputRequestedForMouse.c)
 *     GetMouseEventInputSource @ 0x1C00E160C (GetMouseEventInputSource.c)
 *     ValidatePtiMouse @ 0x1C00E1668 (ValidatePtiMouse.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01D20AC (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     IsWheelTargetDesktopApp @ 0x1C01D21F0 (IsWheelTargetDesktopApp.c)
 *     MouseWheelRoutingFocus @ 0x1C01D225C (MouseWheelRoutingFocus.c)
 */

void __fastcall xxxDoButtonEvent(struct tagMOUSEEVENT *a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int v8; // r9d
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  int v15; // r15d
  int v16; // r15d
  int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // r12d
  int v24; // eax
  __int64 v25; // r15
  __int64 v26; // rcx
  bool v27; // zf
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rdx
  char v34; // cf
  __int64 v35; // rax
  __int64 v36; // rsi
  char v37; // r9
  __int64 v38; // r10
  __int64 v39; // rax
  int v40; // eax
  __int64 *v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  struct tagQ *v44; // r10
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // r10d
  __int64 v51; // rsi
  __int64 v52; // rsi
  int v53; // r14d
  __int64 v54; // rdx
  __int64 v55; // r8
  struct tagWND *v56; // rax
  struct tagWND *v57; // r14
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rsi
  char v62; // dl
  int v63; // r9d
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  int v66; // eax
  __int64 *v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // edx
  char *v72; // rcx
  __int64 v73; // [rsp+30h] [rbp-71h]
  __int64 v74; // [rsp+48h] [rbp-59h]
  int v75; // [rsp+68h] [rbp-39h]
  int v76; // [rsp+90h] [rbp-11h]
  __int64 v77; // [rsp+90h] [rbp-11h]
  unsigned int v78; // [rsp+98h] [rbp-9h]
  int v79; // [rsp+9Ch] [rbp-5h] BYREF
  int v80; // [rsp+A0h] [rbp-1h] BYREF
  struct tagKE *v81; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v82; // [rsp+B0h] [rbp+Fh] BYREF
  int v83; // [rsp+B8h] [rbp+17h]
  int v84; // [rsp+BCh] [rbp+1Bh]
  int v85; // [rsp+C0h] [rbp+1Fh]
  __int64 v86; // [rsp+C8h] [rbp+27h]

  v3 = *((unsigned __int16 *)a1 + 1);
  if ( (unsigned int)IsDwmInputThread(a1, a2) && (*((_DWORD *)a1 + 12) & 0x800) != 0 )
  {
    v4 = *(_QWORD *)((char *)a1 + 52);
    v5 = *((_DWORD *)a1 + 15);
  }
  else
  {
    v6 = *(_QWORD *)(gptiCurrent + 376LL);
    v4 = *(_QWORD *)(v6 + 824);
    v5 = *(_DWORD *)(v6 + 12) >> 31;
  }
  v7 = *(unsigned __int16 *)a1;
  v8 = v7 >> 11;
  v79 = (v7 >> 10) & 1;
  v9 = v7 & 0xFFFFF3FF;
  v78 = v8 & 1;
  LODWORD(v81) = v9 & 1;
  GetMouseEventInputSource(a1, &v80);
  v15 = 1;
  v76 = 1;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( (v9 & 1) != 0 )
      {
        if ( gbClientDoubleClickSupport == (_DWORD)v14 || (v16 = 1, (v3 & 1) == 0) )
          v16 = v14;
        v75 = v16;
        v15 = v76;
        xxxButtonEvent(
          v76,
          *((_QWORD *)a1 + 2),
          (_DWORD)a1 + 88,
          0,
          *((_DWORD *)a1 + 6),
          *((_QWORD *)a1 + 4),
          *((_QWORD *)a1 + 1),
          *((_QWORD *)a1 + 5),
          (__int64)a1 + 64,
          -(*((_DWORD *)a1 + 12) & 1),
          -__CFSHR__(*((_DWORD *)a1 + 12), 6),
          -__CFSHR__(*((_DWORD *)a1 + 12), 7),
          v75,
          -__CFSHR__(*((_DWORD *)a1 + 12), 12),
          (__int64)a1 + 52,
          (__int64)&v80);
        v17 = *((_DWORD *)a1 + 12);
        v14 = 0LL;
        if ( (v17 & 0x20) == 0 && (v17 & 1) != 0 )
        {
          if ( gpqForeground )
          {
            v11 = gbEnforceUIPI;
            v18 = *(_QWORD *)(gpqForeground + 380LL);
            if ( gbEnforceUIPI )
            {
              if ( (unsigned int)v4 <= (unsigned int)v18 )
              {
                if ( (_DWORD)v4 != (_DWORD)v18
                  || (v19 = HIDWORD(v18), HIDWORD(v4) != (_DWORD)v19) && HIDWORD(v4) != -1 && (_DWORD)v19 != -1 )
                {
                  if ( !v5 )
                    break;
                }
              }
            }
          }
        }
      }
      if ( (v9 & 2) != 0 )
      {
        v15 = v76;
        xxxButtonEvent(
          v76,
          *((_QWORD *)a1 + 2),
          (_DWORD)a1 + 88,
          1,
          *((_DWORD *)a1 + 6),
          *((_QWORD *)a1 + 4),
          *((_QWORD *)a1 + 1),
          *((_QWORD *)a1 + 5),
          (__int64)a1 + 64,
          -(*((_DWORD *)a1 + 12) & 1),
          -__CFSHR__(*((_DWORD *)a1 + 12), 6),
          -__CFSHR__(*((_DWORD *)a1 + 12), 7),
          0,
          -__CFSHR__(*((_DWORD *)a1 + 12), 12),
          (__int64)a1 + 52,
          (__int64)&v80);
        v20 = *((_DWORD *)a1 + 12);
        v14 = 0LL;
        if ( (v20 & 0x20) == 0 && (v20 & 1) != 0 )
        {
          if ( gpqForeground )
          {
            v11 = gbEnforceUIPI;
            v21 = *(_QWORD *)(gpqForeground + 380LL);
            if ( gbEnforceUIPI )
            {
              if ( (unsigned int)v4 <= (unsigned int)v21 )
              {
                if ( (_DWORD)v4 != (_DWORD)v21
                  || (v22 = HIDWORD(v21), HIDWORD(v4) != (_DWORD)v22)
                  && (v11 = 0xFFFFFFFFLL, HIDWORD(v4) != -1)
                  && (_DWORD)v22 != -1 )
                {
                  if ( !v5 )
                    break;
                }
              }
            }
          }
        }
      }
      v15 *= 2;
      v3 >>= 2;
      v9 >>= 2;
      v76 = v15;
      if ( !v9 )
      {
        v13 = v78;
        goto LABEL_33;
      }
    }
    v30 = gpqForeground;
    goto LABEL_55;
  }
LABEL_33:
  v23 = v79;
  if ( !v79 && !(_DWORD)v13 )
    return;
  if ( *((_WORD *)a1 + 1) == (_WORD)v14 )
    return;
  if ( (*((_DWORD *)a1 + 12) & 0x400) == 0 && gpqForeground == v14 )
  {
    v24 = MouseWheelRoutingFocus(v11, v10, v12, v13);
    v14 = 0LL;
    if ( v24 )
      return;
  }
  v25 = v14;
  v26 = *((unsigned __int16 *)a1 + 10) << 16;
  v77 = (int)(v26 | *((unsigned __int16 *)a1 + 8));
  v27 = (unsigned int)IsDwmInputThread(v26, v10) == 0;
  v28 = (__int64 *)gptiRit;
  if ( v27 )
    v28 = (__int64 *)gptiCurrent;
  if ( !PhkFirstValid(*v28, 14) )
    goto LABEL_56;
  v32 = *((_DWORD *)a1 + 6);
  v33 = *((_QWORD *)a1 + 1);
  v82 = *((_QWORD *)a1 + 2);
  v83 = *((unsigned __int16 *)a1 + 1) << 16;
  v34 = *((_DWORD *)a1 + 12) & 1;
  v85 = v32;
  v84 = -v34;
  v35 = FixupPromotedMouseExtraInfoForHook((char *)a1 + 64, v33);
  v36 = *(_QWORD *)(gptiCurrent + 1232LL);
  v86 = v35;
  *(_QWORD *)(gptiCurrent + 1232LL) = &v82;
  v39 = xxxCallHook2(v38, 0, v23 != 0 ? 522 : 526, (int *)&v82, &v79, v37);
  v31 = 0LL;
  *(_QWORD *)(gptiCurrent + 1232LL) = v36;
  if ( v39 )
    return;
  v40 = *((_DWORD *)a1 + 12);
  if ( (v40 & 0x20) == 0 && (v40 & 1) != 0 )
  {
    v41 = (__int64 *)gpqForeground;
    v30 = gpqForeground;
    if ( gpqForeground )
    {
      v29 = gbEnforceUIPI;
      v42 = *(_QWORD *)(gpqForeground + 380LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v4 <= (unsigned int)v42 )
        {
          if ( (_DWORD)v4 != (_DWORD)v42
            || (v43 = HIDWORD(v42), HIDWORD(v4) != (_DWORD)v43)
            && (v29 = 0xFFFFFFFFLL, HIDWORD(v4) != -1)
            && (_DWORD)v43 != -1 )
          {
            if ( !v5 )
            {
LABEL_55:
              EtwTraceUIPIInputError(gptiCurrent, 0LL, v30, *(_QWORD *)(v30 + 380), 1);
              return;
            }
          }
        }
      }
    }
  }
  else
  {
LABEL_56:
    v41 = (__int64 *)gpqForeground;
  }
  if ( (*((_DWORD *)a1 + 12) & 0x400) == 0 && *v41 && (unsigned int)RawInputRequestedForMouse(v29, v41, v30, v31) )
  {
    PostRawMouseInput(v44, *((_DWORD *)a1 + 6), *((void **)a1 + 5), (struct _MOUSE_INPUT_DATA *)((char *)a1 + 64));
    v41 = (__int64 *)gpqForeground;
  }
  v45 = ValidatePtiKbd(*v41);
  v50 = 0;
  v51 = v45;
  if ( !v45 && v47 )
  {
    v52 = *(_QWORD *)(v47 + 80);
    if ( v52 )
      v51 = *(_QWORD *)(v52 + 16);
    else
      v51 = ValidatePtiMouse();
  }
  v53 = v50;
  LOBYTE(v53) = v80 == 34;
  if ( (unsigned int)MouseWheelRoutingFocus(v47, v46, v48, v49) && (*((_DWORD *)a1 + 12) & 0x400) == 0
    || (unsigned int)HasThreadRequestedLegacyMouseWheelRouting(v51)
    || v53 )
  {
    goto LABEL_96;
  }
  v55 = 0LL;
  if ( v23 || v78 )
    v55 = 1LL;
  if ( (_DWORD)v81 )
    v55 = (unsigned int)v55 | 2;
  v81 = (struct tagKE *)*((_QWORD *)a1 + 2);
  v56 = DetermineInputTarget(&v81, v54, v55, (__int64)a1 + 88);
  v57 = v56;
  if ( !v56
    || (v25 = (unsigned __int64)v56 & -(__int64)((unsigned int)IsCompositionInputWindow(v56) != 0),
        (unsigned int)IsWheelTargetDesktopApp(*((_QWORD *)v57 + 2)))
    && !v25
    && (*((_DWORD *)a1 + 12) & 0x400) == 0 )
  {
LABEL_96:
    v67 = (__int64 *)gpqForeground;
  }
  else
  {
    v60 = *((unsigned int *)a1 + 12);
    v61 = *(_QWORD *)(*((_QWORD *)v57 + 2) + 384LL);
    if ( (v60 & 0x400) != 0 )
    {
      if ( v61 )
      {
        if ( (unsigned int)RawInputRequestedForMouse(v58, v60, v59, 0LL) )
        {
          if ( (v62 & 1) == 0
            || v5
            || (v64 = *(_QWORD *)(v61 + 380), gbEnforceUIPI == v63)
            || (unsigned int)v4 > (unsigned int)v64
            || (_DWORD)v4 == (_DWORD)v64
            && ((v65 = HIDWORD(v64), HIDWORD(v4) == (_DWORD)v65) || HIDWORD(v4) == -1 || (_DWORD)v65 == -1) )
          {
            PostRawMouseInput(
              (struct tagQ *)v61,
              *((_DWORD *)a1 + 6),
              *((void **)a1 + 5),
              (struct _MOUSE_INPUT_DATA *)((char *)a1 + 64));
          }
        }
      }
    }
    v66 = HasThreadRequestedLegacyMouseWheelRouting(*((_QWORD *)v57 + 2));
    v67 = (__int64 *)gpqForeground;
    if ( v66 && (!gpqForeground || *(struct tagWND **)(gpqForeground + 80LL) != v57) )
      return;
    if ( v61 )
      goto LABEL_98;
  }
  v61 = *v67;
  if ( !*v67 )
    return;
LABEL_98:
  v68 = *(_QWORD *)(v61 + 72);
  if ( v68 )
    v69 = *(_QWORD *)(v68 + 16);
  else
    v69 = *(_QWORD *)(v61 + 56);
  if ( !(unsigned int)HasHidTable(v69) )
  {
    v71 = 2;
    goto LABEL_108;
  }
  if ( v68 )
    v70 = *(_QWORD *)(v68 + 16);
  else
    v70 = *(_QWORD *)(v61 + 56);
  v71 = 2;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v70 + 376) + 776LL) + 100LL) & 2) == 0 )
  {
LABEL_108:
    if ( v5 || (*((_DWORD *)a1 + 12) & 0x800) == 0 )
    {
      v72 = 0LL;
      if ( v5 )
        goto LABEL_113;
    }
    else
    {
      v72 = (char *)a1 + 52;
    }
    if ( (*((_DWORD *)a1 + 12) & 0x800) != 0 )
    {
LABEL_114:
      LODWORD(v74) = v71;
      LODWORD(v73) = *((_DWORD *)a1 + 6);
      PostInputMessage(
        v61,
        v25,
        v23 != 0 ? 522 : 526,
        *((unsigned __int16 *)a1 + 1) << 16,
        v77,
        v73,
        *((_QWORD *)a1 + 4),
        *((_QWORD *)a1 + 1),
        v74,
        &v80,
        0LL,
        v72);
      return;
    }
LABEL_113:
    v71 = 0;
    goto LABEL_114;
  }
}
