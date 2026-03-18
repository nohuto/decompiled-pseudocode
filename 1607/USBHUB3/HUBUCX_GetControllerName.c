/*
 * XREFs of HUBUCX_GetControllerName @ 0x1C001EDF8
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012AB0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     WMI_AcquireBusInfo @ 0x1C0070AD0 (WMI_AcquireBusInfo.c)
 *     WMI_AcquireControllerName @ 0x1C0070BA8 (WMI_AcquireControllerName.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0035280 (memmove.c)
 */

__int64 __fastcall HUBUCX_GetControllerName(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v4; // rsi
  _DWORD *PoolWithTag; // rdi
  int v7; // ebx
  unsigned __int64 v8; // rcx
  _DWORD v10[10]; // [rsp+30h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+20h] BYREF

  v4 = a3;
  LODWORD(NumberOfBytes) = 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x68334855u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, SIZE_T *, _DWORD *))(a1 + 616))(
         *(_QWORD *)(a1 + 568),
         1LL,
         PoolWithTag,
         &NumberOfBytes,
         v10);
  if ( v7 == -1073741789 )
  {
    LODWORD(NumberOfBytes) = v10[0];
    ExFreePoolWithTag(PoolWithTag, 0x68334855u);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x68334855u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, SIZE_T *, _DWORD *))(a1 + 616))(
           *(_QWORD *)(a1 + 568),
           1LL,
           PoolWithTag,
           &NumberOfBytes,
           v10);
  }
  if ( v7 >= 0 )
  {
    if ( (unsigned int)v4 >= 4 )
    {
      *a2 = PoolWithTag[2];
      v8 = (unsigned int)PoolWithTag[2];
      if ( v4 - 4 < v8 )
        LODWORD(v8) = v4 - 4;
      memmove(a2 + 1, PoolWithTag + 3, (unsigned int)v8);
    }
    else
    {
      v7 = -1073741789;
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0x68334855u);
  return (unsigned int)v7;
}
