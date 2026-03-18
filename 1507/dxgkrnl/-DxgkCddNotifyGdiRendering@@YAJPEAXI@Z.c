/*
 * XREFs of ?DxgkCddNotifyGdiRendering@@YAJPEAXI@Z @ 0x1C0131B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddNotifyGdiRendering(struct DXGPROCESS *a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r8d
  __int64 v5; // r9
  int v6; // edx
  struct _EX_RUNDOWN_REF *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // ebx
  ULONG_PTR Count; // rcx
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, a1);
  v4 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)a1 + 58)
    && (v5 = *((_QWORD *)a1 + 27),
        v6 = *(_DWORD *)(v5 + 16LL * v4 + 8),
        (((unsigned int)v2 >> 26) & 0x30) == (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0x30))
    && (v6 & 0x1000) == 0
    && (v6 & 0xF) != 0
    && (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0xF) == 5 )
  {
    v7 = *(struct _EX_RUNDOWN_REF **)(v5 + 16LL * v4);
  }
  else
  {
    v7 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v17, v7);
  if ( v17 )
  {
    Count = v17[6].Count;
    if ( Count )
      *(_DWORD *)(Count + 4) &= ~0x400u;
    v13 = 0;
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = v2;
    v13 = -1073741811;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v17, v8, v10, v11);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v13;
}
