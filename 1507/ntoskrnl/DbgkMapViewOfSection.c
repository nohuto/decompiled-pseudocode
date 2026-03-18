/*
 * XREFs of DbgkMapViewOfSection @ 0x140531A48
 * Callers:
 *     NtMapViewOfSection @ 0x1404B5D50 (NtMapViewOfSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x140669324 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140669708 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x1406697B0 (DbgkpSuppressDbgMsg.c)
 */

int __fastcall DbgkMapViewOfSection(_KPROCESS *Object, __int64 a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v7; // rax
  void *Teb; // rdi
  HANDLE Handle; // [rsp+60h] [rbp-108h]

  if ( KeGetCurrentThread()->PreviousMode || (LODWORD(v7) = 0, Object->SecurePid) )
  {
    CurrentThread = KeGetCurrentThread();
    LODWORD(v7) = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
    if ( (v7 & 4) == 0 )
    {
      v7 = Object[1].ActiveProcessors.Bitmap[6];
      if ( v7 )
      {
        if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
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
