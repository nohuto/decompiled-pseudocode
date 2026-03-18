/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0068270
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00685CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0010858 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     Template_pppppppqq @ 0x1C001099C (Template_pppppppqq.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064F14 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064FA4 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C00661E8 (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0066784 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068BDC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  bool v3; // r12
  __int64 v4; // rdi
  VIDMM_RECYCLE_RANGE *v5; // r9
  int v6; // r14d
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // r15
  char v12; // di
  VIDMM_RECYCLE_HEAP_MGR *v13; // rcx
  __int64 v14; // r8
  struct VIDMM_RECYCLE_RANGE *v15; // r9
  struct VIDMM_RECYCLE_RANGE *Range; // rax
  __int64 v17; // r8
  VIDMM_RECYCLE_BLOCK *v18; // rcx
  struct VIDMM_RECYCLE_RANGE *v19; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // [rsp+60h] [rbp-A8h]
  bool v24; // [rsp+64h] [rbp-A4h]
  bool v25; // [rsp+68h] [rbp-A0h]
  int v26; // [rsp+6Ch] [rbp-9Ch]
  int v27; // [rsp+70h] [rbp-98h]
  unsigned __int64 v28; // [rsp+78h] [rbp-90h]
  struct VIDMM_RECYCLE_RANGE *NextRange; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+98h] [rbp-70h]
  _QWORD *v31; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  bool v34; // [rsp+110h] [rbp+8h]
  bool v35; // [rsp+118h] [rbp+10h]
  bool v36; // [rsp+120h] [rbp+18h]
  bool v37; // [rsp+128h] [rbp+20h]

  v3 = 0;
  v4 = *((_QWORD *)a2 + 17);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 16);
  v32 = *((_QWORD *)a2 + 4);
  v28 = *((_QWORD *)a3 + 5);
  v27 = *((_DWORD *)a2 + 20);
  v26 = *((_DWORD *)a2 + 23);
  v30 = v4;
  v34 = 0;
  if ( v4 )
  {
    v3 = *(_QWORD *)(v4 + 64) == (_QWORD)a2;
    v34 = *(_QWORD *)(v4 + 72) == (_QWORD)a3;
  }
  v9 = *((_QWORD *)a2 + 18);
  v35 = 0;
  v36 = 0;
  if ( v9 )
  {
    v35 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    v36 = *(_QWORD *)(v9 + 72) == (_QWORD)a3;
  }
  v10 = *((_QWORD *)a2 + 19);
  v37 = 0;
  v24 = 0;
  if ( v10 )
  {
    v37 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    v24 = *(_QWORD *)(v10 + 72) == (_QWORD)a3;
  }
  v11 = *((_QWORD *)a2 + 20);
  v25 = 0;
  v23 = 0;
  if ( v11 )
  {
    v25 = *(_QWORD *)(v11 + 64) == (_QWORD)a2;
    v23 = *(_QWORD *)(v11 + 72) == (_QWORD)a3;
  }
  v31 = (_QWORD *)*((_QWORD *)a2 + 16);
  v33 = *((_QWORD *)a3 + 15);
  ++**((_QWORD **)this + 10);
  v12 = 0;
  while ( 1 )
  {
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(v5);
    if ( (unsigned int)(v6 - 3) <= 2 )
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v13, v15);
    if ( v15 == a3 )
      v12 = 1;
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
      (struct _SLIST_ENTRY *)v15,
      v14);
    if ( v12 )
      break;
    v5 = NextRange;
  }
  Range = VIDMM_RECYCLE_HEAP_MGR::CreateRange(
            *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
            *((struct VIDMM_RECYCLE_BLOCK **)this + 10),
            v32,
            v28);
  v18 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  v19 = Range;
  if ( (*(_QWORD *)v18)-- == 1LL )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v18);
  *((_DWORD *)v19 + 23) = v26;
  *((_DWORD *)v19 + 20) = v27;
  *((_DWORD *)v19 + 16) = v6;
  *((_QWORD *)v19 + 17) = v30;
  *((_QWORD *)v19 + 18) = v9;
  *((_QWORD *)v19 + 19) = v10;
  *((_QWORD *)v19 + 20) = v11;
  if ( v3 )
    *(_QWORD *)(v30 + 64) = v19;
  if ( v34 )
    *(_QWORD *)(v30 + 72) = v19;
  if ( v35 )
    *(_QWORD *)(v9 + 64) = v19;
  if ( v36 )
    *(_QWORD *)(v9 + 72) = v19;
  if ( v37 )
    *(_QWORD *)(v10 + 64) = v19;
  if ( v24 )
    *(_QWORD *)(v10 + 72) = v19;
  if ( v25 )
    *(_QWORD *)(v11 + 64) = v19;
  if ( v23 )
    *(_QWORD *)(v11 + 72) = v19;
  *((_QWORD *)v19 + 16) = v31;
  *v31 = (char *)v19 + 120;
  *((_QWORD *)v19 + 15) = v33;
  *(_QWORD *)(v33 + 8) = (char *)v19 + 120;
  if ( v6 >= 3 )
  {
    if ( v6 <= 4 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
        v19);
    }
    else if ( v6 == 5 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
        v19);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
  {
    v21 = *((_QWORD *)this + 10);
    v22 = *(_QWORD *)(v21 + 32);
    Template_pppppppqq(
      v22,
      v21,
      v17,
      **(_QWORD **)(*(_QWORD *)(v22 + 8) + 8LL),
      v19,
      v21,
      *(_QWORD *)(v21 + 56),
      v22,
      *((_QWORD *)v19 + 4),
      *((_QWORD *)v19 + 5),
      *(_DWORD *)v22,
      *((_DWORD *)v19 + 16));
  }
}
