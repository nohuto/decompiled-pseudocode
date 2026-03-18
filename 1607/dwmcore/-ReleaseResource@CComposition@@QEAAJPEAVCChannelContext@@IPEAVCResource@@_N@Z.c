/*
 * XREFs of ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18003B2C4
 * Callers:
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18003AD28 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180024300 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18003AD94 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::ReleaseResource(
        CComposition *this,
        CResourceTable **a2,
        __int64 a3,
        struct CResource *a4,
        bool a5)
{
  unsigned int v5; // edi
  void (__fastcall *v7)(CNotificationResource *, struct CChannelContext *, __int64, __int64); // rax
  int v8; // eax
  unsigned int v9; // ebx

  v5 = a3;
  LOBYTE(a3) = a5;
  v7 = *(void (__fastcall **)(CNotificationResource *, struct CChannelContext *, __int64, __int64))(*(_QWORD *)a4 + 96LL);
  if ( v7 == CNotificationResource::DetachFromChannel )
    CNotificationResource::DetachFromChannel(a4, (struct CChannelContext *)a2, a3, (__int64)a4);
  else
    ((void (__fastcall *)(struct CResource *, CResourceTable **, __int64))v7)(a4, a2, a3);
  v8 = CResourceTable::DeleteHandle(a2[3], v5);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF90u);
  return v9;
}
