/*
 * XREFs of InvalidateWEFCOMPOSITEDDCEs @ 0x1C01E7784
 * Callers:
 *     xxxSystemTimerProc @ 0x1C00775B0 (xxxSystemTimerProc.c)
 * Callees:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01E7690 (FlushWEFCOMPOSITEDDCEBounds.c)
 */

__int64 InvalidateWEFCOMPOSITEDDCEs()
{
  _QWORD **v0; // rcx
  __int64 v1; // rbx

  GreLockVisRgn(*gpDispInfo);
  v0 = (_QWORD **)gpDispInfo;
  v1 = *(_QWORD *)(gpDispInfo + 64LL);
  if ( v1 )
  {
    do
    {
      if ( (*(_DWORD *)(v1 + 64) & 0x4400800) == 0
        && *(_QWORD *)(v1 + 16)
        && !(unsigned int)GreIsRendering(*(_QWORD *)(v1 + 8))
        && (*(_DWORD *)(v1 + 64) & 0x5000) == 0x5000
        && (*(_BYTE *)(*(_QWORD *)(v1 + 32) + 51LL) & 2) != 0 )
      {
        FlushWEFCOMPOSITEDDCEBounds(v1);
      }
      v1 = *(_QWORD *)v1;
    }
    while ( v1 );
    v0 = (_QWORD **)gpDispInfo;
  }
  return GreUnlockVisRgn(**v0);
}
