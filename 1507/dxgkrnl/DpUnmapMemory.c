/*
 * XREFs of DpUnmapMemory @ 0x1C0166950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpUnmapMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  unsigned int v6; // esi
  char v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 *v13; // rdx
  __int64 **v14; // rcx
  _QWORD *v15; // rax

  v4 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( a1
    && a2
    && (v8 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v8 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v8 + 20) - 2) <= 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      v9 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
      *(_QWORD *)(v9 + 24) = DpUnmapMemory;
      *(_QWORD *)(v9 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v9);
    }
    KeWaitForSingleObject((PVOID)(v8 + 1264), Executive, 0, 0, 0LL);
    v10 = *(__int64 **)(v8 + 1248);
    v11 = v10;
    if ( (__int64 *)*v10 != v10 )
    {
      while ( 1 )
      {
        v4 = v10;
        if ( v10[8] == a2 )
          break;
        v10 = (__int64 *)*v10;
        if ( (__int64 *)*v10 == v11 )
          goto LABEL_11;
      }
      if ( (*((_DWORD *)v10 + 6))-- == 1 )
      {
        v13 = (__int64 *)*v10;
        v14 = (__int64 **)v10[1];
        if ( *(__int64 **)(*v10 + 8) != v10 || *v14 != v10 )
          __fastfail(3u);
        *v14 = v13;
        v7 = 1;
        v13[1] = (__int64)v14;
      }
    }
LABEL_11:
    KeReleaseMutex((PRKMUTEX)(v8 + 1264), 0);
    if ( v7 == 1 )
    {
      if ( *((_BYTE *)v4 + 72) == 1 )
      {
        if ( *((_BYTE *)v4 + 45) == 1 )
          v6 = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)v4[8]);
        else
          MmUnmapIoSpace((PVOID)v4[8], *((unsigned int *)v4 + 10));
      }
      ExFreePoolWithTag(v4, 0x74727044u);
    }
  }
  else
  {
    v6 = -1073741811;
    v15 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v15[3] = DpUnmapMemory;
    v15[4] = 0LL;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdError(v15);
  }
  return v6;
}
