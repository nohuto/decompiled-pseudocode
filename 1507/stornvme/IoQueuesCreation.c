/*
 * XREFs of IoQueuesCreation @ 0x1C00039EC
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004400 (NVMeControllerInitPart2.c)
 * Callees:
 *     IoQueuesFreeResources @ 0x1C0003EA4 (IoQueuesFreeResources.c)
 *     ProcessCommand @ 0x1C000C470 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CD2C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

char __fastcall IoQueuesCreation(__int64 a1, char a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // rsi
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // di
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8

  v4 = 1;
  if ( *(_WORD *)(a1 + 226) )
  {
    v5 = a1 + 560;
    while ( 1 )
    {
      v6 = *(void **)(a1 + 648);
      *(_BYTE *)(a1 + 563) = 0;
      memset(v6, 0, 0x10A8uLL);
      v7 = *(_QWORD *)(a1 + 648);
      *(_QWORD *)(a1 + 616) = v7;
      *(_DWORD *)(a1 + 552) = 1;
      *(_BYTE *)(v7 + 4166) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 648) + 4167LL) = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 648) + 4160LL) = 0;
      v8 = *(_QWORD *)(a1 + 648) + 4096LL;
      v9 = 168LL * v4;
      *(_BYTE *)v8 = 5;
      *(_QWORD *)(v8 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 544) + v9 - 160);
      *(_WORD *)(v8 + 40) = v4;
      LOWORD(v7) = *(_WORD *)(a1 + 222);
      *(_DWORD *)(v8 + 44) |= 3u;
      *(_WORD *)(v8 + 42) = v7 - 1;
      *(_WORD *)(v8 + 46) = *(_WORD *)(*(_QWORD *)(a1 + 544) + v9 - 64);
      ProcessCommand(a1, v5);
      LOBYTE(v10) = a2;
      WaitForCommandCompleteWithCustomTimeout(a1, v5, v10, 10000LL);
      if ( *(_BYTE *)(a1 + 563) != 1 )
        break;
      if ( ++v4 > *(_WORD *)(a1 + 226) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v11 = 1;
    if ( !*(_WORD *)(a1 + 224) )
      return 1;
    while ( 1 )
    {
      v12 = *(void **)(a1 + 648);
      *(_BYTE *)(a1 + 563) = 0;
      memset(v12, 0, 0x10A8uLL);
      v13 = *(_QWORD *)(a1 + 648);
      *(_QWORD *)(a1 + 616) = v13;
      *(_DWORD *)(a1 + 552) = 1;
      *(_BYTE *)(v13 + 4166) = 1;
      *(_BYTE *)(*(_QWORD *)(a1 + 648) + 4167LL) = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 648) + 4160LL) = 0;
      v14 = *(_QWORD *)(a1 + 648) + 4096LL;
      v15 = 136LL * v11;
      *(_BYTE *)v14 = 1;
      *(_QWORD *)(v14 + 24) = *(_QWORD *)(v15 + *(_QWORD *)(a1 + 536) - 128);
      *(_WORD *)(v14 + 40) = v11;
      *(_WORD *)(v14 + 42) = *(_WORD *)(a1 + 222) - 1;
      *(_DWORD *)(v14 + 44) = *(_DWORD *)(v14 + 44) & 0xFFFFFFF8 | 5;
      *(_WORD *)(v14 + 46) = *(_WORD *)(v15 + *(_QWORD *)(a1 + 536) - 86);
      ProcessCommand(a1, a1 + 560);
      LOBYTE(v16) = a2;
      WaitForCommandCompleteWithCustomTimeout(a1, a1 + 560, v16, 10000LL);
      if ( *(_BYTE *)(a1 + 563) != 1 )
        break;
      if ( ++v11 > *(_WORD *)(a1 + 224) )
        return 1;
    }
  }
  IoQueuesFreeResources(a1);
  return 0;
}
