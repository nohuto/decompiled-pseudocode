/*
 * XREFs of ExpPrepareNewSvmDevice @ 0x14022EFE8
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14022E994 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoQueryInterface @ 0x1405766E0 (IoQueryInterface.c)
 */

__int64 __fastcall ExpPrepareNewSvmDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  int Interface; // edi
  __int64 v9; // rax
  int v11; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+44h] [rbp-44h]

  *a3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x65447845u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x70uLL);
  v7[2] = a1;
  *((_DWORD *)v7 + 6) = 1;
  Interface = IoQueryInterface(a1, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 64, 1, 0LL, v7 + 4);
  if ( Interface >= 0 )
  {
    Interface = ((__int64 (__fastcall *)(_QWORD, _QWORD *))v7[11])(v7[5], v7 + 12);
    if ( Interface >= 0 )
    {
      Interface = ((__int64 (__fastcall *)(_QWORD, int *))v7[8])(v7[5], &v11);
      if ( Interface >= 0 )
      {
        if ( (v11 & 7) != 7 || 1 << (v12 & 0x1F) < (unsigned int)ExpSvmAgents )
        {
          Interface = -1073741585;
          goto LABEL_15;
        }
        _InterlockedAdd(&ExTbFlushActive, 1u);
        Interface = ((__int64 (__fastcall *)(__int64, _QWORD, int *, _QWORD *))HalIommuDispatch[3])(
                      a2,
                      v7[12],
                      &v11,
                      v7 + 13);
        if ( Interface < 0 )
        {
          _InterlockedDecrement(&ExTbFlushActive);
          goto LABEL_15;
        }
        Interface = ((__int64 (__fastcall *)(_QWORD, int *, __int64 (__fastcall *)(__int64, int, __int64), _QWORD))v7[9])(
                      v7[5],
                      &v11,
                      ExSvmDevicePowerCallback,
                      v7[13]);
        if ( Interface >= 0 )
        {
          v9 = ExpSvmDevices;
          if ( *(__int64 **)(ExpSvmDevices + 8) != &ExpSvmDevices )
            __fastfail(3u);
          *v7 = ExpSvmDevices;
          v7[1] = &ExpSvmDevices;
          *(_QWORD *)(v9 + 8) = v7;
          ExpSvmDevices = (__int64)v7;
          *a3 = v7;
LABEL_15:
          if ( Interface >= 0 )
            return (unsigned int)Interface;
        }
      }
    }
    ((void (__fastcall *)(_QWORD))v7[7])(v7[5]);
  }
  if ( v7[13] )
  {
    ((void (__fastcall *)(__int64))HalIommuDispatch[7])(a2);
    _InterlockedDecrement(&ExTbFlushActive);
  }
  ExFreePoolWithTag(v7, 0);
  return (unsigned int)Interface;
}
