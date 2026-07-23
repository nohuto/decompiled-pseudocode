/*
 * XREFs of WmipEnumerateMofResources @ 0x1404C9900
 * Callers:
 *     WmipIoControl @ 0x140473894 (WmipIoControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 */

__int64 __fastcall WmipEnumerateMofResources(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v4; // rdi
  unsigned int v6; // r13d
  __int64 **v7; // r14
  int v8; // r9d
  __int64 v9; // rbx
  _QWORD *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  __int64 v14; // r15
  unsigned __int64 v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v23; // [rsp+78h] [rbp+20h]

  v4 = a2;
  v6 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v7 = (__int64 **)WmipMRHeadPtr;
  v8 = 0;
  v9 = 0LL;
  v10 = *(_QWORD **)WmipMRHeadPtr;
  if ( *(_QWORD *)WmipMRHeadPtr == WmipMRHeadPtr )
    goto LABEL_19;
  do
  {
    ++v8;
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(v10[6] + 2 * v11) );
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v10[5] + 2 * v12) );
    v10 = (_QWORD *)*v10;
    v9 += 2 * (v12 + v11) + 4;
  }
  while ( v10 != (_QWORD *)WmipMRHeadPtr );
  if ( !v8 )
  {
LABEL_19:
    *a1 = 0;
    *a3 = 16;
  }
  else
  {
    v13 = v4;
    v14 = 12LL * (unsigned int)(v8 - 1) + 16;
    v15 = v14 + v9;
    if ( v4 < v15 )
    {
      *a1 = v15;
      *a3 = 4;
    }
    else
    {
      *a1 = v8;
      v16 = *v7;
      while ( v16 != (__int64 *)v7 )
      {
        v17 = v6++;
        v18 = 3 * v17;
        LOBYTE(v17) = *((_BYTE *)v16 + 16);
        a1[v18 + 1] = v14;
        a1[v18 + 3] = v17 & 1;
        v23 = v18;
        RtlStringCbCopyW((NTSTRSAFE_PWSTR)((char *)a1 + v14), v13 - v14, (NTSTRSAFE_PCWSTR)v16[5]);
        v19 = -1LL;
        do
          ++v19;
        while ( *(_WORD *)(v16[5] + 2 * v19) );
        v20 = v14 + 2 * v19 + 2;
        a1[v23 + 2] = v20;
        RtlStringCbCopyW((NTSTRSAFE_PWSTR)((char *)a1 + v20), v13 - v20, (NTSTRSAFE_PCWSTR)v16[6]);
        v21 = -1LL;
        do
          ++v21;
        while ( *(_WORD *)(v16[6] + 2 * v21) );
        v16 = (__int64 *)*v16;
        v14 = v20 + 2 * v21 + 2;
      }
      *a3 = v15;
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return 0LL;
}
