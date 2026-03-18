/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C005AF90
 * Callers:
 *     <none>
 * Callees:
 *     RegisterDefaultClass @ 0x1C0059D10 (RegisterDefaultClass.c)
 *     _RegisterClassEx @ 0x1C0059EFC (_RegisterClassEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     RegisterIconTitleClass @ 0x1C00F1DF4 (RegisterIconTitleClass.c)
 *     memmove @ 0x1C015D180 (memmove.c)
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
  __int64 v12; // rcx
  unsigned __int16 v13; // bx
  unsigned int v14; // ecx
  _WORD *v15; // rax
  int v16; // ebx
  unsigned __int64 v17; // r15
  int v18; // r12d
  unsigned __int64 v19; // r8
  int *v20; // rdx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  void *v24; // r14
  char *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  __int16 Atom; // r8
  unsigned int v30; // ecx
  _WORD *v31; // rdx
  unsigned int v32; // edx
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
  EnterCrit(1LL);
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL);
LABEL_3:
    v13 = 0;
    goto LABEL_86;
  }
  v11 = a5;
  if ( !a5 )
  {
LABEL_12:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_3;
    }
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (int *)W32UserProbeAddress;
    v16 = *a2;
    v38 = *a2;
    v17 = *((_QWORD *)a2 + 1);
    v41 = (void *)v17;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (int *)W32UserProbeAddress;
    v18 = *a3;
    v37 = *a3;
    v19 = *((_QWORD *)a3 + 1);
    Src = (void *)v19;
    v39 = v19;
    if ( a4 + 24 < a4 || a4 + 24 > W32UserProbeAddress )
      a4 = W32UserProbeAddress;
    v42 = *(int **)(a4 + 16);
    v43 = *(_OWORD *)a4;
    v44 = v42;
    v20 = v42;
    if ( (unsigned __int64)v42 >= W32UserProbeAddress )
      v20 = (int *)W32UserProbeAddress;
    v35 = *v20;
    v45 = *v20;
    v21 = *((_QWORD *)v20 + 1);
    v46 = v21;
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
    if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = (unsigned __int16)v16 + v17 + 2;
      if ( v22 >= W32UserProbeAddress || (unsigned __int16)v16 > HIWORD(v38) || (v16 & 1) != 0 || v22 <= v17 )
        *W32UserProbeAddress = 0;
    }
    if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v16 + 2) < (unsigned __int16)v16 )
        ExRaiseStatus(-1073741675);
      v23 = Win32AllocPoolWithQuota((unsigned __int16)(v16 + 2), 2020897621LL);
      v24 = (void *)v23;
      v41 = (void *)v23;
      if ( !v23 )
        ExRaiseStatus(-1073741801);
      v36 = 1;
      PushW32ThreadLock(v23, v54, Win32FreePool);
      memmove(v24, (const void *)v17, (unsigned __int16)v16);
      *((_WORD *)v24 + ((unsigned __int64)(unsigned __int16)v16 >> 1)) = 0;
      v19 = (unsigned __int64)Src;
    }
    else
    {
      v24 = (void *)v17;
    }
    if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v25 = (char *)(v19 + (unsigned __int16)v18 + 2LL);
      if ( (unsigned __int64)v25 >= W32UserProbeAddress
        || (unsigned __int16)v18 > HIWORD(v37)
        || (v18 & 1) != 0
        || (unsigned __int64)v25 <= v19 )
      {
        *W32UserProbeAddress = 0;
      }
    }
    if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v18 + 2) < (unsigned __int16)v18 )
        ExRaiseStatus(-1073741675);
      v26 = Win32AllocPoolWithQuota((unsigned __int16)(v18 + 2), 2020897621LL);
      v27 = v26;
      v39 = v26;
      if ( !v26 )
        ExRaiseStatus(-1073741801);
      v34 = 1;
      PushW32ThreadLock(v26, v53, Win32FreePool);
      memmove((void *)v27, Src, (unsigned __int16)v18);
      *(_WORD *)(v27 + 2 * ((unsigned __int64)(unsigned __int16)v18 >> 1)) = 0;
    }
    else
    {
      v27 = v39;
    }
    if ( (v21 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v21 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v28 = v21 + (unsigned __int16)v35 + 2LL;
      if ( v28 >= W32UserProbeAddress || (unsigned __int16)v35 > HIWORD(v35) || (v35 & 1) != 0 || v28 <= v21 )
        *W32UserProbeAddress = 0;
    }
    if ( a7 )
    {
      v24 = v41;
      v27 = v39;
    }
    *(_QWORD *)&v51 = v24;
    v52 = v27;
    *((_QWORD *)&v50 + 1) = v21;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) & 0x2000) != 0
      || (unsigned int)RegisterDefaultClass((wchar_t *)v24) )
    {
      if ( (v27 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        Atom = UserFindAtom(v27);
      else
        Atom = v39;
      if ( Atom )
      {
        v30 = 0;
        v31 = &unk_1C02E21E6;
        while ( Atom != *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v31 - 3) >> 3) & 0x1F) + 852) || !*v31 )
        {
          ++v30;
          v31 += 24;
          if ( v30 >= 8 )
            goto LABEL_80;
        }
        v32 = (unsigned __int16)*v31 | a6;
        if ( (v32 & 0x200) != 0 && SDWORD1(v48) < dword_1C02E21F8[12 * v30] )
        {
          UserSetLastError(5LL);
          v13 = 0;
          UserSetLastError(0LL);
          goto LABEL_82;
        }
      }
      else
      {
LABEL_80:
        v32 = a6;
      }
      v13 = RegisterClassEx((__int64)&v47, &v43, a5, v32);
      goto LABEL_82;
    }
LABEL_11:
    v13 = 0;
LABEL_82:
    if ( v34 )
      PopAndFreeAlwaysW32ThreadLock(v53);
    if ( v36 )
      PopAndFreeAlwaysW32ThreadLock(v54);
    goto LABEL_86;
  }
  v12 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_11;
  v14 = 0;
  v15 = &unk_1C02E21E4;
  while ( *v15 != a5 )
  {
    ++v14;
    v15 += 24;
    if ( v14 >= 8 )
      goto LABEL_12;
  }
  v13 = 0;
  UserSetLastError(87LL);
LABEL_86:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v13;
}
