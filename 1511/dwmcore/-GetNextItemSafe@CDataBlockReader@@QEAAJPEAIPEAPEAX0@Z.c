/*
 * XREFs of ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800A1740
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18009E728 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800A1618 (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800A17AC (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 */

__int64 __fastcall CDataBlockReader::GetNextItemSafe(
        CDataBlockReader *this,
        unsigned int *a2,
        void **a3,
        unsigned int *a4)
{
  unsigned int NextItemSafe; // r10d
  struct _LIST_ENTRY *v9; // rdx

  NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataBlockReader *)((char *)this + 16), a2, a3, a4);
  if ( NextItemSafe == 1 )
  {
    v9 = *(struct _LIST_ENTRY **)(*((_QWORD *)this + 1) + 8LL);
    if ( v9 != *(struct _LIST_ENTRY **)this )
    {
      CDataBlockReader::SetCurrentBlock(this, v9);
      NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataBlockReader *)((char *)this + 16), a2, a3, a4);
      if ( NextItemSafe == 1 && *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) != *(_QWORD *)this )
        return (unsigned int)-2147467259;
    }
  }
  return NextItemSafe;
}
