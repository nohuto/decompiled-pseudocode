/*
 * XREFs of SmKmStoreHelperCommandCleanup @ 0x140257B24
 * Callers:
 *     SmKmStoreHelperWorker @ 0x1400DACBC (SmKmStoreHelperWorker.c)
 * Callees:
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     SmKmStoreHelperCommandProcess @ 0x14014325C (SmKmStoreHelperCommandProcess.c)
 *     SmKmUnlockMdl @ 0x140147C0C (SmKmUnlockMdl.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall SmKmStoreHelperCommandCleanup(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(int *)(a3 + 32) >= 0 )
  {
    memset(v7, 0, 0x28uLL);
    v6 = a2 - 2;
    if ( v6 )
    {
      if ( v6 == 2 )
      {
        SmKmUnlockMdl(*(PMDL *)(a3 + 24), *(_QWORD *)(a1 + 112), a1);
        SmFpFree(*(_QWORD *)(a1 + 112), 2LL, a1, *(struct _MDL **)(a3 + 24));
      }
    }
    else
    {
      v7[0] = *(_QWORD *)(a3 + 24);
      v7[1] = *(_QWORD *)(a3 + 8);
      SmKmStoreHelperCommandProcess(a1, 3, (__int64)v7);
    }
  }
}
