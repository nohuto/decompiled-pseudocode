/*
 * XREFs of PepPerfControlHandler @ 0x1C0006410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     PepPerformanceFromPercentage @ 0x1C00064FC (PepPerformanceFromPercentage.c)
 */

__int64 __fastcall PepPerfControlHandler(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        char a7,
        char a8)
{
  __int64 result; // rax
  unsigned int v9; // r10d
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rcx
  _DWORD v17[6]; // [rsp+20h] [rbp-28h] BYREF

  result = a3;
  if ( a7 )
  {
    if ( !a8 )
    {
      v17[0] = PepPerformanceFromPercentage(a1, a3, a2, a1);
      v17[1] = PepPerformanceFromPercentage(v11, v9, v10, v11);
      v17[2] = v12;
      v14 = PepPerformanceFromPercentage(v13, a5, v12, v13);
      v16 = *(_QWORD *)(v15 + 8);
      v17[4] = v14;
      v17[3] = *(_DWORD *)(v15 + 28);
      return PoFxProcessorNotification(v16, 13LL, v17);
    }
  }
  return result;
}
