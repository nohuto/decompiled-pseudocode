/*
 * XREFs of xxxArrangeIconicWindows @ 0x1402FAF24
 * Callers:
 *     NtUserArrangeIconicWindows @ 0x1402AFB30 (NtUserArrangeIconicWindows.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x140049970 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     InternalBeginDeferWindowPos @ 0x140179454 (InternalBeginDeferWindowPos.c)
 *     InternalGetRealClientRect @ 0x1401E675C (InternalGetRealClientRect.c)
 *     _ScreenToClient @ 0x1402106F4 (_ScreenToClient.c)
 */

__int64 __fastcall xxxArrangeIconicWindows(const struct tagWND *a1)
{
  struct tagWND *v2; // rcx
  unsigned __int16 v3; // r15
  struct tagBWL *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // r12d
  __int64 v9; // rdx
  int v10; // r13d
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 UserSessionState; // rax
  _DWORD *Prop; // rax
  _DWORD *v19; // rbx
  int v20; // edx
  int v21; // edi
  int v22; // r15d
  int v23; // r14d
  int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  __int64 *v40; // r13
  int v41; // esi
  __int64 v42; // rax
  __int64 *v43; // r15
  __int64 v44; // rcx
  __int64 *v45; // rbx
  __int64 v46; // rax
  __int64 *v47; // r12
  ULONG_PTR v48; // rdi
  int v49; // esi
  int v50; // r14d
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  bool v58; // cc
  bool v59; // cc
  bool v60; // cc
  __int64 v61; // rax
  __int64 v62; // rcx
  bool v63; // zf
  __int64 v64; // rax
  __int64 *v65; // r12
  __int64 *v66; // rbx
  __int64 v67; // rax
  int v68; // r13d
  int v69; // r12d
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  struct tagSMWP *v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r14
  __int64 v81; // rax
  int *v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rcx
  int v86; // ebx
  __int64 v87; // rdx
  __int64 v88; // rax
  unsigned __int64 v90; // [rsp+58h] [rbp-31h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-29h] BYREF
  int v92; // [rsp+70h] [rbp-19h]
  int v93; // [rsp+74h] [rbp-15h]
  int v94; // [rsp+78h] [rbp-11h]
  int v95; // [rsp+7Ch] [rbp-Dh]
  int v96; // [rsp+80h] [rbp-9h]
  int v97; // [rsp+84h] [rbp-5h]
  __int64 *v98; // [rsp+88h] [rbp-1h]
  __int64 v99; // [rsp+90h] [rbp+7h]
  struct tagBWL *v100; // [rsp+98h] [rbp+Fh]
  char v101; // [rsp+F0h] [rbp+67h]
  unsigned __int16 v102; // [rsp+F8h] [rbp+6Fh]
  int v103; // [rsp+100h] [rbp+77h]
  int v104; // [rsp+108h] [rbp+7Fh]

  v2 = (struct tagWND *)*((_QWORD *)a1 + 14);
  v102 = 0;
  v3 = 0;
  v95 = 0;
  v94 = 0;
  v104 = 0;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v92 = 0;
  v97 = 0;
  v93 = 0;
  v103 = 0;
  v100 = BuildHwndList(v2, 2LL, 0LL, 1);
  v4 = v100;
  if ( !v100 )
    return 0LL;
  v101 = IsTrayWindow(*((_QWORD **)a1 + 14), 1LL);
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
  v8 = *(_DWORD *)(v7 + 2084);
  v10 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v9) + 19904) + 2088LL);
  InternalGetRealClientRect(a1, (__int64)BugCheckParameter3, 1, 0LL, 1);
  v98 = (__int64 *)((char *)v4 + 32);
  v12 = (_QWORD *)((char *)v4 + 32);
  v13 = *((_QWORD *)v4 + 4);
  if ( v13 == 1 )
  {
LABEL_125:
    FreeHwndList(v4, v11);
    return 0LL;
  }
  while ( 1 )
  {
    v14 = HMValidateHandleNoSecure(v13, 1);
    v16 = v14;
    if ( !v14 )
      goto LABEL_10;
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_10;
    UserSessionState = W32GetUserSessionState(v15, v11);
    Prop = (_DWORD *)GetProp(v16, *(unsigned __int16 *)(UserSessionState + 41374), 1u);
    v19 = Prop;
    if ( !Prop )
      goto LABEL_10;
    v20 = Prop[4];
    if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 0x20) == 0 )
    {
      v11 = v20 & 0xFFFFFFEF;
      Prop[4] = v11;
      Prop[1] = -1;
      *Prop = -1;
LABEL_10:
      *v12 = 0LL;
      goto LABEL_11;
    }
    Prop[4] = v20 & 0xFFFFFFFE;
    v102 = v3 + 1;
    *Prop = *(_DWORD *)(*(_QWORD *)(v16 + 40) + 88LL);
    Prop[1] = *(_DWORD *)(*(_QWORD *)(v16 + 40) + 92LL);
    ScreenToClient((__int64)a1, Prop);
    v15 = *(_QWORD *)(W32GetUserSessionState(v26, v25) + 19904);
    if ( (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) >= 2 )
    {
      switch ( *(_DWORD *)(v15 + 2120) & 0xFFFFFFF7 )
      {
        case 2u:
        case 3u:
          v15 = 2LL;
          v11 = (unsigned int)((v19[1] + v10 / 2) >> 31);
          LODWORD(v11) = (v19[1] + v10 / 2) % v10;
          v19[1] = v19[1] + v10 / 2 - v11;
          break;
        case 4u:
          goto LABEL_25;
        case 5u:
LABEL_24:
          v21 = BugCheckParameter3[1];
          v15 = (unsigned int)(v8 / 2 - *v19 + LODWORD(BugCheckParameter3[1]));
          v11 = (unsigned int)((v8 / 2 - *v19 + LODWORD(BugCheckParameter3[1])) % v8 - (v8 / 2 - *v19));
          *v19 = v11;
          goto LABEL_12;
        default:
          v11 = (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) - 6;
          if ( (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) == 6 )
          {
LABEL_25:
            v15 = 2LL;
            v11 = (unsigned int)((*v19 + v8 / 2) >> 31);
            LODWORD(v11) = (*v19 + v8 / 2) % v8;
            *v19 = *v19 + v8 / 2 - v11;
          }
          else if ( (*(_DWORD *)(v15 + 2120) & 0xFFFFFFF7) == 7 )
          {
            goto LABEL_24;
          }
          break;
      }
LABEL_11:
      v21 = BugCheckParameter3[1];
LABEL_12:
      v22 = HIDWORD(BugCheckParameter3[1]);
      goto LABEL_13;
    }
    v22 = HIDWORD(BugCheckParameter3[1]);
    v21 = BugCheckParameter3[1];
    v15 = (unsigned int)(v10 / 2 - v19[1] + HIDWORD(BugCheckParameter3[1]));
    v11 = (unsigned int)((v10 / 2 - v19[1] + HIDWORD(BugCheckParameter3[1])) % v10 - (v10 / 2 - v19[1]));
    v19[1] = v11;
