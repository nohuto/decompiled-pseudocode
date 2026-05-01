/*
 * XREFs of ?ApplyResourceSetWithoutFreezeOrOptimize@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012CE0
 * Callers:
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180010790 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z @ 0x180034A30 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSetWithoutFreezeOrOptimize(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        unsigned int a3,
        struct _RM_ACTIVITY_HOST **a4)
{
  int v4; // eax
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  struct _RM_ACTIVITY_HOST *v10; // rcx

  v4 = *((_DWORD *)a2 + 338);
  if ( v4 == 1 )
  {
    v9 = -2147220219;
  }
  else if ( v4 )
  {
    *((_BYTE *)a2 + 1912) |= 0x40u;
    v7 = *((_QWORD *)a2 + 175);
    if ( !v7 || *(_DWORD *)(v7 + 40) == 1 )
      v8 = ExecutionModel::ResourceManager::ApplyResourceSet_Legacy(this, a2, a3, a4);
    else
      v8 = ExecutionModel::ResourceManager::ApplyResourceSet_Modern(this, a2, a4);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = *a4;
      if ( *a4 )
      {
        if ( *((int *)v10 + 5) < 0 )
        {
          RmpObjectRelease((volatile signed __int32 *)v10);
          *a4 = 0LL;
        }
      }
    }
  }
  else
  {
    v9 = -2147220218;
  }
  *((_BYTE *)a2 + 1912) &= ~0x40u;
  return v9;
}
