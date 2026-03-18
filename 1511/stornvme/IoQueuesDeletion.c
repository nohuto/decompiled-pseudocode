/*
 * XREFs of IoQueuesDeletion @ 0x1C0003D34
 * Callers:
 *     NVMeControllerStop @ 0x1C0004994 (NVMeControllerStop.c)
 *     NVMeControllerPowerDown @ 0x1C0004C08 (NVMeControllerPowerDown.c)
 * Callees:
 *     ProcessCommand @ 0x1C000C5A0 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CE5C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

bool __fastcall IoQueuesDeletion(__int64 a1)
{
  unsigned __int16 v2; // di
  bool v3; // bp
  unsigned __int16 i; // di
  unsigned __int16 j; // si
  unsigned __int16 v6; // di
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int16 v11; // di
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8

  v2 = 0;
  v3 = 1;
  if ( *(_WORD *)(a1 + 360) > 4u )
  {
    do
    {
      StorPortStallExecution(10000LL);
      if ( *(_WORD *)(a1 + 360) <= 4u )
        break;
      ++v2;
    }
    while ( v2 < 0x3E8u );
  }
  for ( i = 0; i < *(_WORD *)(a1 + 224); ++i )
  {
    for ( j = 0; j < 0x3E8u; ++j )
    {
      StorPortStallExecution(10000LL);
      if ( !*(_WORD *)(136LL * i + *(_QWORD *)(a1 + 536) + 128) )
        break;
    }
  }
  v6 = 0;
  while ( v6 < *(_WORD *)(a1 + 224) )
  {
    v7 = *(void **)(a1 + 648);
    *(_BYTE *)(a1 + 563) = 0;
    memset(v7, 0, 0x10A8uLL);
    v8 = *(_QWORD *)(a1 + 648);
    ++v6;
    *(_QWORD *)(a1 + 616) = v8;
    *(_DWORD *)(a1 + 552) = 1;
    *(_BYTE *)(v8 + 4166) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 648) + 4167LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 648) + 4160LL) = 0;
    v9 = *(_QWORD *)(a1 + 648);
    *(_BYTE *)(v9 + 4096) = 0;
    *(_WORD *)(v9 + 4136) = v6;
    ProcessCommand(a1, a1 + 560);
    LOBYTE(v10) = 1;
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 560, v10, 10000LL);
    v3 = *(_BYTE *)(a1 + 563) == 1;
    if ( *(_BYTE *)(a1 + 563) != 1 )
      *(_DWORD *)(a1 + 24) = 15;
  }
  v11 = 0;
  while ( v11 < *(_WORD *)(a1 + 226) )
  {
    v12 = *(void **)(a1 + 648);
    *(_BYTE *)(a1 + 563) = 0;
    memset(v12, 0, 0x10A8uLL);
    v13 = *(_QWORD *)(a1 + 648);
    ++v11;
    *(_QWORD *)(a1 + 616) = v13;
    *(_DWORD *)(a1 + 552) = 1;
    *(_BYTE *)(v13 + 4166) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 648) + 4167LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 648) + 4160LL) = 0;
    v14 = *(_QWORD *)(a1 + 648);
    *(_BYTE *)(v14 + 4096) = 4;
    *(_WORD *)(v14 + 4136) = v11;
    ProcessCommand(a1, a1 + 560);
    LOBYTE(v15) = 1;
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 560, v15, 10000LL);
    v3 = *(_BYTE *)(a1 + 563) == 1;
    if ( *(_BYTE *)(a1 + 563) != 1 )
      *(_DWORD *)(a1 + 24) = 16;
  }
  return v3;
}
