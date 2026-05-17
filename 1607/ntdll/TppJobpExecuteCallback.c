/*
 * XREFs of TppJobpExecuteCallback @ 0x180084260
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     LdrAddRefDll @ 0x180039C20 (LdrAddRefDll.c)
 *     TppCompleteThreadData @ 0x18003B334 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18003B370 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003B404 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TppJobpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  volatile signed __int64 *v9; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  signed __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v5 = a2 + 72;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  v9 = (volatile signed __int64 *)(a2 + 128);
  TppBarrierAdjust((volatile signed __int64 *)(a2 + 128), 1, 0LL, a4);
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 280), 2uLL) + 2;
  if ( (v12 & 1) != 0 )
  {
    if ( (v12 & 0xFFFFFFFFFFFFFFFEuLL) == 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 208);
    if ( !v13 )
    {
LABEL_3:
      TppCleanupGroupMemberCallbackProlog(a1, v5);
      if ( MEMORY[0x7FFE0386] )
        RtlpTpETWCallbackStart(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppStartThreadData(&v15, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 152);
      v14 = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a1 + 96) = v14;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, _DWORD))(a2 + 152))(
        a1,
        v14,
        a2,
        *(_QWORD *)(a4 + 8),
        a3,
        *(_DWORD *)a4);
      if ( MEMORY[0x7FFE0386] )
        RtlpTpETWCallbackStop(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppCompleteThreadData(v15);
      return;
    }
    if ( (int)LdrAddRefDll(0, *(_QWORD *)(a2 + 208), v10, v11) >= 0 )
    {
      *(_DWORD *)(a1 + 144) |= 0x100u;
      *(_QWORD *)(a1 + 168) = v13;
      goto LABEL_3;
    }
  }
  TppBarrierAdjust(v9, -1, 0LL, v11);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
}
