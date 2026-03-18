/*
 * XREFs of PopBatteryCheckTriggerAllBatteries @ 0x140636850
 * Callers:
 *     PopBatteryCheckTrigger @ 0x1404F99E8 (PopBatteryCheckTrigger.c)
 * Callees:
 *     <none>
 */

char __fastcall PopBatteryCheckTriggerAllBatteries(__int64 a1)
{
  __int64 v1; // r8
  char v3; // r9
  unsigned int v4; // r10d
  unsigned int v5; // ecx

  v1 = qword_1402DE3F0;
  v3 = 1;
  while ( (__int64 *)v1 != &qword_1402DE3F0 )
  {
    v4 = *(_DWORD *)(v1 + 64);
    if ( v4 - 1 <= 0xFFFFFFFD )
    {
      v5 = v4 / 0xC8 + v4 * *(_DWORD *)(a1 + 16) / 0x64;
      if ( *(_DWORD *)(v1 + 68) > v5 )
        v5 = *(_DWORD *)(v1 + 68);
      if ( *(_DWORD *)(v1 + 88) > v5 )
        return 0;
    }
    v1 = *(_QWORD *)v1;
  }
  return v3;
}
