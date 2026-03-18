/*
 * XREFs of CmpGetSubKeyCountForKeyNodeStack @ 0x14060A060
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6D2C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140609FD4 (CmpGetSubKeyCountForKcbStack.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     CmpKeyEnumStackAdvance @ 0x14060A128 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x14060A308 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x14060A67C (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14060A760 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BCE4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKeyNodeStack(unsigned __int16 *a1, int *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 i; // rdx
  __int64 EntryAtLayerHeight; // rax
  int j; // edi
  int v9; // ebx
  int v11; // eax
  _BYTE v12[352]; // [rsp+20h] [rbp-188h] BYREF

  CmpKeyEnumStackInitialize(v12);
  for ( i = *a1; ; LOWORD(i) = i - 1 )
  {
    if ( (__int16)i <= 0 )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, 0LL, v4, v5);
      j = *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 20LL)
        + *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 24LL);
LABEL_6:
      *a2 = j;
      v9 = 0;
      goto LABEL_7;
    }
    if ( *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, i, v4, v5) + 16) )
      break;
  }
  v9 = CmpKeyEnumStackStartFromKeyNodeStack(v12, a1);
  if ( v9 >= 0 )
  {
    for ( j = 0; ; ++j )
    {
      v11 = CmpKeyEnumStackAdvance(v12);
      v9 = v11;
      if ( v11 == -2147483622 )
        break;
      if ( v11 < 0 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  CmpKeyEnumStackCleanup(v12);
  return (unsigned int)v9;
}
