/*
 * XREFs of ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0037D34
 * Callers:
 *     VidMmInitDevice @ 0x1C0004B90 (VidMmInitDevice.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0044BBC (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0060960 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0005E90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C00060B4 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0006100 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0032DE8 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00364D8 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Init(VIDMM_DEVICE *this, struct VIDMM_PROCESS *a2, __int64 a3, __int64 a4)
{
  VIDMM_PROCESS *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // ebp
  __int64 v12; // rax
  SIZE_T v13; // rax
  PVOID v14; // rax
  __int64 v15; // rax
  __int64 i; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  unsigned int v19; // ebp
  __int64 v20; // rax
  bool v21; // cf
  SIZE_T v22; // rax
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // rsi
  __int64 v29; // rax
  unsigned int v30; // ebp
  __int64 v31; // rax
  SIZE_T v32; // rax
  char *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char *v38; // rsi
  unsigned int v39; // ebp
  __int64 v40; // rax
  SIZE_T v41; // rax
  char *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  char *v47; // rsi
  unsigned int v48; // esi
  __int64 v49; // r14
  __int64 v50; // rbx

  if ( a2 )
  {
    v6 = a2;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    if ( DXGPROCESS::GetCurrent() && (v7 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9)) != 0 )
      v6 = *(VIDMM_PROCESS **)(v7 + 8);
    else
      v6 = 0LL;
  }
  else
  {
    v6 = *(VIDMM_PROCESS **)(*(_QWORD *)this + 40000LL);
  }
  *((_QWORD *)this + 1) = v6;
  if ( !v6 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 312LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225473LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    v11 = VIDMM_PROCESS::OpenAdapter(v6, *(struct VIDMM_GLOBAL **)this);
    if ( v11 < 0 )
    {
      _InterlockedAdd(&dword_1C00274E8, 1u);
      v12 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v12 + 24) = 328LL;
      WdLogEvent5_WdLowResource(v12);
      return (unsigned int)v11;
    }
    *((_BYTE *)this + 48) |= 1u;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 184LL));
  }
  v13 = 56LL * *((unsigned int *)this + 14);
  if ( !is_mul_ok(*((unsigned int *)this + 14), 0x38uLL) )
    v13 = -1LL;
  v14 = operator new(v13, 0x30326956u, PagedPool);
  *((_QWORD *)this + 5) = v14;
  if ( !v14 )
  {
    _InterlockedAdd(&dword_1C00274EC, 1u);
    v15 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v15 + 24) = 345LL;
    WdLogEvent5_WdLowResource(v15);
    return 3221225495LL;
  }
  memset(v14, 0, 56LL * *((unsigned int *)this + 14));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); *v18 = v18 )
  {
    v17 = 56LL * (unsigned int)i;
    i = (unsigned int)(i + 1);
    v18 = (_QWORD *)(v17 + *((_QWORD *)this + 5) + 32LL);
    v18[1] = v18;
  }
  if ( !*((_QWORD *)this + 3) && a2 )
    goto LABEL_59;
  v19 = *((_DWORD *)this + 15);
  v20 = 152LL * v19;
  if ( !is_mul_ok(v19, 0x98uLL) )
    v20 = -1LL;
  v21 = __CFADD__(v20, 8LL);
  v22 = v20 + 8;
  if ( v21 )
    v22 = -1LL;
  v23 = (char *)operator new(v22, 0x38346956u, i, PagedPool);
  if ( v23 )
  {
    v28 = v23 + 8;
    *(_DWORD *)v23 = v19;
    `vector constructor iterator'(
      v23 + 8,
      152LL,
      v19,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v28 = 0LL;
  }
  *((_QWORD *)this + 8) = v28;
  if ( !v28 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
    *(_QWORD *)(v29 + 24) = 371LL;
LABEL_33:
    WdLogEvent5_WdAssertion(v29);
    return 3221225495LL;
  }
  v30 = *((_DWORD *)this + 15);
  v31 = 152LL * v30;
  if ( !is_mul_ok(v30, 0x98uLL) )
    v31 = -1LL;
  v21 = __CFADD__(v31, 8LL);
  v32 = v31 + 8;
  if ( v21 )
    v32 = -1LL;
  v33 = (char *)operator new(v32, 0x38346956u, v26, PagedPool);
  if ( v33 )
  {
    v38 = v33 + 8;
    *(_DWORD *)v33 = v30;
    `vector constructor iterator'(
      v33 + 8,
      152LL,
      v30,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v38 = 0LL;
  }
  *((_QWORD *)this + 9) = v38;
  if ( !v38 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
    *(_QWORD *)(v29 + 24) = 378LL;
    goto LABEL_33;
  }
  if ( dword_1C00273A8 == 1 )
  {
    v39 = *((_DWORD *)this + 15);
    v40 = 152LL * v39;
    if ( !is_mul_ok(v39, 0x98uLL) )
      v40 = -1LL;
    v21 = __CFADD__(v40, 8LL);
    v41 = v40 + 8;
    if ( v21 )
      v41 = -1LL;
    v42 = (char *)operator new(v41, 0x38346956u, v36, PagedPool);
    if ( v42 )
    {
      v47 = v42 + 8;
      *(_DWORD *)v42 = v39;
      `vector constructor iterator'(
        v42 + 8,
        152LL,
        v39,
        (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
    }
    else
    {
      v47 = 0LL;
    }
    *((_QWORD *)this + 10) = v47;
    if ( !v47 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
      *(_QWORD *)(v29 + 24) = 387LL;
      goto LABEL_33;
    }
  }
  v48 = 0;
  if ( *((_DWORD *)this + 15) )
  {
    while ( 1 )
    {
      v49 = 152LL * v48;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize((_QWORD *)(v49 + *((_QWORD *)this + 8)), this, v48, 1);
      if ( (int)result < 0 )
        break;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize((_QWORD *)(v49 + *((_QWORD *)this + 9)), this, v48, 2);
      if ( (int)result < 0 )
        break;
      if ( dword_1C00273A8 == 1 )
      {
        result = VIDMM_DEVICE_PAGING_QUEUE::Initialize((_QWORD *)(v49 + *((_QWORD *)this + 10)), this, v48, 3);
        if ( (int)result < 0 )
          break;
      }
      if ( ++v48 >= *((_DWORD *)this + 15) )
        goto LABEL_59;
    }
  }
  else
  {
LABEL_59:
    v50 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 24) = qword_1C0027370 + v50 * KeQueryTimeIncrement();
    return 0LL;
  }
  return result;
}
