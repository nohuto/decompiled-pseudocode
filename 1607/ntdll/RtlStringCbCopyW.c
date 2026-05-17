/*
 * XREFs of RtlStringCbCopyW @ 0x180040FD4
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18002B7F0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18002EE50 (RtlGetVersion.c)
 *     RtlLCIDToCultureName @ 0x1800448B0 (RtlLCIDToCultureName.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1800576D8 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlInstallFunctionTableCallback @ 0x18006F130 (RtlInstallFunctionTableCallback.c)
 *     RtlCreateTagHeap @ 0x180075D90 (RtlCreateTagHeap.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180082920 (RtlpGetNameFromLangInfoNode.c)
 *     RtlQueryProcessHeapInformation @ 0x180095B50 (RtlQueryProcessHeapInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyW(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  int v4; // r9d
  unsigned __int64 v5; // r10
  __int64 v6; // r8
  __int16 v7; // ax

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !v3 )
      return (unsigned int)v4;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      goto LABEL_12;
    v5 = 2147483646 - v3;
    v6 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v5 + v3) )
        break;
      v7 = *(_WORD *)((char *)a1 + v6);
      if ( !v7 )
        break;
      *a1++ = v7;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
    {
LABEL_12:
      --a1;
      v4 = -2147483643;
    }
  }
  *a1 = 0;
  return (unsigned int)v4;
}
