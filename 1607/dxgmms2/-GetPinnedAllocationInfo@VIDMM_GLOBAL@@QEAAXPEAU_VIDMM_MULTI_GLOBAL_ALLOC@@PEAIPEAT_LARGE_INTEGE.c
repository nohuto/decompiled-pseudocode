/*
 * XREFs of ?GetPinnedAllocationInfo@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@@Z @ 0x1C00576A4
 * Callers:
 *     VidMmGetPinnedAllocationInfo @ 0x1C0011340 (VidMmGetPinnedAllocationInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetPinnedAllocationInfo(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4)
{
  int v4; // edi
  __int64 v8; // rcx
  _QWORD *v9; // rax

  v4 = 0;
  if ( !*((_DWORD *)a2 + 41) && (**((_DWORD **)a2 + 63) & 0x40000000) == 0 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v9[3] = 270LL;
    v9[4] = 10LL;
    v9[5] = a2;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  v8 = *((_QWORD *)a2 + 17);
  if ( (*(_DWORD *)(v8 + 56) & 0x1000) == 0 )
    v4 = *(_DWORD *)(v8 + 16) + 1;
  *a3 = v4;
  a4->QuadPart = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
}
