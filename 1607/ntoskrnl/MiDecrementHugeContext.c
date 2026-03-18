/*
 * XREFs of MiDecrementHugeContext @ 0x140140E7C
 * Callers:
 *     MiDeleteZeroThreadContext @ 0x14013F1EC (MiDeleteZeroThreadContext.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140140D60 (MiGetUltraHugeAlreadyActive.c)
 * Callees:
 *     MiReleaseLargeZeroingVa @ 0x14008B474 (MiReleaseLargeZeroingVa.c)
 *     MiStopPageAccessor @ 0x14008B864 (MiStopPageAccessor.c)
 *     MiLockPage @ 0x1401593D8 (MiLockPage.c)
 *     MiMakeDemandZeroPte @ 0x1401F2734 (MiMakeDemandZeroPte.c)
 *     MiUnlockPage @ 0x1401F2B80 (MiUnlockPage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiDecrementHugeContext(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx

  v1 = *(_QWORD *)(a1 + 112);
  if ( (*(_DWORD *)(v1 + 188))-- == 1 )
  {
    v4 = *(_QWORD *)(v1 + 72);
    v5 = *(_QWORD **)(v1 + 80);
    if ( *(_QWORD *)(v4 + 8) != v1 + 72 || *v5 != v1 + 72 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    if ( *(_DWORD *)(v1 + 192) != 512 )
    {
      if ( !*(_BYTE *)(v1 + 68) )
      {
        v6 = *(_QWORD *)(v1 + 24);
        if ( v6 )
        {
          MiLockPage(*(_QWORD *)(v1 + 24));
          MiStopPageAccessor(v6);
          *(_QWORD *)(v6 + 16) = MiMakeDemandZeroPte(4LL, v7, v8, v9);
          MiUnlockPage(v6, v10);
        }
      }
      MiReleaseLargeZeroingVa(a1);
    }
    ExFreePoolWithTag((PVOID)v1, 0);
  }
}
