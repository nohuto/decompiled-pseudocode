/*
 * XREFs of ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0058D88
 * Callers:
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0059158 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationResident(VIDMM_DEVICE *this, __int64 **a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax
  __int64 v6; // rcx
  VIDMM_DEVICE *v7; // rax
  VIDMM_DEVICE **v8; // rdx
  VIDMM_DEVICE **v9; // rcx
  VIDMM_DEVICE **v10; // rdx

  v3 = **a2;
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 240LL * (*(_DWORD *)(v3 + 76) & 0x3F);
  if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (*(_DWORD *)(v3 + 76) & 0x78000) == 0x10000 )
    v5 = 0;
  else
    v5 = (*(_DWORD *)(v3 + 76) >> 15) & 0xF;
  *(_QWORD *)(v4 + 8LL * v5 + 72) += *(_QWORD *)(v3 + 16);
  v6 = (*(_DWORD *)(v3 + 76) >> 11) & 0xF;
  *(_QWORD *)(v4 + 8 * v6 + 136) += *(_QWORD *)(v3 + 16);
  v7 = (VIDMM_DEVICE *)(a2 + 14);
  v8 = (VIDMM_DEVICE **)a2[14];
  v9 = (VIDMM_DEVICE **)*((_QWORD *)v7 + 1);
  if ( v8[1] != v7 || *v9 != v7 )
    __fastfail(3u);
  *v9 = (VIDMM_DEVICE *)v8;
  v8[1] = (VIDMM_DEVICE *)v9;
  v10 = (VIDMM_DEVICE **)*((_QWORD *)this + 18);
  *(_QWORD *)v7 = (char *)this + 136;
  *((_QWORD *)v7 + 1) = v10;
  if ( *v10 != (VIDMM_DEVICE *)((char *)this + 136) )
    __fastfail(3u);
  *v10 = v7;
  *((_QWORD *)this + 18) = v7;
}
