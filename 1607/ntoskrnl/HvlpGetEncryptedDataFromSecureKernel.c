/*
 * XREFs of HvlpGetEncryptedDataFromSecureKernel @ 0x1401C0710
 * Callers:
 *     HvlGetEncryptedData @ 0x1401C038C (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpEndSecurePageListIteration @ 0x1401C1D30 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x1401C1E78 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x1401C2098 (HvlpStartSecurePageListIteration.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromSecureKernel(int a1, int a2, int a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v6; // rdi
  __int64 v9; // rdx
  __int64 result; // rax
  int v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  *a4 = 0;
  v6 = (__int64)a5;
  *a5 = 0LL;
  if ( HvlpCrashdumpIterationState )
    goto LABEL_6;
  v9 = 1LL;
  if ( (HvlpFlags & 2) != 0 )
    v9 = 3LL;
  result = HvlpStartSecurePageListIteration(1LL, v9);
  if ( (int)result >= 0 )
  {
    HvlpCrashdumpIterationState = 1;
LABEL_6:
    result = HvlpGetSecurePageList(1, a1, a2, 0, v6, (__int64)&v11);
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
  }
  return result;
}
