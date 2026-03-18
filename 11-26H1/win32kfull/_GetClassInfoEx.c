/*
 * XREFs of _GetClassInfoEx @ 0x14014F1DC
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1402B2550 (NtUserGetClassInfoEx.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x14014F7F0 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x14014FAC4 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x14014FEF0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     GetCPD @ 0x140150018 (GetCPD.c)
 *     _InnerGetClassPtr @ 0x140150670 (_InnerGetClassPtr.c)
 *     MapClientNeuterToClientPfn @ 0x1401506CC (MapClientNeuterToClientPfn.c)
 *     MapServerToClientPfn @ 0x140150F40 (MapServerToClientPfn.c)
 */

__int64 __fastcall GetClassInfoEx(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  unsigned __int16 v7; // bx
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r13
  __int64 v12; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int16 *v18; // r9
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rdx
  _WORD *v22; // rax
  int v23; // r10d
  __int16 v24; // r11
  unsigned __int16 Atom; // ax
  unsigned __int16 v26; // di
  __int64 v27; // r12
  unsigned __int64 *ClassPtr; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 CPD; // rax
  bool v43; // cf
  _QWORD v44[2]; // [rsp+28h] [rbp-D0h] BYREF
  int v45; // [rsp+38h] [rbp-C0h]
  int v46; // [rsp+3Ch] [rbp-BCh]
  __int64 v47; // [rsp+40h] [rbp-B8h]
  unsigned int v48; // [rsp+4Ch] [rbp-ACh]
  _WORD *v49; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v50; // [rsp+58h] [rbp-A0h]
  __int16 *v51; // [rsp+60h] [rbp-98h]
  __int64 v52; // [rsp+68h] [rbp-90h]
  __int64 v53; // [rsp+70h] [rbp-88h]
  __int64 v54; // [rsp+78h] [rbp-80h]
  _QWORD *v55; // [rsp+80h] [rbp-78h]
  _QWORD *v56; // [rsp+88h] [rbp-70h]
  __int64 v57; // [rsp+90h] [rbp-68h]
  __int64 v58; // [rsp+98h] [rbp-60h]
  char v59[8]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-50h]

  v45 = a5;
  v48 = a5;
  v57 = a3;
  v58 = a3;
  v56 = a4;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v44);
  v7 = 0;
  v8 = 0;
  v11 = (_QWORD *)(W32GetUserSessionState(v10, v9) + 20488);
  v55 = v11;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v12);
  if ( CurrentThreadWin32Thread )
    v14 = *CurrentThreadWin32Thread;
  else
    v14 = 0LL;
  v47 = v14;
  v54 = v14;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v59);
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    Atom = a2;
    goto LABEL_11;
  }
  UserSessionState = W32GetUserSessionState(v16, v15);
  v18 = (__int16 *)a2;
  v19 = UserSessionState + 41756;
  v46 = 0;
  v20 = 2147483646LL;
  v53 = 2147483646LL;
  v51 = (__int16 *)a2;
  v21 = 256LL;
  v52 = 256LL;
  v22 = (_WORD *)(UserSessionState + 41756);
  v49 = v22;
  v23 = 0;
  v16 = 0LL;
  v50 = 0LL;
  while ( v21 )
  {
    if ( !v20 )
      goto LABEL_9;
    v24 = *v18;
    if ( !*v18 )
      goto LABEL_9;
    v51 = ++v18;
    *v22++ = v24;
    v49 = v22;
    v52 = --v21;
    v53 = --v20;
    v50 = ++v16;
  }
  v49 = --v22;
  v50 = --v16;
  v23 = -2147483643;
LABEL_9:
  *v22 = 0;
  v46 = v23;
  if ( v23 >= 0 )
  {
    Atom = UserFindAtom(v19, v21);
LABEL_11:
    v26 = Atom;
    goto LABEL_15;
  }
  v26 = 0;
