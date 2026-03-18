/*
 * XREFs of ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C0135D28
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // r8
  int v18; // edx
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rdx
  ULONG_PTR Count; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _BYTE v29[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v30; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    *(_QWORD *)(v8 + 24) = 4200LL;
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
    Current = DXGPROCESS::GetCurrent(Type);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v29, Current);
    hPrimaryAllocation = a2->VidPnFromAllocation.hPrimaryAllocation;
    v15 = DXGPROCESS::GetCurrent(v14);
    v16 = (hPrimaryAllocation >> 6) & 0xFFFFFF;
    if ( v16 < *((_DWORD *)v15 + 58)
      && (v17 = *((_QWORD *)v15 + 27),
          v18 = *(_DWORD *)(v17 + 16LL * v16 + 8),
          ((hPrimaryAllocation >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x30))
      && (v18 & 0x1000) == 0
      && (v18 & 0xF) != 0
      && (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0xF) == 5 )
    {
      v19 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * v16);
    }
    else
    {
      v19 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v30, v19);
    if ( !v30 || (Count = v30[6].Count, v24 = *(_DWORD *)(Count + 4), (v24 & 0x2003) == 0) )
    {
      v25 = WdLogNewEntry5_WdWarning(Count, v20, v22, v23);
      *(_QWORD *)(v25 + 24) = a2->VidPnFromAllocation.hPrimaryAllocation;
      *(_QWORD *)(v25 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v25);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30, v26, v27, v28);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
      return 3221225485LL;
    }
    a2->VidPnFromAllocation.VidPnSourceId = (v24 >> 6) & 0xF;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30, v20, v22, v23);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  }
  return v7;
}
