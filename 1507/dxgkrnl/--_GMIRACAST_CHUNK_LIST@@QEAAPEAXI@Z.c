/*
 * XREFs of ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C0023C0C
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00269F0 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C002417C (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

MIRACAST_CHUNK_LIST *__fastcall MIRACAST_CHUNK_LIST::`scalar deleting destructor'(MIRACAST_CHUNK_LIST *this)
{
  struct MIRACAST_CHUNK *v2; // rax

  while ( 1 )
  {
    v2 = MIRACAST_CHUNK_LIST::RemoveHead(this);
    if ( !v2 )
      break;
    ExFreePoolWithTag(v2, 0);
  }
  operator delete(this);
  return this;
}
