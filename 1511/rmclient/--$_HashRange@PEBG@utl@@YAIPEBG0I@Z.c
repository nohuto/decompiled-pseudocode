/*
 * XREFs of ??$_HashRange@PEBG@utl@@YAIPEBG0I@Z @ 0x180010770
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@@2@@Z @ 0x18000C1B0 (-_EmplaceImpl@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetProxy@ExecutionModel@@@utl@@U-$hash@_K.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180012274 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-.c)
 *     ?_EmplaceImpl@?$_HashTable@KU?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@@2@@Z @ 0x180014CE8 (-_EmplaceImpl@-$_HashTable@KU-$pair@$$CBKPEAVResourceSetClientProxy@@@utl@@U-$hash@K@2@U-$equal_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall utl::_HashRange<unsigned short const *>(unsigned __int16 *a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  unsigned __int16 *v3; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // r9
  unsigned int v6; // eax

  v2 = 0;
  v3 = a1;
  v4 = 0LL;
  v5 = (a2 - (unsigned __int64)a1 + 1) >> 1;
  if ( (unsigned __int64)a1 > a2 )
    v5 = 0LL;
  if ( v5 )
  {
    do
    {
      ++v4;
      v6 = v2 + *v3++;
      v2 = (1025 * v6) ^ ((1025 * v6) >> 6);
    }
    while ( v4 != v5 );
  }
  return v2;
}
