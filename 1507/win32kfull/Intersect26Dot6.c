/*
 * XREFs of Intersect26Dot6 @ 0x1C02D9084
 * Callers:
 *     EmboldPoint @ 0x1C02D8DDC (EmboldPoint.c)
 * Callees:
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 */

unsigned __int64 __fastcall Intersect26Dot6(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  int v7; // ebp
  int v8; // r12d
  int v9; // r11d
  int v10; // r13d
  int v11; // edi
  unsigned __int64 result; // rax
  int v13; // edi
  int v14; // esi
  int v15; // edi
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // r10d
  int v20; // eax
  int v21; // r11d
  int v22; // r10d
  int v23; // eax
  int v24; // r10d
  __int64 v25; // r11
  __int64 v26; // [rsp+68h] [rbp+10h]
  unsigned __int64 v27; // [rsp+70h] [rbp+18h]

  v27 = a3;
  v26 = a2;
  v5 = HIDWORD(a3);
  v6 = HIDWORD(a1);
  v7 = a2 - a1;
  v8 = a4 - a3;
  v9 = a1;
  v10 = a3;
  v11 = HIDWORD(a2) - HIDWORD(a1);
  if ( HIDWORD(a2) == HIDWORD(a1) )
  {
    if ( !v8 )
    {
      result = (unsigned __int64)a5;
      *a5 = a3;
      a5[1] = HIDWORD(a1);
      return result;
    }
    v13 = HIDWORD(a4) - HIDWORD(a3);
    v14 = HIDWORD(a3) - HIDWORD(a1);
  }
  else
  {
    if ( v7 )
    {
      v16 = a2 - a1;
      if ( v7 < 0 )
        v16 = -v7;
      v17 = HIDWORD(a2) - HIDWORD(a1);
      if ( v11 < 0 )
        v17 = HIDWORD(a1) - HIDWORD(a2);
      if ( v16 < v17 )
      {
        v20 = CompDiv(v11, v7 * (__int64)(HIDWORD(a3) - (int)v6));
        v14 = v21 - v10 + v20;
        v15 = v8 - CompDiv(v11, v7 * (__int64)v22);
      }
      else
      {
        v14 = HIDWORD(a3) - v6 - CompDiv(v7, v11 * (__int64)((int)a3 - v9));
        v18 = CompDiv(v7, v11 * (__int64)v8);
        v15 = v18 - v19;
      }
      LODWORD(a2) = v26;
      LODWORD(a3) = v27;
      goto LABEL_18;
    }
    if ( HIDWORD(a4) == HIDWORD(a3) )
    {
      result = (unsigned __int64)a5;
      *a5 = a1;
      a5[1] = HIDWORD(a3);
      return result;
    }
    v13 = a4 - a3;
    v14 = a3 - a1;
  }
  v15 = -v13;
LABEL_18:
  v23 = v15;
  if ( v15 < 0 )
    v23 = -v15;
  if ( v23 <= 16 )
  {
    result = (unsigned int)(((int)a3 + (int)a2) >> 1);
    a5[1] = (HIDWORD(v26) + HIDWORD(v27)) >> 1;
    *a5 = result;
  }
  else
  {
    *a5 = v10 + CompDiv(v15, v14 * (__int64)v8);
    result = (unsigned int)v5 + (unsigned int)CompDiv(v15, v14 * (__int64)v24);
    *(_DWORD *)(v25 + 4) = result;
  }
  return result;
}
