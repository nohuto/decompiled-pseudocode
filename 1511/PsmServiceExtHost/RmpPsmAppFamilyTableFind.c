/*
 * XREFs of RmpPsmAppFamilyTableFind @ 0x1800088C0
 * Callers:
 *     RmpPsmAppFamilyTableTryRemoveActivityHost @ 0x1800075E4 (RmpPsmAppFamilyTableTryRemoveActivityHost.c)
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180008568 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18003C504 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 *     RmpActivityHostFindMixedHostForPsmId @ 0x180040E98 (RmpActivityHostFindMixedHostForPsmId.c)
 * Callees:
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180008A8C (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableFind(char *a1)
{
  WCHAR *v1; // rsi
  WCHAR *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rax
  _BYTE *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r10
  int v10; // r9d
  WCHAR v12; // [rsp+30h] [rbp+8h]

  v1 = (WCHAR *)(a1 + 464);
  v3 = (WCHAR *)a1;
  v4 = 314159LL;
  if ( a1 < a1 + 464 )
  {
    do
    {
      v12 = RtlUpcaseUnicodeChar(*v3++);
      v4 = HIBYTE(v12) + 37 * ((unsigned __int8)v12 + 37 * v4);
    }
    while ( v3 < v1 );
  }
  v5 = 9LL;
  do
  {
    v6 = *(unsigned __int8 *)v1;
    v1 += 4;
    v4 = *((unsigned __int8 *)v1 - 1)
       + 37
       * (*((unsigned __int8 *)v1 - 2)
        + 37
        * (*((unsigned __int8 *)v1 - 3)
         + 37
         * (*((unsigned __int8 *)v1 - 4)
          + 37
          * (*((unsigned __int8 *)v1 - 5)
           + 37 * (*((unsigned __int8 *)v1 - 6) + 37 * (*((unsigned __int8 *)v1 - 7) + 37 * (v6 + 37 * v4)))))));
    --v5;
  }
  while ( v5 );
  v7 = RmSvcGlobals;
  v8 = 0LL;
LABEL_6:
  v9 = v4 & (-1LL << (v7[1772] & 0x1F));
  if ( v8 )
    goto LABEL_9;
  v10 = *((_DWORD *)v7 + 443) >> 5;
  if ( v10 )
  {
    v8 = *((_QWORD *)v7 + 222)
       + 8LL
       * ((37
         * (BYTE6(v9)
          + 37
          * (BYTE5(v9)
           + 37
           * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v9)) & (unsigned int)(v10 - 1));
LABEL_9:
    while ( 1 )
    {
      v8 = *(_QWORD *)v8;
      if ( (v8 & 1) != 0 )
        break;
      if ( v9 == ((-1LL << (v7[1772] & 0x1F)) & *(_QWORD *)(v8 + 8)) )
      {
        if ( !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v8, a1) )
          goto LABEL_6;
        if ( v8 )
          return v8;
        return 0LL;
      }
    }
  }
  return 0LL;
}
