/*
 * XREFs of TppJobpExecuteCallback @ 0x1800782D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x180001320 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001398 (RtlpTpETWCallbackStart.c)
 *     TppStartThreadData @ 0x18003C1E0 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003C274 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppCompleteThreadData @ 0x18003C368 (TppCompleteThreadData.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrAddRefDll @ 0x18007CCA0 (LdrAddRefDll.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 */

void __fastcall TppJobpExecuteCallback(_QWORD *Instance, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v9; // r14
  signed __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2 + 72;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  v9 = a2 + 128;
  TppBarrierAdjust(a2 + 128, 1LL);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 272), 2uLL) + 2;
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 0xFFFFFFFFFFFFFFFEuLL) == 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 200);
    if ( !v11 )
    {
LABEL_3:
      TppCleanupGroupMemberCallbackProlog(Instance, v5);
      if ( MEMORY[0x7FFE0386] )
        RtlpTpETWCallbackStart(
          *(_QWORD *)(a2 + 208),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppStartThreadData(&v13, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      Instance[11] = *(_QWORD *)(a2 + 152);
      v12 = *(_QWORD *)(a2 + 160);
      Instance[12] = v12;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, __int64, _DWORD))(a2 + 152))(
        Instance,
        v12,
        a2,
        *(_QWORD *)(a4 + 8),
        a3,
        *(_DWORD *)a4);
      if ( MEMORY[0x7FFE0386] )
        RtlpTpETWCallbackStop(
          *(_QWORD *)(a2 + 208),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppCompleteThreadData(v13);
      return;
    }
    if ( LdrAddRefDll(0, *(PVOID *)(a2 + 200)) >= 0 )
    {
      *((_DWORD *)Instance + 36) |= 0x100u;
      Instance[21] = v11;
      goto LABEL_3;
    }
  }
  TppBarrierAdjust(v9, 0xFFFFFFFFLL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
}
