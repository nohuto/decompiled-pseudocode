/*
 * XREFs of fs_NewSfnt @ 0x1C00A50AC
 * Callers:
 *     bLoadTTF @ 0x1C0010AF4 (bLoadTTF.c)
 *     bInitInAndOut @ 0x1C00A38BC (bInitInAndOut.c)
 *     bReloadGlyphSet @ 0x1C00A3BD8 (bReloadGlyphSet.c)
 *     pvHandleKerningPairs @ 0x1C0247330 (pvHandleKerningPairs.c)
 * Callees:
 *     sfac_ComputeMapping @ 0x1C00A51A4 (sfac_ComputeMapping.c)
 *     sfac_DoOffsetTableMap @ 0x1C00A5E38 (sfac_DoOffsetTableMap.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C00A6050 (sfac_LoadCriticalSfntMetrics.c)
 *     fsg_PrivateFontSpaceSize @ 0x1C00A6430 (fsg_PrivateFontSpaceSize.c)
 *     fsg_WorkSpaceSetOffsets @ 0x1C00A65E8 (fsg_WorkSpaceSetOffsets.c)
 *     fs_SetUpKey @ 0x1C00AD5A8 (fs_SetUpKey.c)
 */

__int64 __fastcall fs_NewSfnt(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 8) )
    return 4099LL;
  v4 = fs_SetUpKey(a1, 0LL, &v7);
  v5 = v4;
  if ( !v4 )
    return v7;
  result = sfac_DoOffsetTableMap(v4);
  if ( !(_DWORD)result )
  {
    result = sfac_LoadCriticalSfntMetrics(v5, v5 + 316, v5 + 364, v5 + 388);
    if ( !(_DWORD)result )
    {
      result = fsg_PrivateFontSpaceSize(v5, v5 + 388, v5 + 568, &v7);
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(a2 + 16) = v7 + 4;
        *(_DWORD *)(a2 + 12) = fsg_WorkSpaceSetOffsets(v5 + 388, v5 + 480, v5 + 944) + 4;
        result = sfac_ComputeMapping(v5, *(unsigned __int16 *)(a1 + 104), *(unsigned __int16 *)(a1 + 106));
        if ( !(_DWORD)result )
        {
          *(_DWORD *)(v5 + 420) = 2;
          *(_DWORD *)(v5 + 428) = 1;
        }
      }
    }
  }
  return result;
}
