/*
 * XREFs of GetDPIServerInfo @ 0x1C0076660
 * Callers:
 *     GetCharDimensions @ 0x1C006B970 (GetCharDimensions.c)
 * Callees:
 *     <none>
 */

char *__fastcall GetDPIServerInfo(__int64 a1)
{
  __int64 v1; // rcx

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v1) + 776) & 0x4000) != 0 )
  {
    return (char *)gpsi + 4024;
  }
  else
  {
    return (char *)gpsi + 4128;
  }
}
