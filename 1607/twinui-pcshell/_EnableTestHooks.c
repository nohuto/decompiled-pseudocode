/*
 * XREFs of _EnableTestHooks @ 0x18001AE94
 * Callers:
 *     _DisableIndependentStartTiles @ 0x18001AEF0 (_DisableIndependentStartTiles.c)
 * Callees:
 *     <none>
 */

bool EnableTestHooks()
{
  int v0; // ecx
  NTSTATUS v1; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF
  int SystemInformation; // [rsp+38h] [rbp+10h] BYREF
  char v5; // [rsp+3Ch] [rbp+14h]

  v0 = dword_18004CB84;
  if ( !dword_18004CB84 )
  {
    SystemInformation = 8;
    v1 = NtQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength);
    v0 = 2;
    if ( v1 >= 0 && (v5 & 2) != 0 )
      v0 = 1;
    dword_18004CB84 = v0;
  }
  return v0 == 1;
}
