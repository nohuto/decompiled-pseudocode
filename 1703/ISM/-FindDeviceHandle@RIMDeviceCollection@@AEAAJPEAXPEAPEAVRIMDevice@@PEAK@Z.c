/*
 * XREFs of ?FindDeviceHandle@RIMDeviceCollection@@AEAAJPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180072D24
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z @ 0x180072150 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800725A4 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800730B0 (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeviceCollection::FindDeviceHandle(
        RIMDeviceCollection *this,
        void *a2,
        struct RIMDevice **a3,
        unsigned int *a4)
{
  __int64 result; // rax
  __int64 *v5; // r11
  unsigned int v6; // r10d
  __int64 v7; // rcx

  result = 0LL;
  v5 = (__int64 *)((char *)this + 624);
  v6 = 0;
  while ( 1 )
  {
    v7 = *v5;
    if ( *v5 )
    {
      if ( *(void **)(v7 + 16) == a2 || !*(_DWORD *)(v7 + 40) )
        break;
    }
    ++v6;
    ++v5;
    if ( v6 >= 0x100 )
      return 2147943568LL;
  }
  if ( a3 )
    *a3 = (struct RIMDevice *)v7;
  if ( a4 )
    *a4 = v6;
  return result;
}
