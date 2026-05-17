/*
 * XREFs of RtlpLookupDynamicFunctionEntry @ 0x180080820
 * Callers:
 *     RtlLookupFunctionEntry @ 0x180035FA0 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlpSearchFunctionTable @ 0x1800809C4 (RtlpSearchFunctionTable.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpLookupDynamicFunctionEntry(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  int v7; // ebx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  unsigned int *v13; // rdi
  __int64 v14; // rbp
  unsigned int v15; // edx
  unsigned __int64 v16; // rsi
  __int64 (__fastcall *v17)(unsigned __int64, __int64); // rdi
  __int64 v18; // rbx

  RtlAcquireSRWLockShared(&RtlpDynamicFunctionTableLock, a2, a3, a4);
  v6 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  v7 = 0;
  while ( v6 )
  {
    if ( a1 < *(v6 - 7) )
    {
      v6 = (_QWORD *)*v6;
    }
    else
    {
      if ( a1 < *(v6 - 6) )
        break;
      v6 = (_QWORD *)v6[1];
    }
  }
  v8 = v6 - 11;
  if ( !v6 )
  {
    v9 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
    while ( v9 )
    {
      if ( a1 < *(v9 - 10) )
      {
        v9 = (_QWORD *)*v9;
      }
      else
      {
        if ( a1 < *(v9 - 9) )
          break;
        v9 = (_QWORD *)v9[1];
      }
    }
    v8 = v9 - 14;
    if ( !v9 )
    {
      v10 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
      while ( v10 )
      {
        if ( a1 < *(v10 - 7) )
        {
          v10 = (_QWORD *)*v10;
        }
        else
        {
          if ( a1 < *(v10 - 6) )
            break;
          v10 = (_QWORD *)v10[1];
        }
      }
      v8 = v10 - 11;
      if ( !v10 )
      {
        v11 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
        while ( v11 )
        {
          if ( a1 < *(v11 - 10) )
          {
            v11 = (_QWORD *)*v11;
          }
          else
          {
            if ( a1 < *(v11 - 9) )
              break;
            v11 = (_QWORD *)v11[1];
          }
        }
        v8 = v11 - 14;
        if ( !v11 )
          goto LABEL_29;
      }
    }
  }
  v13 = (unsigned int *)v8[2];
  v14 = v8[6];
  if ( *((_DWORD *)v8 + 20) && *((_DWORD *)v8 + 20) != 3 )
  {
    if ( *((_DWORD *)v8 + 20) != 1 )
    {
      v17 = (__int64 (__fastcall *)(unsigned __int64, __int64))v8[7];
      v18 = v8[8];
      RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
      *(_QWORD *)a2 = v14;
      return v17(a1, v18);
    }
    v15 = *((_DWORD *)v8 + 21);
    v16 = a1 - v14;
    if ( !v15 )
    {
LABEL_29:
      RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
      return 0LL;
    }
    while ( v16 < *v13 || v16 >= v13[1] )
    {
      v13 += 3;
      if ( ++v7 >= v15 )
        goto LABEL_29;
    }
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    goto LABEL_41;
  }
  v13 = (unsigned int *)RtlpSearchFunctionTable(v8[2], *((unsigned int *)v8 + 21), a1, v8[6]);
  RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
  if ( v13 )
LABEL_41:
    *(_QWORD *)a2 = v14;
  return (__int64)v13;
}
