/*
 * XREFs of NVMeControllerRemove @ 0x1C00049B4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001B80 (NVMeHwAdapterControl.c)
 * Callees:
 *     AdminQueuesFreeResources @ 0x1C00027F8 (AdminQueuesFreeResources.c)
 *     IoQueuesFreeResources @ 0x1C0003EA4 (IoQueuesFreeResources.c)
 *     NVMePowerCleanUp @ 0x1C00056F4 (NVMePowerCleanUp.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

char __fastcall NVMeControllerRemove(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8

  *(_DWORD *)(a1 + 20) &= ~1u;
  NVMePowerCleanUp(a1);
  IoQueuesFreeResources(a1, v2, v3, v4);
  AdminQueuesFreeResources(a1, v5, v6, v7);
  v9 = *(_QWORD *)(a1 + 3208);
  if ( v9 )
    StorPortExtendedFunction(25LL, a1, v9, 4096LL);
  v10 = *(_QWORD *)(a1 + 176);
  if ( v10 )
  {
    StorPortExtendedFunction(1LL, a1, v10, v8);
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  v11 = *(_QWORD *)(a1 + 184);
  if ( v11 )
  {
    StorPortExtendedFunction(1LL, a1, v11, v8);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 156) = 0LL;
  if ( v12 )
  {
    StorPortExtendedFunction(1LL, a1, v12, v8);
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 152) = 0;
  if ( v13 )
  {
    StorPortExtendedFunction(1LL, a1, v13, v8);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  v14 = *(_QWORD *)(a1 + 200);
  if ( v14 )
  {
    StorPortExtendedFunction(1LL, a1, v14, v8);
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  *(_WORD *)(a1 + 192) = 0;
  if ( !*(_BYTE *)(a1 + 16) )
    StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1168), v8);
  memset((void *)(a1 + 1168), 0, 0x7F8uLL);
  v16 = *(_QWORD *)(a1 + 11432);
  *(_DWORD *)(a1 + 140) = 0;
  if ( v16 )
  {
    StorPortExtendedFunction(1LL, a1, v16, v15);
    *(_QWORD *)(a1 + 11432) = 0LL;
  }
  return 1;
}
