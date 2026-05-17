/*
 * XREFs of RtlStringCbCopyW @ 0x18001C134
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18000F440 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlLCIDToCultureName @ 0x18001D630 (RtlLCIDToCultureName.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x180046388 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlCreateTagHeap @ 0x18004EF00 (RtlCreateTagHeap.c)
 *     SwitchedRtlGetVersion @ 0x180074114 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800742A0 (RtlGetVersion.c)
 *     RtlpGetNameFromLangInfoNode @ 0x18007F1A0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlInstallFunctionTableCallback @ 0x18007FA60 (RtlInstallFunctionTableCallback.c)
 *     RtlQueryProcessHeapInformation @ 0x180094380 (RtlQueryProcessHeapInformation.c)
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
