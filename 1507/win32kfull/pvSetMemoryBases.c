/*
 * XREFs of pvSetMemoryBases @ 0x1C00AF4B4
 * Callers:
 *     lGetGlyphBitmap @ 0x1C00B209C (lGetGlyphBitmap.c)
 *     lGGOBitmap @ 0x1C0246DCC (lGGOBitmap.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall pvSetMemoryBases(int *a1, _QWORD *a2, int a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned int v9; // r14d
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  ULONG v12; // edx
  signed int v13; // r15d
  unsigned __int64 v14; // rdx
  unsigned __int64 result; // rax
  signed int v16; // [rsp+40h] [rbp-28h]

  v3 = a1[5];
  if ( v3 > 0x7FFFFFF8 )
    goto LABEL_26;
  v7 = a1[6];
  if ( v7 > 0x7FFFFFF8 )
    goto LABEL_26;
  v8 = a1[7];
  if ( v8 > 0x7FFFFFF8 )
    goto LABEL_26;
  v9 = (v3 + 7) & 0xFFFFFFF8;
  v10 = v9 + ((v7 + 7) & 0xFFFFFFF8);
  if ( v10 < v9 )
    goto LABEL_26;
  if ( v10 > 0x7FFFFFFF )
    goto LABEL_26;
  v11 = v10 + ((v8 + 7) & 0xFFFFFFF8);
  if ( v11 < v10 || v11 > 0x7FFFFFFF )
    goto LABEL_26;
  v12 = v10 + ((v8 + 7) & 0xFFFFFFF8);
  if ( !a3 )
  {
    v13 = v16;
    goto LABEL_11;
  }
  v13 = v11;
  v12 = v11 + ((a1[8] + 7) & 0xFFFFFFF8);
  if ( v12 < v11 || (v11 += (a1[8] + 7) & 0xFFFFFFF8, v12 > 0x7FFFFFFF) )
  {
LABEL_26:
    a2[8] = 0LL;
    result = 0LL;
    a2[7] = 0LL;
    a2[6] = 0LL;
    return result;
  }
LABEL_11:
  if ( !v11 )
    v12 = 4;
  v14 = (unsigned __int64)EngAllocMem(0, v12, 0x64667454u);
  if ( !v14 )
    goto LABEL_26;
  a2[6] = v14 & -(__int64)(a1[5] != 0);
  if ( a1[6] )
    a2[7] = v14 + (int)v9;
  else
    a2[7] = 0LL;
  if ( a1[7] )
    a2[8] = v14 + (int)v10;
  else
    a2[8] = 0LL;
  if ( a3 && a1[8] )
    a2[9] = v14 + v13;
  else
    a2[9] = 0LL;
  return v14;
}