LABEL_13:
    v13 = *++v12;
    if ( *v12 == 1LL )
      break;
    v3 = v102;
  }
  if ( !v102 )
  {
    v4 = v100;
    goto LABEL_125;
  }
  if ( v101 )
  {
    v23 = -32000;
    v90 = 0xFFFF8300FFFF8300uLL;
    v24 = -32000;
    goto LABEL_95;
  }
  v28 = *(_QWORD *)(W32GetUserSessionState(v15, v11) + 19904);
  if ( (*(_DWORD *)(v28 + 2120) & 1) != 0 )
  {
    v95 = v21 - v8;
    v23 = v21 - v8;
    v104 = -v8;
  }
  else
  {
    v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19904);
    v104 = v8;
    v28 = (unsigned int)(*(_DWORD *)(v29 + 2084)
                       - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v31, v30) + 19904) + 2124LL));
    v95 = v28 + LODWORD(BugCheckParameter3[0]);
    v23 = v28 + LODWORD(BugCheckParameter3[0]);
  }
  LODWORD(v90) = v23;
  v96 = v23;
  v32 = W32GetUserSessionState(v28, v27);
  v34 = 2LL;
  if ( (*(_DWORD *)(*(_QWORD *)(v32 + 19904) + 2120LL) & 2) != 0 )
  {
    v35 = *(_QWORD *)(W32GetUserSessionState(2LL, v33) + 19904);
    v38 = W32GetUserSessionState(v37, v36);
    v92 = v10;
    v34 = (unsigned int)(*(_DWORD *)(v35 + 2088) - *(_DWORD *)(*(_QWORD *)(v38 + 19904) + 2128LL));
    v94 = v34 + HIDWORD(BugCheckParameter3[0]);
    v24 = v34 + HIDWORD(BugCheckParameter3[0]);
    HIDWORD(v90) = v34 + HIDWORD(BugCheckParameter3[0]);
  }
  else
  {
    v24 = v22 - v10;
    v94 = v24;
    HIDWORD(v90) = v24;
    v92 = -v10;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v34, v33) + 19904) + 2120LL) & 4) != 0 )
  {
    v11 = (unsigned int)(SHIDWORD(BugCheckParameter3[1]) >> 31);
    v103 = 0;
    LODWORD(v11) = SHIDWORD(BugCheckParameter3[1]) % v10;
    v39 = SHIDWORD(BugCheckParameter3[1]) / v10;
  }
  else
  {
    v103 = 1;
    v11 = (unsigned int)(v21 >> 31);
    LODWORD(v11) = v21 % v8;
    v39 = v21 / v8;
  }
  v40 = v98;
  v41 = v39;
  if ( v39 < 1 )
    v41 = 1;
  v42 = *v98;
  v93 = v41;
  v97 = v41;
  if ( v42 != 1 )
  {
    v43 = v98;
    while ( 1 )
    {
      if ( !v42 )
        goto LABEL_93;
      v99 = HMValidateHandleNoSecure(v42, 1);
      v45 = (__int64 *)v99;
      if ( !v99 )
        goto LABEL_93;
      v46 = W32GetUserSessionState(v44, v11);
      v47 = v43;
      v48 = *(_QWORD *)GetProp((__int64)v45, *(unsigned __int16 *)(v46 + 41374), 1u);
      BugCheckParameter3[0] = v48;
      if ( v43 >= v40 )
        goto LABEL_91;
      v49 = HIDWORD(BugCheckParameter3[0]);
      v50 = 0;
      do
      {
        if ( !*v47 )
          goto LABEL_85;
        v52 = HMValidateHandleNoSecure(*v47, 1);
        if ( !v52 )
          goto LABEL_85;
        v53 = W32GetUserSessionState(v51, v11);
        v54 = *(_QWORD *)GetProp(v52, *(unsigned __int16 *)(v53 + 41374), 1u);
        v57 = *(_QWORD *)(W32GetUserSessionState(v56, v55) + 19904);
        v11 = *(_DWORD *)(v57 + 2120) & 0xFFFFFFF7;
        if ( (*(_DWORD *)(v57 + 2120) & 0xFFFFFFF7) == 0 )
        {
          v58 = SHIDWORD(v54) < v49;
          if ( HIDWORD(v54) == v49 )
          {
            if ( (int)v54 > (int)v48 )
              break;
            v58 = SHIDWORD(v54) < v49;
          }
LABEL_83:
          if ( v58 )
            break;
          goto LABEL_84;
        }
        v11 = (unsigned int)(v11 - 1);
        if ( (_DWORD)v11 )
        {
          v11 = (unsigned int)(v11 - 1);
          if ( !(_DWORD)v11 )
          {
            v59 = SHIDWORD(v54) <= v49;
            if ( HIDWORD(v54) != v49 )
              goto LABEL_67;
            if ( (int)v54 > (int)v48 )
              goto LABEL_68;
            goto LABEL_74;
          }
          v11 = (unsigned int)(v11 - 1);
          if ( !(_DWORD)v11 )
          {
            v59 = SHIDWORD(v54) <= v49;
            if ( HIDWORD(v54) != v49 )
              goto LABEL_67;
            if ( (int)v54 < (int)v48 )
              goto LABEL_68;
LABEL_74:
            v59 = SHIDWORD(v54) <= v49;
            goto LABEL_67;
          }
          v11 = (unsigned int)(v11 - 1);
          if ( !(_DWORD)v11 )
          {
            v59 = (int)v54 <= (int)v48;
            if ( (_DWORD)v54 == (_DWORD)v48 )
            {
              if ( SHIDWORD(v54) >= v49 )
                goto LABEL_66;
              goto LABEL_68;
            }
            goto LABEL_67;
          }
          v11 = (unsigned int)(v11 - 1);
          if ( (_DWORD)v11 )
          {
            v11 = (unsigned int)(v11 - 1);
            if ( !(_DWORD)v11 )
            {
              v59 = (int)v54 <= (int)v48;
              if ( (_DWORD)v54 == (_DWORD)v48 )
              {
                if ( SHIDWORD(v54) <= v49 )
                {
LABEL_66:
                  v59 = (int)v54 <= (int)v48;
                  goto LABEL_67;
                }
LABEL_68:
                v50 = 1;
                goto LABEL_84;
              }
LABEL_67:
              if ( v59 )
                goto LABEL_84;
              goto LABEL_68;
            }
            if ( (_DWORD)v11 != 1 )
              goto LABEL_84;
            v58 = (int)v54 < (int)v48;
            if ( (_DWORD)v54 == (_DWORD)v48 )
            {
              if ( SHIDWORD(v54) > v49 )
                break;
              v58 = (int)v54 < (int)v48;
            }
            goto LABEL_83;
          }
          v60 = (int)v54 < (int)v48;
          if ( (_DWORD)v54 == (_DWORD)v48 )
          {
            if ( SHIDWORD(v54) < v49 )
              goto LABEL_68;
            v60 = (int)v54 < (int)v48;
          }
        }
        else
        {
          v60 = SHIDWORD(v54) < v49;
          if ( HIDWORD(v54) == v49 )
          {
            if ( (int)v54 < (int)v48 )
              goto LABEL_68;
            v60 = SHIDWORD(v54) < v49;
          }
        }
        if ( v60 )
          goto LABEL_68;
LABEL_84:
        if ( v50 )
          break;
LABEL_85:
        ++v47;
      }
      while ( v47 < v40 );
      v43 = v98;
      v45 = (__int64 *)v99;
      if ( v47 >= v40 )
        goto LABEL_91;
      do
      {
        v61 = _HMObjectFromHandle(*v47);
        v62 = 0LL;
        if ( v45 )
          v62 = *v45;
        *v47 = v62;
        v45 = (__int64 *)v61;
        ++v47;
      }
      while ( v47 < v40 );
      v63 = v61 == 0;
      v64 = 0LL;
      if ( !v63 )
LABEL_91:
        v64 = *v45;
      *v40 = v64;
LABEL_93:
      v42 = *++v40;
      if ( *v40 == 1 )
      {
        v23 = v96;
        v24 = HIDWORD(v90);
LABEL_95:
        v41 = v93;
        break;
      }
    }
  }
  v65 = v98;
  v66 = v98;
  v67 = *v98;
  if ( *v98 == 1 )
    goto LABEL_116;
  v68 = v94;
  v69 = v95;
  while ( 2 )
  {
    if ( v67 )
    {
      v71 = HMValidateHandleNoSecure(v67, 1);
      if ( v71 )
      {
        v72 = W32GetUserSessionState(v70, v11);
        v73 = GetProp(v71, *(unsigned __int16 *)(v72 + 41374), 1u);
        if ( v73 )
        {
          *(_DWORD *)(v73 + 16) |= 0x10u;
          *(_QWORD *)v73 = v90;
        }
        if ( !v101 )
        {
          if ( --v41 > 0 )
          {
            if ( v103 )
            {
              v23 += v104;
              goto LABEL_112;
            }
            v24 += v92;
            HIDWORD(v90) = v24;
          }
          else
          {
            v41 = v97;
            if ( v103 )
            {
              v24 += v92;
              HIDWORD(v90) = v24;
            }
            else
            {
              v24 = v68;
              HIDWORD(v90) = v68;
            }
            v74 = v23 + v104;
            v23 = v69;
            if ( !v103 )
              v23 = v74;
LABEL_112:
            LODWORD(v90) = v23;
          }
        }
      }
    }
    v67 = *++v66;
    if ( *v66 != 1 )
      continue;
    break;
  }
  v65 = v98;
