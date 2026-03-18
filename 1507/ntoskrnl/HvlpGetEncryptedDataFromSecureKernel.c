/*
 * XREFs of HvlpGetEncryptedDataFromSecureKernel @ 0x1401EF9C0
 * Callers:
 *     HvlGetEncryptedData @ 0x1401EF30C (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpEndSecurePageListIteration @ 0x1401F04E0 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x1401F064C (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401F098C (HvlpStartSecurePageListIteration.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromSecureKernel(__int64 a1, int a2, int a3, _DWORD *a4, _QWORD *a5)
{
  int v6; // edi
  __int64 result; // rax
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  *a4 = 0;
  v6 = (int)a5;
  *a5 = 0LL;
  if ( !HvlpCrashdumpIterationState )
  {
    result = HvlpStartSecurePageListIteration(1LL, 3LL);
    if ( (int)result < 0 )
      return result;
    HvlpCrashdumpIterationState = 1;
  }
  result = HvlpGetSecurePageList(1, a2, 0, v6, (__int64)&v9);
  if ( (int)result >= 0 )
  {
    *a4 = 4096;
    return 0LL;
  }
  else if ( (_DWORD)result == -2147483622 )
  {
    HvlpEndSecurePageListIteration(1LL, 0LL, 0LL);
    return 3221226021LL;
  }
  return result;
}
