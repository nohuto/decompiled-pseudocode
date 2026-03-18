/*
 * XREFs of _TTIntersectSegmentAndLine @ 0x1C024CB10
 * Callers:
 *     _TTAddLineAndSegmentIntersection @ 0x1C024C7EC (_TTAddLineAndSegmentIntersection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TTIntersectSegmentAndLine(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  int v6; // edi
  int v7; // r15d
  int v8; // r10d
  int v9; // r11d
  int v10; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // r10d
  int v14; // edi
  int v15; // r11d
  unsigned int v16; // ebx
  int v17; // ebx
  int v19; // [rsp+48h] [rbp+18h]

  v19 = a3;
  v5 = a2 - a1;
  v6 = a3 - a1;
  v7 = HIDWORD(a2) - HIDWORD(a1);
  LODWORD(a3) = 0;
  v8 = v6 * (HIDWORD(a4) - HIDWORD(a1)) - (HIDWORD(a3) - HIDWORD(a1)) * (a4 - a1);
  v9 = (v19 - a2) * (HIDWORD(a4) - HIDWORD(a2)) - (a4 - a2) * (HIDWORD(a3) - HIDWORD(a2));
  if ( v8 )
  {
    if ( !v9 )
    {
      *(_QWORD *)a5 = a2;
      goto LABEL_6;
    }
    if ( v8 <= 0 )
      v10 = (v8 >= 0) - 1;
    else
      v10 = 1;
    if ( v9 <= 0 )
      v11 = (v9 >= 0) - 1;
    else
      v11 = 1;
    if ( v10 != v11 )
    {
      v12 = v5 * v8;
      v13 = v7 * v8;
      *(_DWORD *)a5 = v12;
      v14 = v5 * (HIDWORD(a4) - HIDWORD(a3)) + v7 * (v6 - (a4 - a1));
      *(_DWORD *)(a5 + 4) = v13;
      if ( v12 <= 0 )
        v15 = (v12 >= 0) - 1;
      else
        v15 = 1;
      v16 = abs32(v14 / 2);
      *(_DWORD *)a5 = a1 + (int)(v12 + v15 * v16) / v14;
      if ( v13 <= 0 )
      {
        LOBYTE(a3) = v13 >= 0;
        LODWORD(a3) = a3 - 1;
      }
      else
      {
        LODWORD(a3) = 1;
      }
      v17 = a3 * v16;
      LODWORD(a3) = 1;
      *(_DWORD *)(a5 + 4) = HIDWORD(a1) + (v13 + v17) / v14;
    }
  }
  else if ( v9 )
  {
    *(_QWORD *)a5 = a1;
LABEL_6:
    LODWORD(a3) = 1;
  }
  return (unsigned int)a3;
}
