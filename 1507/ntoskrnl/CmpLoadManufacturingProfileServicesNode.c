/*
 * XREFs of CmpLoadManufacturingProfileServicesNode @ 0x1407F8A7C
 * Callers:
 *     CmpFindDrivers @ 0x1407BB424 (CmpFindDrivers.c)
 * Callees:
 *     CmpFindSubKeyByName @ 0x140590DF0 (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingProfileNode @ 0x1407F89DC (CmpLoadManufacturingProfileNode.c)
 */

bool __fastcall CmpLoadManufacturingProfileServicesNode(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        __int64 *a4,
        __int64 a5)
{
  unsigned int SubKeyByName; // edi
  __int64 v9; // rax
  int v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v10 = -1;
  if ( !CmpLoadManufacturingProfileNode(a1, a2, a3, &v11, (__int64)&v10) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(a1, v11, (unsigned __int16 *)&CmpServicesString);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v10);
  if ( SubKeyByName == -1 )
    return 0;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, SubKeyByName, a5);
  *a4 = v9;
  return v9 != 0;
}
