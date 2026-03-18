/*
 * XREFs of ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18009F3D0
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180080264 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ @ 0x18010F230 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ.c)
 * Callees:
 *     ?DestroySomeActiveResources@CD3DResourceManager@@AEAAIXZ @ 0x18009F348 (-DestroySomeActiveResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ?AreActiveResources@CD3DResourceManager@@QEBA_NXZ @ 0x18009F39C (-AreActiveResources@CD3DResourceManager@@QEBA_NXZ.c)
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18009F470 (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800AD608 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 */

void __fastcall CD3DResourceManager::DestroyAllResources(union _SLIST_HEADER *this)
{
  struct _LIST_ENTRY *v2; // rcx
  char *v3; // rdi
  char *Region; // rbx
  int active; // edi
  CD3DResourceSourceReference *v6; // rcx
  CD3DResourceSourceReference **v7; // r8
  CD3DResourceSourceReference **v8; // rdx

  if ( CD3DResourceManager::AreActiveResources((CD3DResourceManager **)this) )
  {
    active = CD3DResourceManager::DestroySomeActiveResources(v2);
    while ( QueryDepthSList(this + 1) != active )
      Sleep(1u);
    CD3DResourceManager::DestroyAndDeleteDelayedResources((CD3DResourceManager *)this);
  }
  v3 = (char *)&this[6].HeaderX64 + 8;
  Region = (char *)this[6].Region;
  while ( Region != v3 )
  {
    v6 = (CD3DResourceSourceReference *)(Region - 16);
    Region = *(char **)Region;
    v7 = (CD3DResourceSourceReference **)*((_QWORD *)v6 + 2);
    v8 = (CD3DResourceSourceReference **)*((_QWORD *)v6 + 3);
    if ( v7[1] != (CD3DResourceSourceReference *)((char *)v6 + 16)
      || *v8 != (CD3DResourceSourceReference *)((char *)v6 + 16) )
    {
      __fastfail(3u);
    }
    *v8 = (CD3DResourceSourceReference *)v7;
    v7[1] = (CD3DResourceSourceReference *)v8;
    if ( v6 )
      CD3DResourceSourceReference::`scalar deleting destructor'(v6, (unsigned int)v8);
  }
}
