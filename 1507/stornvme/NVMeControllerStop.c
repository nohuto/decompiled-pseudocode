/*
 * XREFs of NVMeControllerStop @ 0x1C00048A4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001B80 (NVMeHwAdapterControl.c)
 * Callees:
 *     AdminQueuesFreeResources @ 0x1C00027F8 (AdminQueuesFreeResources.c)
 *     IoQueuesDeletion @ 0x1C0003C44 (IoQueuesDeletion.c)
 *     IoQueuesFreeResources @ 0x1C0003EA4 (IoQueuesFreeResources.c)
 *     NVMePowerCleanUp @ 0x1C00056F4 (NVMePowerCleanUp.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

bool __fastcall NVMeControllerStop(__int64 a1)
{
  bool v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  bool result; // al

  v2 = IoQueuesDeletion(a1);
  NVMePowerCleanUp(a1);
  IoQueuesFreeResources(a1, v3, v4, v5);
  AdminQueuesFreeResources(a1, v6, v7, v8);
  v10 = *(_QWORD *)(a1 + 176);
  if ( v10 )
  {
    StorPortExtendedFunction(1LL, a1, v10, v9);
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  v11 = *(_QWORD *)(a1 + 184);
  if ( v11 )
  {
    StorPortExtendedFunction(1LL, a1, v11, v9);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 156) = 0LL;
  if ( v12 )
  {
    StorPortExtendedFunction(1LL, a1, v12, v9);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 200);
  if ( v13 )
  {
    StorPortExtendedFunction(1LL, a1, v13, v9);
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  *(_WORD *)(a1 + 192) = 0;
  if ( !*(_BYTE *)(a1 + 16) )
    StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1168), v9);
  memset((void *)(a1 + 1168), 0, 0x7F8uLL);
  result = v2;
  *(_DWORD *)(a1 + 140) = 0;
  return result;
}
