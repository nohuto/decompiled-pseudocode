/*
 * XREFs of TppIopCallbackEpilog @ 0x180078650
 * Callers:
 *     TppCallbackEpilog @ 0x18001FBC0 (TppCallbackEpilog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppIopCallbackEpilog(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (***)(void))(a1 + 8))();
  return result;
}
