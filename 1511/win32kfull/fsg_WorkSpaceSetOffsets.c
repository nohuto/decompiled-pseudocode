/*
 * XREFs of fsg_WorkSpaceSetOffsets @ 0x1C00A65E8
 * Callers:
 *     fs_NewSfnt @ 0x1C00A50AC (fs_NewSfnt.c)
 * Callees:
 *     fsg_GetOutlineSizeAndOffsets @ 0x1C00A67B0 (fsg_GetOutlineSizeAndOffsets.c)
 */

__int64 __fastcall fsg_WorkSpaceSetOffsets(_WORD *a1, __int64 a2, _DWORD *a3)
{
  unsigned __int16 v5; // ax
  unsigned int v7; // ecx
  int v8; // esi
  int v9; // ecx
  unsigned int v10; // ebp
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // cx
  int v13; // edx
  int v14; // edx
  unsigned __int16 v15; // ax
  int v16; // ecx
  int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // r9d
  int v20; // r8d
  unsigned int v21; // edx
  unsigned __int16 v22; // ax
  unsigned int v23; // ecx
  unsigned __int16 v24; // cx
  int v25; // eax
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned __int16 v29; // ax
  __int64 result; // rax
  unsigned int v31; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 8) = 0;
  v5 = a1[15];
  v7 = v5;
  if ( v5 <= 1u )
    v7 = 1;
  v8 = 20;
  if ( v7 >= 0x14 )
  {
    v9 = 20;
  }
  else if ( v5 > 1u )
  {
    v9 = v5;
  }
  else
  {
    v9 = 1;
  }
  v10 = (112 * v9 + 113) & 0xFFFFFFFE;
  *(_DWORD *)(a2 + 4) = v10;
  v11 = a1[4];
  v12 = a1[6];
  v13 = v11;
  if ( v11 <= v12 )
    v13 = v12;
  if ( v13 <= 1 )
  {
    v14 = 1;
  }
  else if ( v11 <= v12 )
  {
    v14 = v12;
  }
  else
  {
    v14 = v11;
  }
  v15 = a1[3];
  LOWORD(v16) = a1[5];
  v17 = v15;
  if ( v15 <= (unsigned __int16)v16 )
    v17 = (unsigned __int16)v16;
  if ( v17 <= 1 )
  {
    v16 = 1;
  }
  else if ( v15 <= (unsigned __int16)v16 )
  {
    v16 = (unsigned __int16)v16;
  }
  else
  {
    v16 = v15;
  }
  LOWORD(v16) = v16 + 8;
  fsg_GetOutlineSizeAndOffsets(v16, v14, a2 + 20, (unsigned int)&v31, a2 + 68);
  v18 = v31;
  v19 = 32 * (unsigned __int16)a1[3];
  if ( v31 - *(_DWORD *)(a2 + 68) < v19 )
    v18 = v19 + *(_DWORD *)(a2 + 68);
  v20 = *(_DWORD *)(a2 + 68) + *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 68) = v20;
  v21 = (v18 + v10 + 3) & 0xFFFFFFFC;
  *(_DWORD *)(a2 + 12) = v21;
  v22 = a1[15];
  v23 = v22;
  if ( v22 <= 1u )
    v23 = 1;
  if ( v23 < 0x14 )
  {
    v8 = v22;
    if ( v22 <= 1u )
      v8 = 1;
  }
  v24 = a1[14];
  v25 = 3;
  if ( v24 > 3u )
    v25 = v24;
  v26 = v8 + v25 + 1;
  v27 = (v21 + 7 + 4 * v26) & 0xFFFFFFF8;
  *(_DWORD *)(a2 + 16) = v27;
  v28 = (224 * v26 + v27 + 3) & 0xFFFFFFFC;
  *(_DWORD *)a2 = v28;
  v29 = a1[12];
  if ( !v29 )
    v29 = 1;
  result = v28 + 4 * v29;
  *a3 = result - v20;
  *(_QWORD *)(a2 + 72) = 0LL;
  return result;
}
