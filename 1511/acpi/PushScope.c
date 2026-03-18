/*
 * XREFs of PushScope @ 0x1C0005DD0
 * Callers:
 *     ThermalZone @ 0x1C0005870 (ThermalZone.c)
 *     Processor @ 0x1C0005920 (Processor.c)
 *     ParseLoad @ 0x1C0005A50 (ParseLoad.c)
 *     Scope @ 0x1C0005C00 (Scope.c)
 *     While @ 0x1C0005C80 (While.c)
 *     Device @ 0x1C0005D20 (Device.c)
 *     PowerRes @ 0x1C0045950 (PowerRes.c)
 * Callees:
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall PushScope(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v11; // edi
  __int64 v13; // rax
  _QWORD *v14; // r10
  char v15; // al

  v11 = 0;
  v13 = HeapAlloc(a1 + 54, 1297237576LL, 80LL);
  v14 = (_QWORD *)v13;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 8) = a1[52];
    a1[52] = v13;
    *(_QWORD *)(v13 + 24) = ParseScope;
    *(_DWORD *)v13 = 1347371859;
    a1[15] = a2;
    *(_QWORD *)(v13 + 32) = a3;
    *(_QWORD *)(v13 + 40) = a4;
    *(_QWORD *)(v13 + 48) = a1[10];
    v15 = gdwfAMLI;
    a1[10] = a5;
    if ( (v15 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a5 + 104));
    v14[7] = a1[11];
    a1[11] = a6;
    v14[8] = a1[40];
    a1[40] = a7;
    v14[9] = a8;
  }
  else
  {
    LogError(3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v11;
}
