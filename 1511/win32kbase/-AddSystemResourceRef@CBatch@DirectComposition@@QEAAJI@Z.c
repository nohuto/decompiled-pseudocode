/*
 * XREFs of ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z @ 0x1C001A450
 * Callers:
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00117E0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0013E70 (-EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEBVCSharedSystemResource@2@PEAPEAVCBatch@2@@Z @ 0x1C0019330 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEBVCSharedSystemResource@2@PEA.c)
 * Callees:
 *     ?Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z @ 0x1C0012C98 (-Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C00130CC (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CBatch::AddSystemResourceRef(DirectComposition::CBatch *this, unsigned int a2)
{
  DirectComposition::CConnection **v2; // r15
  int v5; // ebx
  DirectComposition::CBatch::CSystemResourceReference *v6; // rdi
  DirectComposition::CBatch::CSystemResourceReference *v7; // rsi

  v2 = (DirectComposition::CConnection **)*((_QWORD *)this + 1);
  v5 = 0;
  v6 = (DirectComposition::CBatch::CSystemResourceReference *)Win32AllocPoolWithQuotaZInit(0x10uLL);
  if ( !v6 )
    v5 = -1073741801;
  v7 = 0LL;
  if ( v5 >= 0 )
  {
    v5 = DirectComposition::CConnection::ReferenceSystemResource(v2[5], a2);
    if ( v5 < 0 )
    {
      DirectComposition::CBatch::CSystemResourceReference::Delete(v6, v2);
    }
    else
    {
      *((_DWORD *)v6 + 2) = a2;
      v7 = v6;
    }
    if ( v5 >= 0 )
    {
      *(_QWORD *)v7 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = v7;
    }
  }
  return (unsigned int)v5;
}
