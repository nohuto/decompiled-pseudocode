/*
 * XREFs of LdrpGetLoadAsEntry @ 0x180069DE0
 * Callers:
 *     LdrpIsReparsePoint @ 0x180069B2C (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x180069C68 (LdrpGetDataModulePath.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800CB2B0 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x18003823C (LdrpInitMuiCrits.c)
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
