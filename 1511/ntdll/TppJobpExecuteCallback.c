/*
 * XREFs of TppJobpExecuteCallback @ 0x180083F20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStart @ 0x180001280 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800012F8 (RtlpTpETWCallbackStop.c)
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     LdrAddRefDll @ 0x180008BF0 (LdrAddRefDll.c)
 *     TppCompleteThreadData @ 0x180009CC4 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x180009D00 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180009F20 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __fastcall TppJobpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int64 *v9; // r14
  signed __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2 + 72;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  v9 = (unsigned __int64 *)(a2 + 128);
  TppBarrierAdjust((unsigned __int64 *)(a2 + 128), 1, 0);
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
      TppCleanupGroupMemberCallbackProlog(a1, v5);
      if ( MEMORY[0x7FFE0386] )
        RtlpTpETWCallbackStart(
          *(_QWORD *)(a2 + 208),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppStartThreadData(&v13, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 152);
      v12 = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a1 + 96) = v12;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, _DWORD))(a2 + 152))(
        a1,
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
    if ( (int)LdrAddRefDll(0, *(_QWORD *)(a2 + 200)) >= 0 )
    {
      *(_DWORD *)(a1 + 144) |= 0x100u;
      *(_QWORD *)(a1 + 168) = v11;
      goto LABEL_3;
    }
  }
  TppBarrierAdjust(v9, -1, 0);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
}
