/*
 * XREFs of DbgkUnMapViewOfSection @ 0x1404AC188
 * Callers:
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     DbgkpSendApiMessage @ 0x1405F071C (DbgkpSendApiMessage.c)
 *     DbgkpSuppressDbgMsg @ 0x1405F0B30 (DbgkpSuppressDbgMsg.c)
 */

__int64 __fastcall DbgkUnMapViewOfSection(_KPROCESS *Object)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  void *Teb; // rcx

  result = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(result + 562) )
  {
    CurrentThread = KeGetCurrentThread();
    result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 3);
    if ( (result & 4) == 0 )
    {
      result = Object[1].ActiveProcessors.Bitmap[6];
      if ( result )
      {
        if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
          Teb = 0LL;
        else
          Teb = KeGetCurrentThread()->Teb;
        if ( !Teb )
          return DbgkpSendApiMessage(Object);
        if ( Object != CurrentThread->Process )
          return DbgkpSendApiMessage(Object);
        result = DbgkpSuppressDbgMsg(Teb);
        if ( !(_DWORD)result )
          return DbgkpSendApiMessage(Object);
      }
    }
  }
  return result;
}
