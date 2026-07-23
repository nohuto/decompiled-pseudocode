/*
 * XREFs of sub_1401588B8 @ 0x1401588B8
 * Callers:
 *     sub_140158998 @ 0x140158998 (sub_140158998.c)
 *     sub_14015936C @ 0x14015936C (sub_14015936C.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140242000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_14024FE34 @ 0x14024FE34 (sub_14024FE34.c)
 *     sub_140777D18 @ 0x140777D18 (sub_140777D18.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_1401588B8(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  __int64 v6; // rax
  int v7; // ecx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v10[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 984))(a2, a3, v10);
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
