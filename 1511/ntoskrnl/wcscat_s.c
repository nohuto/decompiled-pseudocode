/*
 * XREFs of wcscat_s @ 0x140149C68
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1403BD6A8 (RtlConvertSidToUnicodeString.c)
 *     BiGetSystemStorePath @ 0x1404FAE38 (BiGetSystemStorePath.c)
 *     NtLockProductActivationKeys @ 0x1405343A4 (NtLockProductActivationKeys.c)
 *     AslPathToNetworkPathNt @ 0x1405361CC (AslPathToNetworkPathNt.c)
 *     sub_14066C188 @ 0x14066C188 (sub_14066C188.c)
 *     ExpCreateOutputSIGNATURE @ 0x14066D98C (ExpCreateOutputSIGNATURE.c)
 *     sub_14076925C @ 0x14076925C (sub_14076925C.c)
 *     VhdiMountVhdFile @ 0x140786C50 (VhdiMountVhdFile.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
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
