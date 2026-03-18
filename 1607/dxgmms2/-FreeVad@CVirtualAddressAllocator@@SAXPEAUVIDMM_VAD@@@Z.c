/*
 * XREFs of ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C005AF90
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0046EB0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00472A0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C0067848 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0012F08 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ReleaseVaRangeForDelete @ 0x1C0094A9C (ReleaseVaRangeForDelete.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVad(struct VIDMM_VAD *a1)
{
  unsigned int v2; // ebp
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 **v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 **v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax

  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
  {
    v2 = 0;
    if ( (*((_DWORD *)a1 + 18) & 0x7F0) != 0 )
    {
      do
      {
        v3 = (__int64 **)((char *)a1 + 32 * v2 + 96);
        while ( 1 )
        {
          v4 = *v3;
          if ( *v3 == (__int64 *)v3 )
            break;
          v5 = *v4;
          if ( (__int64 **)v4[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
            __fastfail(3u);
          *v3 = (__int64 *)v5;
          *(_QWORD *)(v5 + 8) = v3;
          *v4 = 0LL;
          v4[1] = 0LL;
          ReleaseVaRangeForDelete(v4 - 1);
        }
        v6 = v3 + 2;
        while ( *v6 != (__int64 *)v6 )
        {
          v7 = *v6;
          v8 = **v6;
          if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
            __fastfail(3u);
          *v6 = (__int64 *)v8;
          *(_QWORD *)(v8 + 8) = v6;
          *((_DWORD *)v7 + 14) &= ~0x2000u;
          ((void (*)(void))ReleaseVaRangeForDelete)();
        }
        ++v2;
      }
      while ( v2 < ((*((_DWORD *)a1 + 18) >> 4) & 0x7Fu) );
    }
  }
  else
  {
    v9 = 0;
    if ( (*((_DWORD *)a1 + 18) & 0x7F0) != 0 )
    {
      do
      {
        v10 = (__int64 **)((char *)a1 + 16 * v9 + 96);
        while ( 1 )
        {
          v11 = *v10;
          if ( *v10 == (__int64 *)v10 )
            break;
          v12 = *v11;
          if ( (__int64 **)v11[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
            __fastfail(3u);
          *v10 = (__int64 *)v12;
          *(_QWORD *)(v12 + 8) = v10;
          *v11 = 0LL;
          v11[1] = 0LL;
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v11 - 1));
        }
        ++v9;
      }
      while ( v9 < ((*((_DWORD *)a1 + 18) >> 4) & 0x7Fu) );
    }
  }
  operator delete(a1);
}
