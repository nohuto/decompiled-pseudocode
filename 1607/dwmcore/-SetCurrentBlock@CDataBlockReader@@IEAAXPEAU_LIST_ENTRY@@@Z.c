/*
 * XREFs of ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800AE6A0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800AE724 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800AE798 (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 * Callees:
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x18004C540 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x18004C570 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDataBlockReader::SetCurrentBlock(CDataBlockReader *this, struct _LIST_ENTRY *a2)
{
  CDataStreamBlock *p_Blink; // rcx
  __int64 (*v4)(void); // rax
  unsigned int *WrittenSize; // rax
  CDataStreamBlock *v6; // rcx
  unsigned int *v7; // rdi
  __int64 (*v8)(void); // rax
  char *Data; // rax
  char *v10; // rcx
  unsigned int v11; // eax

  p_Blink = 0LL;
  if ( a2 )
    p_Blink = (CDataStreamBlock *)&a2[-1].Blink;
  *((_QWORD *)this + 1) = p_Blink;
  v4 = *(__int64 (**)(void))(*(_QWORD *)p_Blink + 8LL);
  if ( (char *)v4 == (char *)CDataStreamBlock::GetWrittenSize )
    WrittenSize = CDataStreamBlock::GetWrittenSize(p_Blink);
  else
    WrittenSize = (unsigned int *)v4();
  v6 = (CDataStreamBlock *)*((_QWORD *)this + 1);
  v7 = WrittenSize;
  v8 = *(__int64 (**)(void))(*(_QWORD *)v6 + 16LL);
  if ( (char *)v8 == (char *)CDataStreamBlock::GetData )
    Data = CDataStreamBlock::GetData(v6);
  else
    Data = (char *)v8();
  v10 = Data;
  v11 = *v7;
  *((_QWORD *)this + 2) = v10;
  *((_DWORD *)this + 8) = v11;
  *((_QWORD *)this + 3) = v10;
}
