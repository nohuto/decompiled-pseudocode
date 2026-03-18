/*
 * XREFs of ProcgrpGetProcessorIndexFromNumber @ 0x1C009EA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcgrpGetProcessorIndexFromNumber(_PROCESSOR_NUMBER *ProcNumber)
{
  unsigned __int8 *v1; // rax
  unsigned __int8 Number; // dl

  if ( ProcNumber->Group )
    return 0xFFFFFFFFLL;
  v1 = *(unsigned __int8 **)&KeNumberProcessors;
  Number = ProcNumber->Number;
  if ( Number >= *v1 || ProcNumber->Reserved )
    return 0xFFFFFFFFLL;
  else
    return Number;
}
