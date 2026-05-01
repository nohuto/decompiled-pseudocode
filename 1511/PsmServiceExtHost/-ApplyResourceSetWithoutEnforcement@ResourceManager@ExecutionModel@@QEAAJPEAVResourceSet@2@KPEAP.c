/*
 * XREFs of ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800112FC
 * Callers:
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000E860 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z @ 0x18003BB70 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSetWithoutEnforcement(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        unsigned int a3,
        struct _RM_ACTIVITY_HOST **a4)
{
  int v4; // eax
  ExecutionModel::ResourceManager *v7; // r10
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  struct _RM_ACTIVITY_HOST *v11; // rcx
  char v13; // dl

  v4 = *((_DWORD *)a2 + 338);
  v7 = this;
  if ( v4 == 1 )
  {
    v10 = -2147220219;
  }
  else if ( v4 )
  {
    if ( !*((_BYTE *)a2 + 12) )
      goto LABEL_4;
    if ( !ExecutionModel::ResourceSet::IsLegacy(a2) || *((_DWORD *)a2 + 2) != a3 )
    {
      v10 = -2147220220;
      goto LABEL_11;
    }
    if ( v13 )
    {
      v10 = 0;
    }
    else
    {
LABEL_4:
      *((_BYTE *)a2 + 1920) |= 0x40u;
      v8 = *((_QWORD *)a2 + 175);
      if ( !v8 || *(_DWORD *)(v8 + 40) == 1 )
        v9 = ExecutionModel::ResourceManager::ApplyResourceSet_Legacy(v7, a2, a3, a4);
      else
        v9 = ExecutionModel::ResourceManager::ApplyResourceSet_Modern(v7, a2, a4);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v11 = *a4;
        if ( *a4 )
        {
          if ( *((int *)v11 + 5) < 0 )
          {
            RmpObjectRelease(v11);
            *a4 = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v10 = -2147220218;
  }
LABEL_11:
  *((_BYTE *)a2 + 1920) &= ~0x40u;
  return v10;
}
