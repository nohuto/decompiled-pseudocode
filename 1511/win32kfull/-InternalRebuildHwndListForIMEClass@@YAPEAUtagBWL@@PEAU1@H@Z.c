/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@H@Z @ 0x1C006DB60
 * Callers:
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 * Callees:
 *     <none>
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1, int a2)
{
  unsigned __int64 *v4; // r15
  unsigned __int64 *i; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 *v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rcx
  unsigned __int64 *v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]

  v20 = Win32AllocPool(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL);
  v19 = (unsigned __int64 *)v20;
  if ( !v20 )
    return a1;
  v4 = (unsigned __int64 *)((char *)a1 + 32);
  for ( i = (unsigned __int64 *)((char *)a1 + 32); ; ++i )
  {
    v6 = *i;
    if ( *i == 1 )
      break;
    v7 = 0LL;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    v8 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v6 < *(_QWORD *)(gpsi + 8LL) )
    {
      v9 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v6
                                                     * *((_DWORD *)&gSharedInfo + 4));
      v10 = v6 >> 16;
      if ( (_WORD)v10 == *((_WORD *)v9 + 9)
        || (_WORD)v10 == 0xFFFF
        || !(_WORD)v10
        && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(gSharedInfo),
            v8 = gpsi,
            CurrentProcessWow64Process) )
      {
        if ( (*((_BYTE *)v9 + 17) & 1) == 0 && *((_BYTE *)v9 + 16) == 1 )
          v7 = *v9;
      }
    }
    if ( v7 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v7 + 152);
        if ( (*(_BYTE *)(v11 + 86) & 1) != 0 || *(_WORD *)(v11 + 8) == *(_WORD *)(*(_QWORD *)v8 + 882LL) )
          break;
        v7 = *(_QWORD *)(v7 + 104);
        if ( !v7 )
          goto LABEL_13;
      }
      if ( a2 )
      {
        v18 = v7;
        do
        {
          if ( *(_WORD *)(*(_QWORD *)(v7 + 152) + 8LL) == *(_WORD *)(*(_QWORD *)v8 + 882LL) )
            break;
          v7 = *(_QWORD *)(v7 + 104);
        }
        while ( v7 );
        if ( v7 )
          v18 = v7;
        v7 = v18;
      }
      v12 = 0LL;
      if ( *(_WORD *)(*(_QWORD *)(v7 + 152) + 8LL) == *(_WORD *)(*(_QWORD *)v8 + 882LL) )
        v12 = v7;
      if ( !a2 )
        goto LABEL_19;
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 376);
        if ( v13 )
        {
          if ( v13 >= W32UserProbeAddress )
            v13 = W32UserProbeAddress;
          if ( (*(_DWORD *)(v13 + 44) & 0x10) == 0 )
LABEL_19:
            *v19++ = *i;
        }
      }
    }
    else
    {
LABEL_13:
      *v4++ = *i;
    }
  }
  *v19 = 0LL;
  v14 = v20 - (_QWORD)v4;
  while ( 1 )
  {
    v15 = *(unsigned __int64 *)((char *)v4 + v14);
    if ( !v15 )
      break;
    *v4++ = v15;
  }
  if ( *v4 != 1 )
    *v4 = 1LL;
  Win32FreePool(v20);
  return a1;
}
