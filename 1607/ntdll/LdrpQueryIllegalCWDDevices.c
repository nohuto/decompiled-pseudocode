/*
 * XREFs of LdrpQueryIllegalCWDDevices @ 0x18007EF28
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180093C38 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x18007F320 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall LdrpQueryIllegalCWDDevices(void *a1)
{
  __int64 result; // rax
  int v2; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  int v4; // [rsp+40h] [rbp+8h]

  result = (__int64)&retaddr;
  if ( !a1
    || (result = RtlQueryImageFileKeyOption(a1, 4, 0LL), (int)result < 0)
    || (v2 = v4, result = (unsigned int)(v4 + 1), (unsigned int)result > 3) )
  {
    v2 = (MEMORY[0x7FFE02D5] >> 4) & 3;
    if ( v2 == 3 )
      v2 = -1;
  }
  if ( v2 == -1 )
  {
    LdrpIllegalCWDDevices = -1;
  }
  else if ( v2 == 1 )
  {
    LdrpIllegalCWDDevices = 0x2000;
  }
  else
  {
    result = 16LL;
    if ( v2 != 2 )
      result = 0LL;
    LdrpIllegalCWDDevices = result;
  }
  return result;
}
