/*
 * XREFs of EtwpAllocDataBlock @ 0x140491EC8
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14040AED0 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x14048DF38 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     EtwpBuildNotificationPacket @ 0x140491E2C (EtwpBuildNotificationPacket.c)
 *     EtwpQueueReply @ 0x140494EB8 (EtwpQueueReply.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
