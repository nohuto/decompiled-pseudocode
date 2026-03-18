/*
 * XREFs of CcMapDataCommon @ 0x140530004
 * Callers:
 *     CcMapDataForOverwrite @ 0x140118944 (CcMapDataForOverwrite.c)
 * Callees:
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 */

char __fastcall CcMapDataCommon(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int8 a4, _QWORD *a5, __int64 *a6)
{
  __int64 VirtualAddress; // rcx
  char result; // al
  _QWORD v8[3]; // [rsp+50h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  if ( (a4 & 1) != 0 )
    __incgsdword(0x5E10u);
  else
    __incgsdword(0x5E0Cu);
  LODWORD(KeGetCurrentThread()[1].Timer.TimerListEntry.Flink) = 0;
  if ( (a4 & 1) != 0 )
  {
    VirtualAddress = CcGetVirtualAddress(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL), *a2, &v9, &v10, (a4 >> 6) & 1, 0);
    *a6 = VirtualAddress;
LABEL_5:
    result = 1;
    *a5 = v9;
    return result;
  }
  result = CcPinFileData(a1, a2, a3, 1u, 0, a4, (ULONG_PTR *)&v9, a6, v8);
  if ( result )
    goto LABEL_5;
  __incgsdword(0x5E4Cu);
  return result;
}
