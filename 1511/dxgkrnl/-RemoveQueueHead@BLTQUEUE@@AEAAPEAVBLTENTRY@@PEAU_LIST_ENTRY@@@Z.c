/*
 * XREFs of ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C00BFC38
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00BFA8C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015E204 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     Template_dt @ 0x1C0021D0C (Template_dt.c)
 */

struct _LIST_ENTRY **__fastcall BLTQUEUE::RemoveQueueHead(BLTQUEUE *this, struct _LIST_ENTRY *a2)
{
  struct _KMUTANT *v2; // rbx
  __int64 v5; // r8
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-18h]

  v2 = (struct _KMUTANT *)*((_QWORD *)this + 1);
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  Flink = a2->Flink;
  if ( a2->Flink == a2 )
  {
    p_Blink = 0LL;
  }
  else
  {
    v9 = Flink->Flink;
    if ( Flink->Blink != a2 || v9->Blink != Flink )
      __fastfail(3u);
    a2->Flink = v9;
    p_Blink = &Flink[-1].Blink;
    v9->Blink = a2;
  }
  if ( a2 == (struct _LIST_ENTRY *)((char *)this + 16) && p_Blink && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v10) = 1;
    Template_dt(
      (unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
      &EventBltQueueRemoveEntry,
      v5,
      *((_DWORD *)p_Blink + 15),
      v10);
  }
  KeReleaseMutex(v2, 0);
  return p_Blink;
}
