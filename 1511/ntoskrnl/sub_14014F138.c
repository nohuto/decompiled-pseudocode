/*
 * XREFs of sub_14014F138 @ 0x14014F138
 * Callers:
 *     sub_14014F218 @ 0x14014F218 (sub_14014F218.c)
 *     sub_14014F9C8 @ 0x14014F9C8 (sub_14014F9C8.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140228000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402347EC @ 0x1402347EC (sub_1402347EC.c)
 *     sub_14072DC88 @ 0x14072DC88 (sub_14072DC88.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_14014F138(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  __int64 v6; // rax
  int v7; // ecx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v10[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 936))(a2, a3, v10);
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = a4 - (_QWORD)v10 + 4 * i;
    v7 = v10[i] ^ v10[i + 4];
    *(_DWORD *)((char *)v10 + v6) = v7;
  }
  result = *(_BYTE *)(a4 + 15);
  for ( j = result; ; j ^= result )
  {
    result >>= 7;
    if ( !result )
      break;
  }
  *(_BYTE *)(a4 + 15) = j & 0x7F;
  return result;
}
