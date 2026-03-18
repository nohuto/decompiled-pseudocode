/*
 * XREFs of scl_ScaleAdvanceWidth @ 0x1C00E5008
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00AC4E8 (fs_FindBitMapSize.c)
 * Callees:
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 */

__int64 __fastcall scl_ScaleAdvanceWidth(__int64 a1, __int64 a2, __int16 a3, int a4, __int16 a5, __int64 a6)
{
  __int64 result; // rax
  _DWORD *v7; // r10
  __int64 v8; // r11
  int v9; // eax
  int *v10; // r10
  __int64 v11; // r11
  int v12; // edx
  int fixed; // eax
  int *v14; // r10
  __int64 v15; // r11
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp+8h]

  if ( !a4 )
  {
    LODWORD(v17) = a3 << 16;
    HIDWORD(v17) = a3 >> 15;
    v9 = CompDiv(a5, v17);
    *v10 = v9;
    v12 = *(_DWORD *)(v11 + 384);
    if ( v12 != 0x10000 && *(_WORD *)(v11 + 446) )
    {
      fixed = FixMul(v9, v12);
      *v14 = fixed;
      if ( fixed && *(_WORD *)(v15 + 446) )
        *v14 = fixed + 0x10000;
      v16 = CompDiv(*(_DWORD *)(v15 + 384), (__int64)*v14 << 16);
    }
    else
    {
      if ( !v9 || !*(_WORD *)(v11 + 446) )
        return mth_FixXYMul(v10, v10 + 1, a6);
      v16 = v9 + 0x10000;
    }
    *v10 = v16;
    return mth_FixXYMul(v10, v10 + 1, a6);
  }
  result = CompDiv(a5, a3 * (__int64)*(int *)(a1 + 384));
  *v7 = result;
  if ( (_DWORD)result )
  {
    if ( *(_WORD *)(v8 + 446) )
    {
      result = (unsigned int)(result + 0x10000);
      *v7 = result;
    }
  }
  return result;
}
