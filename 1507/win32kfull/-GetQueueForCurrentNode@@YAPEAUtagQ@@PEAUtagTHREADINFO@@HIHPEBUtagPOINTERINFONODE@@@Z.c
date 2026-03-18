/*
 * XREFs of ?GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8900
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FAE54 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@I@Z @ 0x1C01F8A98 (-IsNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@I@Z.c)
 *     ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C022F654 (-GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z.c)
 */

struct tagQ *__fastcall GetQueueForCurrentNode(
        struct tagTHREADINFO *a1,
        int a2,
        unsigned int a3,
        int a4,
        const struct tagPOINTERINFONODE *a5)
{
  int v6; // r10d
  const struct tagPOINTERINFONODE *v7; // rcx
  struct tagQ *result; // rax

  v6 = a2;
  v7 = a5;
  if ( (*(_DWORD *)a5 & 0x1000) != 0 || !*((_QWORD *)a5 + 2) || a4 && !(unsigned int)IsNodeMessageDelegated(a5, a3) )
    return 0LL;
  if ( !v6 )
    return (struct tagQ *)*((_QWORD *)a1 + 49);
  result = GetNodeQueue(v7, (int *)&a5);
  if ( !result )
    return (struct tagQ *)*((_QWORD *)a1 + 49);
  return result;
}
