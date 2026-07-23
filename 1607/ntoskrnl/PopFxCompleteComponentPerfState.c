/*
 * XREFs of PopFxCompleteComponentPerfState @ 0x1402024D8
 * Callers:
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 *     PopFxComponentPerfWork @ 0x1402025B4 (PopFxComponentPerfWork.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140202BE8 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140208A94 (PopDiagTraceFxPerfRequestProgress.c)
 */

__int64 __fastcall PopFxCompleteComponentPerfState(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  signed __int32 v8; // ebx
  __int64 v9; // r15
  int v10; // ebx
  unsigned int i; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx

  v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(a3 + 40), 0xFFFFFFFF);
  v9 = *(_QWORD *)(a3 + 80);
  v10 = v8 - 1;
  for ( i = 0; i < *(_DWORD *)(a3 + 56); *(_QWORD *)(v13 + 8) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v12 + 8) )
  {
    v12 = i++;
    v12 *= 2LL;
    v13 = *(_QWORD *)(a3 + 152) + 32LL * *(unsigned int *)(*(_QWORD *)(a3 + 48) + 8 * v12);
    *(_QWORD *)(v13 + 16) = *(_QWORD *)(a3 + 64);
    *(_BYTE *)(v13 + 24) = 0;
  }
  PopDiagTraceFxPerfRequestProgress(a3, v10 & 7);
  if ( v10 >= 0 )
    v10 = _InterlockedDecrement((volatile signed __int32 *)(a3 + 40));
  LOBYTE(v14) = a4;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(a3 + 32))(*(_QWORD *)(a1 + 168), a2, v14, v9);
  if ( v10 < 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 40));
    KeSetEvent((PRKEVENT)(a3 + 8), 0, 0);
  }
  LOBYTE(v15) = a4;
  return PopDiagTraceFxPerfRequestComplete(a3, v15);
}
