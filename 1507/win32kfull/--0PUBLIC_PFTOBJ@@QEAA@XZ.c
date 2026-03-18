/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C015BA90
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C026AB90 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C027EE10 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this)
{
  *(_QWORD *)this = gpPFTPublic;
  return this;
}
