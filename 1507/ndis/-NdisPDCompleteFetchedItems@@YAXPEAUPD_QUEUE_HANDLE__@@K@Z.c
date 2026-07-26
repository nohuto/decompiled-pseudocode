/*
 * XREFs of ?NdisPDCompleteFetchedItems@@YAXPEAUPD_QUEUE_HANDLE__@@K@Z @ 0x1C006C1E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall NdisPDCompleteFetchedItems(struct PD_QUEUE_HANDLE__ *a1, unsigned int a2)
{
  int v3; // r8d
  unsigned int v4; // eax

  v3 = *((_DWORD *)a1 + 33);
  v4 = *((_DWORD *)a1 + 13) & (*((_DWORD *)a1 + 34) - v3);
  if ( a2 < v4 )
    v4 = a2;
  _mm_sfence();
  *((_DWORD *)a1 + 33) = *((_DWORD *)a1 + 13) & (v3 + v4);
  if ( *((_QWORD *)a1 + 4) && _InterlockedCompareExchange((volatile signed __int32 *)a1 + 32, 0, 1) == 1 )
  {
    if ( (unsigned __int8)byte_1C0085324 >= 5u )
      WPP_SF_q(0x63u, &WPP_907f2c296662aafae9742c49c7fcbed7_Traceguids, (__int64)a1);
    KeSetEvent(*((PRKEVENT *)a1 + 4), 2, 0);
  }
}
