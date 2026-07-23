/*
 * XREFs of PsFreeSiloContextSlot @ 0x14067DF60
 * Callers:
 *     RegistryUnload @ 0x140612E34 (RegistryUnload.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PspStorageGetObject @ 0x140210214 (PspStorageGetObject.c)
 *     PspGetNextSilo @ 0x14055FE9C (PspGetNextSilo.c)
 */

__int64 __fastcall PsFreeSiloContextSlot(unsigned int a1)
{
  __int64 *i; // rcx
  __int64 v3; // rcx
  __int64 *NextSilo; // rax
  __int64 *v5; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = PspGetNextSilo(i, 0);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    v3 = NextSilo[161];
    if ( v3 && (int)PspStorageGetObject(v3, a1, (unsigned __int64 *)&Object) >= 0 )
    {
      ObfDereferenceObject(Object);
      KeBugCheckEx(0x199u, v5[161], 0LL, 0LL, 0LL);
    }
  }
  return PspStorageFreeSlot(a1);
}
