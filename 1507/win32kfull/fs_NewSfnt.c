/*
 * XREFs of fs_NewSfnt @ 0x1C00AD08C
 * Callers:
 *     bInitInAndOut @ 0x1C00ABE10 (bInitInAndOut.c)
 *     bReloadGlyphSet @ 0x1C00AC128 (bReloadGlyphSet.c)
 *     bLoadTTF @ 0x1C01425E4 (bLoadTTF.c)
 *     pvHandleKerningPairs @ 0x1C0247298 (pvHandleKerningPairs.c)
 * Callees:
 *     sfac_ComputeMapping @ 0x1C00AD184 (sfac_ComputeMapping.c)
 *     sfac_DoOffsetTableMap @ 0x1C00AD708 (sfac_DoOffsetTableMap.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C00AD920 (sfac_LoadCriticalSfntMetrics.c)
 *     fsg_PrivateFontSpaceSize @ 0x1C00ADD28 (fsg_PrivateFontSpaceSize.c)
 *     fsg_WorkSpaceSetOffsets @ 0x1C00ADEE0 (fsg_WorkSpaceSetOffsets.c)
 *     fs_SetUpKey @ 0x1C00B4B00 (fs_SetUpKey.c)
 */

__int64 __fastcall fs_NewSfnt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 result; // rax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 8) )
    return 4099LL;
  v6 = fs_SetUpKey(a1, 0LL, &v9, a4);
  v7 = v6;
  if ( !v6 )
    return v9;
  result = sfac_DoOffsetTableMap(v6);
  if ( !(_DWORD)result )
  {
    result = sfac_LoadCriticalSfntMetrics(v7, v7 + 316, v7 + 364, v7 + 388);
    if ( !(_DWORD)result )
    {
      result = fsg_PrivateFontSpaceSize(v7, v7 + 388, v7 + 568, &v9);
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(a2 + 16) = v9 + 4;
        *(_DWORD *)(a2 + 12) = fsg_WorkSpaceSetOffsets(v7 + 388, v7 + 480, v7 + 944) + 4;
        result = sfac_ComputeMapping(v7, *(unsigned __int16 *)(a1 + 104), *(unsigned __int16 *)(a1 + 106));
        if ( !(_DWORD)result )
        {
          *(_DWORD *)(v7 + 420) = 2;
          *(_DWORD *)(v7 + 428) = 1;
        }
      }
    }
  }
  return result;
}
