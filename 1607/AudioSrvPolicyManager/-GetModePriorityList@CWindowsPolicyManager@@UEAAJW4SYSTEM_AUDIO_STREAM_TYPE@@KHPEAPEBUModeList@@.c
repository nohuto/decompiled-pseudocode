/*
 * XREFs of ?GetModePriorityList@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE@@KHPEAPEBUModeList@@@Z @ 0x1800047D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetModePriorityList(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  unsigned int v5; // r9d
  __int64 v6; // rcx

  v5 = 0;
  if ( a2 <= 1 && a3 < 0x15 )
  {
    if ( a5 )
    {
      if ( a2 )
        v6 = (__int64)*(&off_180027F40 + a3);
      else
        v6 = (__int64)*(&off_180028140 + a3);
      *a5 = v6;
    }
    else
    {
      return (unsigned int)-2147467261;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v5;
}
