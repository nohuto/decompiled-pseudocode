/*
 * XREFs of PsPicoSystemCallDispatch @ 0x1406C56C4
 * Callers:
 *     KiSystemCall64 @ 0x140193800 (KiSystemCall64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  qword_14032C388(&v3);
  return *(_QWORD *)(a1 + 48);
}
