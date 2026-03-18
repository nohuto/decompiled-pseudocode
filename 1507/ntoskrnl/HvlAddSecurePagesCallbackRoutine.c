/*
 * XREFs of HvlAddSecurePagesCallbackRoutine @ 0x1401EED1C
 * Callers:
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x1401EED04 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x1401EEE70 (HvlAddSecureSkPagesCallbackRoutine.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     HvlpEndSecurePageListIteration @ 0x1401F04E0 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x1401F064C (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401F098C (HvlpStartSecurePageListIteration.c)
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
    v7 = dword_14034D0E0;
    result = (_QWORD *)qword_14034D0D8;
    do
    {
      while ( !v7 )
      {
        if ( (int)HvlpGetSecurePageList(1, 0, (unsigned int)&v10, 0, (__int64)&v9) < 0 )
        {
          result = (_QWORD *)HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
          HvlpCrashdumpIterationState = 0;
          return result;
        }
        v7 = *(unsigned __int16 *)(v10 + 8);
        result = (_QWORD *)(v10 + 16);
        qword_14034D0D8 = v10 + 16;
        dword_14034D0E0 = v7;
      }
      *(_QWORD *)(a4 + 24) = *result >> 40;
      *(_QWORD *)(a4 + 16) = *(_QWORD *)qword_14034D0D8 & 0xFFFFFFFFFFLL;
      result = (_QWORD *)(qword_14034D0D8 + 8);
      v7 = dword_14034D0E0 - 1;
      qword_14034D0D8 += 8LL;
      --dword_14034D0E0;
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
