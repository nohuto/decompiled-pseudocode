/*
 * XREFs of ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C005B250
 * Callers:
 *     VidMmInitDevice @ 0x1C0011C50 (VidMmInitDevice.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0047C90 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006FFC4 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000F590 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000F76C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C000FC70 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C004521C (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C005D228 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Init(VIDMM_DEVICE *this, struct VIDMM_PROCESS *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  VIDMM_PROCESS *v8; // rcx
  __int64 v9; // rcx
  int v10; // ebp
  SIZE_T v11; // rax
  PVOID v12; // rax
  __int64 i; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  bool v18; // cf
  SIZE_T v19; // rax
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  char *v24; // rsi
  unsigned __int64 v25; // rbp
  __int64 v26; // rax
  SIZE_T v27; // rax
  char *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  char *v32; // rsi
  unsigned int v33; // esi
  __int64 v34; // r14
  __int64 result; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  unsigned __int64 v38; // rbp
  __int64 v39; // rax
  SIZE_T v40; // rax
  char *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  char *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = this;
    *(_QWORD *)(v6 + 32) = *(_QWORD *)this;
  }
  if ( a2 )
  {
    v8 = a2;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    if ( DXGPROCESS::GetCurrent() && (v7 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
      v8 = *(VIDMM_PROCESS **)(v7 + 8);
    else
      v8 = 0LL;
  }
  else
  {
    v8 = *(VIDMM_PROCESS **)(*(_QWORD *)this + 40320LL);
  }
  *((_QWORD *)this + 1) = v8;
  if ( !v8 )
  {
    v45 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v45 + 24) = 329LL;
    WdLogEvent5_WdAssertion(v45);
    return 3221225473LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    v10 = VIDMM_PROCESS::OpenAdapter(v8, *(struct VIDMM_GLOBAL **)this);
    if ( v10 < 0 )
    {
      _InterlockedAdd(&dword_1C0035578, 1u);
      v46 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v46 + 24) = 345LL;
      WdLogEvent5_WdLowResource(v46);
      return (unsigned int)v10;
    }
    *((_BYTE *)this + 50) |= 1u;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 200LL));
  }
  v11 = 56LL * *((unsigned int *)this + 14);
  if ( !is_mul_ok(*((unsigned int *)this + 14), 0x38uLL) )
    v11 = -1LL;
  v12 = operator new(v11, 0x30326956u, PagedPool);
  *((_QWORD *)this + 5) = v12;
  if ( !v12 )
  {
    _InterlockedAdd(&dword_1C003557C, 1u);
    v47 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v47 + 24) = 362LL;
    WdLogEvent5_WdLowResource(v47);
    return 3221225495LL;
  }
  memset(v12, 0, 56LL * *((unsigned int *)this + 14));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); *v15 = v15 )
  {
    v14 = 56LL * (unsigned int)i;
    i = (unsigned int)(i + 1);
    v15 = (_QWORD *)(v14 + *((_QWORD *)this + 5) + 32LL);
    v15[1] = v15;
  }
  if ( !*((_QWORD *)this + 3) && a2 )
    goto LABEL_38;
  v16 = *((unsigned int *)this + 15);
  v17 = 168 * v16;
  if ( !is_mul_ok(v16, 0xA8uLL) )
    v17 = -1LL;
  v18 = __CFADD__(v17, 8LL);
  v19 = v17 + 8;
  if ( v18 )
    v19 = -1LL;
  v20 = (char *)operator new(v19, 0x38346956u, i, PagedPool);
  if ( v20 )
  {
    v24 = v20 + 8;
    *(_QWORD *)v20 = v16;
    `vector constructor iterator'(
      v20 + 8,
      168LL,
      (unsigned int)v16,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v24 = 0LL;
  }
  *((_QWORD *)this + 9) = v24;
  if ( !v24 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v22, v21);
    *(_QWORD *)(v48 + 24) = 388LL;
    goto LABEL_60;
  }
  v25 = *((unsigned int *)this + 15);
  v26 = 168 * v25;
  if ( !is_mul_ok(v25, 0xA8uLL) )
    v26 = -1LL;
  v18 = __CFADD__(v26, 8LL);
  v27 = v26 + 8;
  if ( v18 )
    v27 = -1LL;
  v28 = (char *)operator new(v27, 0x38346956u, v23, PagedPool);
  if ( v28 )
  {
    v32 = v28 + 8;
    *(_QWORD *)v28 = v25;
    `vector constructor iterator'(
      v28 + 8,
      168LL,
      (unsigned int)v25,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v32 = 0LL;
  }
  *((_QWORD *)this + 10) = v32;
  if ( !v32 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v30, v29);
    *(_QWORD *)(v48 + 24) = 395LL;
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 48LL) & 2) != 0 )
  {
    v38 = *((unsigned int *)this + 15);
    v39 = 168 * v38;
    if ( !is_mul_ok(v38, 0xA8uLL) )
      v39 = -1LL;
    v18 = __CFADD__(v39, 8LL);
    v40 = v39 + 8;
    if ( v18 )
      v40 = -1LL;
    v41 = (char *)operator new(v40, 0x38346956u, v31, PagedPool);
    if ( v41 )
    {
      v44 = v41 + 8;
      *(_QWORD *)v41 = v38;
      `vector constructor iterator'(
        v41 + 8,
        168LL,
        (unsigned int)v38,
        (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
    }
    else
    {
      v44 = 0LL;
    }
    *((_QWORD *)this + 11) = v44;
    if ( !v44 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v43, v42);
      *(_QWORD *)(v48 + 24) = 411LL;
LABEL_60:
      WdLogEvent5_WdAssertion(v48);
      return 3221225495LL;
    }
  }
  v33 = 0;
  if ( *((_DWORD *)this + 15) )
  {
    while ( 1 )
    {
      v34 = 168LL * v33;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize((_QWORD *)(v34 + *((_QWORD *)this + 9)), this, v33, 1);
      if ( (int)result < 0 )
        break;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize((_QWORD *)(v34 + *((_QWORD *)this + 10)), this, v33, 2);
      if ( (int)result < 0 )
        break;
      v36 = *((_QWORD *)this + 11);
      if ( v36 )
      {
        result = VIDMM_DEVICE_PAGING_QUEUE::Initialize((_QWORD *)(v34 + v36), this, v33, 3);
        if ( (int)result < 0 )
          break;
      }
      if ( ++v33 >= *((_DWORD *)this + 15) )
        goto LABEL_38;
    }
  }
  else
  {
LABEL_38:
    v37 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 27) = qword_1C00353A8 + v37 * KeQueryTimeIncrement();
    return 0LL;
  }
  return result;
}
