/*
 * XREFs of UsbhBuildUxdPnpId @ 0x1C00564D8
 * Callers:
 *     UsbhBuildDeviceID @ 0x1C00086EC (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0008A88 (UsbhBuildHardwareID.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     memmove @ 0x1C0029E80 (memmove.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhGetPnpKey @ 0x1C00569BC (UsbhGetPnpKey.c)
 */

__int64 __fastcall UsbhBuildUxdPnpId(size_t a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  PDEVICE_OBJECT v7; // rcx
  int PnpKey; // ebx
  __int64 v9; // rsi
  PVOID PoolWithTag; // rax
  void *v11; // r14
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+70h] [rbp+8h] BYREF
  void *Src; // [rsp+80h] [rbp+18h] BYREF

  Size = a1;
  v6 = PdoExt(a2, a2, a3, a4);
  Src = 0LL;
  LODWORD(Size) = 0;
  v7 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x21u,
      (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids);
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 4) = 0;
  v13 = *(_OWORD *)(v6 + 643);
  PnpKey = UsbhGetPnpKey(v7, v5, &v13, &Src, &Size);
  if ( PnpKey >= 0 )
  {
    v9 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)Size + 2LL, 0x42554855u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v9 + 2);
        memmove(v11, Src, (unsigned int)v9);
        *(_QWORD *)(a3 + 8) = v11;
        *(_DWORD *)(a3 + 4) = v9 + 2;
      }
      else
      {
        PnpKey = -1073741670;
      }
      if ( Src )
        ExFreePoolWithTag(Src, 0);
    }
  }
  return (unsigned int)PnpKey;
}
