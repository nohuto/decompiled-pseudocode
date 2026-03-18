/*
 * XREFs of sub_1C0124B04 @ 0x1C0124B04
 * Callers:
 *     DxgkPresent @ 0x1C00B2160 (DxgkPresent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

PSLIST_ENTRY __fastcall sub_1C0124B04(struct _SLIST_ENTRY **a1)
{
  struct _SLIST_ENTRY *v1; // rdi
  struct DXGGLOBAL *Global; // rax
  union _SLIST_HEADER *v3; // rbx

  v1 = *a1;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v3 = (union _SLIST_HEADER *)((char *)Global + 800);
  ++*((_DWORD *)Global + 207);
  if ( ExQueryDepthSList((PSLIST_HEADER)Global + 50) < *((_WORD *)Global + 408) )
    return ExpInterlockedPushEntrySList(v3, v1);
  ++LODWORD(v3[2].Alignment);
  return (PSLIST_ENTRY)((__int64 (__fastcall *)(struct _SLIST_ENTRY *, union _SLIST_HEADER *))v3[3].Region)(v1, v3);
}
