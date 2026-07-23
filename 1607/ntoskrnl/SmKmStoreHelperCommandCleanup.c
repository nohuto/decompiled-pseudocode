/*
 * XREFs of SmKmStoreHelperCommandCleanup @ 0x140220ADC
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140002DC4 (SmKmStoreHelperWorker.c)
 * Callees:
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     SmKmStoreHelperCommandProcess @ 0x14011E8F4 (SmKmStoreHelperCommandProcess.c)
 *     SmKmUnlockMdl @ 0x14011EF08 (SmKmUnlockMdl.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void __fastcall SmKmStoreHelperCommandCleanup(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebx
  __int64 (__fastcall *v7[7])(__int64, __int64); // [rsp+20h] [rbp-38h] BYREF

  if ( *(int *)(a3 + 40) >= 0 )
  {
    memset(v7, 0, 0x30uLL);
    v6 = a2 - 2;
    if ( v6 )
    {
      if ( v6 == 2 )
      {
        SmKmUnlockMdl(*(PMDL *)(a3 + 32), *(_QWORD *)(a1 + 120), a1);
        SmFpFree(*(_QWORD *)(a1 + 120), 2, a1, *(struct _MDL **)(a3 + 32));
      }
    }
    else
    {
      v7[0] = *(__int64 (__fastcall **)(__int64, __int64))(a3 + 32);
      v7[1] = *(__int64 (__fastcall **)(__int64, __int64))(a3 + 8);
      SmKmStoreHelperCommandProcess(a1, 3, v7);
    }
  }
}
