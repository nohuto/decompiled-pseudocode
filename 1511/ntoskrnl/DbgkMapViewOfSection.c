/*
 * XREFs of DbgkMapViewOfSection @ 0x140493500
 * Callers:
 *     NtMapViewOfSection @ 0x140493120 (NtMapViewOfSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x1405F071C (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x1405F0A88 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x1405F0B30 (DbgkpSuppressDbgMsg.c)
 */

int __fastcall DbgkMapViewOfSection(_KPROCESS *Object, __int64 a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v7; // rax
  void *Teb; // rdi
  HANDLE Handle; // [rsp+60h] [rbp-118h]

  if ( KeGetCurrentThread()->PreviousMode || (LODWORD(v7) = 0, Object->SecurePid) )
  {
    CurrentThread = KeGetCurrentThread();
    LODWORD(v7) = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
    if ( (v7 & 4) == 0 )
    {
      v7 = Object[1].ActiveProcessors.Bitmap[6];
      if ( v7 )
      {
        if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
          Teb = 0LL;
        else
          Teb = KeGetCurrentThread()->Teb;
        if ( !Teb || Object != CurrentThread->Process || (LODWORD(v7) = DbgkpSuppressDbgMsg(Teb), !(_DWORD)v7) )
        {
          Handle = (HANDLE)DbgkpSectionToFileHandle(a2);
          RtlImageNtHeader(a3);
          LODWORD(v7) = DbgkpSendApiMessage(Object);
          if ( Handle )
            LODWORD(v7) = ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return v7;
}
