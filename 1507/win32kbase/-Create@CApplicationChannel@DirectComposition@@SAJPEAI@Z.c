/*
 * XREFs of ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0024874
 * Callers:
 *     NtDCompositionCreateChannel @ 0x1C0024990 (NtDCompositionCreateChannel.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C00235A4 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C0024844 (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0024960 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_N@Z @ 0x1C002D724 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_N@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Create(unsigned int *a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rsi
  DirectComposition::CApplicationChannel *v3; // rax
  unsigned int v4; // edx
  int *v5; // rdi
  int inserted; // ebx
  struct DirectComposition::CProcessData *v7; // rax
  struct DirectComposition::CProcessData *v8; // r14

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v3 = (DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuotaZInit(0x2E0uLL);
    if ( v3 )
      v5 = (int *)DirectComposition::CApplicationChannel::CApplicationChannel(v3, DefaultConnection, 1);
    else
      v5 = 0LL;
    if ( v5 )
    {
      inserted = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)v5 + 40LL))(v5);
      if ( inserted < 0 )
        goto LABEL_13;
      v7 = DirectComposition::CProcessData::Current();
      v8 = v7;
      if ( v7 )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)v7 + 1));
        inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
                     *(struct _RTL_GENERIC_TABLE **)v8,
                     v5[7],
                     (__int64)v5);
        ExReleaseResourceLite(*((PERESOURCE *)v8 + 1));
        KeLeaveCriticalRegion();
      }
      else
      {
        inserted = -1073741823;
      }
      if ( inserted < 0 )
LABEL_13:
        DirectComposition::CChannel::Release((DirectComposition::CChannel *)v5);
      else
        *a1 = v5[7];
    }
    else
    {
      inserted = -1073741801;
    }
    DirectComposition::CConnection::Release(DefaultConnection, v4);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)inserted;
}
