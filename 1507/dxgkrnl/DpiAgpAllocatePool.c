/*
 * XREFs of DpiAgpAllocatePool @ 0x1C016E310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpAllocatePool(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4, _QWORD *BaseAddress)
{
  __int64 v5; // r13
  char v6; // al
  __int64 v7; // rbx
  SIZE_T v8; // r12
  unsigned int v9; // edi
  PMDL Mdl; // r14
  unsigned int v11; // ebp
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // ebp
  _QWORD *v22; // rax
  PVOID v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rbp
  _QWORD *v29; // rax
  char v30; // al
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  char v39; // [rsp+40h] [rbp-58h]
  char v40; // [rsp+41h] [rbp-57h]
  unsigned int v41; // [rsp+44h] [rbp-54h]
  __int64 v42; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v43[9]; // [rsp+50h] [rbp-48h] BYREF
  char v44; // [rsp+A0h] [rbp+8h]

  v5 = (int)a3;
  v6 = 0;
  v44 = 0;
  v7 = 0LL;
  v8 = a2;
  v9 = 0;
  v42 = 0LL;
  Mdl = 0LL;
  v40 = 0;
  v39 = 0;
  if ( !a1 || !a2 || !BaseAddress )
  {
    LODWORD(v14) = -1073741811;
LABEL_34:
    if ( (int)v14 >= 0 )
      return (unsigned int)v14;
    if ( v6 != 1 )
    {
LABEL_39:
      if ( v39 != 1 )
        goto LABEL_41;
      goto LABEL_40;
    }
LABEL_36:
    if ( (*(_DWORD *)(v7 + 672) & 1) != 0 )
      MmUnmapIoSpace(BaseAddress, v8);
    else
      MmUnmapLockedPages(BaseAddress, Mdl);
    goto LABEL_39;
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7
    || *(_DWORD *)(v7 + 16) != 1953656900
    || *(_DWORD *)(v7 + 20) != 2
    || !*(_QWORD *)(v7 + 680)
    || !*(_QWORD *)(v7 + 696) )
  {
    LODWORD(v14) = -1073741811;
    v37 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v37[4] = 0LL;
    v37[3] = &DpiAgpAllocatePool;
    v37[5] = -1073741811LL;
    WdLogEvent5_WdError(v37);
    return (unsigned int)v14;
  }
  *BaseAddress = 0LL;
  v11 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v41 = v11;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _QWORD *))(v7 + 680))(
          *(_QWORD *)(v7 + 648),
          v11,
          a3,
          &v42,
          a4);
  v14 = v12;
  if ( v12 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v15[3] = &DpiAgpAllocatePool;
    v15[4] = *(_QWORD *)(v7 + 680);
    v15[5] = v14;
    WdLogEvent5_WdError(v15);
    v6 = 0;
    v9 = v11;
    goto LABEL_34;
  }
  v40 = 1;
  Mdl = IoAllocateMdl(0LL, v8, 0, 0, 0LL);
  if ( !Mdl )
  {
    LODWORD(v14) = -1073741670;
    v17 = (_QWORD *)WdLogNewEntry5_WdLowResource(v16);
    v17[4] = IoAllocateMdl;
    v17[3] = &DpiAgpAllocatePool;
    v17[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v17);
LABEL_44:
    (*(void (__fastcall **)(_QWORD, __int64))(v7 + 688))(*(_QWORD *)(v7 + 648), v42);
    return (unsigned int)v14;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, PMDL, _QWORD *))(v7 + 696))(
          *(_QWORD *)(v7 + 648),
          v42,
          v11,
          0LL,
          Mdl,
          v43);
  v14 = v18;
  if ( v18 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v20[3] = &DpiAgpAllocatePool;
    v20[4] = *(_QWORD *)(v7 + 696);
    v20[5] = v14;
    WdLogEvent5_WdError(v20);
    v9 = v11;
LABEL_31:
    v6 = v44;
    goto LABEL_34;
  }
  v39 = 1;
  if ( (*(_DWORD *)(v7 + 672) & 1) != 0 )
  {
    v21 = 4;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
      {
        if ( (_DWORD)v5 == 2 )
        {
          v21 = 1028;
        }
        else
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)(v5 - 1));
          v22[3] = &DpiAgpAllocatePool;
          v22[4] = v5;
          v22[5] = v7;
          WdLogEvent5_WdError(v22);
        }
      }
    }
    else
    {
      v21 = 516;
    }
    v23 = (PVOID)MmMapIoSpaceEx(*a4, v8, v21);
  }
  else
  {
    Mdl->MdlFlags |= 0x2002u;
    v23 = MmMapLockedPagesSpecifyCache(Mdl, 0, (MEMORY_CACHING_TYPE)v5, 0LL, 0, 0x40000010u);
  }
  *BaseAddress = v23;
  if ( v23 )
  {
    v44 = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
    v28 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v14) = -1073741801;
      v29 = (_QWORD *)WdLogNewEntry5_WdLowResource(v27);
      v29[4] = ExAllocatePoolWithTag;
      v29[3] = &DpiAgpAllocatePool;
      v29[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v29);
      v9 = v41;
      goto LABEL_36;
    }
    PoolWithTag[4] = 1953656900;
    PoolWithTag[5] = 9;
    *((_QWORD *)PoolWithTag + 3) = v42;
    *((_QWORD *)PoolWithTag + 4) = *a4;
    *((_QWORD *)PoolWithTag + 5) = v43[0];
    *((_QWORD *)PoolWithTag + 6) = Mdl;
    PoolWithTag[14] = v8;
    v30 = *(_BYTE *)(v7 + 672) & 1;
    v28[16] = v5;
    *((_BYTE *)v28 + 60) = v30;
    *((_QWORD *)v28 + 9) = *BaseAddress;
    KeWaitForSingleObject((PVOID)(v7 + 1344), Executive, 0, 0, 0LL);
    v31 = *(_QWORD *)(v7 + 1328);
    *(_QWORD *)v28 = v31;
    *((_QWORD *)v28 + 1) = v7 + 1328;
    if ( *(_QWORD *)(v31 + 8) != v7 + 1328 )
      __fastfail(3u);
    *(_QWORD *)(v31 + 8) = v28;
    *(_QWORD *)(v7 + 1328) = v28;
    KeReleaseMutex((PRKMUTEX)(v7 + 1344), 0);
    v36 = WdLogNewEntry5_WdEvent(v33, v32, v34, v35);
    *(_QWORD *)(v36 + 24) = &DpiAgpAllocatePool;
    *(_QWORD *)(v36 + 32) = *BaseAddress;
    WdLogEvent5_WdEvent(v36);
    v9 = v41;
    goto LABEL_31;
  }
  LODWORD(v14) = -1073741670;
  v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v24);
  v25[4] = 0LL;
  v25[3] = &DpiAgpAllocatePool;
  v25[5] = -1073741670LL;
  WdLogEvent5_WdLowResource(v25);
  v9 = v41;
LABEL_40:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v7 + 704))(*(_QWORD *)(v7 + 648), v42, v9, 0LL);
LABEL_41:
  if ( Mdl )
    IoFreeMdl(Mdl);
  if ( v40 == 1 )
    goto LABEL_44;
  return (unsigned int)v14;
}
