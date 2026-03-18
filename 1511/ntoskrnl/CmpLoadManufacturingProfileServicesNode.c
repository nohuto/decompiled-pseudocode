/*
 * XREFs of CmpLoadManufacturingProfileServicesNode @ 0x1407824E8
 * Callers:
 *     CmpFindDrivers @ 0x140754D08 (CmpFindDrivers.c)
 * Callees:
 *     CmpFindSubKeyByName @ 0x1405239F8 (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingProfileNode @ 0x140782448 (CmpLoadManufacturingProfileNode.c)
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
  SubKeyByName = CmpFindSubKeyByName(a1, v11, (const UNICODE_STRING *)&CmpServicesString);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v10);
  if ( SubKeyByName == -1 )
    return 0;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, SubKeyByName, a5);
  *a4 = v9;
  return v9 != 0;
}