LABEL_116:
  v76 = (struct tagSMWP *)InternalBeginDeferWindowPos(2 * (unsigned int)v102, v11);
  if ( v76 )
  {
    v77 = *v65;
    if ( *v65 == 1 )
    {
LABEL_122:
      xxxEndDeferWindowPosEx(v76, 1);
    }
    else
    {
      while ( 1 )
      {
        if ( v77 )
        {
          v80 = HMValidateHandleNoSecure(v77, 1);
          if ( v80 )
          {
            v81 = W32GetUserSessionState(v79, v78);
            v82 = (int *)GetProp(v80, *(unsigned __int16 *)(v81 + 41374), 1u);
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v80);
            v85 = *(_QWORD *)(W32GetUserSessionState(v84, v83) + 19904);
            v86 = *(_DWORD *)(v85 + 2128);
            v88 = W32GetUserSessionState(v85, v87);
            v76 = (struct tagSMWP *)_DeferWindowPos(
                                      (__int64)v76,
                                      v80,
                                      0LL,
                                      *v82,
                                      v82[1],
                                      *(_DWORD *)(*(_QWORD *)(v88 + 19904) + 2124LL),
                                      v86,
                                      276,
                                      0);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
            if ( !v76 )
              break;
          }
        }
        v77 = *++v65;
        if ( *v65 == 1 )
          goto LABEL_122;
      }
    }
  }
  FreeHwndList(v100, v75);
  return v102;
}
