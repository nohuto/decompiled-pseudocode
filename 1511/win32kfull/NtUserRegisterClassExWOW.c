/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C004FC10
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     RegisterIconTitleClass @ 0x1C0119CBC (RegisterIconTitleClass.c)
 *     _RegisterClassEx @ 0x1C011C700 (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x1C011E2D8 (RegisterDefaultClass.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserRegisterClassExWOW(
        __int128 *a1,
        int *a2,
        int *a3,
        unsigned __int64 a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v11; // rdx
  int v12; // ebx
  unsigned __int64 v13; // r15
  int v14; // r13d
  unsigned __int64 v15; // r8
  int *v16; // rdx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  void *v20; // r14
  char *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int16 Atom; // r8
  unsigned int v27; // ecx
  _WORD *v28; // rdx
  unsigned int v29; // edx
  unsigned __int16 v30; // bx
  unsigned int v32; // ecx
  _WORD *v33; // rax
  int v34; // [rsp+30h] [rbp-1A8h]
  int v35; // [rsp+34h] [rbp-1A4h]
  int v36; // [rsp+38h] [rbp-1A0h]
  int v37; // [rsp+3Ch] [rbp-19Ch]
  int v38; // [rsp+48h] [rbp-190h]
  __int64 v39; // [rsp+58h] [rbp-180h]
  void *Src; // [rsp+60h] [rbp-178h]
  void *v41; // [rsp+70h] [rbp-168h]
  int *v42; // [rsp+A0h] [rbp-138h]
  __int128 v43; // [rsp+B0h] [rbp-128h] BYREF
  int *v44; // [rsp+C0h] [rbp-118h]
  int v45; // [rsp+C8h] [rbp-110h]
  unsigned __int64 v46; // [rsp+D0h] [rbp-108h]
  __int128 v47; // [rsp+E0h] [rbp-F8h] BYREF
  __int128 v48; // [rsp+F0h] [rbp-E8h]
  __int128 v49; // [rsp+100h] [rbp-D8h]
  __int128 v50; // [rsp+110h] [rbp-C8h]
  __int128 v51; // [rsp+120h] [rbp-B8h]
  __int64 v52; // [rsp+130h] [rbp-A8h]
  _BYTE v53[24]; // [rsp+140h] [rbp-98h] BYREF
  _BYTE v54[24]; // [rsp+158h] [rbp-80h] BYREF
  __int128 v55; // [rsp+170h] [rbp-68h]
  __int128 v56; // [rsp+180h] [rbp-58h]
  __int128 v57; // [rsp+190h] [rbp-48h]
  __int128 v58; // [rsp+1A0h] [rbp-38h]
  __int128 v59; // [rsp+1B0h] [rbp-28h]

  v36 = 0;
  v34 = 0;
  EnterCrit(0LL, 1LL);
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL);
LABEL_78:
    v30 = 0;
    goto LABEL_69;
  }
  v11 = a5;
  if ( !a5 )
  {
LABEL_3:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_78;
    }
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (int *)W32UserProbeAddress;
    v12 = *a2;
    v38 = *a2;
    v13 = *((_QWORD *)a2 + 1);
    v41 = (void *)v13;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (int *)W32UserProbeAddress;
    v14 = *a3;
    v37 = *a3;
    v15 = *((_QWORD *)a3 + 1);
    Src = (void *)v15;
    v39 = v15;
    if ( a4 + 24 < a4 || a4 + 24 > W32UserProbeAddress )
      a4 = W32UserProbeAddress;
    v42 = *(int **)(a4 + 16);
    v43 = *(_OWORD *)a4;
    v44 = v42;
    v16 = v42;
    if ( (unsigned __int64)v42 >= W32UserProbeAddress )
      v16 = (int *)W32UserProbeAddress;
    v35 = *v16;
    v45 = *v16;
    v17 = *((_QWORD *)v16 + 1);
    v46 = v17;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > W32UserProbeAddress )
      a1 = (__int128 *)W32UserProbeAddress;
    v55 = *a1;
    v56 = a1[1];
    v57 = a1[2];
    v58 = a1[3];
    v59 = a1[4];
    v47 = v55;
    v48 = v56;
    v49 = v57;
    v50 = v58;
    v51 = v59;
    if ( (v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v13 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (unsigned __int16)v12 + v13 + 2;
      if ( v18 >= W32UserProbeAddress || (unsigned __int16)v12 > HIWORD(v38) || v18 <= v13 )
        *W32UserProbeAddress = 0;
    }
    if ( (v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v12 + 2) < (unsigned __int16)v12 )
        ExRaiseStatus(-1073741675);
      v19 = Win32AllocPoolWithQuota((unsigned __int16)(v12 + 2), 2020897621LL);
      v20 = (void *)v19;
      v41 = (void *)v19;
      if ( !v19 )
        ExRaiseStatus(-1073741801);
      v36 = 1;
      PushW32ThreadLock(v19, v54, Win32FreePool);
      memmove(v20, (const void *)v13, (unsigned __int16)v12);
      *((_WORD *)v20 + ((unsigned __int64)(unsigned __int16)v12 >> 1)) = 0;
      v15 = (unsigned __int64)Src;
    }
    else
    {
      v20 = (void *)v13;
    }
    if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v15 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (char *)(v15 + (unsigned __int16)v14 + 2LL);
      if ( (unsigned __int64)v21 >= W32UserProbeAddress
        || (unsigned __int16)v14 > HIWORD(v37)
        || (unsigned __int64)v21 <= v15 )
      {
        *W32UserProbeAddress = 0;
      }
    }
    if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v14 + 2) < (unsigned __int16)v14 )
        ExRaiseStatus(-1073741675);
      v22 = Win32AllocPoolWithQuota((unsigned __int16)(v14 + 2), 2020897621LL);
      v23 = v22;
      v39 = v22;
      if ( !v22 )
        ExRaiseStatus(-1073741801);
      v34 = 1;
      PushW32ThreadLock(v22, v53, Win32FreePool);
      memmove((void *)v23, Src, (unsigned __int16)v14);
      *(_WORD *)(v23 + 2 * ((unsigned __int64)(unsigned __int16)v14 >> 1)) = 0;
    }
    else
    {
      v23 = v39;
    }
    if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = v17 + (unsigned __int16)v35 + 2LL;
      if ( v24 >= W32UserProbeAddress || (unsigned __int16)v35 > HIWORD(v35) || v24 <= v17 )
        *W32UserProbeAddress = 0;
    }
    if ( a7 )
    {
      v20 = v41;
      v23 = v39;
    }
    *(_QWORD *)&v51 = v20;
    v52 = v23;
    *((_QWORD *)&v50 + 1) = v17;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x2000) != 0
      || (unsigned int)RegisterDefaultClass((wchar_t *)v20) )
    {
      if ( (v23 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        Atom = UserFindAtom(v23);
      else
        Atom = v39;
      if ( Atom )
      {
        v27 = 0;
        v28 = &unk_1C02E2716;
        while ( Atom != *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v28 - 3) >> 3) & 0x1F) + 852) || !*v28 )
        {
          ++v27;
          v28 += 24;
          if ( v27 >= 8 )
            goto LABEL_63;
        }
        v29 = (unsigned __int16)*v28 | a6;
        if ( (v29 & 0x200) != 0 && SDWORD1(v48) < dword_1C02E2728[12 * v27] )
        {
          UserSetLastError(5LL);
          v30 = 0;
          UserSetLastError(0LL);
          goto LABEL_65;
        }
      }
      else
      {
LABEL_63:
        v29 = a6;
      }
      v30 = RegisterClassEx(&v47, &v43, a5, v29);
LABEL_65:
      if ( v34 )
        PopAndFreeAlwaysW32ThreadLock(v53);
      if ( v36 )
        PopAndFreeAlwaysW32ThreadLock(v54);
      goto LABEL_69;
    }
LABEL_79:
    v30 = 0;
    goto LABEL_65;
  }
  v25 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_79;
  v32 = 0;
  v33 = &unk_1C02E2714;
  while ( *v33 != a5 )
  {
    ++v32;
    v33 += 24;
    if ( v32 >= 8 )
      goto LABEL_3;
  }
  v30 = 0;
  UserSetLastError(87LL);
LABEL_69:
  UserSessionSwitchLeaveCrit(v25, v11);
  return v30;
}
