/*
 * XREFs of ?OnDeviceRemoval@PTPDeviceCollection@@MEAAJK@Z @ 0x180073700
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x18000C9E8 (-GetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z.c)
 *     ?RemoveKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z @ 0x18000CC88 (-RemoveKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@KPEAVInputInfoSanitizer@@$00@@QEAA_NAEBK@Z @ 0x180073B84 (-ExistsValueForKey@-$DynamicSizeMap@KPEAVInputInfoSanitizer@@$00@@QEAA_NAEBK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPDeviceCollection::OnDeviceRemoval(PTPDeviceCollection *this, int a2)
{
  char *v2; // rdi
  unsigned int v3; // ebx
  int ValueForKey; // eax
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (char *)this + 2760;
  v3 = 0;
  if ( (unsigned __int8)DynamicSizeMap<unsigned long,InputInfoSanitizer *,1>::ExistsValueForKey(
                          (char *)this + 2760,
                          &v9) )
  {
    v8 = 0LL;
    ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey((__int64)v2, &v9, &v8);
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      v6 = 126;
      goto LABEL_5;
    }
    ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::RemoveKey((__int64)v2, (unsigned int *)&v9);
    v3 = ValueForKey;
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_6:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v6 = 129;
LABEL_5:
      Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v6, ValueForKey);
      goto LABEL_6;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v3;
}
