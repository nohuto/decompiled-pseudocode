/*
 * XREFs of ?GetValueForKey@?$FixedSizeMap@KUUsageList@MobileButtonDeviceCollection@@$0BAA@@@QEAAJAEBKPEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x18007CA5C
 * Callers:
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x18007C130 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x18007C300 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x18007CE80 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18007D050 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall FixedSizeMap<unsigned long,MobileButtonDeviceCollection::UsageList,256>::GetValueForKey(
        _DWORD *a1,
        unsigned int *a2,
        _OWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD *v7; // rdx
  char v8; // al
  int v9; // r9d

  v4 = 0;
  v5 = *a2;
  if ( (_DWORD)v5 != a1[1536] && a3 )
  {
    v6 = 0LL;
    v7 = a1;
    do
    {
      if ( *v7 == (_DWORD)v5 )
      {
        *a3 = *(_OWORD *)&a1[6 * v6 + 2];
        return v4;
      }
      v6 = (unsigned int)(v6 + 1);
      v7 += 6;
    }
    while ( (unsigned int)v6 < 0x100 );
    v8 = 5;
    v4 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v4;
    v9 = 113;
    goto LABEL_11;
  }
  v8 = 87;
  v4 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 96;
LABEL_11:
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v9, v8);
  }
  return v4;
}
