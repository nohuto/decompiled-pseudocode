/*
 * XREFs of DbgkMapViewOfSection @ 0x1404B07BC
 * Callers:
 *     NtMapViewOfSection @ 0x140435610 (NtMapViewOfSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x14061A3C0 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x14061AD68 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x14061AE10 (DbgkpSuppressDbgMsg.c)
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
    LODWORD(v7) = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
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
