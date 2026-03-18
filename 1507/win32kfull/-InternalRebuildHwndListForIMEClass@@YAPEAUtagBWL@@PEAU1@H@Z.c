/*
 * XREFs of ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@H@Z @ 0x1C00C7000
 * Callers:
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 * Callees:
 *     <none>
 */

struct tagBWL *__fastcall InternalRebuildHwndListForIMEClass(struct tagBWL *a1, int a2)
{
  __int64 v4; // r13
  unsigned __int64 *v5; // r15
  unsigned __int64 *i; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 *v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 CurrentProcessWow64Process; // rax
  __int64 v19; // rcx
  unsigned __int64 *v20; // [rsp+20h] [rbp-58h]

  v4 = Win32AllocPool(*((_QWORD *)a1 + 2) - (_QWORD)a1 + 8LL, 1819767637LL);
  v20 = (unsigned __int64 *)v4;
  if ( !v4 )
    return a1;
  v5 = (unsigned __int64 *)((char *)a1 + 32);
  for ( i = (unsigned __int64 *)((char *)a1 + 32); ; ++i )
  {
    v7 = *i;
    if ( *i == 1 )
      break;
    v8 = 0LL;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    v9 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v7 < *(_QWORD *)(gpsi + 8LL) )
    {
      v10 = (__int64 *)(gSharedInfo[1] + (unsigned int)(unsigned __int16)v7 * LODWORD(gSharedInfo[2]));
      v11 = v7 >> 16;
      if ( (_WORD)v11 == *((_WORD *)v10 + 9)
        || (_WORD)v11 == 0xFFFF
        || !(_WORD)v11
        && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(gSharedInfo[0]),
            v9 = gpsi,
            CurrentProcessWow64Process) )
      {
        if ( (*((_BYTE *)v10 + 17) & 1) == 0 && *((_BYTE *)v10 + 16) == 1 )
          v8 = *v10;
      }
    }
    if ( v8 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v8 + 152);
        if ( (*(_BYTE *)(v12 + 86) & 1) != 0 || *(_WORD *)(v12 + 8) == *(_WORD *)(*(_QWORD *)v9 + 882LL) )
          break;
        v8 = *(_QWORD *)(v8 + 104);
        if ( !v8 )
          goto LABEL_13;
      }
      if ( a2 )
      {
        v19 = v8;
        do
        {
          if ( *(_WORD *)(*(_QWORD *)(v8 + 152) + 8LL) == *(_WORD *)(*(_QWORD *)v9 + 882LL) )
            break;
          v8 = *(_QWORD *)(v8 + 104);
        }
        while ( v8 );
        if ( v8 )
          v19 = v8;
        v8 = v19;
      }
      v13 = 0LL;
      if ( *(_WORD *)(*(_QWORD *)(v8 + 152) + 8LL) == *(_WORD *)(*(_QWORD *)v9 + 882LL) )
        v13 = v8;
      if ( !a2 )
        goto LABEL_19;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 376);
        if ( v14 )
        {
          if ( v14 >= W32UserProbeAddress )
            v14 = W32UserProbeAddress;
          if ( (*(_DWORD *)(v14 + 44) & 0x10) == 0 )
LABEL_19:
            *v20++ = *i;
        }
      }
    }
    else
    {
LABEL_13:
      *v5++ = *i;
    }
  }
  *v20 = 0LL;
  v15 = v4 - (_QWORD)v5;
  while ( 1 )
  {
    v16 = *(unsigned __int64 *)((char *)v5 + v15);
    if ( !v16 )
      break;
    *v5++ = v16;
  }
  if ( *v5 != 1 )
    *v5 = 1LL;
  Win32FreePool(v4);
  return a1;
}
