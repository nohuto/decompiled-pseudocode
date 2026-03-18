/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@H@Z @ 0x1C0077040
 * Callers:
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 * Callees:
 *     <none>
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1, int a2)
{
  __int64 v4; // rdx
  _DWORD *v5; // r8
  __int64 v6; // r9
  unsigned __int64 *v7; // r15
  unsigned __int64 *i; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  __int64 *v11; // rbx
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rcx
  unsigned __int64 *v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+28h] [rbp-50h]

  v19 = Win32AllocPool(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v18 = (unsigned __int64 *)v19;
  if ( !v19 )
    return a1;
  v7 = (unsigned __int64 *)((char *)a1 + 32);
  for ( i = (unsigned __int64 *)((char *)a1 + 32); ; ++i )
  {
    v9 = *i;
    if ( *i == 1 )
      break;
    v10 = 0LL;
    PsGetThreadWin32Thread(KeGetCurrentThread(), v4, v5, v6);
    v4 = (unsigned __int16)v9;
    v5 = (_DWORD *)gpsi;
    if ( (unsigned __int64)(unsigned __int16)v9 < *(_QWORD *)(gpsi + 8LL) )
    {
      v11 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1)
                      + (unsigned int)(unsigned __int16)v9 * *((_DWORD *)&gSharedInfo + 4));
      v12 = v9 >> 16;
      if ( (_WORD)v12 == *((_WORD *)v11 + 9)
        || (_WORD)v12 == 0xFFFF
        || !(_WORD)v12
        && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(gSharedInfo),
            v5 = (_DWORD *)gpsi,
            CurrentProcessWow64Process) )
      {
        if ( (*((_BYTE *)v11 + 17) & 1) == 0 && *((_BYTE *)v11 + 16) == 1 )
          v10 = *v11;
      }
    }
    if ( v10 )
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(v10 + 152);
        if ( (*(_BYTE *)(v4 + 86) & 1) != 0 || *(_WORD *)(v4 + 8) == *(_WORD *)(*(_QWORD *)v5 + 882LL) )
          break;
        v10 = *(_QWORD *)(v10 + 104);
        if ( !v10 )
          goto LABEL_13;
      }
      if ( a2 )
      {
        v17 = v10;
        do
        {
          if ( *(_WORD *)(*(_QWORD *)(v10 + 152) + 8LL) == *(_WORD *)(*(_QWORD *)v5 + 882LL) )
            break;
          v10 = *(_QWORD *)(v10 + 104);
        }
        while ( v10 );
        if ( v10 )
          v17 = v10;
        v10 = v17;
      }
      v4 = 0LL;
      if ( *(_WORD *)(*(_QWORD *)(v10 + 152) + 8LL) == *(_WORD *)(*(_QWORD *)v5 + 882LL) )
        v4 = v10;
      if ( !a2 )
        goto LABEL_19;
      if ( v4 )
      {
        v5 = *(_DWORD **)(v4 + 360);
        if ( v5 )
        {
          if ( (unsigned __int64)v5 >= W32UserProbeAddress )
            v5 = (_DWORD *)W32UserProbeAddress;
          if ( (v5[11] & 0x10) == 0 )
LABEL_19:
            *v18++ = *i;
        }
      }
    }
    else
    {
LABEL_13:
      *v7++ = *i;
    }
  }
  *v18 = 0LL;
  v13 = v19 - (_QWORD)v7;
  while ( 1 )
  {
    v14 = *(unsigned __int64 *)((char *)v7 + v13);
    if ( !v14 )
      break;
    *v7++ = v14;
  }
  if ( *v7 != 1 )
    *v7 = 1LL;
  Win32FreePool(v19, v19, v5);
  return a1;
}
