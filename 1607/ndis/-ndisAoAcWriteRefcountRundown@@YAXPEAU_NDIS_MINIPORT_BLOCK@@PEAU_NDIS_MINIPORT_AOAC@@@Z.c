/*
 * XREFs of ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C006D8E0
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006DAA4 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     Template_xq @ 0x1C004889C (Template_xq.c)
 *     Template_jqx @ 0x1C0062DC8 (Template_jqx.c)
 *     Template_xqq @ 0x1C006F3C8 (Template_xqq.c)
 */

void __fastcall ndisAoAcWriteRefcountRundown(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_AOAC *a2)
{
  int v2; // eax
  unsigned int v5; // edi
  int *ComponentRefCounts; // rsi
  __int64 v7; // rcx
  __int64 v8; // [rsp+28h] [rbp+20h]

  v2 = Microsoft_Windows_NDISEnableBits;
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
  {
    Template_jqx(
      (__int64)a1,
      &NicActiveRefRundownBegin,
      &a1->InterfaceGuid,
      (unsigned __int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value);
    v2 = Microsoft_Windows_NDISEnableBits;
  }
  v5 = 0;
  ComponentRefCounts = a2->ComponentRefCounts;
  do
  {
    v7 = (unsigned int)*ComponentRefCounts;
    if ( (int)v7 > 0 && (v2 & 0x4000000) != 0 )
    {
      Template_xqq(v7, (_DWORD)a2, (_DWORD)a1 + 4064, a1->NetLuid.Value, v5, *ComponentRefCounts);
      v2 = Microsoft_Windows_NDISEnableBits;
    }
    ++v5;
    ++ComponentRefCounts;
  }
  while ( v5 < 0xF );
  if ( (v2 & 0x4000000) != 0 )
  {
    LODWORD(v8) = a2->StopFlags.Value;
    Template_xq(v7, &NicActiveRefRundownEnd, &a1->InterfaceGuid, a1->NetLuid.Value, v8);
  }
}
