/*
 * XREFs of ClientNoMemoryPopup @ 0x1402D508C
 * Callers:
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 * Callees:
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1401B68F4 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 */

void __fastcall ClientNoMemoryPopup(__int64 a1)
{
  unsigned int Count; // eax
  __int64 v2; // rdx
  char v3; // [rsp+40h] [rbp+8h] BYREF
  int v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0;
  Count = AtomicExecutionCheck::GetCount(a1);
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  LOBYTE(v2) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v3, v2);
  EtwTraceBeginCallback(86LL);
  KeUserModeCallback(86LL, 0LL, 0LL, &v5, &v4);
  EtwTraceEndCallback(86LL);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v3);
}
