/*
 * XREFs of CmpGetValueCountForKeyNodeStack @ 0x1401B5A7C
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6C10 (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401B5B60 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackAdvance @ 0x14060B534 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14060B640 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x14060B6C0 (CmpValueEnumStackInitialize.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BD98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpGetValueCountForKeyNodeStack(unsigned __int16 *a1, _DWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 i; // rdx
  __int64 v7; // rdx
  int j; // edi
  __int64 v9; // r8
  int v10; // ebx
  _BYTE v12[96]; // [rsp+20h] [rbp-88h] BYREF

  CmpValueEnumStackInitialize(v12);
  for ( i = *a1; ; LOWORD(i) = i - 1 )
  {
    if ( (__int16)i <= 0 )
    {
      j = *(_DWORD *)(*(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, 0LL, v4, v5) + 16) + 36LL);
LABEL_6:
      *a2 = j;
      v10 = 0;
      goto LABEL_7;
    }
    if ( *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, i, v4, v5) + 16) )
      break;
  }
  v10 = CmpValueEnumStackStartFromKeyNodeStack(v12, a1);
  if ( v10 >= 0 )
  {
    for ( j = 0; ; ++j )
    {
      v10 = CmpValueEnumStackAdvance(v12);
      if ( v10 == -2147483622 )
        break;
      if ( v10 < 0 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  CmpValueEnumStackCleanup(v12, v7, v9);
  return (unsigned int)v10;
}
