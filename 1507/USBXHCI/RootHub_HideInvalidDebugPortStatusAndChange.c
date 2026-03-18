/*
 * XREFs of RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C001EA80
 * Callers:
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0002AA0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001E914 (RootHub_HandlePortStatusChangeEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall RootHub_HideInvalidDebugPortStatusAndChange(__int64 a1, int a2)
{
  __int64 v2; // r8
  bool result; // al

  result = 0;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( *(_BYTE *)(a1 + 56) )
    {
      v2 = *(_QWORD *)(a1 + 8);
      if ( (*(_QWORD *)(v2 + 232) & 0x8000000000000LL) != 0
        && HIBYTE(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 80) + 72LL) + 36LL)) == a2 )
      {
        return 1;
      }
    }
  }
  return result;
}
