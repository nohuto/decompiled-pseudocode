/*
 * XREFs of ?GetPinnedAllocationInfo@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@@Z @ 0x1C004DDCC
 * Callers:
 *     VidMmGetPinnedAllocationInfo @ 0x1C000E6A0 (VidMmGetPinnedAllocationInfo.c)
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
  _QWORD *v8; // rax
  __int64 v9; // rcx

  v4 = 0;
  if ( !*((_DWORD *)a2 + 39) && (**((_DWORD **)a2 + 59) & 0x40000000) == 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v8[3] = 270LL;
    v8[4] = 10LL;
    v8[5] = a2;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  v9 = *((_QWORD *)a2 + 16);
  if ( (*(_DWORD *)(v9 + 56) & 0x1000) == 0 )
    v4 = *(_DWORD *)(v9 + 16) + 1;
  *a3 = v4;
  a4->QuadPart = *((_QWORD *)a2 + 17) + *(_QWORD *)(*((_QWORD *)a2 + 16) + 24LL);
}
