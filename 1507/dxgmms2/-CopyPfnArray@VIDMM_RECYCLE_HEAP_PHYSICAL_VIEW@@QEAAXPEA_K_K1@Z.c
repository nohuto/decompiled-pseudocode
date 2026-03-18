/*
 * XREFs of ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C0065DC0
 * Callers:
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C0066A1C (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C0066B88 (-GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z.c)
 * Callees:
 *     memmove @ 0x1C00081C0 (memmove.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D2C (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v6; // r8
  char v7; // r9
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v8; // rax
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v9; // rdi
  _QWORD *v11; // rax
  char v12; // r12
  unsigned __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  struct VIDMM_MDL_RANGE *NextRange; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax

  v6 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
  v7 = 0;
  v8 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  v9 = 0LL;
  if ( v8 == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) )
    goto LABEL_8;
  do
  {
    if ( v7 )
      break;
    this = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v8 - 24);
    v8 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v8;
    if ( *((_QWORD *)this + 2) > a3 )
    {
      v7 = 1;
      v9 = this;
    }
  }
  while ( v8 != v6 );
  if ( !v9 || *((_QWORD *)v9 + 1) > a3 )
  {
LABEL_8:
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v11[7] = 0LL;
    v11[3] = 270LL;
    v11[4] = 52LL;
    v11[5] = 17LL;
    v11[6] = v9;
    WdLogEvent5_WdCriticalError(v11);
  }
  v12 = 0;
  v13 = a3;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = *((_QWORD *)v9 + 1);
    v16 = *((_QWORD *)v9 + 2);
    v17 = (v13 - v15) >> 12;
    if ( a4 <= v16 )
    {
      v16 = a4;
      v12 = 1;
    }
    v18 = ((v16 - v15) >> 12) - v17;
    memmove(&a2[v14], (const void *)(*(_QWORD *)v9 + 8 * (v17 + 6)), 8 * v18);
    v13 = *((_QWORD *)v9 + 2);
    v14 += v18;
    NextRange = VIDMM_MDL_RANGE::GetNextRange(v9);
    v9 = NextRange;
    if ( v12 )
      break;
    if ( *((_QWORD *)NextRange + 1) != v13 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
      v22[7] = 0LL;
      v22[3] = 270LL;
      v22[4] = 52LL;
      v22[5] = 18LL;
      v22[6] = v9;
      WdLogEvent5_WdCriticalError(v22);
    }
  }
  if ( v14 != (a4 - a3) >> 12 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
    v23[7] = 0LL;
    v23[3] = 270LL;
    v23[4] = 52LL;
    v23[5] = 19LL;
    v23[6] = v14;
    WdLogEvent5_WdCriticalError(v23);
  }
}
