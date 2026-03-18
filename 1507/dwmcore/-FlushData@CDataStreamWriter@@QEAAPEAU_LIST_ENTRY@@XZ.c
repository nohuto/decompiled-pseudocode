/*
 * XREFs of ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x18004F4EC
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18004EED4 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CDataStreamWriter::FlushData(CDataStreamWriter *this)
{
  __int64 v1; // rax
  CDataStreamWriter **v2; // rdx
  CDataStreamWriter *v3; // rax

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    v2 = (CDataStreamWriter **)*((_QWORD *)this + 1);
    v3 = (CDataStreamWriter *)(v1 + 8);
    *(_QWORD *)v3 = this;
    *((_QWORD *)v3 + 1) = v2;
    if ( *v2 != this )
      __fastfail(3u);
    *v2 = v3;
    *((_QWORD *)this + 1) = v3;
    *((_QWORD *)this + 2) = 0LL;
  }
  return (struct _LIST_ENTRY *)this;
}
