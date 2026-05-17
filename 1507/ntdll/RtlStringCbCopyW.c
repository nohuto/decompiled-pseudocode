/*
 * XREFs of RtlStringCbCopyW @ 0x18001F684
 * Callers:
 *     RtlCreateTagHeap @ 0x180003610 (RtlCreateTagHeap.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x18000D3F8 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlLCIDToCultureName @ 0x18001ECA0 (RtlLCIDToCultureName.c)
 *     RtlGetVersion @ 0x180042170 (RtlGetVersion.c)
 *     SwitchedRtlGetVersion @ 0x180042774 (SwitchedRtlGetVersion.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800731F0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlInstallFunctionTableCallback @ 0x180074270 (RtlInstallFunctionTableCallback.c)
 *     RtlQueryProcessHeapInformation @ 0x1800C36B0 (RtlQueryProcessHeapInformation.c)
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
