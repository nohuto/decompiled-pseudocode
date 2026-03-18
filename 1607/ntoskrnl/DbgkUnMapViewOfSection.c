/*
 * XREFs of DbgkUnMapViewOfSection @ 0x1404D138C
 * Callers:
 *     MiUnmapViewOfSection @ 0x14042E400 (MiUnmapViewOfSection.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400E7E80 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     DbgkpSendApiMessage @ 0x14061A30C (DbgkpSendApiMessage.c)
 *     DbgkpSuppressDbgMsg @ 0x14061AD5C (DbgkpSuppressDbgMsg.c)
 */

__int64 __fastcall DbgkUnMapViewOfSection(_KPROCESS *BugCheckParameter1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  void *Teb; // rcx

  result = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(result + 562) )
  {
    CurrentThread = KeGetCurrentThread();
    result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
    if ( (result & 4) == 0 )
    {
      result = BugCheckParameter1[1].ActiveProcessors.Bitmap[6];
      if ( result )
      {
        if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
          Teb = 0LL;
        else
          Teb = KeGetCurrentThread()->Teb;
        if ( !Teb )
          return DbgkpSendApiMessage((ULONG_PTR)BugCheckParameter1);
        if ( BugCheckParameter1 != CurrentThread->Process )
          return DbgkpSendApiMessage((ULONG_PTR)BugCheckParameter1);
        result = DbgkpSuppressDbgMsg(Teb);
        if ( !(_DWORD)result )
          return DbgkpSendApiMessage((ULONG_PTR)BugCheckParameter1);
      }
    }
  }
  return result;
}
