/*
 * XREFs of fsg_GetOutlineSizeAndOffsets @ 0x1C00AE0A8
 * Callers:
 *     fsg_PrivateFontSpaceSize @ 0x1C00ADD28 (fsg_PrivateFontSpaceSize.c)
 *     fsg_WorkSpaceSetOffsets @ 0x1C00ADEE0 (fsg_WorkSpaceSetOffsets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsg_GetOutlineSizeAndOffsets(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned int *a3,
        _DWORD *a4,
        unsigned int *a5)
{
  int v6; // r10d
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // r8d
  unsigned int v13; // eax
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // ecx
  __int64 result; // rax

  a3[6] = 0;
  v6 = a1;
  v7 = (a1 + 1) & 0xFFFFFFFE;
  v8 = 2 * a2;
  a3[7] = v7;
  v9 = v8 + v7;
  v10 = v9 + v8;
  a3[8] = v9;
  a3[10] = v10;
  v11 = (v10 + a2 + 3) & 0xFFFFFFFC;
  *a3 = v11;
  v12 = 4 * v6;
  v13 = 4 * v6 + v11;
  a3[1] = v13;
  v14 = v13 + v12 + v12;
  a3[2] = v13 + 4 * v6;
  *a5 = (v14 + 7) & 0xFFFFFFF8;
  v15 = v14 + v12 + v12;
  a3[4] = v14 + 4 * v6;
  a3[5] = v15;
  a3[9] = v15 + 4 * v6;
  a3[3] = v14;
  v16 = (v15 + 4 * v6 + v6 + 3) & 0xFFFFFFFC;
  result = (unsigned int)(3 * v6);
  a3[11] = v16;
  *a4 = v16 + 12 * v6;
  return result;
}
