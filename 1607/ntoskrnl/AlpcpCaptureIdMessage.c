/*
 * XREFs of AlpcpCaptureIdMessage @ 0x140408298
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x140407880 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureIdMessage(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char PreviousMode; // r9
  __int64 result; // rax

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (*(_WORD *)(a1 + 4) & 0x1000) != 0 )
  {
    *a2 = *(_DWORD *)(a1 + 16);
    result = *(unsigned int *)(a1 + 20);
  }
  else
  {
    if ( PreviousMode && (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    *a2 = *(_DWORD *)(a1 + 24);
    result = *(unsigned int *)(a1 + 32);
  }
  *a3 = result;
  return result;
}
