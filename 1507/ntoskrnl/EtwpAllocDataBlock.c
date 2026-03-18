/*
 * XREFs of EtwpAllocDataBlock @ 0x1404D5CB4
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404D196C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpBuildNotificationPacket @ 0x1404D5C18 (EtwpBuildNotificationPacket.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 *     EtwpQueueReply @ 0x140555B84 (EtwpQueueReply.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocDataBlock(size_t Size, void *Src, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi

  v3 = 0;
  *a3 = 0LL;
  if ( Src && *((_DWORD *)Src + 1) != (_DWORD)Size )
  {
    return (unsigned int)-1073741820;
  }
  else
  {
    v6 = Size;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x44777445u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( Src )
        memmove(PoolWithTag, Src, v6);
      else
        memset(PoolWithTag, 0, v6);
      v8[2] = 1;
      *a3 = v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
