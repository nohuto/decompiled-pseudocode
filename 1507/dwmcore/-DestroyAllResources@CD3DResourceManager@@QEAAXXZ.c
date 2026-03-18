/*
 * XREFs of ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18008AC0C
 * Callers:
 *     ??1CD3DDeviceLevel1@@UEAA@XZ @ 0x18008B1E4 (--1CD3DDeviceLevel1@@UEAA@XZ.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18008B548 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 * Callees:
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x180015AFC (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ?AreActiveResources@CD3DResourceManager@@QEAA_NXZ @ 0x18008ABD8 (-AreActiveResources@CD3DResourceManager@@QEAA_NXZ.c)
 *     ?DestroySomeActiveResources@CD3DResourceManager@@AEAAIXZ @ 0x18008AD20 (-DestroySomeActiveResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x18013AD74 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 */

void __fastcall CD3DResourceManager::DestroyAllResources(union _SLIST_HEADER *this)
{
  CD3DResourceManager *v2; // rcx
  unsigned int active; // edi
  char *v4; // rdi
  char *Region; // rbx
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
  v4 = (char *)&this[6].HeaderX64 + 8;
  Region = (char *)this[6].Region;
  while ( Region != v4 )
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
