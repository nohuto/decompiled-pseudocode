/*
 * XREFs of HvlAddSecurePagesCallbackRoutine @ 0x1401B4378
 * Callers:
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x1401B4360 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x1401B44D0 (HvlAddSecureSkPagesCallbackRoutine.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     HvlpEndSecurePageListIteration @ 0x1401B534C (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x1401B54B8 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401B56DC (HvlpStartSecurePageListIteration.c)
 */

_QWORD *__fastcall HvlAddSecurePagesCallbackRoutine(int a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax
  int v7; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  result = &retaddr;
  v10 = a3;
  v9 = a2;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_DWORD *)(a4 + 8) = 0;
  if ( !*(_QWORD *)a4 )
  {
    memset(&HvlpCrashdumpIterationState, 0, 0x28uLL);
    result = (_QWORD *)HvlpStartSecurePageListIteration(1LL, a1 | 4u);
    if ( (int)result < 0 )
      return result;
    HvlpCrashdumpIterationState = 1;
    *(_QWORD *)a4 = &HvlpCrashdumpIterationState;
  }
  if ( HvlpCrashdumpIterationState )
  {
    v7 = dword_1402FCC60;
    result = (_QWORD *)qword_1402FCC58;
    do
    {
      while ( !v7 )
      {
        if ( (int)HvlpGetSecurePageList(1, 0, 0, (unsigned int)&v10, 0LL, (__int64)&v9) < 0 )
        {
          result = (_QWORD *)HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
          HvlpCrashdumpIterationState = 0;
          return result;
        }
        v7 = *(unsigned __int16 *)(v10 + 8);
        result = (_QWORD *)(v10 + 16);
        qword_1402FCC58 = v10 + 16;
        dword_1402FCC60 = v7;
      }
      *(_QWORD *)(a4 + 24) = *result >> 40;
      *(_QWORD *)(a4 + 16) = *(_QWORD *)qword_1402FCC58 & 0xFFFFFFFFFFLL;
      result = (_QWORD *)(qword_1402FCC58 + 8);
      v7 = dword_1402FCC60 - 1;
      qword_1402FCC58 += 8LL;
      --dword_1402FCC60;
    }
    while ( !*(_QWORD *)(a4 + 24) );
    *(_DWORD *)(a4 + 8) = -2147483646;
    if ( a1 == 1 )
      *(_DWORD *)(a4 + 8) = -2147483630;
    else
      *(_DWORD *)(a4 + 8) = -2147483614;
  }
  return result;
}
