/*
 * XREFs of ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000E3D0
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000ECD0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180010C70 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001F73C (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18001FD34 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x18003F09C (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

ExecutionModel::BaseResourceSet *__fastcall ExecutionModel::BaseResourceSet::BaseResourceSet(
        ExecutionModel::BaseResourceSet *this)
{
  char *v2; // rax
  int v3; // ecx
  unsigned int v4; // eax

  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = (char *)this + 48;
  *((_QWORD *)this + 5) = (char *)this + 48;
  *((_WORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *((_DWORD *)this + 38) = -1;
  *((_DWORD *)this + 39) = 1;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 22) = 0LL;
  v2 = (char *)this + 192;
  *((_QWORD *)this + 23) = 0LL;
  v3 = 47;
  do
  {
    --v3;
    *(_DWORD *)v2 = -1;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_DWORD *)v2 + 4) = 101;
    *((_WORD *)v2 + 10) = 0;
    v2 += 24;
  }
  while ( v3 >= 0 );
  v4 = *((_DWORD *)this + 339) & 0xFFFFFFFA;
  *((_QWORD *)this + 168) = 0LL;
  *((_DWORD *)this + 338) = 0;
  *((_DWORD *)this + 339) = v4 | 2;
  *((_DWORD *)this + 340) = 101;
  memset_0((char *)this + 64, 0, 0x44uLL);
  return this;
}
