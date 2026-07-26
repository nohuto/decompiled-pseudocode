/*
 * XREFs of ?NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z @ 0x1C006C730
 * Callers:
 *     <none>
 * Callees:
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 */

void __fastcall NdisPDReportECIteration(struct PD_EC_HANDLE__ *a1, char a2)
{
  struct _KTHREAD *v4; // r9
  ULONG CurrentProcessorNumber; // eax
  ULONG64 v6; // rax
  unsigned __int64 v7; // rdx
  ULONG64 v8; // rcx
  unsigned __int64 CycleTimeStamp; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 11) )
  {
    v4 = (struct _KTHREAD *)*((_QWORD *)a1 + 4);
    if ( v4 != KeGetCurrentThread() )
      ndisBugCheckEx(0x23uLL, 1uLL, *((_QWORD *)a1 + 3), (ULONG_PTR)v4);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    ++*((_DWORD *)a1 + 17);
    *((_DWORD *)a1 + 16) = CurrentProcessorNumber;
    if ( a2 )
      ++*((_DWORD *)a1 + 18);
    v6 = KeQueryTotalCycleTimeThread(KeGetCurrentThread(), &CycleTimeStamp);
    v7 = CycleTimeStamp - *((_QWORD *)a1 + 10);
    *((_QWORD *)a1 + 10) = CycleTimeStamp;
    v8 = v6 - *((_QWORD *)a1 + 11);
    *((_QWORD *)a1 + 11) = v6;
    if ( v7 > v8 )
      *((_QWORD *)a1 + 14) += v7 - v8;
    if ( a2 )
      *((_QWORD *)a1 + 13) += v8;
    else
      *((_QWORD *)a1 + 12) += v8;
  }
}
