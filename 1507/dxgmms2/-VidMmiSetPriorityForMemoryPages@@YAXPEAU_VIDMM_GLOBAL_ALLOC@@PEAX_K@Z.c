/*
 * XREFs of ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C005C0F0
 * Callers:
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0053080 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0069158 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C0075340 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiSetPriorityForMemoryPages(struct _VIDMM_GLOBAL_ALLOC *a1, void *a2, __int64 a3)
{
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbp
  _QWORD *v12; // rax
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v13[0] = a2;
  v13[1] = a3;
  v14 = 4;
  if ( a1 && *(_DWORD *)(*((_QWORD *)a1 + 59) + 4LL) == 3 )
  {
    v6 = *((_DWORD *)a1 + 104) - 1;
    if ( v6 )
    {
      if ( v6 == 2 )
        v14 = 5;
    }
    else
    {
      v14 = 3;
    }
  }
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, int *, int))ZwSetInformationVirtualMemory)(
         -1LL,
         1LL,
         1LL,
         v13,
         &v14,
         4);
  v11 = v7;
  if ( v7 < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    v12[3] = a1;
    v12[4] = a2;
    v12[5] = a3;
    v12[6] = v11;
    WdLogEvent5_WdWarning(v12);
  }
}
