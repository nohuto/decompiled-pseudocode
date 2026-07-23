/*
 * XREFs of PoStoreDiagnosticContext @ 0x1401FEDF8
 * Callers:
 *     PopTraceThermalRequestPassiveHistogram @ 0x140209A80 (PopTraceThermalRequestPassiveHistogram.c)
 *     ExGetWakeTimerList @ 0x14022E018 (ExGetWakeTimerList.c)
 *     ExGetNextWakeTime @ 0x1403DFDD0 (ExGetNextWakeTime.c)
 *     PopDiagTraceThermalRequest @ 0x14052E238 (PopDiagTraceThermalRequest.c)
 *     PopGetPowerRequestListInfo @ 0x14066C138 (PopGetPowerRequestListInfo.c)
 * Callees:
 *     PoStoreRequester @ 0x1400F914C (PoStoreRequester.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall PoStoreDiagnosticContext(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r14
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  bool v11; // r8
  _BYTE *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v14 = *a3;
  result = PoStoreRequester(a1, (__int64)a2, &v14, 0);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = v14;
  v10 = result;
  v11 = (int)result >= 0;
  if ( v8 )
  {
    v12 = (_BYTE *)(((unsigned __int64)a2 + v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v13 = v8 + v12 - (_BYTE *)a2;
    *a3 = v13;
    if ( v11 && v3 >= v13 )
    {
      a2[4] = v12 - (_BYTE *)a2;
      *a2 = v13;
      memmove(v12, (const void *)((a1 + 63) & 0xFFFFFFFFFFFFFFF8uLL), *(_QWORD *)(a1 + 48));
      return v10;
    }
    else
    {
      return 3221225507LL;
    }
  }
  else
  {
    if ( (int)result >= 0 )
    {
      a2[4] = 0LL;
      *a2 = v9;
    }
    *a3 = v9;
  }
  return result;
}
