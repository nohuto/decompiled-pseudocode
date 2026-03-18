/*
 * XREFs of ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C001ADD4
 * Callers:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C00444E4 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C007B700 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0018958 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CBatch::AddSystemResourceRef(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v4; // ebx
  __int64 v5; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = Win32AllocPoolWithQuotaZInit(0x10uLL);
  if ( v5 )
  {
    DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(v2 + 40), a2);
    *(_DWORD *)(v5 + 8) = a2;
    *(_QWORD *)v5 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
