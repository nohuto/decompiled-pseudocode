/*
 * XREFs of ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C0159BB4
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00AD7D0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0159EE4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     Template_dt @ 0x1C0021E18 (Template_dt.c)
 */

void __fastcall BLTQUEUE::InsertQueueHead(BLTQUEUE *this, struct _LIST_ENTRY *a2, struct BLTENTRY *a3)
{
  struct _KMUTANT *v3; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-18h]

  v3 = (struct _KMUTANT *)*((_QWORD *)this + 1);
  KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
  if ( a2 == (struct _LIST_ENTRY *)((char *)this + 16) && a3 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v11) = 1;
    Template_dt(v7, &EventBltQueueAddEntry, v8, *((_DWORD *)a3 + 15), v11);
  }
  Flink = a2->Flink;
  v10 = (struct _LIST_ENTRY *)((char *)a3 + 8);
  *((_QWORD *)a3 + 1) = a2->Flink;
  *((_QWORD *)a3 + 2) = a2;
  if ( Flink->Blink != a2 )
    __fastfail(3u);
  Flink->Blink = v10;
  a2->Flink = v10;
  KeReleaseMutex(v3, 0);
}
