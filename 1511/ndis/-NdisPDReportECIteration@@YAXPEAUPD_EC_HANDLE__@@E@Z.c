/*
 * XREFs of ?NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z @ 0x1C006B830
 * Callers:
 *     <none>
 * Callees:
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     ?ndisPDUpdateQDepthCounter@@YAXPEAUNDIS_PD_EC@@@Z @ 0x1C006C088 (-ndisPDUpdateQDepthCounter@@YAXPEAUNDIS_PD_EC@@@Z.c)
 */

void __fastcall NdisPDReportECIteration(ULONG_PTR *a1, char a2)
{
  struct _KTHREAD *v4; // r9
  ULONG CurrentProcessorNumber; // eax
  ULONG64 v6; // rax
  unsigned __int64 v7; // rdx
  ULONG64 v8; // rcx
  unsigned __int64 CycleTimeStamp; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 36) )
    ndisPDUpdateQDepthCounter((struct NDIS_PD_EC *)a1);
  if ( *((_DWORD *)a1 + 11) )
  {
    v4 = (struct _KTHREAD *)a1[4];
    if ( v4 != KeGetCurrentThread() )
      ndisBugCheckEx(0x23uLL, 1uLL, a1[3], (ULONG_PTR)v4);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    ++*((_DWORD *)a1 + 17);
    *((_DWORD *)a1 + 16) = CurrentProcessorNumber;
    if ( a2 )
      ++*((_DWORD *)a1 + 18);
    v6 = KeQueryTotalCycleTimeThread(KeGetCurrentThread(), &CycleTimeStamp);
    v7 = CycleTimeStamp - a1[11];
    a1[11] = CycleTimeStamp;
    v8 = v6 - a1[12];
    a1[12] = v6;
    if ( v7 > v8 )
      a1[15] += v7 - v8;
    if ( a2 )
      a1[14] += v8;
    else
      a1[13] += v8;
  }
}
