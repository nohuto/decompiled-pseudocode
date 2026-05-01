/*
 * XREFs of RmpActivityImportanceMergeVectors @ 0x180004670
 * Callers:
 *     ?RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@PEAX@Z @ 0x180004640 (-RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionMo.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x18003BD54 (RmpActivityHostOnAppliedResourceSetChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityImportanceMergeVectors(unsigned int a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  __int16 v3; // r8
  unsigned __int16 v4; // ax
  __int16 v5; // r8
  __int16 v6; // r8
  __int16 v7; // r8
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned int v11; // ecx
  unsigned int v12; // [rsp+8h] [rbp+8h]

  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) != 0 )
  {
    v2 = ((unsigned __int16)a1 >> 1) & 7;
    if ( v2 <= (unsigned __int16)(((unsigned __int16)a2 >> 1) & 7) )
      LOBYTE(v2) = ((unsigned __int16)a2 >> 1) & 7;
    v3 = ((unsigned __int8)(2 * v2) ^ 1) & 0xE ^ 1;
    v4 = ((unsigned __int16)a1 >> 4) & 3;
    if ( v4 <= (unsigned __int16)(((unsigned __int16)a2 >> 4) & 3) )
      LOBYTE(v4) = ((unsigned __int16)a2 >> 4) & 3;
    v5 = ((unsigned __int8)v3 ^ (unsigned __int8)(16 * v4)) & 0x30 ^ v3;
    v6 = ((unsigned __int8)v5 ^ (((((unsigned __int8)a1 | (unsigned __int8)a2) & 0x40) != 0) << 6)) & 0x40 ^ v5;
    v7 = (v6 ^ ((((a1 | a2) & 0x80u) != 0) << 7)) & 0x80 ^ v6;
    LOWORD(v12) = (v7 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x100) != 0) << 8)) & 0x100 ^ v7;
    v8 = HIBYTE(a1);
    if ( HIBYTE(a1) > HIBYTE(a2) )
    {
      HIBYTE(v12) = HIBYTE(a1);
      v11 = HIWORD(a1);
    }
    else
    {
      if ( HIBYTE(a1) < HIBYTE(a2) )
      {
        HIBYTE(v12) = HIBYTE(a2);
        v9 = HIWORD(a2);
LABEL_10:
        BYTE2(v12) = v9;
        return v12;
      }
      v11 = HIWORD(a1);
      v9 = HIWORD(a2);
      HIBYTE(v12) = v8;
      if ( (unsigned __int8)v11 <= (unsigned __int8)v9 )
        goto LABEL_10;
    }
    BYTE2(v12) = v11;
    return v12;
  }
  return a1;
}
