/*
 * XREFs of ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x18007D438
 * Callers:
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x18007CE80 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18007D050 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?HIDUsageToButtonMapping@ConsumerControlDeviceCollection@@AEAAJGPEAK@Z @ 0x18007D4F0 (-HIDUsageToButtonMapping@ConsumerControlDeviceCollection@@AEAAJGPEAK@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::CreateButtonInfo(
        ConsumerControlDeviceCollection *this,
        int a2,
        int a3,
        union _LARGE_INTEGER a4,
        unsigned __int16 a5,
        bool a6,
        struct InputInfo *a7)
{
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  struct InputInfo *v13; // rdi
  ConsumerControlDeviceCollection *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = this;
  v10 = ConsumerControlDeviceCollection::HIDUsageToButtonMapping(this, a5, (unsigned int *)&v15);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = a7;
    memset(a7, 0, 0x760uLL);
    *((_DWORD *)v13 + 176) = (_DWORD)v15;
    *((_BYTE *)v13 + 708) = a6;
    *((_DWORD *)v13 + 1) = a2;
    *(_DWORD *)v13 = 128;
    *((_DWORD *)v13 + 2) = a3;
    *((union _LARGE_INTEGER *)v13 + 2) = a4;
    *((_DWORD *)v13 + 10) = 1888;
    *((_BYTE *)v13 + 699) = 1;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 372, v10);
  }
  return v12;
}
