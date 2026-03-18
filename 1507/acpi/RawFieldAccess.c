/*
 * XREFs of RawFieldAccess @ 0x1C0046A3C
 * Callers:
 *     WriteField @ 0x1C00138DC (WriteField.c)
 *     ReadField @ 0x1C0015DD0 (ReadField.c)
 * Callees:
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     FindRSAccess @ 0x1C0016940 (FindRSAccess.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall RawFieldAccess(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rsi
  int v8; // ebx
  _QWORD *v9; // rsi
  __int64 RSAccess; // rax
  __int64 v11; // r8
  __int64 v12; // r14
  char v13; // al
  _DWORD *v14; // r15
  char v15; // r12
  unsigned int v16; // ebx
  void *v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax

  v4 = 0LL;
  v7 = **(_QWORD **)(a3 + 32);
  if ( *(_WORD *)(v7 + 58) == 131 )
  {
    v9 = *(_QWORD **)(**(_QWORD **)(v7 + 88) + 88LL);
    RSAccess = FindRSAccess(*((unsigned __int8 *)v9 + 12));
    v12 = RSAccess;
    if ( RSAccess && *(_QWORD *)(RSAccess + 32) )
    {
      _m_prefetchw(&gDebugger);
      v13 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
      v14 = *(_DWORD **)(v11 + 32);
      v15 = v13;
      v16 = 40;
      if ( v14[7] )
        v16 = v14[9] + 40;
      v17 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1430537800, v16);
      v4 = (__int64)v17;
      if ( v17 )
      {
        memmove(v17, v14, v16);
        v18 = a1 + 328;
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v12 + 32))(
               a2,
               *v9,
               v4,
               a4,
               *(_QWORD *)(v12 + 40),
               RestartCtxtCallback,
               v18);
        if ( v8 == -1073741789 )
        {
          v19 = HeapAlloc(gpheapGlobal, 1179992648, *(_DWORD *)(a4 + 16));
          *(_QWORD *)(a4 + 32) = v19;
          if ( v19 )
          {
            *(_DWORD *)(a4 + 24) = *(_DWORD *)(a4 + 16);
            *(_WORD *)(a4 + 2) = 3;
            v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v12 + 32))(
                   a2,
                   *v9,
                   v4,
                   a4,
                   *(_QWORD *)(v12 + 40),
                   RestartCtxtCallback,
                   v18);
          }
          else
          {
            v8 = -1073741670;
            LogError(-1073741670);
            PrintDebugMessage(156, (const void *)*(unsigned int *)(a4 + 16), 0LL, 0LL, 0LL);
          }
        }
      }
      else
      {
        v8 = -1073741670;
        LogError(-1073741670);
        PrintDebugMessage(155, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (v15 & 0x10) != 0 )
        _InterlockedOr(&gDebugger, 0x10u);
      if ( v8 == 259 )
      {
        v8 = 32772;
      }
      else if ( v8 )
      {
        LogError(-1072431080);
        PrintDebugMessage(159, (const void *)*((unsigned __int8 *)v9 + 12), (const void *)v8, 0LL, 0LL);
        v8 = -1072431080;
      }
    }
    else
    {
      v8 = -1072431088;
      LogError(-1072431088);
      PrintDebugMessage(158, (const void *)*((unsigned __int8 *)v9 + 12), 0LL, 0LL, 0LL);
    }
    if ( v4 )
      HeapFree(v4);
  }
  else
  {
    v8 = -1072431101;
    LogError(-1072431101);
    PrintDebugMessage(157, (const void *)*(unsigned __int16 *)(v7 + 58), 0LL, 0LL, 0LL);
  }
  return (unsigned int)v8;
}
