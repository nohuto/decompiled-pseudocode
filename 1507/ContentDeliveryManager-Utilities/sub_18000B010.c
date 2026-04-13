/*
 * XREFs of sub_18000B010 @ 0x18000B010
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021EDC @ 0x180021EDC (sub_180021EDC.c)
 */

__int64 __fastcall sub_18000B010(__int64 a1, CHAR a2)
{
  int v2; // eax
  WCHAR v3; // cx
  WCHAR v5; // [rsp+40h] [rbp+8h] BYREF
  CHAR v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+50h] [rbp+18h]

  v7 = 0;
  v6 = a2;
  v2 = sub_180021EDC(&v5, &v6, a1 + 48);
  v3 = v5;
  if ( v2 < 0 )
    return (WCHAR)-1;
  return v3;
}
