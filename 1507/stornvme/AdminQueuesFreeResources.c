/*
 * XREFs of AdminQueuesFreeResources @ 0x1C00027F8
 * Callers:
 *     NVMeControllerStop @ 0x1C00048A4 (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C00049B4 (NVMeControllerRemove.c)
 * Callees:
 *     memset @ 0x1C000EE00 (memset.c)
 */

__int64 __fastcall AdminQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r8
  void *v8; // rcx
  void **v9; // rbx
  __int64 v10; // rdi

  if ( !*(_BYTE *)(a1 + 16) )
  {
    v5 = *(_QWORD *)(a1 + 256);
    if ( v5 )
      result = StorPortExtendedFunction(1LL, a1, v5, a4);
    *(_QWORD *)(a1 + 256) = 0LL;
    v7 = *(_QWORD *)(a1 + 264);
    if ( v7 )
      result = StorPortExtendedFunction(1LL, a1, v7, a4);
    *(_QWORD *)(a1 + 264) = 0LL;
    *(_DWORD *)(a1 + 552) = 0;
    v8 = *(void **)(a1 + 648);
    if ( v8 )
      result = (__int64)memset(v8, 0, 0x10A8uLL);
    v9 = (void **)(a1 + 752);
    v10 = 4LL;
    do
    {
      *((_DWORD *)v9 - 24) = 0;
      if ( *v9 )
        result = (__int64)memset(*v9, 0, 0x10A8uLL);
      v9 += 13;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
