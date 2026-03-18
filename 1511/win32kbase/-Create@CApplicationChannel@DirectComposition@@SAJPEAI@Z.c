/*
 * XREFs of ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00127F4
 * Callers:
 *     NtDCompositionCreateChannel @ 0x1C00120B0 (NtDCompositionCreateChannel.c)
 * Callees:
 *     ?InsertObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAJIPEAVCChannel@2@@Z @ 0x1C00127C4 (-InsertObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0013BE8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_N@Z @ 0x1C001A780 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_N@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C001E234 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0046E88 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0046F10 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Create(unsigned int *a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rsi
  DirectComposition::CApplicationChannel *v3; // rax
  int *v4; // rdi
  int inserted; // ebx
  struct DirectComposition::CProcessData *v6; // rax
  struct DirectComposition::CProcessData *v7; // r14

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v3 = (DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuotaZInit(0x2E0uLL);
    if ( v3 )
      v4 = (int *)DirectComposition::CApplicationChannel::CApplicationChannel(v3, DefaultConnection, 1);
    else
      v4 = 0LL;
    if ( v4 )
    {
      inserted = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)v4 + 40LL))(v4);
      if ( inserted < 0 )
        goto LABEL_13;
      v6 = DirectComposition::CProcessData::Current();
      v7 = v6;
      if ( v6 )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(*((DirectComposition::CCriticalSection **)v6 + 1));
        inserted = DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::InsertObject(
                     *(struct _RTL_GENERIC_TABLE **)v7,
                     v4[7],
                     (__int64)v4);
        ExReleaseResourceLite(*((PERESOURCE *)v7 + 1));
        KeLeaveCriticalRegion();
      }
      else
      {
        inserted = -1073741823;
      }
      if ( inserted < 0 )
LABEL_13:
        DirectComposition::CChannel::Release((DirectComposition::CChannel *)v4);
      else
        *a1 = v4[7];
    }
    else
    {
      inserted = -1073741801;
    }
    DirectComposition::CConnection::Release(DefaultConnection);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)inserted;
}
