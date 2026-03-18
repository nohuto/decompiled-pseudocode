/*
 * XREFs of ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800515EC
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x180051688 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800516FC (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 * Callees:
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x1800504C0 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?GetData@CDataStreamBlock@@UEAAPEBXXZ @ 0x180050500 (-GetData@CDataStreamBlock@@UEAAPEBXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDataBlockReader::SetCurrentBlock(CDataBlockReader *this, struct _LIST_ENTRY *a2)
{
  CDataStreamBlock *p_Blink; // rbx
  unsigned int *(__fastcall *v4)(CDataStreamBlock *); // rsi
  unsigned int *WrittenSize; // rax
  unsigned int *v6; // r14
  char *(__fastcall *v7)(CDataStreamBlock *); // rsi
  char *Data; // rax
  char *v9; // rcx
  unsigned int v10; // eax

  p_Blink = 0LL;
  if ( a2 )
    p_Blink = (CDataStreamBlock *)&a2[-1].Blink;
  *((_QWORD *)this + 1) = p_Blink;
  v4 = *(unsigned int *(__fastcall **)(CDataStreamBlock *))(*(_QWORD *)p_Blink + 8LL);
  if ( v4 == CDataStreamBlock::GetWrittenSize )
    WrittenSize = CDataStreamBlock::GetWrittenSize(p_Blink);
  else
    WrittenSize = v4(p_Blink);
  v6 = WrittenSize;
  v7 = *(char *(__fastcall **)(CDataStreamBlock *))(**((_QWORD **)this + 1) + 16LL);
  if ( v7 == CDataStreamBlock::GetData )
    Data = CDataStreamBlock::GetData(*((CDataStreamBlock **)this + 1));
  else
    Data = v7(*((CDataStreamBlock **)this + 1));
  v9 = Data;
  v10 = *v6;
  *((_QWORD *)this + 2) = v9;
  *((_DWORD *)this + 8) = v10;
  *((_QWORD *)this + 3) = v9;
}
