/*
 * XREFs of DNG_StretchCol @ 0x1C00C1918
 * Callers:
 *     RenderNineGridInternal @ 0x1C00C2240 (RenderNineGridInternal.c)
 * Callees:
 *     DNG_DrawRow @ 0x1C00C2FA0 (DNG_DrawRow.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C013E0F4 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 */

int __fastcall DNG_StretchCol(struct _DNGINTERNALDATA *a1, int *a2)
{
  __int64 v2; // r15
  int v4; // r10d
  __int64 v5; // r12
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // r13
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rsi
  int v15; // [rsp+70h] [rbp+8h]
  int v16; // [rsp+78h] [rbp+10h]
  __int64 v17; // [rsp+80h] [rbp+18h]

  v4 = *((_DWORD *)a1 + 4);
  v5 = *((_QWORD *)a1 + 4);
  v6 = a2[1];
  v7 = 0;
  v17 = *((_QWORD *)a1 + 1);
  v2 = v17;
  v8 = v17 - 4LL * v4 * a2[6];
  v15 = a2[3];
  v9 = v17 - 4LL * v4 * a2[7];
  v16 = a2[2];
  v10 = *a2;
  v11 = 1;
  LODWORD(v12) = *((_DWORD *)a1 + 10) * v10;
  v13 = v5 - 4LL * (int)v12;
  if ( v8 != v9 )
  {
    do
    {
      if ( v11 )
      {
        *((_QWORD *)a1 + 1) = v8;
        *((_QWORD *)a1 + 4) = v13;
        DNG_DrawRow(a1);
      }
      else
      {
        LODWORD(v12) = DNG_CopyMemory(
                         a1,
                         (void *)(v8 + 4LL * *(int *)a1),
                         (void *)(v8 + 4 * (*(int *)a1 + (__int64)v4)),
                         4 * *((_DWORD *)a1 + 6));
        if ( !(_DWORD)v12 )
          break;
      }
      v11 = (v6 + v16 < v6) + v15;
      v7 += v11;
      if ( v7 < *((_DWORD *)a1 + 12) )
        v13 -= 4LL * *((_DWORD *)a1 + 10) * v11;
      v4 = *((_DWORD *)a1 + 4);
      v6 += v16;
      v12 = -(__int64)v4;
      v8 -= 4LL * v4;
    }
    while ( v8 != v9 );
    v2 = v17;
  }
  *((_QWORD *)a1 + 1) = v2;
  *((_QWORD *)a1 + 4) = v5;
  return v12;
}
