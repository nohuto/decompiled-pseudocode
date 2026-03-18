/*
 * XREFs of ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C00454A0
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00472A0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0047C90 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000F76C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

struct VIDMM_VAD *__fastcall CVirtualAddressAllocator::AllocateVad(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v6; // r8
  unsigned int v7; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  int v10; // ecx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi

  v4 = a3;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
    v7 = 32 * (v4 + 3);
  else
    v7 = 16 * (v4 + 7);
  v8 = operator new(v7, 0x39346956u, v6, PagedPool);
  v9 = v8;
  if ( v8 )
  {
    v8[3] = a1;
    v10 = (*((_DWORD *)v8 + 18) ^ (16 * v4)) & 0x7F0;
    v8[4] = a2;
    *((_DWORD *)v8 + 18) ^= v10;
    if ( (_DWORD)v4 )
    {
      v11 = v8 + 12;
      v12 = v8 + 12;
      do
      {
        if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
        {
          v12[1] = v12;
          *v12 = v12;
          v12[3] = v12 + 2;
          v12[2] = v12 + 2;
        }
        else
        {
          v11[1] = v11;
          *v11 = v11;
        }
        v11 += 2;
        v12 += 4;
        --v4;
      }
      while ( v4 );
    }
    v9[11] = v9 + 10;
    v9[10] = v9 + 10;
  }
  return (struct VIDMM_VAD *)v9;
}
