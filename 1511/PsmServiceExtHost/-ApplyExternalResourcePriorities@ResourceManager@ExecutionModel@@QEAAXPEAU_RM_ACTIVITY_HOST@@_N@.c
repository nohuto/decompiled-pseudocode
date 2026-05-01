/*
 * XREFs of ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@_N@Z @ 0x1800113A8
 * Callers:
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x18000E600 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800039C4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020270 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2,
        char a3)
{
  _QWORD *v4; // r14
  ExecutionModel::ResourceManager *v6; // rbp
  _QWORD *i; // rbx
  unsigned int *v8; // rsi
  __int64 v9; // rdx
  unsigned int *v10; // rax
  char v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_QWORD *)(*((_QWORD *)this + 22) + 160LL);
  v6 = this;
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    v8 = (unsigned int *)i[2];
    if ( a2 == *((struct _RM_ACTIVITY_HOST **)v8 + 184) )
    {
      if ( a3 && (*(int (__fastcall **)(_QWORD, char *))(*(_QWORD *)v8 + 80LL))(i[2], &v11) >= 0 && v11 )
      {
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 88LL))(v8);
      }
      else
      {
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          this,
          0x30u,
          (struct ExecutionModel::_ResourceInfo *)(v8 + 48),
          a2);
        v9 = 3LL;
        v10 = v8 + 70;
        while ( 1 )
        {
          if ( *((_BYTE *)v10 + 5) && *v10 == 101 )
          {
            this = (ExecutionModel::ResourceManager *)v8[338];
            if ( (_DWORD)this == 2 && *((_QWORD *)v10 - 1) )
            {
              ExecutionModel::BaseResourceSet::SendReleaseRequest((__int64)v8, 0);
              goto LABEL_5;
            }
            if ( (_DWORD)this == 1 )
              break;
          }
          ++v9;
          v10 += 6;
          if ( v9 >= 48 )
            goto LABEL_5;
        }
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 56LL))(v8);
      }
    }
LABEL_5:
    ;
  }
  SubmitThreadpoolWork(*((PTP_WORK *)v6 + 34));
}