LABEL_15:
  if ( v59[0] )
    --*(_DWORD *)(v60 + 28);
  if ( !a1 )
    a1 = *v11;
  v27 = *(_QWORD *)(v14 + 456);
  ClassPtr = (unsigned __int64 *)(v27 + 352);
  if ( v26 )
  {
    while ( *ClassPtr )
    {
      v29 = *(_QWORD *)(*ClassPtr + 8);
      if ( *(_WORD *)v29 == v26 )
      {
        if ( !a1 || (v16 = (unsigned __int64)*(unsigned int *)(v29 + 64) >> 16, (_WORD)v16 == WORD1(a1)) )
        {
          if ( (*(_BYTE *)(v29 + 6) & 4) == 0 )
            goto LABEL_24;
        }
      }
      ClassPtr = (unsigned __int64 *)*ClassPtr;
    }
    ClassPtr = 0LL;
LABEL_24:
    if ( ClassPtr )
      goto LABEL_42;
  }
  ClassPtr = (unsigned __int64 *)(v27 + 360);
  if ( v26 )
  {
    while ( 1 )
    {
      v16 = *ClassPtr;
      if ( !*ClassPtr )
        break;
      v30 = *(_QWORD *)(v16 + 8);
      if ( *(_WORD *)v30 == v26 && (*(_BYTE *)(v30 + 6) & 4) == 0 )
        goto LABEL_34;
      ClassPtr = (unsigned __int64 *)*ClassPtr;
    }
    ClassPtr = 0LL;
LABEL_34:
    if ( ClassPtr )
      goto LABEL_42;
  }
  v31 = W32GetUserSessionState(v16, ClassPtr);
  ClassPtr = (unsigned __int64 *)InnerGetClassPtr(v26, v27 + 352, *(_QWORD *)(v31 + 20488));
  if ( !ClassPtr )
  {
    v33 = W32GetUserSessionState(v32, 0LL);
    ClassPtr = (unsigned __int64 *)InnerGetClassPtr(v26, v27 + 360, *(_QWORD *)(v33 + 20488));
  }
  if ( ClassPtr )
  {
LABEL_42:
    SmartObjStackRefBase<tagCLS>::operator=(v44, *ClassPtr);
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 8LL) & 0x37BFF;
    v35 = v47;
    if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 4LL) && *(_WORD *)(v47 + 664) >= 0x400u )
      *(_DWORD *)(a3 + 4) &= ~0x4000u;
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 12LL);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 84LL);
    if ( *(_WORD *)(v35 + 664) < 0x400u )
    {
      if ( *(void **)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 64LL) == hModuleWin
        || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 64LL) == *v11 )
      {
        a1 = *v11;
      }
      else
      {
        a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 64LL);
      }
    }
    else if ( a1 == *v11 )
    {
      a1 = 0LL;
    }
    *(_QWORD *)(v57 + 24) = a1;
    if ( *(_QWORD *)(*(_QWORD *)v44[0] + 80LL) )
      v36 = **(_QWORD **)(*(_QWORD *)v44[0] + 80LL);
    else
      v36 = 0LL;
    *(_QWORD *)(a3 + 32) = v36;
    if ( *(_QWORD *)(*(_QWORD *)v44[0] + 88LL) )
      v37 = **(_QWORD **)(*(_QWORD *)v44[0] + 88LL);
    else
      v37 = 0LL;
    *(_QWORD *)(a3 + 40) = v37;
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 72LL);
    if ( *(_QWORD *)(*(_QWORD *)v44[0] + 112LL)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 112LL) + 80LL) & 0x80u) != 0
      || !*(_QWORD *)(*(_QWORD *)v44[0] + 112LL) )
    {
      v38 = 0LL;
    }
    else
    {
      v38 = **(_QWORD **)(*(_QWORD *)v44[0] + 112LL);
    }
    v39 = v58;
    *(_QWORD *)(v58 + 72) = v38;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) & 1) != 0 )
    {
      *(_QWORD *)(v39 + 8) = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 32LL), a5);
    }
    else
    {
      *(_QWORD *)(v39 + 8) = MapClientNeuterToClientPfn(*(_QWORD *)v44[0], 0LL, a5);
      if ( *(_QWORD *)(v39 + 8) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 32LL)
        && a5 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 6LL) >> 1) & 1) )
      {
        v43 = v45 != 0;
        v45 = -v45;
        v8 = 2 - v43;
      }
    }
    if ( v8 )
    {
      CPD = GetCPD(*(_QWORD *)v44[0], v8 | 0x10u, *(_QWORD *)(v39 + 8));
      if ( CPD )
        *(_QWORD *)(v39 + 8) = CPD;
    }
    v40 = *(_QWORD *)(*(_QWORD *)v44[0] + 8LL);
    if ( a5 )
      v41 = *(_QWORD *)(v40 + 16);
    else
      v41 = *(_QWORD *)(v40 + 24);
    *a4 = v41;
    v7 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v44[0] + 8LL) + 2LL);
  }
  else
  {
    UserSetLastError(1411);
  }
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v44);
  return v7;
}
