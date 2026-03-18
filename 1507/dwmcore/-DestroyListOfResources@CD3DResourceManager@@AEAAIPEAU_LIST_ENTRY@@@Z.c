/*
 * XREFs of ?DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z @ 0x18008AC74
 * Callers:
 *     ?DestroySomeActiveResources@CD3DResourceManager@@AEAAIXZ @ 0x18008AD20 (-DestroySomeActiveResources@CD3DResourceManager@@AEAAIXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180015B8C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DResourceManager::DestroyListOfResources(CD3DResourceManager *this, struct _LIST_ENTRY *a2)
{
  unsigned int v2; // esi
  struct _LIST_ENTRY *v5; // r15
  struct _LIST_ENTRY *Flink; // rbp
  __int64 v8; // r14

  v2 = 0;
  v5 = a2;
  while ( v5->Flink != a2 )
  {
    Flink = v5->Flink;
    v8 = (__int64)&v5->Flink[-2];
    if ( (**(unsigned int (__fastcall ***)(__int64))v8)(v8) == 1 )
    {
      *(_DWORD *)(v8 + 8) = 0;
      ++v2;
      v5 = Flink;
    }
    else
    {
      CD3DResourceManager::DestroyResource(this, (struct CD3DResource ***)v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return v2;
}
