/*
 * XREFs of LdrpGetLoadAsEntry @ 0x18003D390
 * Callers:
 *     LdrpGetDataModulePath @ 0x18003D1CC (LdrpGetDataModulePath.c)
 *     LdrpIsReparsePoint @ 0x180042D10 (LdrpIsReparsePoint.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800D3C80 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x1800304C8 (LdrpInitMuiCrits.c)
 */

__int64 __fastcall LdrpGetLoadAsEntry(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  int v5; // ecx
  _OWORD *v6; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  LdrpInitMuiCrits((volatile signed __int32 *)&DataLoadLockCount, &LoadAsDataCrits);
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v5 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v6 = LoadAsDataTable;
    while ( v5 > 0 )
    {
      if ( *(_QWORD *)&v6[3 * v5 - 3] == a1 )
      {
        if ( *((_QWORD *)&v6[3 * v5 - 2] - 1) )
        {
          *a2 = v6[3 * v5 - 3];
          a2[1] = v6[3 * v5 - 2];
          a2[2] = v6[3 * v5 - 1];
          v4 = 0;
        }
      }
      --v5;
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v4;
}
