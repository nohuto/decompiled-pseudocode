/*
 * XREFs of ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00273E8
 * Callers:
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C017D9B4 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     OutputDuplGetDebugInfo @ 0x1C017F514 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C017F5F8 (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplPresent @ 0x1C017F6DC (OutputDuplPresent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXGADAPTER_REFERENCE::operator&(_QWORD *a1)
{
  __int64 v2; // rax

  if ( *a1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v2 + 24) = 5773LL;
    WdLogEvent5_WdAssertion(v2);
  }
  return a1;
}
