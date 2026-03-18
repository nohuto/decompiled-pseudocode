/*
 * XREFs of ?QueryNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C01276DC
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::QueryNodeMetadata(DXGADAPTER *this, unsigned int a2, struct _DXGK_NODEMETADATA *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int NumDifferentPhysicalAdapters; // eax
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  unsigned __int16 *v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax

  v4 = HIWORD(a2);
  v5 = (unsigned __int16)a2;
  if ( (unsigned int)v4 >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(this) )
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 32) = (unsigned int)v4;
    *(_QWORD *)(v10 + 24) = this;
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
    v12[5] = NumDifferentPhysicalAdapters;
    v13 = v12;
LABEL_3:
    WdLogEvent5_WdWarning(v13);
    return 3221225485LL;
  }
  v15 = (unsigned __int16 *)(*(_QWORD *)(v7 + 1896) + 48 * v4);
  if ( (unsigned int)v5 >= *v15 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    v16[3] = this;
    v16[4] = v5;
    v16[5] = *v15;
    v13 = v16;
    goto LABEL_3;
  }
  v17 = *((_QWORD *)v15 + 3);
  if ( v17 )
  {
    *(_OWORD *)v8 = *(_OWORD *)(74 * v5 + v17);
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(74 * v5 + v17 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(74 * v5 + v17 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(74 * v5 + v17 + 48);
    *(_QWORD *)(v8 + 64) = *(_QWORD *)(74 * v5 + v17 + 64);
    *(_WORD *)(v8 + 72) = *(_WORD *)(74 * v5 + v17 + 72);
    return 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v7, 0LL, v8, v9);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdWarning(v18);
    return 3221225659LL;
  }
}
