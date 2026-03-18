/*
 * XREFs of EtwpAllocDataBlock @ 0x1404CE704
 * Callers:
 *     EtwpNotifyGuid @ 0x1404CCB9C (EtwpNotifyGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404CCFEC (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 *     EtwpBuildNotificationPacket @ 0x1404CE668 (EtwpBuildNotificationPacket.c)
 *     EtwpQueueReply @ 0x1404CFE80 (EtwpQueueReply.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
