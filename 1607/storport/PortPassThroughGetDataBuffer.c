/*
 * XREFs of PortPassThroughGetDataBuffer @ 0x1C0060934
 * Callers:
 *     PortPassThroughSendAsync @ 0x1C006094C (PortPassThroughSendAsync.c)
 *     PortPassThroughValidate @ 0x1C0060CD8 (PortPassThroughValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughGetDataBuffer(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 12) )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( !a3 )
      result += *(_QWORD *)(a2 + 24);
  }
  return result;
}
