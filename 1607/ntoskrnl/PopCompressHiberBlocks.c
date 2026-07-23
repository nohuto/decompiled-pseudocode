/*
 * XREFs of PopCompressHiberBlocks @ 0x1403CD2CC
 * Callers:
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 * Callees:
 *     PopGetNextTable @ 0x1401139EC (PopGetNextTable.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopCountDataAsProduced @ 0x1403CD378 (PopCountDataAsProduced.c)
 *     PopAddPagesToCompressedPageSet @ 0x1403CD4F8 (PopAddPagesToCompressedPageSet.c)
 */

__int64 __fastcall PopCompressHiberBlocks(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-188h]
  _BYTE v11[16]; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v12[24]; // [rsp+50h] [rbp-158h] BYREF
  __int64 v13; // [rsp+68h] [rbp-140h]
  _BYTE v14[128]; // [rsp+100h] [rbp-A8h] BYREF

  while ( 1 )
  {
    result = PopGetNextTable(a1, (unsigned __int64)v11, (__int64)v14, (__int64)v12, a3, *(_QWORD *)(a2 + 8));
    v7 = result;
    if ( !result )
      break;
    v8 = v13;
    *(_QWORD *)(a2 + 56) += result;
    LOBYTE(v10) = a3;
    v9 = PopAddPagesToCompressedPageSet(a1, a2, v11, v8, v10, result, 0LL);
    PopCountDataAsProduced(a2, v9, v11, v14, v7, 0);
  }
  return result;
}
