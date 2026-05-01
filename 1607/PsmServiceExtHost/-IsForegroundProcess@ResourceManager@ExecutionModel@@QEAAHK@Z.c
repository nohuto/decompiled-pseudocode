/*
 * XREFs of ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18002CA88
 * Callers:
 *     ?HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x180036960 (-HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z.c)
 * Callees:
 *     RmpActivityHostFindProcessResourceSet @ 0x18001A1E8 (RmpActivityHostFindProcessResourceSet.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?IsForeground@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ @ 0x18002CA1C (-IsForeground@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x18002F144 (RmpActivityHostFindPsmResourceSets.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::IsForegroundProcess(
        ExecutionModel::ResourceManager *this,
        unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 ProcessResourceSet; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  ExecutionModel::ModernActivationResourceInfo *PsmResourceSets; // rax
  _BYTE v10[560]; // [rsp+20h] [rbp-248h] BYREF

  v4 = 0;
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(*((_QWORD *)this + 28), a2);
  if ( ProcessResourceSet )
  {
    if ( (*(_BYTE *)(ProcessResourceSet + 1458) & 0x40) != 0 )
      return 1;
    v6 = *(int *)(ProcessResourceSet + 1416);
    if ( (unsigned int)v6 <= 0x29 )
    {
      v7 = 0x24704100001LL;
      if ( _bittest64(&v7, v6) )
        return 1;
    }
  }
  else if ( (*(int (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, _BYTE *))(*(_QWORD *)this + 80LL))(
              this,
              a2,
              v10) >= 0 )
  {
    PsmResourceSets = (ExecutionModel::ModernActivationResourceInfo *)RmpActivityHostFindPsmResourceSets(
                                                                        *((_QWORD *)this + 28),
                                                                        v10);
    if ( PsmResourceSets )
      return (unsigned int)ExecutionModel::ModernActivationResourceInfo::IsForeground(PsmResourceSets);
  }
  return v4;
}
