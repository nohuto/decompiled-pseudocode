/*
 * XREFs of HvlpEndSecurePageListIteration @ 0x1401C1D30
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401BEE4C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1401BEFDC (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x1401BFFCC (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1401C0710 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvlpGetPageListIterator @ 0x1401C1E64 (HvlpGetPageListIterator.c)
 *     VslEndSecurePageIteration @ 0x1401C2678 (VslEndSecurePageIteration.c)
 */

__int64 __fastcall HvlpEndSecurePageListIteration(__int64 a1, void *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  size_t Size; // [rsp+48h] [rbp+20h] BYREF

  result = HvlpGetPageListIterator(a1);
  v7 = result;
  if ( *(_BYTE *)(result + 2) )
  {
    LOBYTE(v6) = (_DWORD)v6 == 0;
    result = VslEndSecurePageIteration(v6, &Size);
    if ( a3 )
    {
      result = (unsigned int)Size;
      if ( (unsigned int)Size <= *a3 )
      {
        *a3 = Size;
        if ( (_DWORD)result )
          result = (__int64)memmove(a2, *(const void **)(v7 + 8), (unsigned int)result);
      }
    }
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_DWORD *)v7 = 0;
  }
  return result;
}
