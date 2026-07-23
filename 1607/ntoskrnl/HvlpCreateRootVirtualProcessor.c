/*
 * XREFs of HvlpCreateRootVirtualProcessor @ 0x14062052C
 * Callers:
 *     HvlpEnableRootVirtualProcessor @ 0x140620620 (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     HvcallInitInputControl @ 0x140171F60 (HvcallInitInputControl.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x140231E94 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlpCreateRootVirtualProcessor(__int64 a1, int a2)
{
  int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rax
  __int64 QuadPart; // rdx
  __int16 v8; // bx
  PHYSICAL_ADDRESS v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(a1 + 12)] + 160);
  HvcallInitInputControl(78, &v10);
  while ( 1 )
  {
    result = HvlpDepositPages(*(_WORD *)(a1 + 12));
    if ( (_DWORD)result )
      break;
    v6 = HvlpAcquireHypercallPage(v9, 1, 0LL, 32LL);
    QuadPart = v9[3].QuadPart;
    *(_QWORD *)v6 = HvlPartitionId;
    *(_DWORD *)(v6 + 8) = a2;
    *(_DWORD *)(v6 + 16) = v4;
    *(_DWORD *)(v6 + 20) = -2147483647;
    *(_QWORD *)(v6 + 24) = *(unsigned int *)(a1 + 4);
    v8 = HvcallInitiateHypercall(v10, QuadPart, 0LL);
    HvlpReleaseHypercallPage((__int64)v9);
    if ( v8 != 11 )
      return v8 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
