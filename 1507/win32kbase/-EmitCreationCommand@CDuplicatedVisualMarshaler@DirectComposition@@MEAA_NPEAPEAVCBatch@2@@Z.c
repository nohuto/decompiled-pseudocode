/*
 * XREFs of ?EmitCreationCommand@CDuplicatedVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0023A80
 * Callers:
 *     <none>
 * Callees:
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z @ 0x1C00206E0 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?GetSystemVisualHandle@CDuplicatedVisualMarshaler@DirectComposition@@QEAAIXZ @ 0x1C0023A58 (-GetSystemVisualHandle@CDuplicatedVisualMarshaler@DirectComposition@@QEAAIXZ.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CDuplicatedVisualMarshaler::EmitCreationCommand(
        DirectComposition::CDuplicatedVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int SystemVisualHandle; // esi
  struct DirectComposition::CConnection *DefaultConnection; // rax
  char *v6; // r8
  unsigned int v7; // edx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  SystemVisualHandle = DirectComposition::CDuplicatedVisualMarshaler::GetSystemVisualHandle(this);
  if ( (int)DirectComposition::CBatch::AddSystemResourceRef(*a2, SystemVisualHandle) < 0
    || !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
  {
    return 0;
  }
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v6 = (char *)v9;
  *(_DWORD *)v9 = 20;
  *(_QWORD *)(v6 + 4) = 0LL;
  *(_QWORD *)(v6 + 12) = 0LL;
  *((_DWORD *)v6 + 1) = 21;
  v7 = *(_DWORD *)(*((_QWORD *)DefaultConnection + 19) + 28LL);
  *((_DWORD *)v6 + 2) = v7;
  *((_DWORD *)v6 + 3) = SystemVisualHandle;
  *((_DWORD *)v6 + 4) = *((_DWORD *)this + 6);
  DirectComposition::CConnection::Release(DefaultConnection, v7);
  return 1;
}
