/*
 * XREFs of HvlpSetupCachedHypercallPages @ 0x1401BC614
 * Callers:
 *     HvlInitializeProcessor @ 0x14054E4D8 (HvlInitializeProcessor.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     InitializeSListHead @ 0x140002B3C (InitializeSListHead.c)
 *     MmGetPhysicalAddress @ 0x14002500C (MmGetPhysicalAddress.c)
 */

PSLIST_ENTRY __fastcall HvlpSetupCachedHypercallPages(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // r14
  __int64 v2; // rdi
  PHYSICAL_ADDRESS *v3; // rbx
  char *v4; // rsi
  __int64 v5; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PHYSICAL_ADDRESS v7; // rax

  v1 = a1 + 1535;
  v2 = a1[1536].Alignment + 0x2000;
  InitializeSListHead(a1 + 1535);
  v3 = (PHYSICAL_ADDRESS *)v2;
  v4 = (char *)v2;
  v5 = 3LL;
  do
  {
    PhysicalAddress = MmGetPhysicalAddress(v4);
    v4 += 4096;
    v3[2] = PhysicalAddress;
    v3->QuadPart = (LONGLONG)v4;
    v3 += 512;
    --v5;
  }
  while ( v5 );
  v7 = MmGetPhysicalAddress((PVOID)(v2 + 12288));
  *(_QWORD *)(v2 + 12288) = 0LL;
  *(PHYSICAL_ADDRESS *)(v2 + 12304) = v7;
  return InterlockedPushListSList(v1, (PSLIST_ENTRY)v2, (PSLIST_ENTRY)(v2 + 12288), 4u);
}
