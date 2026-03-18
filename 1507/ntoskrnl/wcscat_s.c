/*
 * XREFs of wcscat_s @ 0x140177CE8
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1405006DC (RtlConvertSidToUnicodeString.c)
 *     BiGetSystemStorePath @ 0x14056D3D0 (BiGetSystemStorePath.c)
 *     AslPathToNetworkPathNt @ 0x1405ABCE8 (AslPathToNetworkPathNt.c)
 *     NtLockProductActivationKeys @ 0x1405AD7FC (NtLockProductActivationKeys.c)
 *     sub_1406EF8FC @ 0x1406EF8FC (sub_1406EF8FC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406F1298 (ExpCreateOutputSIGNATURE.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 *     VhdiMountVhdFile @ 0x1407FCE1C (VhdiMountVhdFile.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  wchar_t *v3; // r9
  errno_t v5; // ebx
  signed __int64 v6; // rcx
  wchar_t v7; // ax

  v3 = Dst;
  if ( !Dst || !SizeInWords )
    goto LABEL_5;
  if ( !Src )
  {
    *Dst = 0;
LABEL_5:
    PopPoCoalescinCallback();
    return 22;
  }
  do
  {
    if ( !*Dst )
      break;
    ++Dst;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( !SizeInWords )
  {
    v5 = 22;
LABEL_15:
    *v3 = 0;
    PopPoCoalescinCallback();
    return v5;
  }
  v6 = (char *)Dst - (char *)Src;
  do
  {
    v7 = *Src;
    *(const wchar_t *)((char *)Src + v6) = *Src;
    ++Src;
    if ( !v7 )
      break;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( !SizeInWords )
  {
    v5 = 34;
    goto LABEL_15;
  }
  return 0;
}
