/*
 * XREFs of ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062D50
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0046760 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0046924 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?CommitVirtualAddresses@VIDMM_SEGMENT@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062280 (-CommitVirtualAddresses@VIDMM_SEGMENT@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062950 (-RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RecommitGpuVirtualAddresses(VIDMM_GLOBAL *this, struct CVirtualAddressAllocator *a2)
{
  __int64 v4; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rcx
  char *i; // rsi
  CVirtualAddressAllocator *v12; // rbp
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  __int64 v17; // rax
  unsigned int v18; // r12d
  _QWORD **v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // [rsp+50h] [rbp-48h]
  struct VIDMM_ALLOC *v26; // [rsp+58h] [rbp-40h] BYREF
  int v27; // [rsp+A0h] [rbp+8h]
  unsigned int v28; // [rsp+B0h] [rbp+18h]
  _QWORD *v29; // [rsp+B8h] [rbp+20h]

  if ( *((_DWORD *)this + 2) )
  {
    v27 = 1;
  }
  else
  {
    v27 = 0;
    VIDMM_GLOBAL::StartPreparation((__int64)this, (__int64)a2, 0LL, 0LL, 113);
  }
  v4 = 0LL;
  if ( !*((_DWORD *)this + 926) )
    goto LABEL_7;
  while ( 1 )
  {
    v7 = VIDMM_SEGMENT::CommitVirtualAddresses(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v4), a2);
    if ( v7 < 0 )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)this + 926) )
      goto LABEL_6;
  }
  v17 = WdLogNewEntry5_WdAssertion(v6, v5, v8, v9);
  *(_QWORD *)(v17 + 24) = this;
  WdLogEvent5_WdAssertion(v17);
LABEL_6:
  if ( v7 >= 0 )
  {
LABEL_7:
    v7 = VIDMM_GLOBAL::RestoreMappedFenceGpuVa(this, (struct _KTHREAD **)a2);
    if ( v7 >= 0 )
    {
      v10 = (char *)this + 40744;
      for ( i = (char *)*((_QWORD *)this + 5093); i != v10; i = *(char **)i )
      {
        v12 = (CVirtualAddressAllocator *)*((_QWORD *)i + 51);
        if ( v12 && (!a2 || v12 == a2) && *((_QWORD *)i + 2) != *((_QWORD *)this + 5007) )
        {
          v13 = *(_DWORD *)(*((_QWORD *)v12 + 8) + 6416LL);
          v14 = (_QWORD *)((char *)v12 + 104);
          v15 = (_QWORD *)*((_QWORD *)v12 + 13);
          v28 = v13;
          while ( v15 != v14 )
          {
            v18 = 0;
            if ( v13 )
            {
              v19 = (_QWORD **)(v15 + 5);
              v29 = v15 + 5;
              do
              {
                v20 = *v19;
                v25 = &v15[2 * v18 + 5];
                if ( *v19 != v25 )
                {
                  do
                  {
                    v5 = (struct VIDMM_MAPPED_VA_RANGE *)(v20 - 1);
                    if ( (v20[10] & 4) != 0 )
                    {
                      v7 = CVirtualAddressAllocator::CommitVirtualAddressRange(v12, v5, 0LL, -2, 0LL, 0LL, 0, &v26, 0);
                      if ( v7 < 0 )
                      {
                        v24 = WdLogNewEntry5_WdAssertion(v21, v5, v22, v23);
                        *(_QWORD *)(v24 + 24) = 7462LL;
                        WdLogEvent5_WdAssertion(v24);
                        goto LABEL_16;
                      }
                    }
                    v20 = (_QWORD *)*v20;
                  }
                  while ( v20 != v25 );
                  v13 = v28;
                }
                ++v18;
                v19 = (_QWORD **)(v29 + 2);
                v29 += 2;
              }
              while ( v18 < v13 );
              v14 = (_QWORD *)((char *)v12 + 104);
            }
            v15 = (_QWORD *)*v15;
          }
          v7 = 0;
LABEL_16:
          if ( v7 < 0 )
            break;
          v10 = (char *)this + 40744;
        }
      }
    }
  }
  if ( !v27 )
    VIDMM_GLOBAL::EndPreparation(this, (__int64)v5, 0LL, 0, 0LL, 0LL);
  return (unsigned int)v7;
}
