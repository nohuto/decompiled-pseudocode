/*
 * XREFs of MiDeleteZeroThreadContext @ 0x140131D78
 * Callers:
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiInitializePageZeroing @ 0x1401312FC (MiInitializePageZeroing.c)
 *     MiZeroNodePages @ 0x140131668 (MiZeroNodePages.c)
 *     MiZeroLargePageThread @ 0x140131D18 (MiZeroLargePageThread.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiReplaceUltraBit @ 0x1400E4CDC (MiReplaceUltraBit.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     MiReleaseNonPagedResources @ 0x1400E9D1C (MiReleaseNonPagedResources.c)
 */

void __fastcall MiDeleteZeroThreadContext(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx

  if ( *(_BYTE *)(a2 + 24) == 1 )
  {
    MiReleaseFreshPage(48LL * *(_QWORD *)(a2 + 16) - 0x58000000000LL);
    MiReplaceUltraBit((unsigned __int64 *)a2, 0);
  }
  else
  {
    MiReleasePtes((__int64)&qword_1402FF7B0, *(_QWORD **)(a2 + 40), 0x200u);
  }
  v7 = *(_QWORD *)(a2 + 32);
  if ( v7 && *(_DWORD *)(v7 + 68) && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 68), 0xFFFFFFFF) == 1 )
    KeSignalGate(v7 + 72, 1LL, v6);
  if ( a3 == 1 )
    MiReleaseNonPagedResources(a1, 0x201uLL);
  ExFreePoolWithTag((PVOID)a2, 0);
}
