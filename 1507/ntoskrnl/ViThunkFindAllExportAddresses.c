/*
 * XREFs of ViThunkFindAllExportAddresses @ 0x1407CC064
 * Callers:
 *     VfThunkFindExportAddressAllTables @ 0x1407CBFD0 (VfThunkFindExportAddressAllTables.c)
 * Callees:
 *     ViThunkFindExportAddress @ 0x1407CC0D0 (ViThunkFindExportAddress.c)
 */

void __fastcall ViThunkFindAllExportAddresses(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  _QWORD *i; // rbx
  __int64 ExportAddress; // rax
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  for ( i = a2; *i; ++v4 )
  {
    ExportAddress = ViThunkFindExportAddress(a1, *i, &v10);
    if ( v10 )
    {
      _bittestandreset(*(signed __int32 **)(a4 + 8), v4);
      i[2] = 0LL;
    }
    else
    {
      i[2] = ExportAddress;
    }
    i = (_QWORD *)((char *)i + a3);
  }
}
