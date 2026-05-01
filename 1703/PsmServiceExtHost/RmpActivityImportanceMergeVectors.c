/*
 * XREFs of RmpActivityImportanceMergeVectors @ 0x180012690
 * Callers:
 *     ?RmpActivityHostComputeImportanceForCategory@@YA?AT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800125F0 (-RmpActivityHostComputeImportanceForCategory@@YA-AT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_ACTIVITY_HOS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityImportanceMergeVectors(unsigned int a1, unsigned int a2)
{
  __int16 v2; // ax
  __int16 v3; // r11
  __int16 v4; // r8
  __int16 v5; // r9
  __int16 v6; // bx
  __int16 v7; // r9
  __int16 v8; // ax
  __int16 v9; // r9
  __int16 v10; // ax
  __int16 v11; // r9
  __int16 v12; // ax
  __int16 v13; // r9
  __int16 v14; // r9
  __int16 v15; // r10
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int v19; // ecx
  unsigned int v20; // [rsp+10h] [rbp+8h]

  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) == 0 )
    return a1;
  v2 = (unsigned __int16)a1 >> 1;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 1) & 7) <= (unsigned __int8)(((unsigned __int16)a2 >> 1) & 7) )
    v2 = (unsigned __int16)a2 >> 1;
  v3 = (unsigned __int16)a1 >> 4;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 4) & 3) <= (unsigned __int8)(((unsigned __int16)a2 >> 4) & 3) )
    v3 = (unsigned __int16)a2 >> 4;
  v4 = 0;
  v5 = 0;
  v6 = a1 | a2;
  if ( (((unsigned __int16)a1 | (unsigned __int16)a2) & 0x40) != 0 )
    v5 = 64;
  v7 = (((unsigned __int8)(2 * v2) ^ 1) & 0xE ^ 1) & 0xFF0F | v5 & 0xFF7F;
  v8 = 0;
  if ( (v6 & 0x80) != 0 )
    v8 = 128;
  v9 = (v8 | v7) & 0xFEFF;
  v10 = 0;
  if ( (v6 & 0x100) != 0 )
    v10 = 256;
  v11 = (16 * (v3 & 3)) | v10 | v9;
  if ( (v6 & 0x200) != 0 )
    v12 = 512;
  else
    v12 = 0;
  v13 = v12 & 0xFBFF | v11 & 0xF9FF;
  if ( (v6 & 0x400) != 0 )
    v4 = 1024;
  v14 = v4 | v13;
  v15 = (unsigned __int16)a1 >> 11;
  if ( (unsigned __int8)((a1 & 0x800) != 0) >= (unsigned __int8)((a2 & 0x800) != 0) )
    v15 = (unsigned __int16)a2 >> 11;
  v16 = HIBYTE(a1);
  LOWORD(v20) = (v14 ^ (v15 << 11)) & 0x800 ^ v14;
  if ( HIBYTE(a1) > HIBYTE(a2) )
  {
    HIBYTE(v20) = HIBYTE(a1);
    v19 = HIWORD(a1);
  }
  else
  {
    if ( HIBYTE(a1) < HIBYTE(a2) )
    {
      HIBYTE(v20) = HIBYTE(a2);
      v17 = HIWORD(a2);
LABEL_22:
      BYTE2(v20) = v17;
      return v20;
    }
    v19 = HIWORD(a1);
    v17 = HIWORD(a2);
    HIBYTE(v20) = v16;
    if ( (unsigned __int8)v19 <= (unsigned __int8)v17 )
      goto LABEL_22;
  }
  BYTE2(v20) = v19;
  return v20;
}
