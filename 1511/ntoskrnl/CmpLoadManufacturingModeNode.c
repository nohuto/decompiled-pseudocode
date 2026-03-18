/*
 * XREFs of CmpLoadManufacturingModeNode @ 0x14078238C
 * Callers:
 *     CmpLoadManufacturingProfileNode @ 0x140782448 (CmpLoadManufacturingProfileNode.c)
 * Callees:
 *     CmpFindSubKeyByName @ 0x1405239F8 (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadManufacturingModeNode(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned int SubKeyByName; // edi
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rax
  _DWORD v13[6]; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v13[0] = -1;
  v14 = -1;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v14);
  if ( !v7 )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(a1, v7, (const UNICODE_STRING *)&CmpControlString);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v14);
  if ( SubKeyByName == -1 )
    return 0;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, SubKeyByName, v13);
  if ( !v10 )
    return 0;
  v11 = CmpFindSubKeyByName(a1, v10, (const UNICODE_STRING *)L"\"$");
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
  if ( v11 == -1 )
    return 0;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, v11, a4);
  *a3 = v12;
  return v12 != 0;
}
