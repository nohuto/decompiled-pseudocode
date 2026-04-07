/*
 * XREFs of _EnableTestHooks @ 0x180048148
 * Callers:
 *     _DisableIndependentStartTiles @ 0x180008030 (_DisableIndependentStartTiles.c)
 * Callees:
 *     <none>
 */

__int64 EnableTestHooks()
{
  int v0; // ecx
  NTSTATUS v1; // eax
  __int64 result; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF
  int SystemInformation; // [rsp+38h] [rbp+10h] BYREF
  char v5; // [rsp+3Ch] [rbp+14h]

  v0 = dword_1800BC738;
  if ( !dword_1800BC738 )
  {
    SystemInformation = 8;
    v1 = NtQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength);
    v0 = 2;
    if ( v1 >= 0 && (v5 & 2) != 0 )
    {
      result = 1LL;
      dword_1800BC738 = 1;
      return result;
    }
    dword_1800BC738 = 2;
  }
  result = 1LL;
  if ( v0 != 1 )
    return 0LL;
  return result;
}
