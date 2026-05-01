/*
 * XREFs of RmpPsmAppFamilyTableFind @ 0x180005920
 * Callers:
 *     RmpPsmAppFamilyTableFindByActivityHost @ 0x180005870 (RmpPsmAppFamilyTableFindByActivityHost.c)
 *     ?FinalizeSharedResourceList@ResourceManager@ExecutionModel@@QEAAXPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@_KPEAVResourceSet@2@PEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@4@@Z @ 0x18000FAEC (-FinalizeSharedResourceList@ResourceManager@ExecutionModel@@QEAAXPEAV-$list@PEAVResourceSet@Exec.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     RmpActivityHostFindMixedHostForPsmId @ 0x18002F058 (RmpActivityHostFindMixedHostForPsmId.c)
 * Callees:
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180005AE4 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableFind(__int64 a1, WCHAR *a2)
{
  WCHAR *v2; // rsi
  WCHAR *v5; // rbx
  __int64 i; // rdi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r10
  int v11; // r9d
  WCHAR v13; // [rsp+40h] [rbp+8h]

  v2 = a2 + 232;
  v5 = a2;
  for ( i = 314159LL; v5 < v2; i = HIBYTE(v13) + 37 * ((unsigned __int8)v13 + 37 * i) )
    v13 = RtlUpcaseUnicodeChar(*v5++);
  v7 = 9LL;
  do
  {
    v8 = *(unsigned __int8 *)v2;
    v2 += 4;
    i = *((unsigned __int8 *)v2 - 1)
      + 37
      * (*((unsigned __int8 *)v2 - 2)
       + 37
       * (*((unsigned __int8 *)v2 - 3)
        + 37
        * (*((unsigned __int8 *)v2 - 4)
         + 37
         * (*((unsigned __int8 *)v2 - 5)
          + 37 * (*((unsigned __int8 *)v2 - 6) + 37 * (*((unsigned __int8 *)v2 - 7) + 37 * (v8 + 37 * i)))))));
    --v7;
  }
  while ( v7 );
  v9 = 0LL;
LABEL_6:
  v10 = i & (-1LL << (*(_BYTE *)(a1 + 3020) & 0x1F));
  if ( v9 )
    goto LABEL_9;
  v11 = *(_DWORD *)(a1 + 3020) >> 5;
  if ( v11 )
  {
    v9 = *(_QWORD *)(a1 + 3024)
       + 8LL
       * ((37
         * (BYTE6(v10)
          + 37
          * (BYTE5(v10)
           + 37
           * (BYTE4(v10)
            + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v10)) & (unsigned int)(v11 - 1));
LABEL_9:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v10 == ((-1LL << (*(_BYTE *)(a1 + 3020) & 0x1F)) & *(_QWORD *)(v9 + 8)) )
      {
        if ( !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v9, a2) )
          goto LABEL_6;
        if ( v9 )
          return v9;
        return 0LL;
      }
    }
  }
  return 0LL;
}
