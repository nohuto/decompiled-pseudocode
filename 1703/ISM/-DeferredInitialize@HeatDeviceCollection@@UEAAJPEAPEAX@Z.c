/*
 * XREFs of ?DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z @ 0x18007D800
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18007DC14 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 */

__int64 __fastcall HeatDeviceCollection::DeferredInitialize(HeatDeviceCollection *this, void **a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 851983;
  v2 = HIDDeviceCollection::Initialize(this, (unsigned int)a2, (struct _RIM_USAGE_ANDPAGE *const)&v6, 1u, 1u, a2);
  v4 = v2;
  if ( v2 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v3, &MinInput_Warning_CheckResult, 0, 96, v2);
  return v4;
}
