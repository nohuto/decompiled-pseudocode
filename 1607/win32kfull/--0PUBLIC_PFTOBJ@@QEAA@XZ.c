/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C0158A50
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0267BC0 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C027CA60 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this)
{
  *(_QWORD *)this = gpPFTPublic;
  return this;
}
