/*
 * XREFs of ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@_N@Z @ 0x180012D74
 * Callers:
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180010470 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800011B4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800052E0 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2,
        char a3)
{
  _QWORD *v4; // r14
  ExecutionModel::ResourceManager *v6; // rbp
  _QWORD *i; // rbx
  unsigned int *v9; // rsi
  __int64 v10; // rdx
  unsigned int *v11; // rax
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_QWORD *)(*((_QWORD *)this + 22) + 160LL);
  v6 = this;
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    v9 = (unsigned int *)i[2];
    if ( a2 == *((struct _RM_ACTIVITY_HOST **)v9 + 184) )
    {
      if ( a3 && (*(int (__fastcall **)(_QWORD, char *))(*(_QWORD *)v9 + 80LL))(i[2], &v12) >= 0 && v12 )
      {
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v9 + 88LL))(v9);
      }
      else
      {
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          this,
          0x30u,
          (struct ExecutionModel::_ResourceInfo *)(v9 + 48),
          a2);
        v10 = 3LL;
        v11 = v9 + 70;
        while ( 1 )
        {
          if ( *((_BYTE *)v11 + 5) && *v11 == 101 )
          {
            this = (ExecutionModel::ResourceManager *)v9[338];
            if ( (_DWORD)this == 2 && *((_QWORD *)v11 - 1) )
            {
              ExecutionModel::BaseResourceSet::SendReleaseRequest((__int64)v9, 0);
              goto LABEL_9;
            }
            if ( (_DWORD)this == 1 )
              break;
          }
          ++v10;
          v11 += 6;
          if ( v10 >= 48 )
            goto LABEL_9;
        }
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v9 + 56LL))(v9);
      }
    }
LABEL_9:
    ;
  }
  SubmitThreadpoolWork(*((PTP_WORK *)v6 + 32));
  return 0LL;
}
