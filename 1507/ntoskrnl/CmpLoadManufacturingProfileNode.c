/*
 * XREFs of CmpLoadManufacturingProfileNode @ 0x1407F89DC
 * Callers:
 *     CmpLoadManufacturingProfileServicesNode @ 0x1407F8A7C (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     CmpFindSubKeyByName @ 0x140590DF0 (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingModeNode @ 0x1407F8920 (CmpLoadManufacturingModeNode.c)
 */

bool __fastcall CmpLoadManufacturingProfileNode(__int64 a1, __int64 a2, const WCHAR *a3, __int64 *a4, __int64 a5)
{
  unsigned int SubKeyByName; // edi
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-20h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = -1;
  if ( !a3 || !CmpLoadManufacturingModeNode(a1, a2, &v11, (__int64)&v13) )
    return 0;
  if ( RtlInitUnicodeStringEx(&DestinationString, a3) < 0 )
  {
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v13);
    return 0;
  }
  SubKeyByName = CmpFindSubKeyByName(a1, v11, &DestinationString.Length);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v13);
  if ( SubKeyByName == -1 )
    return 0;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, SubKeyByName, a5);
  *a4 = v10;
  return v10 != 0;
}
