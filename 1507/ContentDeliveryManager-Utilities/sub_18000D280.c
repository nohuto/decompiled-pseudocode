/*
 * XREFs of sub_18000D280 @ 0x18000D280
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BC34 @ 0x18000BC34 (sub_18000BC34.c)
 *     sub_18000D108 @ 0x18000D108 (sub_18000D108.c)
 */

int __fastcall sub_18000D280(int *a1)
{
  _QWORD *v2; // rax
  _DWORD *v3; // rdx
  __int64 v4; // rcx

  v2 = sub_18000BC34();
  v3 = (_DWORD *)v2[1];
  if ( v3 && *v3 )
  {
    sub_18000BC34();
    LODWORD(v2) = sub_18000D108(v4, a1);
  }
  return (int)v2;
}
