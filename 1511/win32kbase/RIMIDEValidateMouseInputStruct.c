/*
 * XREFs of RIMIDEValidateMouseInputStruct @ 0x1C00C7CB8
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C7400 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIDEValidateMouseInputStruct(__int64 a1)
{
  int v1; // r8d
  int v3; // ecx
  BOOL v4; // edx

  v1 = *(_DWORD *)(a1 + 12);
  v3 = 0;
  v4 = (v1 & 6) != 6;
  if ( (v1 & 0x18) == 0x18 )
    v4 = 0;
  if ( (v1 & 0x60) == 0x60 )
    v4 = 0;
  if ( (v1 & 0x80) != 0 )
    v3 = 1;
  if ( (v1 & 0x100) != 0 )
    ++v3;
  if ( (v1 & 0x800) != 0 )
    ++v3;
  if ( (v1 & 0x1000) != 0 )
    ++v3;
  if ( v3 > 1 )
    v4 = 0;
  if ( *(_DWORD *)(a1 + 16)
    && *(_DWORD *)(a1 + 16) > (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
  {
    v4 = 0;
  }
  if ( *(_QWORD *)(a1 + 24) )
    return 0;
  return v4;
}
