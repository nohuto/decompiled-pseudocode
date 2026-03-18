/*
 * XREFs of ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x140158FB0
 * Callers:
 *     xxxTimersProc @ 0x140098800 (xxxTimersProc.c)
 *     xxxTimersProc_Old @ 0x14009A98C (xxxTimersProc_Old.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall xxxReadyTimer(struct tagTIMER *a1, int a2)
{
  __int64 v2; // rax
  int v4; // edx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 **v11; // rdx
  __int64 v12; // rdi
  unsigned int v13; // eax
  int v14; // ecx

  v2 = *((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 10);
  *((_DWORD *)a1 + 13) = v4;
  v6 = *(_DWORD *)(*(_QWORD *)(v2 + 456) + 1020LL);
  if ( v6 )
  {
    v13 = v4 + v6;
    v14 = 0x7FFFFFFF;
    if ( v13 < 0x7FFFFFFF )
      v14 = v13;
    *((_DWORD *)a1 + 13) = v14;
  }
  EtwTraceTimerProc(a1);
  v7 = *((_DWORD *)a1 + 12);
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x10) != 0 )
    {
      v7 |= 0x20u;
      *((_DWORD *)a1 + 12) = v7;
    }
    if ( *((_DWORD *)a1 + 34) == *((_DWORD *)a1 + 35) )
      *((_DWORD *)a1 + 35) = a2;
    if ( (v7 & 4) != 0 )
    {
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD, struct tagTIMER *))a1 + 4))(
        0LL,
        280LL,
        *((_QWORD *)a1 + 14),
        a1);
      *((_DWORD *)a1 + 34) = *((_DWORD *)a1 + 35);
    }
    else
    {
      v8 = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 12) = v7 | 1;
      v9 = (__int64 *)((char *)a1 + 56);
      ++*(_DWORD *)(v8 + 636);
      v10 = *((_QWORD *)a1 + 3) + 1344LL;
      v11 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 1352LL);
      if ( *v11 != (__int64 *)v10 )
        __fastfail(3u);
      *v9 = v10;
      *((_QWORD *)a1 + 8) = v11;
      *v11 = v9;
      *(_QWORD *)(v10 + 8) = v9;
      v12 = *((_QWORD *)a1 + 3);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v12 + 520), 0, 0) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v12 + 480) + 8LL), 0x10u);
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v12 + 480) + 4LL), 0x10u);
        W32GetUserSessionState(0LL, v11);
        if ( (*(_DWORD *)(*(_QWORD *)(v12 + 480) + 16LL) & 0x10) != 0 )
          KeSetEvent(*(PRKEVENT *)(v12 + 760), 2, 0);
      }
      ++*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 456LL) + 1032LL);
    }
  }
}
