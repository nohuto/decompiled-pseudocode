/*
 * XREFs of CmpForceInvalidateAllHigherLayerKcbs @ 0x14060BC74
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpForceInvalidateAllHigherLayerKcbs(__int64 a1, int a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = a2;
  CmpEnumerateAllHigherLayerKcbs(
    a1,
    (__int64)CmpForceInvalidatePreCallback,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpForceInvalidatePostCallback,
    (__int64)&v7,
    1,
    1);
  *a3 = v8;
  *a4 = HIDWORD(v7);
  return (unsigned int)v7;
}
