/*
 * XREFs of ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C012CD6C
 * Callers:
 *     DxgkRender @ 0x1C00763F0 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00A4EA0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0124C68 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00A6390 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkReferenceAllocationList(
        unsigned int *a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        struct DXGALLOCATION **a3,
        struct DXGDEVICE *a4)
{
  struct DXGPROCESS *Current; // r13
  struct DXGALLOCATION **v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int i; // edi
  __int64 hAllocation; // rsi
  __int64 v14; // rdx
  struct _EX_RUNDOWN_REF *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v20; // [rsp+24h] [rbp-64h]
  _BYTE v21[80]; // [rsp+38h] [rbp-50h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v21, Current);
  v10 = *a1;
  v20 = *a1;
  v11 = 0;
  for ( i = 0; i < v10; ++i )
  {
    hAllocation = a2->hAllocation;
    if ( (_DWORD)hAllocation )
    {
      v14 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v14 >= *((_DWORD *)Current + 58)
        || (v9 = *((_QWORD *)Current + 27),
            v8 = *(unsigned int *)(v9 + 16LL * (unsigned int)v14 + 8),
            v7 = (struct DXGALLOCATION **)(((unsigned int)hAllocation >> 26) & 0x30),
            (((unsigned int)hAllocation >> 26) & 0x30) != (*(_BYTE *)(v9 + 16LL * (unsigned int)v14 + 8) & 0x30))
        || (v8 & 0x1000) != 0
        || (v8 & 0xF) == 0
        || (*(_BYTE *)(v9 + 16LL * (unsigned int)v14 + 8) & 0xF) != 5
        || (v15 = *(struct _EX_RUNDOWN_REF **)(v9 + 16LL * (unsigned int)v14)) == 0LL )
      {
        v18 = WdLogNewEntry5_WdWarning(v7, v14, v8, v9);
        *(_QWORD *)(v18 + 24) = hAllocation;
        WdLogEvent5_WdWarning(v18);
        v11 = -1071775468;
        break;
      }
      if ( a4 )
      {
        v16 = *(_QWORD *)(v15[1].Count + 16);
        if ( *(_QWORD *)(v16 + 16) != *(_QWORD *)(*((_QWORD *)a4 + 2) + 16LL) )
        {
          v17 = WdLogNewEntry5_WdWarning(v16, a4, v8, v9);
          *(_QWORD *)(v17 + 24) = hAllocation;
          WdLogEvent5_WdWarning(v17);
          v11 = -1071775467;
          break;
        }
      }
      DxgkReferenceDxgAllocation(v15);
      v7 = a3;
      a3[i] = (struct DXGALLOCATION *)v15;
      v10 = v20;
    }
    ++a2;
  }
  *a1 = i;
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v21);
  return v11;
}
