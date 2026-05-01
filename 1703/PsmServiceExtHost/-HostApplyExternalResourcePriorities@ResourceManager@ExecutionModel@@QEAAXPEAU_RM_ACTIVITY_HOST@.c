/*
 * XREFs of ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D64C
 * Callers:
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D74C (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018330 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18001C37C (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
        unsigned __int64 this,
        struct _RM_ACTIVITY_HOST *a2)
{
  _QWORD *v3; // r14
  unsigned __int64 v4; // rsi
  _QWORD *i; // rbx
  struct _RM_ACTIVITY_HOST **v6; // rdi
  __int64 v7; // rdx
  struct _RM_ACTIVITY_HOST **v8; // rax
  __int64 v9; // rax

  v3 = (_QWORD *)(*(_QWORD *)(this + 96) + 160LL);
  v4 = this;
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = (struct _RM_ACTIVITY_HOST **)i[2];
    if ( a2 == v6[176] )
    {
      if ( (*((_BYTE *)a2 + 666) & 4) != 0 && (*((unsigned __int8 (__fastcall **)(_QWORD))*v6 + 7))(i[2]) )
      {
        LODWORD(this) = 3;
        while ( 1 )
        {
          v9 = (unsigned int)this + 8LL;
          if ( LODWORD(v6[3 * v9]) == (_DWORD)this && !BYTE5(v6[3 * v9 + 2]) )
            break;
          this = (unsigned int)(this + 1);
          if ( (unsigned int)this > 0x2F )
          {
            if ( *((_DWORD *)v6 + 338) == 1 )
              goto LABEL_7;
            break;
          }
        }
        (*((void (__fastcall **)(struct _RM_ACTIVITY_HOST **))*v6 + 8))(v6);
      }
      else
      {
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          (struct ExecutionModel::ResourceManager *)this,
          2u,
          0x30u,
          (struct ExecutionModel::_ResourceInfo *)(v6 + 24),
          a2);
        v7 = 3LL;
        v8 = v6 + 35;
        while ( 1 )
        {
          if ( *((_BYTE *)v8 + 5) && *(_DWORD *)v8 == 101 )
          {
            this = *((unsigned int *)v6 + 338);
            if ( (_DWORD)this == 2 && *(v8 - 1) )
            {
              ExecutionModel::ExternalResourceSet::Revoke(v6, 0LL);
              goto LABEL_7;
            }
            if ( (_DWORD)this == 1 )
              break;
          }
          ++v7;
          v8 += 3;
          if ( v7 >= 48 )
            goto LABEL_7;
        }
        (*((void (__fastcall **)(struct _RM_ACTIVITY_HOST **))*v6 + 6))(v6);
      }
    }
LABEL_7:
    ;
  }
  if ( (*(_BYTE *)(v4 + 240) & 2) == 0 )
    TpPostWork(*(_QWORD *)(v4 + 232));
}
