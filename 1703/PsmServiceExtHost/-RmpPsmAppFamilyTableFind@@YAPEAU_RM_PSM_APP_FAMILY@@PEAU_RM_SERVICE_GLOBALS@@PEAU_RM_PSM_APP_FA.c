/*
 * XREFs of ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800169D0
 * Callers:
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D74C (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180016718 (-RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180016B8C (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 */

struct _RM_PSM_APP_FAMILY *__fastcall RmpPsmAppFamilyTableFind(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_APP_FAMILY_ID *a2)
{
  WCHAR *v2; // rsi
  WCHAR *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // r11d
  __int64 v11; // r9
  WCHAR v13; // [rsp+40h] [rbp+8h]

  v2 = (WCHAR *)((char *)a2 + 464);
  v5 = (WCHAR *)a2;
  v6 = 314159LL;
  if ( a2 < (struct _RM_PSM_APP_FAMILY_ID *)((char *)a2 + 464) )
  {
    do
    {
      v13 = RtlUpcaseUnicodeChar(*v5++);
      v6 = HIBYTE(v13) + 37 * ((unsigned __int8)v13 + 37 * v6);
    }
    while ( v5 < v2 );
  }
  v7 = 9LL;
  do
  {
    v8 = *(unsigned __int8 *)v2;
    v2 += 4;
    v6 = *((unsigned __int8 *)v2 - 1)
       + 37
       * (*((unsigned __int8 *)v2 - 2)
        + 37
        * (*((unsigned __int8 *)v2 - 3)
         + 37
         * (*((unsigned __int8 *)v2 - 4)
          + 37
          * (*((unsigned __int8 *)v2 - 5)
           + 37 * (*((unsigned __int8 *)v2 - 6) + 37 * (*((unsigned __int8 *)v2 - 7) + 37 * (v8 + 37 * v6)))))));
    --v7;
  }
  while ( v7 );
  v9 = 0LL;
LABEL_6:
  v10 = *((_DWORD *)a1 + 301);
  v11 = v6 & (-1LL << (*((_BYTE *)a1 + 1204) & 0x1F));
  if ( v9 )
    goto LABEL_9;
  if ( v10 >= 0x20 )
  {
    v9 = *((_QWORD *)a1 + 151)
       + 8LL
       * ((37
         * (BYTE6(v11)
          + 37
          * (BYTE5(v11)
           + 37
           * (BYTE4(v11)
            + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
         + HIBYTE(v11)) & ((v10 >> 5) - 1));
LABEL_9:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v11 == ((-1LL << (*((_BYTE *)a1 + 1204) & 0x1F)) & *(_QWORD *)(v9 + 8)) )
      {
        if ( !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v9, a2) )
          goto LABEL_6;
        return (struct _RM_PSM_APP_FAMILY *)v9;
      }
    }
  }
  return 0LL;
}
