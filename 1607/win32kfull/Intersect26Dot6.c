/*
 * XREFs of Intersect26Dot6 @ 0x1C02DEEBC
 * Callers:
 *     EmboldPoint @ 0x1C02DEC14 (EmboldPoint.c)
 * Callees:
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

unsigned __int64 __fastcall Intersect26Dot6(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int64 v5; // rbp
  int v6; // r12d
  int v7; // r14d
  int v8; // r9d
  int v9; // r13d
  int v10; // r15d
  unsigned __int64 result; // rax
  int v12; // esi
  int v13; // edi
  int v14; // edi
  int v15; // eax
  int v16; // r10d
  int v17; // eax
  int v18; // r11d
  int v19; // r10d
  int v20; // r10d
  __int64 v21; // r11
  unsigned __int64 v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
  v5 = HIDWORD(a3);
  v6 = a2 - a1;
  v7 = a4 - a3;
  v8 = a2;
  v9 = a3;
  v10 = HIDWORD(a2) - HIDWORD(a1);
  if ( HIDWORD(a2) == HIDWORD(a1) )
  {
    if ( !v7 )
    {
      result = (unsigned __int64)a5;
      *a5 = a3;
      a5[1] = HIDWORD(a1);
      return result;
    }
    v12 = HIDWORD(a3) - HIDWORD(a1);
    v13 = HIDWORD(a4) - HIDWORD(a3);
  }
  else
  {
    if ( v6 )
    {
      if ( (int)abs32(v6) < (int)abs32(v10) )
      {
        v17 = CompDiv(v10, v6 * (__int64)(HIDWORD(a3) - HIDWORD(a1)));
        v12 = v18 - v9 + v17;
        v14 = v7 - CompDiv(v10, v6 * (__int64)v19);
      }
      else
      {
        v12 = HIDWORD(a3) - HIDWORD(a1) - CompDiv(v6, v10 * (__int64)((int)a3 - (int)a1));
        v15 = CompDiv(v6, v10 * (__int64)v7);
        v14 = v15 - v16;
      }
      v8 = a2;
      LODWORD(a3) = v23;
      goto LABEL_14;
    }
    if ( HIDWORD(a4) == HIDWORD(a3) )
    {
      result = (unsigned __int64)a5;
      *a5 = a1;
      a5[1] = HIDWORD(a3);
      return result;
    }
    v13 = v7;
    v12 = a3 - a1;
  }
  v14 = -v13;
LABEL_14:
  if ( (int)abs32(v14) <= 16 )
  {
    result = (unsigned int)(((int)a3 + v8) >> 1);
    *a5 = result;
    a5[1] = (HIDWORD(a2) + HIDWORD(v23)) >> 1;
  }
  else
  {
    *a5 = v9 + CompDiv(v14, v12 * (__int64)v7);
    result = (unsigned int)v5 + (unsigned int)CompDiv(v14, v12 * (__int64)v20);
    *(_DWORD *)(v21 + 4) = result;
  }
  return result;
}
