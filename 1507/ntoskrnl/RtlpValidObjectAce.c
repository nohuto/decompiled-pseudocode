/*
 * XREFs of RtlpValidObjectAce @ 0x1405848AC
 * Callers:
 *     RtlValidAcl @ 0x1404C9610 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidObjectAce(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v3; // r8
  int v4; // r11d
  int v5; // ecx
  int v6; // r11d
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int8 v9; // al

  v1 = 0LL;
  if ( !a1 )
    return 0;
  v3 = *(unsigned __int16 *)(a1 + 2);
  if ( ((v3 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v3 || (unsigned int)v3 < 0xC )
    return 0;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = v4 & 1;
  if ( (v4 & 1) != 0 )
    v1 = 16LL;
  v6 = v4 & 2;
  if ( v6 )
    v1 = (unsigned int)(v1 + 16);
  if ( v3 >= v1 + 24
    && (v7 = -(__int64)(v5 != 0) & 0x10, v8 = -(__int64)(v6 != 0) & 0x10, *(_BYTE *)(v8 + v7 + a1 + 12) == 1)
    && (v9 = *(_BYTE *)(v8 + v7 + a1 + 13), v9 <= 0xFu) )
  {
    return v3 >= (unsigned __int64)(unsigned int)v1 + 4 * v9 + 8 + 12LL;
  }
  else
  {
    return 0;
  }
}
