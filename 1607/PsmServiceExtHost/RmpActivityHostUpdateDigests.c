/*
 * XREFs of RmpActivityHostUpdateDigests @ 0x180014920
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F850 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     RmpActivityHostResourceSetsChanged @ 0x180014D98 (RmpActivityHostResourceSetsChanged.c)
 * Callees:
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x1800116D4 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     RmpPolicyDigestMerge @ 0x180014A50 (RmpPolicyDigestMerge.c)
 *     RmpPolicyDigestCompute @ 0x180014BA0 (RmpPolicyDigestCompute.c)
 *     ?RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z @ 0x180014C80 (-RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z.c)
 */

void __fastcall RmpActivityHostUpdateDigests(__int64 a1, char a2)
{
  unsigned __int16 v4; // si
  __int16 v5; // r11
  ExecutionModel::ResourceSet *NextResourceSetInList; // rbp
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // r11
  __int64 v9; // r11
  int v10; // ebx
  struct ExecutionModel::ResourceSet *i; // r11
  unsigned __int16 v12; // ax
  __int64 v13; // rax

  v4 = 102;
  if ( (a2 & 1) != 0 )
  {
    v5 = 102;
    if ( *(_QWORD *)(a1 + 616) != a1 + 616 )
    {
      NextResourceSetInList = (ExecutionModel::ResourceSet *)(*(_QWORD *)(a1 + 616) - 1376LL);
      if ( *(_QWORD *)(a1 + 616) != 1376LL )
      {
        do
        {
          if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement(NextResourceSetInList) )
          {
            v7 = ((__int64 (*)(void))RmpPolicyDigestCompute)();
            RmpPolicyDigestMerge(v8, v7);
          }
          NextResourceSetInList = RmpActivityHostGetNextResourceSetInList(NextResourceSetInList);
        }
        while ( NextResourceSetInList );
      }
    }
    *(_WORD *)(a1 + 664) = v5;
  }
  if ( (a2 & 2) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 640);
    v10 = (*(unsigned __int16 *)(a1 + 666) >> 7) & 1;
    if ( v9 != a1 + 640 )
    {
      for ( i = (struct ExecutionModel::ResourceSet *)(v9 - 1376); i; i = RmpActivityHostGetNextResourceSetInList(i) )
      {
        if ( *((_DWORD *)i + 338) == 2 || (*((_BYTE *)i + 1412) & 0x10) != 0 )
        {
          v12 = RmpPolicyDigestCompute(i);
          v4 = RmpPolicyDigestMerge(v4, v12);
        }
      }
    }
    *(_WORD *)(a1 + 666) = v4;
    v13 = *(_QWORD *)(a1 + 40);
    if ( v10 )
    {
      if ( (v4 & 0x80u) == 0 )
        --*(_DWORD *)(v13 + 1832);
    }
    else if ( (v4 & 0x80u) != 0 )
    {
      ++*(_DWORD *)(v13 + 1832);
    }
  }
}
