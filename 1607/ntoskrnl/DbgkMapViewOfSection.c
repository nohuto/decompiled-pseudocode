/*
 * XREFs of DbgkMapViewOfSection @ 0x1404CAD90
 * Callers:
 *     NtMapViewOfSection @ 0x140436740 (NtMapViewOfSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140014238 (RtlImageNtHeader.c)
 *     KeIsAttachedProcess @ 0x1400E7E80 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x14061A30C (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x14061ACB4 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x14061AD5C (DbgkpSuppressDbgMsg.c)
 */

int __fastcall DbgkMapViewOfSection(_KPROCESS *BugCheckParameter1, __int64 a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v7; // rax
  void *Teb; // rdi
  HANDLE Handle; // [rsp+60h] [rbp-118h]

  if ( KeGetCurrentThread()->PreviousMode || (LODWORD(v7) = 0, BugCheckParameter1->SecurePid) )
  {
    CurrentThread = KeGetCurrentThread();
    LODWORD(v7) = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
    if ( (v7 & 4) == 0 )
    {
      v7 = BugCheckParameter1[1].ActiveProcessors.Bitmap[6];
      if ( v7 )
      {
        if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
          Teb = 0LL;
        else
          Teb = KeGetCurrentThread()->Teb;
        if ( !Teb
          || BugCheckParameter1 != CurrentThread->Process
          || (LODWORD(v7) = DbgkpSuppressDbgMsg(Teb), !(_DWORD)v7) )
        {
          Handle = (HANDLE)DbgkpSectionToFileHandle(a2);
          RtlImageNtHeader(a3);
          LODWORD(v7) = DbgkpSendApiMessage((ULONG_PTR)BugCheckParameter1);
          if ( Handle )
            LODWORD(v7) = ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return v7;
}
