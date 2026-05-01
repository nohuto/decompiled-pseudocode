/*
 * XREFs of ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D5B8
 * Callers:
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJK@Z @ 0x18000FF88 (-Apply@ResourceSet@ExecutionModel@@QEAAJK@Z.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x18002B19C (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z.c)
 * Callees:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D438 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSetWithoutEnforcement(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        unsigned int a3,
        struct _RM_ACTIVITY_HOST **a4)
{
  int v4; // eax
  int v7; // eax
  unsigned int v8; // edi
  struct _RM_ACTIVITY_HOST *v9; // rcx

  v4 = *((_DWORD *)a2 + 338);
  if ( v4 == 1 )
  {
    v8 = -2147220219;
  }
  else if ( v4 )
  {
    if ( *((_BYTE *)a2 + 12) )
    {
      if ( *((_DWORD *)a2 + 34) || *((_DWORD *)a2 + 2) != a3 )
        v8 = -2147220220;
      else
        v8 = 0;
    }
    else
    {
      *((_DWORD *)a2 + 351) |= 0x40u;
      if ( *((_DWORD *)a2 + 34) )
        v7 = ExecutionModel::ResourceManager::ApplyResourceSet_Modern(this, a2, a4);
      else
        v7 = ExecutionModel::ResourceManager::ApplyResourceSet_Legacy(this, a2, a3, a4);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v9 = *a4;
        if ( *a4 )
        {
          if ( *((int *)v9 + 5) < 0 )
          {
            RmpObjectRelease(v9);
            *a4 = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v8 = -2147220218;
  }
  *((_DWORD *)a2 + 351) &= ~0x40u;
  return v8;
}
