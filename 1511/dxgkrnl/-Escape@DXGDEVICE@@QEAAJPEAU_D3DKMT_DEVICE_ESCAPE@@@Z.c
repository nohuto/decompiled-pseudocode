/*
 * XREFs of ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C013A448
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Escape(DXGDEVICE *this, struct _D3DKMT_DEVICE_ESCAPE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 Type; // rcx
  __int64 v10; // rax
  struct DXGPROCESS *Current; // rax
  D3DKMT_HANDLE hPrimaryAllocation; // esi
  struct DXGPROCESS *v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rdx
  ULONG_PTR Count; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  __int64 v24; // rax
  _BYTE v25[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v8 + 24) = 4231LL;
    WdLogEvent5_WdAssertion(v8);
  }
  Type = (unsigned int)a2->Type;
  if ( (_DWORD)Type )
  {
    if ( (_DWORD)Type == 1 )
      return 3221225659LL;
    v10 = WdLogNewEntry5_WdWarning(Type, v3, v5, v6);
    *(_QWORD *)(v10 + 24) = a2->Type;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v10);
    return (unsigned int)-1073741811;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v25, Current);
    hPrimaryAllocation = a2->VidPnFromAllocation.hPrimaryAllocation;
    v14 = DXGPROCESS::GetCurrent();
    v15 = (hPrimaryAllocation >> 6) & 0xFFFFFF;
    if ( v15 < *((_DWORD *)v14 + 58)
      && (v16 = *((_QWORD *)v14 + 27),
          v17 = *(_DWORD *)(v16 + 16LL * v15 + 8),
          ((hPrimaryAllocation >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x30))
      && (v17 & 0x1000) == 0
      && (v17 & 0xF) != 0
      && (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0xF) == 5 )
    {
      v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * v15);
    }
    else
    {
      v18 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v26, v18);
    if ( !v26 || (Count = v26[6].Count, v23 = *(_DWORD *)(Count + 4), (v23 & 0x2003) == 0) )
    {
      v24 = WdLogNewEntry5_WdWarning(Count, v19, v21, v22);
      *(_QWORD *)(v24 + 24) = a2->VidPnFromAllocation.hPrimaryAllocation;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
      return 3221225485LL;
    }
    a2->VidPnFromAllocation.VidPnSourceId = (v23 >> 6) & 0xF;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  }
  return v7;
}
