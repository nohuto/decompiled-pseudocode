/*
 * XREFs of HvpViewMapGrowFile @ 0x140610018
 * Callers:
 *     HvViewMapChangeFileSize @ 0x14060FB84 (HvViewMapChangeFileSize.c)
 * Callees:
 *     HvpViewMapViewOfPrimaryFile @ 0x14061020C (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140610338 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14061053C (HvpViewUnmapViewOfPrimaryFile.c)
 */

__int64 __fastcall HvpViewMapGrowFile(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  unsigned int v7; // edi
  int v8; // r15d
  unsigned int v9; // ebx
  int v10; // r12d
  __int64 v11; // rcx
  int v12; // ebp
  int v13; // r12d
  unsigned int v15; // ebx
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_DWORD *)a1;
  v4 = a3 - *(_DWORD *)a1;
  *(_DWORD *)a1 = a3;
  v7 = v3;
  v8 = v3 & 0x3FFFF;
  if ( (v3 & 0x3FFFF) != 0 )
  {
    v9 = v8 + v4;
    v7 = v3 & 0xFFFC0000;
    v10 = 0x40000;
    if ( v9 < 0x40000 )
      v10 = v9;
    v12 = HvpViewRemapViewOfPrimaryFile(a1, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 16), v7, v10);
    if ( v12 < 0 )
      goto LABEL_13;
    v4 = v9 - v10;
    v7 += v10;
  }
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    v13 = 0x40000;
    if ( v4 < 0x40000 )
      v13 = v4;
    v12 = HvpViewMapViewOfPrimaryFile(a2, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 16), v7, v13);
    if ( v12 < 0 )
      break;
    v7 += v13;
    v4 -= v13;
    if ( !v4 )
      return 0;
  }
LABEL_13:
  v15 = v3;
  if ( !v8 )
    goto LABEL_18;
  if ( v7 > v3 )
  {
    v15 = v3 & 0xFFFC0000;
    HvpViewRemapViewOfPrimaryFile(v11, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 16), v3 & 0xFFFC0000, v3 & 0x3FFFF);
    while ( 1 )
    {
      v15 += 0x40000;
LABEL_18:
      if ( v15 >= v7 )
        break;
      HvpViewUnmapViewOfPrimaryFile(v11, *(_QWORD *)(a1 + 24), v15, &v16);
    }
  }
  *(_DWORD *)a1 = v3;
  return (unsigned int)v12;
}
