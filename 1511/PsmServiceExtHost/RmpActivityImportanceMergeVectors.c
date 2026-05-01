/*
 * XREFs of RmpActivityImportanceMergeVectors @ 0x180009200
 * Callers:
 *     ?RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@PEAX@Z @ 0x1800091D0 (-RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionMo.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x180041048 (RmpActivityHostOnAppliedResourceSetChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityImportanceMergeVectors(unsigned int a1, unsigned int a2)
{
  unsigned __int16 v3; // r8
  __int16 v4; // r9
  unsigned __int16 v5; // r8
  __int16 v6; // r9
  __int16 v7; // r9
  __int16 v8; // r9
  __int16 v9; // r9
  char v10; // r8
  unsigned int v11; // [rsp+8h] [rbp+8h]

  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) == 0 )
    return a1;
  v3 = ((unsigned __int16)a2 >> 1) & 7;
  if ( (unsigned __int16)(((unsigned __int16)a1 >> 1) & 7) > v3 )
    v3 = ((unsigned __int16)a1 >> 1) & 7;
  v4 = ((unsigned __int8)(2 * v3) ^ 1) & 0xE ^ 1;
  v5 = ((unsigned __int16)a2 >> 4) & 3;
  if ( (unsigned __int16)(((unsigned __int16)a1 >> 4) & 3) > v5 )
    v5 = ((unsigned __int16)a1 >> 4) & 3;
  v6 = ((unsigned __int8)v4 ^ (unsigned __int8)(16 * v5)) & 0x30 ^ v4;
  v7 = ((unsigned __int8)v6 ^ (((((unsigned __int8)a1 | (unsigned __int8)a2) & 0x40) != 0) << 6)) & 0x40 ^ v6;
  v8 = (v7 ^ ((((a1 | a2) & 0x80u) != 0) << 7)) & 0x80 ^ v7;
  v9 = (v8 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x100) != 0) << 8)) & 0x100 ^ v8;
  LOWORD(v11) = (v9 ^ (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x200) != 0) << 9)) & 0x200 ^ v9;
  if ( HIBYTE(a1) <= HIBYTE(a2) )
  {
    if ( HIBYTE(a1) >= HIBYTE(a2) )
    {
      HIBYTE(v11) = HIBYTE(a1);
      v10 = BYTE2(a2);
      if ( BYTE2(a1) > BYTE2(a2) )
        v10 = BYTE2(a1);
      BYTE2(v11) = v10;
      return v11;
    }
    else
    {
      BYTE2(v11) = BYTE2(a2);
      HIBYTE(v11) = HIBYTE(a2);
      return v11;
    }
  }
  else
  {
    BYTE2(v11) = BYTE2(a1);
    HIBYTE(v11) = HIBYTE(a1);
    return v11;
  }
}
