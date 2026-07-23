/*
 * XREFs of PsWow64GetSupportedArchitectures @ 0x1400F4FB0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExSystemExceptionFilter @ 0x1404A792C (ExSystemExceptionFilter.c)
 *     PsWow64GetProcessMachine @ 0x1404FDDF0 (PsWow64GetProcessMachine.c)
 *     PsWow64IsMachineSupported @ 0x1404FE060 (PsWow64IsMachineSupported.c)
 */

__int64 __fastcall PsWow64GetSupportedArchitectures(_DWORD *a1, unsigned int a2)
{
  int IsMachineSupported; // r14d
  __int64 v5; // r9
  int v6; // r10d
  unsigned int *v7; // r11
  int v8; // r15d
  unsigned int v9; // esi
  __int16 ProcessMachine; // di
  unsigned int v12; // ecx
  int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax

  IsMachineSupported = PsWow64IsMachineSupported(452LL);
  v8 = PsWow64IsMachineSupported(332LL);
  if ( v8 )
    ++v6;
  v9 = 4 * v6 + 4;
  *v7 = v9;
  if ( v9 > a2 )
    return 3221225507LL;
  ProcessMachine = 0;
  if ( v5 )
    ProcessMachine = PsWow64GetProcessMachine(v5);
  memset(a1, 0, v9);
  v12 = *a1 & 0xFFFF0000 | 0x8664;
  *a1 = v12;
  v12 |= 0x10000u;
  *a1 = v12;
  v12 |= 0x20000u;
  *a1 = v12;
  v13 = v12 | 0x40000;
  *a1 = v13;
  if ( ProcessMachine == -31132 )
    *a1 = v13 | 0x80000;
  v14 = 1;
  if ( IsMachineSupported )
  {
    v17 = a1[1] & 0xFFFF0000 | 0x1C4;
    a1[1] = v17;
    v18 = v17 | 0x20000;
    a1[1] = v18;
    if ( ProcessMachine == 452 )
      a1[1] = v18 | 0x80000;
    v14 = 2;
  }
  if ( v8 )
  {
    v15 = a1[v14] & 0xFFFF0000 | 0x14C;
    a1[v14] = v15;
    v16 = v15 | 0x20000;
    a1[v14] = v16;
    if ( ProcessMachine == 332 )
      a1[v14] = v16 | 0x80000;
  }
  return 0LL;
}
