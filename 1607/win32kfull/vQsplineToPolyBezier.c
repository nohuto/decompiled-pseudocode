/*
 * XREFs of vQsplineToPolyBezier @ 0x1C024293C
 * Callers:
 *     bGeneratePath @ 0x1C0241E7C (bGeneratePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vQsplineToPolyBezier(int a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  int v6; // r9d
  int v7; // ebx
  unsigned int v8; // ecx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // [rsp+18h] [rbp+10h]

  v6 = HIDWORD(*a2);
  v7 = *a2;
  v8 = a1 - 1;
  if ( v8 )
  {
    v9 = v8;
    do
    {
      *(_DWORD *)a4 = (v7 + 2 * (*a3 + 1)) / 3;
      *(_DWORD *)(a4 + 4) = (v6 + 2 * (a3[1] + 1)) / 3;
      v7 = (*a3 + a3[2] + 1) / 2;
      LODWORD(v13) = v7;
      v6 = (a3[1] + 1 + a3[3]) / 2;
      HIDWORD(v13) = v6;
      *(_DWORD *)(a4 + 8) = (v7 + 2 * (*a3 + 1)) / 3;
      v10 = a3[1];
      a3 += 2;
      *(_DWORD *)(a4 + 12) = (v6 + 2 * (v10 + 1)) / 3;
      *(_QWORD *)(a4 + 16) = v13;
      a4 += 24LL;
      --v9;
    }
    while ( v9 );
  }
  *(_DWORD *)a4 = (v7 + 2 * (*a3 + 1)) / 3;
  *(_DWORD *)(a4 + 4) = (v6 + 2 * (a3[1] + 1)) / 3;
  v11 = *((_QWORD *)a3 + 1);
  *(_DWORD *)(a4 + 8) = ((int)v11 + 2 + 2 * *a3) / 3;
  result = (unsigned int)((unsigned __int64)(1431655766LL * (HIDWORD(v11) + 2 + 2 * a3[1])) >> 32) >> 31;
  *(_DWORD *)(a4 + 12) = (HIDWORD(v11) + 2 + 2 * a3[1]) / 3;
  *(_QWORD *)(a4 + 16) = v11;
  return result;
}
