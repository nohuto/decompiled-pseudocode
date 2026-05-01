/*
 * XREFs of ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002C90C
 * Callers:
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BB48 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004C9C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180036C48 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  _QWORD *v3; // r14
  ExecutionModel::ResourceManager *v4; // rbp
  _QWORD *i; // rbx
  unsigned int *v6; // rdi
  __int64 v7; // rdx
  unsigned int *v8; // rax

  v3 = (_QWORD *)(*((_QWORD *)this + 14) + 160LL);
  v4 = this;
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = (unsigned int *)i[2];
    if ( a2 == *((struct _RM_ACTIVITY_HOST **)v6 + 176) )
    {
      if ( (*((_BYTE *)a2 + 666) & 4) != 0 && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 64LL))(i[2]) )
      {
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 72LL))(v6);
      }
      else
      {
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          this,
          2u,
          0x30u,
          (struct ExecutionModel::_ResourceInfo *)(v6 + 48),
          a2);
        v7 = 3LL;
        v8 = v6 + 70;
        while ( 1 )
        {
          if ( *((_BYTE *)v8 + 5) && *v8 == 101 )
          {
            this = (ExecutionModel::ResourceManager *)v6[338];
            if ( (_DWORD)this == 2 && *((_QWORD *)v8 - 1) )
            {
              ExecutionModel::ExternalResourceSet::Revoke(v6, 0LL);
              goto LABEL_17;
            }
            if ( (_DWORD)this == 1 )
              break;
          }
          ++v7;
          v8 += 6;
          if ( v7 >= 48 )
            goto LABEL_17;
        }
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 48LL))(v6);
      }
    }
LABEL_17:
    ;
  }
  ExecutionModel::ResourceManager::CheckPendingExternalResourceRequestsAsync(v4);
}
