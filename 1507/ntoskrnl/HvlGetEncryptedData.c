/*
 * XREFs of HvlGetEncryptedData @ 0x1401EF30C
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401EF7AC (HvlpGetEncryptedDataFromHypervisor.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x1401EF9C0 (HvlpGetEncryptedDataFromSecureKernel.c)
 */

__int64 __fastcall HvlGetEncryptedData(int a1, int a2, int a3, _DWORD *a4, _QWORD *a5)
{
  if ( !a3 || (a3 & 0xFFF) != 0 )
    return 3221225485LL;
  if ( (HvlpFlags & 4) != 0 )
  {
    if ( (HvlpFlags & 0x2000) != 0 )
      return HvlpGetEncryptedDataFromSecureKernel(a1, a2, a3, (_DWORD)a4, (__int64)a5);
    else
      return HvlpGetEncryptedDataFromHypervisor(a1, a2, a3, (_DWORD)a4, (__int64)a5);
  }
  else
  {
    *a4 = 0;
    *a5 = 0LL;
    return 3221226021LL;
  }
}
