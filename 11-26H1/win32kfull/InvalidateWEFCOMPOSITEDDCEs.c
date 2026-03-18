/*
 * XREFs of InvalidateWEFCOMPOSITEDDCEs @ 0x14011DF60
 * Callers:
 *     xxxSystemTimerProc @ 0x14024E4E0 (xxxSystemTimerProc.c)
 * Callees:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x14011E010 (FlushWEFCOMPOSITEDDCEBounds.c)
 */

__int64 InvalidateWEFCOMPOSITEDDCEs()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *i; // rbx

  GreLockVisRgn();
  v3 = *(_QWORD *)(W32GetUserSessionState(v1, v0) + 56968);
  for ( i = *(__int64 **)(v3 + 24); ; i = (__int64 *)*i )
  {
    v3 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 56968) + 24LL;
    if ( i == (__int64 *)v3 )
      break;
    if ( (i[6] & 0x4400800) == 0 )
    {
      if ( i[10] )
      {
        if ( !(unsigned int)GreIsRendering(i[2]) && (i[6] & 0x5000) == 0x5000 )
        {
          v3 = *(_QWORD *)(i[12] + 40);
          if ( (*(_BYTE *)(v3 + 27) & 2) != 0 )
            FlushWEFCOMPOSITEDDCEBounds(i);
        }
      }
    }
  }
  return GreUnlockVisRgn(v3);
}
