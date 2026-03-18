/*
 * XREFs of scl_ScaleBack @ 0x1C01480E4
 * Callers:
 *     scl_CalcComponentOffset @ 0x1C00ADBAC (scl_CalcComponentOffset.c)
 *     scl_ScaleBackCurrentCharPoints @ 0x1C0147FE0 (scl_ScaleBackCurrentCharPoints.c)
 *     scl_ScaleBackCurrentPhantomPoints @ 0x1C0148060 (scl_ScaleBackCurrentPhantomPoints.c)
 * Callees:
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 */

void __fastcall scl_ScaleBack(int *a1, __int64 a2, __int64 a3, _DWORD *a4, int a5)
{
  _DWORD *v5; // r10
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // r11
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // r10
  __int64 v12; // [rsp+30h] [rbp+8h]

  v5 = a4;
  v6 = a5;
  v7 = *a1 >> 6;
  if ( a5 > 0 )
  {
    v8 = a3 - (_QWORD)a4;
    do
    {
      v9 = *(_DWORD *)((char *)v5 + v8);
      LODWORD(v12) = v9 << 16;
      HIDWORD(v12) = v9 >> 16;
      v10 = CompDiv(v7, v12);
      *v11 = v10;
      v5 = v11 + 1;
      --v6;
    }
    while ( v6 );
  }
}
