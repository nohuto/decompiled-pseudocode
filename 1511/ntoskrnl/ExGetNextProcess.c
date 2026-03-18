/*
 * XREFs of ExGetNextProcess @ 0x14044B7C8
 * Callers:
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 * Callees:
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 */

_DWORD *__fastcall ExGetNextProcess(PVOID Object, char a2)
{
  _DWORD *result; // rax
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    result = (_DWORD *)PsGetNextProcess(Object);
    Object = result;
    if ( !result )
      break;
    if ( (result[193] & 0x4000000) != 0 )
    {
      if ( !a2 )
        return Object;
      if ( ObOpenObjectByPointer(result, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
      {
        ObCloseHandle(Handle, 0);
        return Object;
      }
    }
  }
  return result;
}
