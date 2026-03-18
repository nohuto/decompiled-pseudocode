/*
 * XREFs of ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00021AC (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     DetermineInputTarget @ 0x1C0066180 (DetermineInputTarget.c)
 *     PhkFirstValid @ 0x1C0084424 (PhkFirstValid.c)
 *     ValidatePtiKbd @ 0x1C008488C (ValidatePtiKbd.c)
 *     RawInputRequestedForMouse @ 0x1C0085724 (RawInputRequestedForMouse.c)
 *     GetMouseEventInputSource @ 0x1C00858D0 (GetMouseEventInputSource.c)
 *     ValidatePtiMouse @ 0x1C008591C (ValidatePtiMouse.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C0086DAC (FixupPromotedMouseExtraInfoForHook.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01DA2F8 (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     IsWheelTargetDesktopApp @ 0x1C01DA448 (IsWheelTargetDesktopApp.c)
 *     MouseWheelRoutingFocus @ 0x1C01DA4B4 (MouseWheelRoutingFocus.c)
 */

void __fastcall xxxDoButtonEvent(struct tagMOUSEEVENT *a1)
{
  unsigned int v2; // r13d
  __int64 v3; // rbx
  int v4; // r12d
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  int v12; // r15d
  unsigned int v13; // esi
  int v14; // r15d
  int v15; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // r13d
  int v22; // eax
  __int64 v23; // r15
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  char v31; // cf
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r10
  __int64 v35; // rax
  int v36; // eax
  __int64 *v37; // rdx
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  struct tagQ *v41; // r10
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // r8
  struct tagWND *v50; // rax
  struct tagWND *v51; // rsi
  __int64 v52; // rsi
  char v53; // dl
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // edx
  char *v60; // rcx
  __int64 v61; // [rsp+30h] [rbp-71h]
  __int64 v62; // [rsp+48h] [rbp-59h]
  int v63; // [rsp+68h] [rbp-39h]
  unsigned int v64; // [rsp+90h] [rbp-11h]
  unsigned int v65; // [rsp+98h] [rbp-9h]
  __int64 v66; // [rsp+98h] [rbp-9h]
  __int64 v67; // [rsp+A0h] [rbp-1h] BYREF
  int v68; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v69; // [rsp+B0h] [rbp+Fh] BYREF
  int v70; // [rsp+B8h] [rbp+17h]
  int v71; // [rsp+BCh] [rbp+1Bh]
  int v72; // [rsp+C0h] [rbp+1Fh]
  __int64 v73; // [rsp+C8h] [rbp+27h]

  v2 = *((unsigned __int16 *)a1 + 1);
  if ( (unsigned int)((__int64 (*)(void))IsDwmInputThread)() && (*((_DWORD *)a1 + 12) & 0x400) != 0 )
  {
    v3 = *(_QWORD *)((char *)a1 + 52);
    v4 = *((_DWORD *)a1 + 15);
  }
  else
  {
    v5 = *(_QWORD *)(gptiCurrent + 376LL);
    v3 = *(_QWORD *)(v5 + 832);
    v4 = *(_DWORD *)(v5 + 12) >> 31;
  }
  v6 = *(unsigned __int16 *)a1;
  LODWORD(v67) = *(_WORD *)a1 & 0x400;
  v64 = v6 & 0x800;
  GetMouseEventInputSource((__int64)a1, &v68);
  v12 = 1;
  v65 = 1;
  v13 = v6 & 0xFFFFF3FF;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( (v13 & 1) != 0 )
      {
        if ( gbClientDoubleClickSupport == (_DWORD)v11 || (v14 = 1, (v2 & 1) == 0) )
          v14 = v11;
        v63 = v14;
        v12 = v65;
        xxxButtonEvent(
          v65,
          *(struct tagPOINT *)((char *)a1 + 16),
          (__int64)a1 + 88,
          0,
          *((_DWORD *)a1 + 6),
          *((_QWORD *)a1 + 4),
          *((_QWORD *)a1 + 1),
          *((_QWORD *)a1 + 5),
          (__int64)a1 + 64,
          -(*((_DWORD *)a1 + 12) & 1),
          -__CFSHR__(*((_DWORD *)a1 + 12), 6),
          -__CFSHR__(*((_DWORD *)a1 + 12), 7),
          v63,
          -__CFSHR__(*((_DWORD *)a1 + 12), 11),
          (unsigned __int64 *)((char *)a1 + 52),
          &v68);
        v15 = *((_DWORD *)a1 + 12);
        v11 = 0LL;
        if ( (v15 & 0x20) == 0 && (v15 & 1) != 0 )
        {
          if ( gpqForeground )
          {
            v8 = gbEnforceUIPI;
            v16 = *(_QWORD *)(gpqForeground + 372LL);
            if ( gbEnforceUIPI )
            {
              if ( (unsigned int)v3 <= (unsigned int)v16 )
              {
                if ( (_DWORD)v3 != (_DWORD)v16
                  || (v17 = HIDWORD(v16), HIDWORD(v3) != (_DWORD)v17) && HIDWORD(v3) != -1 && (_DWORD)v17 != -1 )
                {
                  if ( !v4 )
                    break;
                }
              }
            }
          }
        }
      }
      if ( (v13 & 2) != 0 )
      {
        v12 = v65;
        xxxButtonEvent(
          v65,
          *(struct tagPOINT *)((char *)a1 + 16),
          (__int64)a1 + 88,
          1u,
          *((_DWORD *)a1 + 6),
          *((_QWORD *)a1 + 4),
          *((_QWORD *)a1 + 1),
          *((_QWORD *)a1 + 5),
          (__int64)a1 + 64,
          -(*((_DWORD *)a1 + 12) & 1),
          -__CFSHR__(*((_DWORD *)a1 + 12), 6),
          -__CFSHR__(*((_DWORD *)a1 + 12), 7),
          0,
          -__CFSHR__(*((_DWORD *)a1 + 12), 11),
          (unsigned __int64 *)((char *)a1 + 52),
          &v68);
        v18 = *((_DWORD *)a1 + 12);
        v11 = 0LL;
        if ( (v18 & 0x20) == 0 && (v18 & 1) != 0 )
        {
          if ( gpqForeground )
          {
            v8 = gbEnforceUIPI;
            v19 = *(_QWORD *)(gpqForeground + 372LL);
            if ( gbEnforceUIPI )
            {
              if ( (unsigned int)v3 <= (unsigned int)v19 )
              {
                if ( (_DWORD)v3 != (_DWORD)v19
                  || (v20 = HIDWORD(v19), HIDWORD(v3) != (_DWORD)v20)
                  && (v8 = 0xFFFFFFFFLL, HIDWORD(v3) != -1)
                  && (_DWORD)v20 != -1 )
                {
                  if ( !v4 )
                    break;
                }
              }
            }
          }
        }
      }
      v12 *= 2;
      v2 >>= 2;
      v13 >>= 2;
      v65 = v12;
      if ( !v13 )
      {
        v10 = v64;
        goto LABEL_33;
      }
    }
    v38 = gpqForeground;
    goto LABEL_55;
  }
