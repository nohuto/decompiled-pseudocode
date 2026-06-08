/*
 * XREFs of PepPerfControlHandler @ 0x1C0004E30
 * Callers:
 *     <none>
 * Callees:
 *     PepPerformanceFromPercentage @ 0x1C00050C4 (PepPerformanceFromPercentage.c)
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
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
  __int64 v10; // r9
  int v11; // r8d
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rcx
  _DWORD v16[6]; // [rsp+20h] [rbp-28h] BYREF

  result = a3;
  if ( a7 )
  {
    if ( !a8 )
    {
      v16[0] = PepPerformanceFromPercentage(a1, a3);
      v16[1] = PepPerformanceFromPercentage(v10, v9);
      v16[2] = v11;
      v13 = PepPerformanceFromPercentage(v12, a5);
      v15 = *(_QWORD *)(v14 + 8);
      v16[4] = v13;
      v16[3] = *(_DWORD *)(v14 + 28);
      return PoFxProcessorNotification(v15, 13LL, v16);
    }
  }
  return result;
}
