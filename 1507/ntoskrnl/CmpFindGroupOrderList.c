/*
 * XREFs of CmpFindGroupOrderList @ 0x1407BAB2C
 * Callers:
 *     CmpFindDrivers @ 0x1407BB424 (CmpFindDrivers.c)
 * Callees:
 *     CmpFindSubKeyByName @ 0x140590DF0 (CmpFindSubKeyByName.c)
 */

__int64 __fastcall CmpFindGroupOrderList(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int SubKeyByName; // ebx
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = -1;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v8);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  SubKeyByName = CmpFindSubKeyByName(a1, v3, (unsigned __int16 *)&CmpControlString);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v8);
  if ( SubKeyByName == -1 )
    return 0xFFFFFFFFLL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, SubKeyByName, &v8);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = CmpFindSubKeyByName(a1, v5, (unsigned __int16 *)&CmpGroupOrderListString);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v8);
  return v6;
}
