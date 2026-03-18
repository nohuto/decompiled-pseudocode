/*
 * XREFs of DpiPdoPollChild @ 0x1C016DC00
 * Callers:
 *     DpiPdoGetDeviceDescriptor @ 0x1C00C7AA0 (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C0023090 (ExAllocateFromNPagedLookasideList.c)
 */

__int64 __fastcall DpiPdoPollChild(struct _IO_REMOVE_LOCK **a1, int a2, int a3, char a4, char a5, char a6)
{
  struct _IO_REMOVE_LOCK *v6; // r15
  PVOID *v11; // rax
  __int64 v12; // rcx
  PVOID *v13; // rbx
  unsigned int v14; // edi
  _QWORD *v15; // rax
  PVOID **v16; // rax

  v6 = a1[8];
  v11 = (PVOID *)ExAllocateFromNPagedLookasideList(&stru_1C0046D40);
  v13 = v11;
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
    v14 = IoAcquireRemoveLockEx(v6 + 2, v11, &byte_1C00E2920, 1u, 0x20u);
    KeWaitForSingleObject(P, Executive, 0, 0, 0LL);
    v16 = (PVOID **)qword_1C0046E70;
    *v13 = &Entry;
    v13[1] = v16;
    if ( *v16 != &Entry )
      __fastfail(3u);
    *v16 = v13;
    qword_1C0046E70 = (__int64)v13;
    KeReleaseMutex((PRKMUTEX)P, 0);
    KeSetTimer(&stru_1C0046DD8, (LARGE_INTEGER)-3000000LL, &stru_1C0046E18);
  }
  else
  {
    v14 = -1073741670;
    v15 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12);
    v15[3] = DpiPdoPollChild;
    v15[4] = ExAllocateFromNPagedLookasideList;
    v15[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v15);
  }
  return v14;
}
