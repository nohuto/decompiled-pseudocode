/*
 * XREFs of ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C004CCD8
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
 * Callees:
 *     ValidatePtiKbd @ 0x1C004929C (ValidatePtiKbd.c)
 *     PhkFirstValid @ 0x1C004A274 (PhkFirstValid.c)
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C004B55C (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     RawInputRequestedForMouse @ 0x1C004B914 (RawInputRequestedForMouse.c)
 *     GetMouseEventInputSource @ 0x1C004B934 (GetMouseEventInputSource.c)
 *     ValidatePtiMouse @ 0x1C004B980 (ValidatePtiMouse.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C004CCB4 (FixupPromotedMouseExtraInfoForHook.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 *     DetermineInputTarget @ 0x1C008BA5C (DetermineInputTarget.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     HasHidTable @ 0x1C0090A50 (HasHidTable.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01D9CE8 (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     IsWheelTargetDesktopApp @ 0x1C01D9E34 (IsWheelTargetDesktopApp.c)
 *     MouseWheelRoutingFocus @ 0x1C01D9EA0 (MouseWheelRoutingFocus.c)
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
  __int64 *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  char v29; // cf
  __int64 v30; // rax
  __int64 v31; // rsi
  int v32; // r10d
  __int64 v33; // rax
  int v34; // eax
  __int64 *v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  struct tagQ *v39; // r10
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rsi
  int v46; // edx
  int v47; // r8d
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rsi
  __int64 v50; // rsi
  char v51; // dl
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // edx
  char *v58; // rcx
  int v59; // [rsp+68h] [rbp-39h]
  unsigned int v60; // [rsp+90h] [rbp-11h]
  unsigned int v61; // [rsp+98h] [rbp-9h]
  __int64 v62; // [rsp+98h] [rbp-9h]
  __int64 v63; // [rsp+A0h] [rbp-1h] BYREF
  int v64; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v65; // [rsp+B0h] [rbp+Fh] BYREF
  int v66; // [rsp+B8h] [rbp+17h]
  int v67; // [rsp+BCh] [rbp+1Bh]
  int v68; // [rsp+C0h] [rbp+1Fh]
  __int64 v69; // [rsp+C8h] [rbp+27h]

  v2 = *((unsigned __int16 *)a1 + 1);
  if ( (unsigned int)((__int64 (*)(void))IsDwmInputThread)() && (*((_DWORD *)a1 + 12) & 0x400) != 0 )
  {
    v3 = *(_QWORD *)((char *)a1 + 52);
    v4 = *((_DWORD *)a1 + 15);
  }
  else
  {
    v5 = *(_QWORD *)(gptiCurrent + 384LL);
    v3 = *(_QWORD *)(v5 + 832);
    v4 = *(_DWORD *)(v5 + 12) >> 31;
  }
  v6 = *(unsigned __int16 *)a1;
  LODWORD(v63) = *(_WORD *)a1 & 0x400;
  v60 = v6 & 0x800;
  GetMouseEventInputSource((__int64)a1, &v64);
  v12 = 1;
  v61 = 1;
  v13 = v6 & 0xFFFFF3FF;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( (v13 & 1) != 0 )
      {
        if ( gbClientDoubleClickSupport == (_DWORD)v11 || (v14 = 1, (v2 & 1) == 0) )
          v14 = v11;
        v59 = v14;
        v12 = v61;
        xxxButtonEvent(
          v61,
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
          v59,
          -__CFSHR__(*((_DWORD *)a1 + 12), 11),
          (unsigned __int64 *)((char *)a1 + 52),
          (__int64)&v64);
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
        v12 = v61;
        xxxButtonEvent(
          v61,
          *(struct tagPOINT *)((char *)a1 + 16),
          (__int64)a1 + 88,
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
          -__CFSHR__(*((_DWORD *)a1 + 12), 11),
          (unsigned __int64 *)((char *)a1 + 52),
          (__int64)&v64);
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
      v61 = v12;
      if ( !v13 )
      {
        v10 = v60;
        goto LABEL_33;
      }
    }
    v36 = gpqForeground;
    goto LABEL_55;
  }
LABEL_33:
  v21 = v63;
  if ( !(_DWORD)v63 && !(_DWORD)v10 )
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
  v62 = (int)(v24 | *((unsigned __int16 *)a1 + 8));
  v25 = (unsigned int)IsDwmInputThread(v24, v7, v9, v10) == 0;
  v26 = (__int64 *)gptiRit;
  if ( v25 )
    v26 = (__int64 *)gptiCurrent;
  if ( !PhkFirstValid(*v26, 14) )
    goto LABEL_56;
  v27 = *((_DWORD *)a1 + 6);
  v28 = *((_QWORD *)a1 + 1);
  v65 = *((_QWORD *)a1 + 2);
  v66 = *((unsigned __int16 *)a1 + 1) << 16;
  v29 = *((_DWORD *)a1 + 12) & 1;
  v68 = v27;
  v67 = -v29;
  v30 = FixupPromotedMouseExtraInfoForHook((__int64)a1 + 64, v28);
  v31 = *(_QWORD *)(gptiCurrent + 1216LL);
  v69 = v30;
  *(_QWORD *)(gptiCurrent + 1216LL) = &v65;
  v33 = xxxCallHook2(v32, 0, v21 != 0 ? 522 : 526, (unsigned int)&v65, (__int64)&v63);
  *(_QWORD *)(gptiCurrent + 1216LL) = v31;
  if ( v33 )
    return;
  v34 = *((_DWORD *)a1 + 12);
  if ( (v34 & 0x20) == 0 && (v34 & 1) != 0 )
  {
    v35 = (__int64 *)gpqForeground;
    v36 = gpqForeground;
    if ( gpqForeground )
    {
      v37 = *(_QWORD *)(gpqForeground + 372LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v3 <= (unsigned int)v37 )
        {
          if ( (_DWORD)v3 != (_DWORD)v37
            || (v38 = HIDWORD(v37), HIDWORD(v3) != (_DWORD)v38) && HIDWORD(v3) != -1 && (_DWORD)v38 != -1 )
          {
            if ( !v4 )
            {
LABEL_55:
              EtwTraceUIPIInputError(gptiCurrent, 0LL, v36, *(_QWORD *)(v36 + 372), 1);
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
    v35 = (__int64 *)gpqForeground;
  }
  if ( (*((_DWORD *)a1 + 12) & 0x200) == 0 && *v35 && (unsigned int)RawInputRequestedForMouse() )
  {
    PostRawMouseInput(v39, *((_DWORD *)a1 + 6), *((void **)a1 + 5), (struct _MOUSE_INPUT_DATA *)((char *)a1 + 64));
    v35 = (__int64 *)gpqForeground;
  }
  v42 = ValidatePtiKbd(*v35);
  if ( !v42 && v41 )
  {
    v45 = *(_QWORD *)(v41 + 72);
    if ( v45 )
      v42 = *(_QWORD *)(v45 + 16);
    else
      v42 = ValidatePtiMouse(v41);
  }
  if ( (unsigned int)MouseWheelRoutingFocus(v41, v40, v43, v44) && (*((_DWORD *)a1 + 12) & 0x200) == 0
    || (unsigned int)HasThreadRequestedLegacyMouseWheelRouting(v42) )
  {
    goto LABEL_89;
  }
  v63 = *((_QWORD *)a1 + 2);
  if ( v21 || (v47 = 0, v60) )
    v47 = 1;
  v48 = DetermineInputTarget((unsigned int)&v63, v46, v47, (int)a1 + 88, *((_QWORD *)a1 + 4));
  v49 = v48;
  if ( !v48 )
    goto LABEL_89;
  v23 = v48 & -(__int64)((unsigned int)IsCompositionInputWindow((struct tagWND *)v48) != 0);
  if ( (unsigned int)IsWheelTargetDesktopApp(*(_QWORD *)(v49 + 16)) )
  {
    if ( !v23 && (*((_DWORD *)a1 + 12) & 0x200) == 0 )
      goto LABEL_89;
  }
  v50 = *(_QWORD *)(*(_QWORD *)(v49 + 16) + 392LL);
  if ( (*((_DWORD *)a1 + 12) & 0x200) != 0 )
  {
    if ( !v50 )
      goto LABEL_89;
    if ( (unsigned int)RawInputRequestedForMouse() )
    {
      if ( (v51 & 1) == 0
        || v4
        || (v52 = *(_QWORD *)(v50 + 372), !gbEnforceUIPI)
        || (unsigned int)v3 > (unsigned int)v52
        || (_DWORD)v3 == (_DWORD)v52
        && ((v53 = HIDWORD(v52), HIDWORD(v3) == (_DWORD)v53) || HIDWORD(v3) == -1 || (_DWORD)v53 == -1) )
      {
        PostRawMouseInput(
          (struct tagQ *)v50,
          *((_DWORD *)a1 + 6),
          *((void **)a1 + 5),
          (struct _MOUSE_INPUT_DATA *)((char *)a1 + 64));
      }
    }
  }
  if ( !v50 )
  {
LABEL_89:
    v50 = gpqForeground;
    if ( !gpqForeground )
      return;
  }
  v54 = *(_QWORD *)(v50 + 64);
  if ( v54 )
    v55 = *(_QWORD *)(v54 + 16);
  else
    v55 = *(_QWORD *)(v50 + 48);
  if ( !(unsigned int)HasHidTable(v55) )
  {
    v57 = 2;
    goto LABEL_100;
  }
  if ( v54 )
    v56 = *(_QWORD *)(v54 + 16);
  else
    v56 = *(_QWORD *)(v50 + 48);
  v57 = 2;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 384) + 784LL) + 100LL) & 2) == 0 )
  {
LABEL_100:
    if ( v4 || (*((_DWORD *)a1 + 12) & 0x400) == 0 )
    {
      v58 = 0LL;
      if ( v4 )
        goto LABEL_105;
    }
    else
    {
      v58 = (char *)a1 + 52;
    }
    if ( (*((_DWORD *)a1 + 12) & 0x400) != 0 )
    {
LABEL_106:
      PostInputMessage(
        v50,
        v23,
        v21 != 0 ? 522 : 526,
        *((unsigned __int16 *)a1 + 1) << 16,
        v62,
        *((_DWORD *)a1 + 6),
        *((_QWORD *)a1 + 4),
        *((_QWORD *)a1 + 1),
        v57,
        &v64,
        0LL,
        v58);
      return;
    }
LABEL_105:
    v57 = 0;
    goto LABEL_106;
  }
}
