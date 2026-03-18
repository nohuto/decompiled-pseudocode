/*
 * XREFs of ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0012004
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001CFF0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C001D1C0 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0013040 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
        struct DirectComposition::CConnection *a1,
        struct DirectComposition::CrossChannelVisualData *a2)
{
  DirectComposition::CApplicationChannel *v4; // rbx
  PVOID v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CrossChannelVisualData *v7; // rbx
  int Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  struct DirectComposition::CApplicationChannel *v10; // [rsp+48h] [rbp+10h] BYREF

  do
  {
    if ( (int)DirectComposition::CApplicationChannel::ReferenceHandleAndLock(*((_DWORD *)a2 + 3), &v10) >= 0 )
    {
      v4 = v10;
      Buffer = *((_DWORD *)a2 + 2);
      v9 = 0LL;
      v5 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)v10 + 192), &Buffer);
      if ( v5 )
      {
        v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v5 + 1);
        if ( v6 )
          DirectComposition::CApplicationChannel::ReleaseResource(v4, v6);
      }
      (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v4)(v4);
    }
    DirectComposition::CConnection::ReleaseSystemResource(a1, *((_DWORD *)a2 + 2));
    v7 = *(struct DirectComposition::CrossChannelVisualData **)a2;
    Win32FreePool(a2);
    a2 = v7;
  }
  while ( v7 );
}
