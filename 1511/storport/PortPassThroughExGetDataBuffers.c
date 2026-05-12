/*
 * XREFs of PortPassThroughExGetDataBuffers @ 0x1C0058C10
 * Callers:
 *     PortPassThroughExValidate @ 0x1C003CEDC (PortPassThroughExValidate.c)
 *     PortPassThroughExSendAsync @ 0x1C0058C50 (PortPassThroughExSendAsync.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PortPassThroughExGetDataBuffers(__int64 a1, __int64 a2, char a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rax
  _QWORD *result; // rax
  __int64 v7; // rcx

  if ( *(_DWORD *)(a1 + 32) )
  {
    v5 = *(_QWORD *)(a1 + 40);
    if ( !a3 )
      v5 += *(_QWORD *)(a2 + 24);
    *a4 = v5;
  }
  else
  {
    *a4 = 0LL;
  }
  result = a5;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( !a3 )
      v7 += *(_QWORD *)(a2 + 24);
    *a5 = v7;
  }
  else
  {
    *a5 = 0LL;
  }
  return result;
}
