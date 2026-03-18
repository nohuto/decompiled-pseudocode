/*
 * XREFs of sub_14017D2FC @ 0x14017D2FC
 * Callers:
 *     sub_14017D3DC @ 0x14017D3DC (sub_14017D3DC.c)
 *     sub_14017DB84 @ 0x14017DB84 (sub_14017DB84.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140277000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140283BBC @ 0x140283BBC (sub_140283BBC.c)
 *     sub_14079AC8C @ 0x14079AC8C (sub_14079AC8C.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_14017D2FC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  __int64 v6; // rax
  int v7; // ecx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v10[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 928))(a2, a3, v10);
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
