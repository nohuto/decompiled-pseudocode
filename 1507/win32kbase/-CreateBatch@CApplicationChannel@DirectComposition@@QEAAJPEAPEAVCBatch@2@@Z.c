/*
 * XREFs of ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C002F2C4
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C002F340 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ @ 0x1C002FB70 (-Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 3 )
    v5 = Win32AllocPoolZInit(0x80uLL);
  else
    v5 = Win32AllocPoolWithQuotaZInit(0x80uLL);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 8) = this;
    *(_DWORD *)(v5 + 20) = 7;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    *a2 = (struct DirectComposition::CBatch *)v5;
  else
    return (unsigned int)-1073741801;
  return v4;
}
