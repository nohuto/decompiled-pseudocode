/*
 * XREFs of ??R?$hash@PEBG@utl@@QEBA_KAEBQEBG@Z @ 0x18001E2B0
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@@Z @ 0x18001E1F8 (-_EmplaceImpl@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U-$equal_to.c)
 *     ?_EmplaceImpl@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@@Z @ 0x18001F5F0 (-_EmplaceImpl@-$_HashTable@PEBGU-$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U-$ha.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall utl::hash<unsigned short const *>::operator()(__int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  unsigned __int64 result; // rax
  unsigned __int16 v4; // cx
  unsigned __int64 v5; // rdx

  v2 = *a2;
  result = 0LL;
  v4 = **a2;
  if ( v4 )
  {
    do
    {
      ++v2;
      v5 = 1025 * (result + v4);
      v4 = *v2;
      result = v5 ^ (v5 >> 6);
    }
    while ( *v2 );
  }
  return result;
}
