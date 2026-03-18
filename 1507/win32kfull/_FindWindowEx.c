/*
 * XREFs of _FindWindowEx @ 0x1C0076C20
 * Callers:
 *     NtUserFindWindowEx @ 0x1C0076940 (NtUserFindWindowEx.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FindWindowEx(__int64 a1, __int64 a2, unsigned __int16 *a3, const wchar_t *a4)
{
  unsigned __int16 *v4; // rdi
  int v7; // r14d
  _DWORD *v8; // r10
  int v9; // r14d
  unsigned int v10; // ecx
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int16 *v14; // rdx
  int v15; // r11d
  __int64 v16; // r9
  __int16 Atom; // r9
  unsigned int v18; // ecx
  __int64 v19; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdi
  struct tagBWL *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // rdi
  _QWORD *i; // rsi
  unsigned __int64 v29; // r14
  __int64 *v30; // rsi
  unsigned __int64 v31; // r14
  const wchar_t *v32; // rdx
  int v33; // edx
  struct tagBWL **v34; // rcx
  struct tagBWL *v35; // rax
  struct tagBWL *v36; // rcx
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rbx
  __int64 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int16 v45; // [rsp+20h] [rbp-98h]
  _QWORD *v46; // [rsp+28h] [rbp-90h]
  int v47; // [rsp+D4h] [rbp+1Ch]
  int v49; // [rsp+E0h] [rbp+28h]

  v4 = a3;
  v45 = 0;
  v7 = 0;
  v49 = 0;
  if ( !a3 )
    goto LABEL_24;
  v8 = (_DWORD *)gdwInAtomicOperation;
  ++gdwInAtomicOperation;
  if ( !gpAtomickCheckStacks )
    goto LABEL_6;
  v9 = ++gdwAtomicCheckSerial;
  v47 = gdwAtomicCheckSerial;
  v10 = 0;
  if ( gdwAtomicCheckLogSize )
  {
    while ( *(_DWORD *)(((unsigned __int64)v10 << 6) + gpAtomickCheckStacks) )
    {
      if ( ++v10 >= gdwAtomicCheckLogSize )
        goto LABEL_7;
    }
    v11 = (unsigned __int64)v10 << 6;
    *(_DWORD *)(v11 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
    *(_DWORD *)(gpAtomickCheckStacks + v11 + 4) = (unsigned int)PsGetCurrentThreadId();
    *(_DWORD *)(gpAtomickCheckStacks + v11 + 8) = (MEMORY[0xFFFFF78000000320]
                                                 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    RtlWalkFrameChain((PVOID *)(v11 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    v8 = (_DWORD *)gdwInAtomicOperation;
LABEL_6:
    v9 = v47;
  }
LABEL_7:
  if ( ((unsigned __int64)v4 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v12 = 2147483646LL;
    v13 = 256LL;
    v14 = gawchAtomScratch;
    v15 = 0;
    v16 = 0LL;
    while ( v13 )
    {
      if ( !v12 || !*v4 )
        goto LABEL_13;
      *v14++ = *v4++;
      --v13;
      --v12;
      ++v16;
    }
    --v14;
    v15 = -2147483643;
LABEL_13:
    *v14 = 0;
    if ( v15 < 0 )
    {
      Atom = 0;
      v45 = 0;
    }
    else
    {
      Atom = UserFindAtom(gawchAtomScratch);
      v45 = Atom;
      v8 = (_DWORD *)gdwInAtomicOperation;
    }
  }
  else
  {
    Atom = (__int16)v4;
    v45 = (__int16)v4;
  }
  --*v8;
  if ( gpAtomickCheckStacks )
  {
    v18 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v18 << 6) + gpAtomickCheckStacks) != v9 )
      {
        if ( ++v18 >= gdwAtomicCheckLogSize )
          goto LABEL_22;
      }
      *(_DWORD *)(((unsigned __int64)v18 << 6) + gpAtomickCheckStacks) = 0;
    }
  }
LABEL_22:
  if ( !Atom )
    return 0LL;
  v7 = 0;
LABEL_24:
  if ( !a1 )
  {
    a1 = 0LL;
    v19 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v19 = *ThreadWin32Thread;
    if ( v19 )
    {
      v21 = *(_QWORD *)(v19 + 424);
      if ( v21 )
        a1 = *(_QWORD *)(v21 + 16);
    }
    if ( !a2 )
      v7 = 1;
    v49 = v7;
  }
  while ( 1 )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(a2 + 88) != a1 )
        return 0LL;
      v22 = *(_QWORD **)(a2 + 72);
    }
    else
    {
      v22 = *(_QWORD **)(a1 + 96);
    }
    v23 = pbwlCache;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v44 = Win32AllocPool(296LL, 1819767637LL);
      v23 = (struct tagBWL *)v44;
      if ( !v44 )
        return 0LL;
      *(_QWORD *)(v44 + 16) = v44 + 280;
    }
    *((_QWORD *)v23 + 1) = (char *)v23 + 32;
    for ( *((_QWORD *)v23 + 3) = 0LL; v22; v22 = (_QWORD *)v22[9] )
    {
      v24 = *((_QWORD *)v23 + 3);
      if ( !v24 || v24 == v22[2] )
      {
        **((_QWORD **)v23 + 1) = *v22;
        *((_QWORD *)v23 + 1) += 8LL;
        v25 = *((_QWORD *)v23 + 1);
        if ( v25 == *((_QWORD *)v23 + 2) )
        {
          v38 = v25 - (_QWORD)v23;
          v39 = UserReAllocPool(v23, (unsigned int)v38 + 8LL, (unsigned int)v38 + 72LL, 1819767637LL);
          if ( !v39 )
            break;
          v40 = v39 + v38;
          *(_QWORD *)(v39 + 8) = v40;
          *(_QWORD *)(v39 + 16) = v40 + 64;
          v23 = (struct tagBWL *)v39;
        }
      }
    }
    v26 = (_QWORD *)*((_QWORD *)v23 + 1);
    if ( (unsigned __int64)v26 >= *((_QWORD *)v23 + 2) )
    {
      Win32FreePool(v23);
      return 0LL;
    }
    *v26 = 1LL;
    *((_QWORD *)v23 + 3) = gptiCurrent;
    *(_QWORD *)v23 = gpbwlList;
    gpbwlList = v23;
    v27 = 0LL;
    for ( i = (_QWORD *)((char *)v23 + 32); ; i = v46 + 1 )
    {
      v46 = i;
      v29 = *i;
      if ( *i == 1LL )
        break;
      v27 = 0LL;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v29 < *(_QWORD *)(gpsi + 8LL) )
      {
        v30 = (__int64 *)(gSharedInfo[1] + (unsigned int)(unsigned __int16)v29 * LODWORD(gSharedInfo[2]));
        v31 = v29 >> 16;
        if ( ((_WORD)v31 == *((_WORD *)v30 + 9)
           || (_WORD)v31 == 0xFFFF
           || !(_WORD)v31 && PsGetCurrentProcessWow64Process(gSharedInfo[0]))
          && (*((_BYTE *)v30 + 17) & 1) == 0
          && *((_BYTE *)v30 + 16) == 1 )
        {
          v27 = *v30;
        }
      }
      if ( v27 )
      {
        if ( !v45 || v45 == *(_WORD *)(*(_QWORD *)(v27 + 152) + 10LL) )
        {
          if ( !a4
            || (*(_DWORD *)(v27 + 216) ? (v32 = *(const wchar_t **)(v27 + 224)) : (v32 = szNull), !_wcsicmp(a4, v32)) )
          {
            i = v46;
            break;
          }
        }
        v27 = 0LL;
      }
    }
    v33 = v49;
    v34 = (struct tagBWL **)gpbwlList;
    if ( gpbwlList )
    {
      while ( 1 )
      {
        v35 = *v34;
        if ( *v34 == v23 )
          break;
        v34 = (struct tagBWL **)*v34;
        if ( !*(_QWORD *)v35 )
          goto LABEL_71;
      }
      *v34 = *(struct tagBWL **)v23;
      v36 = pbwlCache;
      if ( pbwlCache )
      {
        if ( (__int64)((*((_QWORD *)v23 + 2) - (_QWORD)v23 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) <= (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
          v36 = v23;
        else
          pbwlCache = v23;
        Win32FreePool(v36);
        v33 = v49;
      }
      else
      {
        pbwlCache = v23;
      }
    }
LABEL_71:
    if ( v27 || !v33 )
      break;
    v49 = 0;
    a1 = 0LL;
    v41 = 0LL;
    v42 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v42 )
      v41 = *v42;
    if ( v41 )
    {
      v43 = *(_QWORD *)(v41 + 416);
      if ( v43 )
        a1 = *(_QWORD *)(v43 + 96);
    }
    a2 = 0LL;
  }
  if ( *i == 1LL )
    return 0LL;
  return v27;
}
