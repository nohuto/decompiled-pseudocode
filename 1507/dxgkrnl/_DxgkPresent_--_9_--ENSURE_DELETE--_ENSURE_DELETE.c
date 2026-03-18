/*
 * XREFs of _DxgkPresent_::_9_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1C00BE57C
 * Callers:
 *     DxgkPresent @ 0x1C0069D10 (DxgkPresent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

PSLIST_ENTRY __fastcall DxgkPresent_::_9_::ENSURE_DELETE::_ENSURE_DELETE(
        struct _SLIST_ENTRY **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _SLIST_ENTRY *v4; // rdi
  struct DXGGLOBAL *Global; // rax
  union _SLIST_HEADER *v6; // rbx

  v4 = *a1;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  v6 = (union _SLIST_HEADER *)((char *)Global + 656);
  ++*((_DWORD *)Global + 171);
  if ( ExQueryDepthSList((PSLIST_HEADER)Global + 41) < *((_WORD *)Global + 336) )
    return ExpInterlockedPushEntrySList(v6, v4);
  ++LODWORD(v6[2].Alignment);
  return (PSLIST_ENTRY)((__int64 (__fastcall *)(struct _SLIST_ENTRY *, union _SLIST_HEADER *))v6[3].Region)(v4, v6);
}
