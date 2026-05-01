/*
 * XREFs of ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18000CCD0
 * Callers:
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x18000305C (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800230A4 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18002370C (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1800200F0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

ExecutionModel::BaseResourceSet *__fastcall ExecutionModel::BaseResourceSet::BaseResourceSet(
        ExecutionModel::BaseResourceSet *this)
{
  unsigned int v2; // eax

  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = (char *)this + 48;
  *((_QWORD *)this + 5) = (char *)this + 48;
  *((_WORD *)this + 24) = 0;
  *((_DWORD *)this + 38) = -1;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *((_DWORD *)this + 39) = 1;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  `vector constructor iterator'(
    (ExecutionModel::BaseResourceSet *)((char *)this + 192),
    0x18uLL,
    48,
    (void *(*)(void *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  v2 = *((_DWORD *)this + 339) & 0xFFFFFFFA;
  *((_QWORD *)this + 168) = 0LL;
  *((_DWORD *)this + 338) = 0;
  *((_DWORD *)this + 339) = v2 | 2;
  *((_DWORD *)this + 340) = 101;
  memset_0((char *)this + 64, 0, 0x44uLL);
  return this;
}
