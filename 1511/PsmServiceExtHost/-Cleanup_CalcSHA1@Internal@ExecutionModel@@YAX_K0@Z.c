/*
 * XREFs of ?Cleanup_CalcSHA1@Internal@ExecutionModel@@YAX_K0@Z @ 0x1800201DC
 * Callers:
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180007010 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::Internal::Cleanup_CalcSHA1(HCRYPTPROV hProv, HCRYPTHASH hHash)
{
  if ( hHash )
    CryptDestroyHash(hHash);
  if ( hProv )
    CryptReleaseContext(hProv, 0);
}
