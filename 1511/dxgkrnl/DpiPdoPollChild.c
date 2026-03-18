/*
 * XREFs of DpiPdoPollChild @ 0x1C0172430
 * Callers:
 *     DpiPdoGetDeviceDescriptor @ 0x1C00E28C0 (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C0022F90 (ExAllocateFromNPagedLookasideList.c)
 */

__int64 __fastcall DpiPdoPollChild(struct _IO_REMOVE_LOCK **a1, int a2, int a3, char a4, char a5, char a6)
{
  struct _IO_REMOVE_LOCK *v6; // r15
  PVOID *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID *v16; // rbx
  unsigned int v17; // edi
  _QWORD *v18; // rax
  PVOID **v19; // rax

  v6 = a1[8];
  v11 = (PVOID *)ExAllocateFromNPagedLookasideList(&stru_1C0046DC0);
  v16 = v11;
  if ( v11 )
  {
    v11[5] = 0LL;
    *((_DWORD *)v11 + 4) = 1953656900;
    *((_DWORD *)v11 + 5) = 10;
    v11[3] = a1;
    *((_DWORD *)v11 + 8) = a2;
    *((_DWORD *)v11 + 9) = a3;
    *((_BYTE *)v11 + 48) = a4;
    *((_BYTE *)v11 + 49) = a5;
    *((_BYTE *)v11 + 50) = a6;
    v17 = IoAcquireRemoveLockEx(v6 + 2, v11, &byte_1C00ED620, 1u, 0x20u);
    KeWaitForSingleObject(P, Executive, 0, 0, 0LL);
    v19 = (PVOID **)qword_1C0046EF0;
    *v16 = &Entry;
    v16[1] = v19;
    if ( *v19 != &Entry )
      __fastfail(3u);
    *v19 = v16;
    qword_1C0046EF0 = (__int64)v16;
    KeReleaseMutex((PRKMUTEX)P, 0);
    KeSetTimer(&stru_1C0046E58, (LARGE_INTEGER)-3000000LL, &stru_1C0046E98);
  }
  else
  {
    v17 = -1073741670;
    v18 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    v18[3] = DpiPdoPollChild;
    v18[4] = ExAllocateFromNPagedLookasideList;
    v18[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v18);
  }
  return v17;
}
