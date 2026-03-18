/*
 * XREFs of DNG_InitStretch @ 0x1C00C2FA8
 * Callers:
 *     RenderNineGridInternal @ 0x1C00C1EE0 (RenderNineGridInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DNG_InitStretch(__int64 a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // r11
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  int v9; // edi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // r10
  bool v14; // cf
  unsigned __int64 v15; // rcx

  *(_DWORD *)(a1 + 28) = a5;
  v6 = a4;
  *(_DWORD *)(a1 + 24) = a4;
  v7 = (((unsigned __int64)a3 << 32) - 1) / a2 + 1;
  result = ((unsigned __int64)a3 << 32) / a2;
  v9 = (((unsigned __int64)a3 << 32) - 1) / a2 + 1;
  v10 = HIDWORD(v7);
  v11 = result >> 1;
  *(_QWORD *)(a1 + 8) = v7;
  v12 = result >> 33;
  if ( (int)v6 > 5 )
  {
    v15 = (unsigned int)v11 + v6 * (unsigned int)v7;
    LODWORD(v11) = v11 + v6 * v9;
    result = HIDWORD(v15);
    LODWORD(v12) = HIDWORD(v15) + v6 * v10 + v12;
  }
  else if ( (int)v6 > 0 )
  {
    v13 = (unsigned int)v6;
    do
    {
      v14 = (int)v11 + v9 < (unsigned int)v11;
      LODWORD(v11) = v11 + v9;
      result = HIDWORD(v7) + (unsigned int)v14;
      LODWORD(v12) = result + v12;
      --v13;
    }
    while ( v13 );
  }
  *(_DWORD *)a1 = v12;
  *(_DWORD *)(a1 + 4) = v11;
  return result;
}
