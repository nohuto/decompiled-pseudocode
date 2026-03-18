/*
 * XREFs of _DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1C0144C74
 * Callers:
 *     DxgkPresent @ 0x1C00C8CB0 (DxgkPresent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

PSLIST_ENTRY __fastcall DxgkPresent_::_3_::ENSURE_DELETE::_ENSURE_DELETE(struct _SLIST_ENTRY **a1)
{
  struct _SLIST_ENTRY *v1; // rdi
  struct DXGGLOBAL *Global; // rax
  union _SLIST_HEADER *v3; // rbx

  v1 = *a1;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v3 = (union _SLIST_HEADER *)((char *)Global + 640);
  ++*((_DWORD *)Global + 167);
  if ( ExQueryDepthSList((PSLIST_HEADER)Global + 40) < *((_WORD *)Global + 328) )
    return ExpInterlockedPushEntrySList(v3, v1);
  ++LODWORD(v3[2].Alignment);
  return (PSLIST_ENTRY)((__int64 (__fastcall *)(struct _SLIST_ENTRY *, union _SLIST_HEADER *))v3[3].Region)(v1, v3);
}
