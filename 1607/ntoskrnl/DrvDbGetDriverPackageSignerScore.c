/*
 * XREFs of DrvDbGetDriverPackageSignerScore @ 0x1404EB2B8
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x140503A30 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1406E15DC (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2CD4 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbGetDriverPackageMappedProperty @ 0x140503A30 (DrvDbGetDriverPackageMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverPackageSignerScore(int a1, int a2, int a3, wchar_t *a4)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v6[5]; // [rsp+44h] [rbp-14h] BYREF

  result = DrvDbGetDriverPackageMappedProperty(
             a1,
             a2,
             a3,
             (int)&DEVPKEY_DriverPackage_SignerScore,
             (__int64)&v5,
             a4,
             4,
             (__int64)v6);
  if ( (int)result >= 0 && (v5 != 7 || v6[0] != 4) )
    return 3221225473LL;
  return result;
}
