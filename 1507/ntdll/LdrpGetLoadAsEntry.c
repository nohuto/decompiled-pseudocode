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
  __int64 v6; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = -1073741823;
  LdrpInitMuiCrits((volatile signed __int32 *)&DataLoadLockCount, (__int64)&LoadAsDataCrits);
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v5 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    v6 = LoadAsDataTable;
    while ( v5 > 0 )
    {
      if ( *(_QWORD *)(v6 + 48LL * v5 - 48) == a1 )
      {
        if ( *(_QWORD *)(v6 + 48LL * v5 - 40) )
        {
          *a2 = *(_OWORD *)(v6 + 48LL * v5 - 48);
          a2[1] = *(_OWORD *)(v6 + 48LL * v5 - 32);
          a2[2] = *(_OWORD *)(v6 + 48LL * v5 - 16);
          v4 = 0;
        }
      }
      --v5;
    }
  }
  RtlLeaveCriticalSection((__int64)&LoadAsDataCrits);
  return v4;
}
