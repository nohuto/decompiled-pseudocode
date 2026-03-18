/*
 * XREFs of CmRmIsKCBDeleted @ 0x1403FE220
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpResolveHiveLoadConflict @ 0x1403B57A8 (CmpResolveHiveLoadConflict.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1403FDA60 (CmpFindSubKeyByNumberEx.c)
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 *     CmQueryMultipleValueKey @ 0x1404A8708 (CmQueryMultipleValueKey.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405E1414 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x1403E0784 (CmEqualTrans.c)
 */

bool __fastcall CmRmIsKCBDeleted(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v4; // r11
  char *NextElement; // rax
  __int64 v6; // r10
  int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v8 = 0LL;
  if ( (v2 & 0x20000) != 0 )
    return 1;
  if ( a2 )
  {
    v4 = (_QWORD *)(a1 + 200);
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v4, &v8, 32);
      if ( !NextElement )
        break;
      v7 = *((_DWORD *)NextElement + 17);
      if ( v7 == 2 || v7 == 11 )
        return CmEqualTrans(*((_QWORD *)NextElement + 7), v6) != 0;
    }
  }
  return 0;
}