LABEL_33:
  v21 = v67;
  if ( !(_DWORD)v67 && !(_DWORD)v10 )
    return;
  if ( *((_WORD *)a1 + 1) == (_WORD)v11 )
    return;
  if ( (*((_DWORD *)a1 + 12) & 0x200) == 0 && gpqForeground == v11 )
  {
    v22 = MouseWheelRoutingFocus(v8, v7, v9, v10);
    v11 = 0LL;
    if ( v22 )
      return;
  }
  v23 = v11;
  v24 = *((unsigned __int16 *)a1 + 10) << 16;
  v66 = (int)(v24 | *((unsigned __int16 *)a1 + 8));
  v25 = (unsigned int)IsDwmInputThread(v24, v7, v9, v10) == 0;
  v28 = (__int64 *)gptiRit;
  if ( v25 )
    v28 = (__int64 *)gptiCurrent;
  if ( !PhkFirstValid(*v28, 14LL, v26, v27) )
    goto LABEL_56;
  v29 = *((_DWORD *)a1 + 6);
  v30 = *((_QWORD *)a1 + 1);
  v69 = *((_QWORD *)a1 + 2);
  v70 = *((unsigned __int16 *)a1 + 1) << 16;
  v31 = *((_DWORD *)a1 + 12) & 1;
  v72 = v29;
  v71 = -v31;
  v32 = FixupPromotedMouseExtraInfoForHook((__int64)a1 + 64, v30);
  v33 = *(_QWORD *)(gptiCurrent + 1208LL);
  v73 = v32;
  *(_QWORD *)(gptiCurrent + 1208LL) = &v69;
  v35 = xxxCallHook2(v34, 0, v21 != 0 ? 522 : 526, (int *)&v69, (__int64)&v67);
  *(_QWORD *)(gptiCurrent + 1208LL) = v33;
  if ( v35 )
    return;
  v36 = *((_DWORD *)a1 + 12);
  if ( (v36 & 0x20) == 0 && (v36 & 1) != 0 )
  {
    v37 = (__int64 *)gpqForeground;
    v38 = gpqForeground;
    if ( gpqForeground )
    {
      v39 = *(_QWORD *)(gpqForeground + 372LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v3 <= (unsigned int)v39 )
        {
          if ( (_DWORD)v3 != (_DWORD)v39
            || (v40 = HIDWORD(v39), HIDWORD(v3) != (_DWORD)v40) && HIDWORD(v3) != -1 && (_DWORD)v40 != -1 )
          {
            if ( !v4 )
            {
LABEL_55:
              EtwTraceUIPIInputError(gptiCurrent, 0LL, v38, *(_QWORD *)(v38 + 372), 1);
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
    v37 = (__int64 *)gpqForeground;
  }
  if ( (*((_DWORD *)a1 + 12) & 0x200) == 0 && *v37 && (unsigned int)RawInputRequestedForMouse() )
  {
    PostRawMouseInput(v41, *((_DWORD *)a1 + 6), *((void **)a1 + 5), (struct _MOUSE_INPUT_DATA *)((char *)a1 + 64));
    v37 = (__int64 *)gpqForeground;
  }
  v44 = ValidatePtiKbd(*v37);
  if ( !v44 && v43 )
  {
    v47 = *(_QWORD *)(v43 + 72);
    if ( v47 )
      v44 = *(_QWORD *)(v47 + 16);
    else
      v44 = ValidatePtiMouse(v43);
  }
  if ( (unsigned int)MouseWheelRoutingFocus(v43, v42, v45, v46) && (*((_DWORD *)a1 + 12) & 0x200) == 0
    || (unsigned int)HasThreadRequestedLegacyMouseWheelRouting(v44) )
  {
    goto LABEL_89;
  }
  v67 = *((_QWORD *)a1 + 2);
  if ( v21 || (v49 = 0LL, v64) )
    v49 = 1LL;
  v50 = DetermineInputTarget(&v67, v48, v49, (__int64)a1 + 88);
  v51 = v50;
  if ( !v50 )
    goto LABEL_89;
  v23 = (unsigned __int64)v50 & -(__int64)((unsigned int)IsCompositionInputWindow(v50) != 0);
  if ( (unsigned int)IsWheelTargetDesktopApp(*((_QWORD *)v51 + 2)) )
  {
    if ( !v23 && (*((_DWORD *)a1 + 12) & 0x200) == 0 )
      goto LABEL_89;
  }
  v52 = *(_QWORD *)(*((_QWORD *)v51 + 2) + 384LL);
  if ( (*((_DWORD *)a1 + 12) & 0x200) != 0 )
  {
    if ( !v52 )
      goto LABEL_89;
    if ( (unsigned int)RawInputRequestedForMouse() )
    {
      if ( (v53 & 1) == 0
        || v4
        || (v54 = *(_QWORD *)(v52 + 372), !gbEnforceUIPI)
        || (unsigned int)v3 > (unsigned int)v54
        || (_DWORD)v3 == (_DWORD)v54
        && ((v55 = HIDWORD(v54), HIDWORD(v3) == (_DWORD)v55) || HIDWORD(v3) == -1 || (_DWORD)v55 == -1) )
      {
        PostRawMouseInput(
          (struct tagQ *)v52,
          *((_DWORD *)a1 + 6),
          *((void **)a1 + 5),
          (struct _MOUSE_INPUT_DATA *)((char *)a1 + 64));
      }
    }
  }
  if ( !v52 )
  {
LABEL_89:
    v52 = gpqForeground;
    if ( !gpqForeground )
      return;
  }
  v56 = *(_QWORD *)(v52 + 64);
  if ( v56 )
    v57 = *(_QWORD *)(v56 + 16);
  else
    v57 = *(_QWORD *)(v52 + 48);
  if ( !(unsigned int)HasHidTable(v57) )
  {
    v59 = 2;
    goto LABEL_100;
  }
  if ( v56 )
    v58 = *(_QWORD *)(v56 + 16);
  else
    v58 = *(_QWORD *)(v52 + 48);
  v59 = 2;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 376) + 784LL) + 100LL) & 2) == 0 )
  {
LABEL_100:
    if ( v4 || (*((_DWORD *)a1 + 12) & 0x400) == 0 )
    {
      v60 = 0LL;
      if ( v4 )
        goto LABEL_105;
    }
    else
    {
      v60 = (char *)a1 + 52;
    }
    if ( (*((_DWORD *)a1 + 12) & 0x400) != 0 )
    {
LABEL_106:
      LODWORD(v62) = v59;
      LODWORD(v61) = *((_DWORD *)a1 + 6);
      PostInputMessage(
        v52,
        v23,
        v21 != 0 ? 522 : 526,
        *((unsigned __int16 *)a1 + 1) << 16,
        v66,
        v61,
        *((_QWORD *)a1 + 4),
        *((_QWORD *)a1 + 1),
        v62,
        &v68,
        0LL,
        v60);
      return;
    }
LABEL_105:
    v59 = 0;
    goto LABEL_106;
  }
}
