/*
 * XREFs of RtlpValidObjectAce @ 0x140685240
 * Callers:
 *     RtlValidAcl @ 0x140420800 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidObjectAce(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v4; // rdx
  int v5; // r11d
  int v6; // ecx
  int v7; // r11d
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 v10; // al

  v1 = 0LL;
  if ( !a1 )
    return 0;
  v4 = *(unsigned __int16 *)(a1 + 2);
  if ( ((v4 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v4 || (unsigned int)v4 < 0xC )
    return 0;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = v5 & 1;
  if ( (v5 & 1) != 0 )
    v1 = 16LL;
  v7 = v5 & 2;
  if ( v7 )
    v1 = (unsigned int)(v1 + 16);
  if ( v4 >= v1 + 24
    && (v8 = -(__int64)(v6 != 0) & 0x10, v9 = -(__int64)(v7 != 0) & 0x10, *(_BYTE *)(v9 + v8 + a1 + 12) == 1)
    && (v10 = *(_BYTE *)(v9 + v8 + a1 + 13), v10 <= 0xFu) )
  {
    return v4 >= (unsigned __int64)(unsigned int)v1 + 4 * v10 + 8 + 12LL;
  }
  else
  {
    return 0;
  }
}
