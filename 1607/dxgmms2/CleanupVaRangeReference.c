/*
 * XREFs of CleanupVaRangeReference @ 0x1C00884D4
 * Callers:
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C004CB78 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x1C0088564 (-CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C000F72C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall CleanupVaRangeReference(VIDMM_MAPPED_VA_RANGE *this)
{
  VIDMM_MAPPED_VA_RANGE *v1; // r8
  int v2; // ecx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  v1 = this;
  v2 = *((_DWORD *)this + 16);
  if ( (v2 & 0x2000) != 0 )
  {
    if ( GetVidMmAllocFromOwner(v2 << 28 >> 28, *((_QWORD *)v1 + 7)) )
    {
      v3 = (_QWORD *)((char *)v1 + 24);
      v4 = *((_QWORD *)v1 + 3);
      v5 = (_QWORD *)*((_QWORD *)v1 + 4);
      if ( *(VIDMM_MAPPED_VA_RANGE **)(v4 + 8) != (VIDMM_MAPPED_VA_RANGE *)((char *)v1 + 24) || (_QWORD *)*v5 != v3 )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      *v3 = 0LL;
      *((_QWORD *)v1 + 4) = 0LL;
    }
    v6 = (_QWORD *)((char *)v1 + 8);
    v7 = *((_QWORD *)v1 + 1);
    v8 = (_QWORD *)*((_QWORD *)v1 + 2);
    if ( *(VIDMM_MAPPED_VA_RANGE **)(v7 + 8) != (VIDMM_MAPPED_VA_RANGE *)((char *)v1 + 8) || (_QWORD *)*v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *((_DWORD *)v1 + 16) &= ~0x2000u;
    *v6 = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  return VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v1);
}
