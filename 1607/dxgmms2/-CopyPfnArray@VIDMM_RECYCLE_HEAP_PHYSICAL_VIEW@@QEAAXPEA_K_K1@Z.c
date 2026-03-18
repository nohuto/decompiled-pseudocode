/*
 * XREFs of ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C0065F80
 * Callers:
 *     ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C005EA28 (-GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z.c)
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C005EB30 (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAA_KXZ @ 0x1C00959DC (-GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAA_KXZ.c)
 * Callees:
 *     memmove @ 0x1C0014B00 (memmove.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C00666F8 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rsi
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v6; // r8
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v7; // rax
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v8; // rdi
  char v10; // r12
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  struct VIDMM_MDL_RANGE *NextRange; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax

  v5 = a4;
  v6 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
  LOBYTE(a4) = 0;
  v7 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  v8 = 0LL;
  if ( v7 == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) )
    goto LABEL_16;
  do
  {
    if ( (_BYTE)a4 )
      break;
    this = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v7 - 24);
    v7 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v7;
    if ( *((_QWORD *)this + 2) > a3 )
    {
      LOBYTE(a4) = 1;
      v8 = this;
    }
  }
  while ( v7 != v6 );
  if ( !v8 || *((_QWORD *)v8 + 1) > a3 )
  {
LABEL_16:
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, v6, a4);
    v22[7] = 0LL;
    v22[3] = 270LL;
    v22[4] = 52LL;
    v22[5] = 17LL;
    v22[6] = v8;
    WdLogEvent5_WdCriticalError(v22);
  }
  v10 = 0;
  v11 = a3;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *((_QWORD *)v8 + 1);
    v14 = *((_QWORD *)v8 + 2);
    v15 = (v11 - v13) >> 12;
    if ( v5 <= v14 )
    {
      v14 = v5;
      v10 = 1;
    }
    v16 = ((v14 - v13) >> 12) - v15;
    memmove(&a2[v12], (const void *)(*(_QWORD *)v8 + 8 * (v15 + 6)), 8 * v16);
    v11 = *((_QWORD *)v8 + 2);
    v12 += v16;
    NextRange = VIDMM_MDL_RANGE::GetNextRange(v8);
    v8 = NextRange;
    if ( v10 )
      break;
    if ( *((_QWORD *)NextRange + 1) != v11 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20, v21);
      v23[7] = 0LL;
      v23[3] = 270LL;
      v23[4] = 52LL;
      v23[5] = 18LL;
      v23[6] = v8;
      WdLogEvent5_WdCriticalError(v23);
    }
  }
  if ( v12 != (v5 - a3) >> 12 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20, v21);
    v24[7] = 0LL;
    v24[3] = 270LL;
    v24[4] = 52LL;
    v24[5] = 19LL;
    v24[6] = v12;
    WdLogEvent5_WdCriticalError(v24);
  }
}
