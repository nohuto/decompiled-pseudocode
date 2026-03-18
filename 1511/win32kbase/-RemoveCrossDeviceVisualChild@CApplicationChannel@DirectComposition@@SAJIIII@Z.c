/*
 * XREFs of ?RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C00116B0
 * Callers:
 *     NtDCompositionRemoveCrossDeviceVisualChild @ 0x1C00116A0 (NtDCompositionRemoveCrossDeviceVisualChild.c)
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0013040 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C00130CC (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0013BE8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z @ 0x1C001B670 (-LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C001D9F8 (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0046E88 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RemoveCrossDeviceVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v7; // ebx
  unsigned int v8; // edx
  struct DirectComposition::CApplicationChannel *v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  DirectComposition::CApplicationChannel *v12; // rdi
  __int64 v13; // r14
  _QWORD *v14; // rax
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v16; // rdi
  unsigned int v18; // [rsp+20h] [rbp-20h] BYREF
  struct DirectComposition::CApplicationChannel *Buffer[2]; // [rsp+28h] [rbp-18h] BYREF
  struct DirectComposition::CApplicationChannel *v20; // [rsp+38h] [rbp-8h] BYREF

  v20 = 0LL;
  Buffer[0] = 0LL;
  v18 = 0;
  v7 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a3, Buffer);
  if ( v7 >= 0 )
  {
    v8 = a4;
    v9 = Buffer[0];
    v10 = DirectComposition::CApplicationChannel::LookupSystemVisualForParent(Buffer[0], v8, &v18);
    v11 = v18;
    v7 = v10;
    if ( v10 >= 0 )
      DirectComposition::CConnection::ReferenceSystemResource(*((DirectComposition::CConnection **)v9 + 5), v18);
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v9)(v9);
    if ( v7 >= 0 )
    {
      v7 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v20);
      if ( v7 >= 0 )
      {
        v12 = v20;
        LODWORD(Buffer[0]) = v11;
        v13 = 0LL;
        Buffer[1] = 0LL;
        v14 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)v20 + 192), Buffer);
        if ( !v14 || (v13 = v14[1]) == 0 )
          v7 = -1073741811;
        if ( v7 >= 0 )
          v7 = DirectComposition::CApplicationChannel::RemoveVisualChild(v12, a2, *(_DWORD *)(v13 + 24));
        (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v12)(v12);
      }
    }
    if ( v11 )
    {
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      v16 = DefaultConnection;
      if ( DefaultConnection )
      {
        DirectComposition::CConnection::ReleaseSystemResource(DefaultConnection, v11);
        DirectComposition::CConnection::Release(v16);
      }
    }
  }
  return (unsigned int)v7;
}
