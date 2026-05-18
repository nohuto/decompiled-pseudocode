/*
 * XREFs of sub_1800039B8 @ 0x1800039B8
 * Callers:
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_180003A94 @ 0x180003A94 (sub_180003A94.c)
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 * Callees:
 *     sub_18000393C @ 0x18000393C (sub_18000393C.c)
 */

USHORT __fastcall sub_1800039B8(int a1, int a2, int a3)
{
  int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // rbx
  DWORD CurrentThreadId; // eax
  char *v10; // rbx
  USHORT result; // ax

  sub_18000393C();
  do
  {
    v6 = dword_18000C060;
    v7 = (unsigned __int8)(dword_18000C060 + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&dword_18000C060, v7, dword_18000C060) );
  v8 = 5 * v7;
  dword_18000C780[10 * v7] = a2;
  CurrentThreadId = GetCurrentThreadId();
  dword_18000C780[2 * v8 + 2] = a3;
  dword_18000C780[2 * v8 + 1] = CurrentThreadId;
  v10 = (char *)&dword_18000C780[2 * v8];
  *((_QWORD *)v10 + 2) = 0LL;
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 4) = 0LL;
  result = RtlCaptureStackBackTrace(a1 + 1, 3u, (PVOID *)v10 + 2, 0LL);
  if ( !result )
  {
    result = -7968;
    memset(v10 + 16, 224, 18);
  }
  return result;
}
