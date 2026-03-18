/*
 * XREFs of mth_Non90DegreeTransformation @ 0x1C001B96C
 * Callers:
 *     scl_InitializeScaling @ 0x1C001B5AC (scl_InitializeScaling.c)
 * Callees:
 *     FixMul @ 0x1C00C947C (FixMul.c)
 */

__int64 __fastcall mth_Non90DegreeTransformation(unsigned int *a1, BOOL *a2, int *a3)
{
  unsigned int v3; // r14d
  unsigned int v5; // edi
  unsigned int v6; // ebp
  unsigned int v8; // esi
  __int64 v9; // r8
  int fixed; // eax
  __int64 v11; // r8
  int v12; // r10d
  int v13; // ebx
  BOOL v14; // r11d
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 result; // rax
  int v19; // r10d
  int v20; // r11d
  int v21; // r11d
  __int64 v22; // r8
  __int64 v23; // r8
  int v24; // r10d
  __int64 v25; // r8
  int v26; // r10d

  v3 = a1[4];
  v5 = *a1;
  v6 = a1[3];
  v8 = a1[1];
  FixMul(v8, v3, a3);
  fixed = FixMul(v5, v6, v9);
  if ( fixed + v12 )
  {
    v13 = 0;
    v21 = 1;
    if ( !v5 || (result = 1LL, !v8) )
      result = 0LL;
    *a2 = result;
    if ( (_DWORD)result
      || (FixMul(v8, v8, v11), result = FixMul(v5, v5, v22), (_DWORD)result + v24 != 0x10000)
      || (FixMul(v5, v3, v23), result = FixMul(v8, v6, v25), v26 - (_DWORD)result != 0x10000) )
    {
      v13 = v21;
    }
  }
  else
  {
    v13 = 0;
    v14 = (v5 || v3) && (v8 || v6);
    *a2 = v14;
    FixMul(v3, v3, v11);
    FixMul(v6, v6, v15);
    FixMul(v8, v8, v16);
    result = FixMul(v5, v5, v17);
    LOBYTE(v13) = (_DWORD)result + v19 != v20;
  }
  *a3 = v13;
  return result;
}
