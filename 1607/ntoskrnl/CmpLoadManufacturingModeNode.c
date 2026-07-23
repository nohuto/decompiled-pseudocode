/*
 * XREFs of CmpLoadManufacturingModeNode @ 0x1407CDB80
 * Callers:
 *     CmpLoadManufacturingProfileNode @ 0x1407CDC40 (CmpLoadManufacturingProfileNode.c)
 * Callees:
 *     CmpFindSubKeyByName @ 0x1405603A4 (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadManufacturingModeNode(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned int SubKeyByName; // edi
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rax
  _DWORD v13[10]; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]

  v13[0] = -1;
  v14 = -1;
  v13[1] = 0;
  v15 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v14);
  if ( !v7 )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(a1, v7, (__m128i *)&CmpControlString);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v14);
  if ( SubKeyByName == -1 )
    return 0;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, SubKeyByName, v13);
  if ( !v10 )
    return 0;
  v11 = CmpFindSubKeyByName(a1, v10, (__m128i *)L"\"$");
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
  if ( v11 == -1 )
    return 0;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, v11, a4);
  *a3 = v12;
  return v12 != 0;
}
