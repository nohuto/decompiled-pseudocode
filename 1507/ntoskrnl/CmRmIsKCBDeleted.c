/*
 * XREFs of CmRmIsKCBDeleted @ 0x1404C69A0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140429678 (CmQueryMultipleValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404C6BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140657138 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmEqualTrans @ 0x140449EE8 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 */

bool __fastcall CmRmIsKCBDeleted(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // r11
  __int64 NextElement; // rax
  __int64 v6; // r10
  int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v8 = 0LL;
  if ( (v2 & 0x20000) != 0 )
    return 1;
  if ( a2 )
  {
    v4 = a1 + 200;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v4, &v8, 32LL);
      if ( !NextElement )
        break;
      v7 = *(_DWORD *)(NextElement + 68);
      if ( v7 == 2 || v7 == 11 )
        return CmEqualTrans(*(_QWORD *)(NextElement + 56), v6) != 0;
    }
  }
  return 0;
}
