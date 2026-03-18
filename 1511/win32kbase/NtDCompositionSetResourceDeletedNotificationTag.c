/*
 * XREFs of NtDCompositionSetResourceDeletedNotificationTag @ 0x1C0071470
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_N@Z @ 0x1C001DCBC (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetResourceDeletedNotificationTag(unsigned int a1, int a2, __int64 a3, bool *a4)
{
  int v7; // ebx
  _BYTE *v8; // rdx
  struct DirectComposition::CApplicationChannel *v9; // rsi
  bool v11; // [rsp+20h] [rbp-38h] BYREF
  struct DirectComposition::CApplicationChannel *v12; // [rsp+28h] [rbp-30h] BYREF

  v7 = 0;
  v12 = 0LL;
  v11 = 0;
  if ( a4 )
  {
    v8 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    v7 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v12);
    v9 = v12;
    if ( v7 >= 0 )
    {
      v7 = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(v12, a2, a3, &v11);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v9)(v9);
      if ( v7 >= 0 )
        *a4 = v11;
    }
  }
  return (unsigned int)v7;
}
