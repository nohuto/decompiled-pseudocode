/*
 * XREFs of DxgGetHandleParentCB @ 0x1C013C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgGetHandleParentCB(unsigned int a1)
{
  __int64 v1; // rdi
  struct DXGPROCESS *Current; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r9
  int v6; // r8d
  __int64 v7; // rdx
  struct _EX_RUNDOWN_REF *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG_PTR Count; // rcx
  __int64 v14; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v17; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, Current);
  v3 = 0;
  v4 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 < *((_DWORD *)Current + 58)
    && (v5 = *((_QWORD *)Current + 27),
        v6 = *(_DWORD *)(v5 + 16LL * (unsigned int)v4 + 8),
        (((unsigned int)v1 >> 26) & 0x30) == (*(_BYTE *)(v5 + 16LL * (unsigned int)v4 + 8) & 0x30))
    && (v6 & 0x1000) == 0
    && (v6 & 0xF) != 0
    && (v7 = 2 * v4, (*(_BYTE *)(v5 + 8 * v7 + 8) & 0xF) == 5) )
  {
    v8 = *(struct _EX_RUNDOWN_REF **)(v5 + 8 * v7);
  }
  else
  {
    v8 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v17, v8);
  if ( v17 )
  {
    Count = v17[5].Count;
    if ( Count )
      v3 = *(_DWORD *)(Count + 16);
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = v1;
    WdLogEvent5_WdWarning(v14);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v17);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v3;
}
