/*
 * XREFs of GetNameSpaceObjectNoLock @ 0x1C0010F50
 * Callers:
 *     GetNameSpaceObject @ 0x1C000DDCC (GetNameSpaceObject.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000E5B4 (AMLIGetNameSpaceObjectNoLock.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     ParseSuperName @ 0x1C0011120 (ParseSuperName.c)
 * Callees:
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall GetNameSpaceObjectNoLock(const char *Src, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebp
  __int64 v6; // rsi
  int v7; // r14d
  const char *i; // rdi
  unsigned __int64 v9; // rax
  char v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 result; // rax
  int v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+20h]

  v18 = a4;
  v4 = a4;
  v6 = a2;
  v7 = (int)Src;
  if ( !a2 )
    v6 = gpnsNameSpaceRoot;
  if ( *Src == 92 )
  {
    i = Src + 1;
    v6 = gpnsNameSpaceRoot;
  }
  else
  {
    for ( i = Src; *i == 94; ++i )
    {
      if ( !v6 )
        break;
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  *(_QWORD *)a3 = v6;
  if ( !v6 )
  {
    v15 = -1073741772;
LABEL_34:
    if ( v4 < 0 && v15 == -1073741772 )
    {
      LogError(3221225524LL);
      PrintDebugMessage(58, v7, 0, 0, 0LL);
    }
    *(_QWORD *)a3 = 0LL;
    return v15;
  }
  if ( *i )
  {
    if ( (a4 & 1) != 0 )
      goto LABEL_13;
    if ( ((*Src - 92) & 0xFD) == 0 )
      goto LABEL_13;
    v9 = -1LL;
    do
      ++v9;
    while ( Src[v9] );
    if ( v9 > 4 )
LABEL_13:
      v10 = 0;
    else
      v10 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v6 + 24);
        if ( v11 )
          break;
LABEL_24:
        v15 = -1073741772;
        if ( v10 )
        {
          v6 = *(_QWORD *)(v6 + 16);
          if ( v6 )
            continue;
        }
        goto LABEL_33;
      }
      v12 = (__int64)strchr(i, 46);
      if ( v12 )
      {
        LODWORD(v12) = v12 - (_DWORD)i;
      }
      else
      {
        v12 = -1LL;
        do
          ++v12;
        while ( i[v12] );
      }
      if ( (unsigned int)v12 > 4 )
        break;
      v17 = 1600085855;
      v13 = (unsigned int)v12;
      memmove(&v17, i, (unsigned int)v12);
      while ( *(_DWORD *)(v11 + 32) != v17 )
      {
        v11 = *(_QWORD *)(v11 + 8);
        if ( v11 )
        {
          v14 = *(_QWORD *)(v11 + 16);
          if ( v14 )
          {
            if ( v11 != *(_QWORD *)(v14 + 24) )
              continue;
          }
        }
        goto LABEL_24;
      }
      i += v13;
      v6 = v11;
      if ( *i == 46 )
      {
        ++i;
      }
      else if ( !*i )
      {
        *(_QWORD *)a3 = v11;
        goto LABEL_30;
      }
    }
    v15 = -1073741773;
    LogError(3221225523LL);
    PrintDebugMessage(57, v7, 0, 0, 0LL);
LABEL_33:
    v4 = v18;
    goto LABEL_34;
  }
LABEL_30:
  result = 0LL;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)a3 + 104LL));
  return result;
}
