/*
 * XREFs of ?NdisPDFlushQueue@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C006C380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall NdisPDFlushQueue(struct PD_QUEUE_HANDLE__ *a1)
{
  if ( (unsigned __int8)byte_1C0085324 >= 4u )
    WPP_SF_q(0x67u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)a1);
  _InterlockedExchange((volatile __int32 *)a1 + 12, 1);
  if ( *((_QWORD *)a1 + 5) )
  {
    if ( (unsigned __int8)byte_1C0085324 >= 5u )
      WPP_SF_q(0x68u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)a1);
    KeSetEvent(*((PRKEVENT *)a1 + 5), 2, 0);
  }
}
