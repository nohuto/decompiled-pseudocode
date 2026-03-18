/*
 * XREFs of DpiAgpAllocatePool @ 0x1C0172B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned int v24; // ebp
  _QWORD *v25; // rax
  PVOID v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v37; // rbp
  _QWORD *v38; // rax
  char v39; // al
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _QWORD *v46; // rax
  char v48; // [rsp+40h] [rbp-58h]
  char v49; // [rsp+41h] [rbp-57h]
  unsigned int v50; // [rsp+44h] [rbp-54h]
  __int64 v51; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v52[9]; // [rsp+50h] [rbp-48h] BYREF
  char v53; // [rsp+A0h] [rbp+8h]

  v5 = (int)a3;
  v6 = 0;
  v53 = 0;
  v7 = 0LL;
  v8 = a2;
  v9 = 0;
  v51 = 0LL;
  Mdl = 0LL;
  v49 = 0;
  v48 = 0;
  if ( !a1 || !a2 || !BaseAddress )
  {
    LODWORD(v14) = -1073741811;
LABEL_34:
    if ( (int)v14 >= 0 )
      return (unsigned int)v14;
    if ( v6 != 1 )
    {
LABEL_39:
      if ( v48 != 1 )
        goto LABEL_41;
      goto LABEL_40;
    }
LABEL_36:
    if ( (*(_DWORD *)(v7 + 704) & 1) != 0 )
      MmUnmapIoSpace(BaseAddress, v8);
    else
      MmUnmapLockedPages(BaseAddress, Mdl);
    goto LABEL_39;
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7
    || *(_DWORD *)(v7 + 16) != 1953656900
    || *(_DWORD *)(v7 + 20) != 2
    || !*(_QWORD *)(v7 + 712)
    || !*(_QWORD *)(v7 + 728) )
  {
    LODWORD(v14) = -1073741811;
    v46 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v46[4] = 0LL;
    v46[3] = &DpiAgpAllocatePool;
    v46[5] = -1073741811LL;
    WdLogEvent5_WdError(v46);
    return (unsigned int)v14;
  }
  *BaseAddress = 0LL;
  v11 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v50 = v11;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _QWORD *))(v7 + 712))(
          *(_QWORD *)(v7 + 680),
          v11,
          a3,
          &v51,
          a4);
  v14 = v12;
  if ( v12 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v15[3] = &DpiAgpAllocatePool;
    v15[4] = *(_QWORD *)(v7 + 712);
    v15[5] = v14;
    WdLogEvent5_WdError(v15);
    v6 = 0;
    v9 = v11;
    goto LABEL_34;
  }
  v49 = 1;
  Mdl = IoAllocateMdl(0LL, v8, 0, 0, 0LL);
  if ( !Mdl )
  {
    LODWORD(v14) = -1073741670;
    v20 = (_QWORD *)WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    v20[4] = IoAllocateMdl;
    v20[3] = &DpiAgpAllocatePool;
    v20[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v20);
LABEL_44:
    (*(void (__fastcall **)(_QWORD, __int64))(v7 + 720))(*(_QWORD *)(v7 + 680), v51);
    return (unsigned int)v14;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, PMDL, _QWORD *))(v7 + 728))(
          *(_QWORD *)(v7 + 680),
          v51,
          v11,
          0LL,
          Mdl,
          v52);
  v14 = v21;
  if ( v21 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v23[3] = &DpiAgpAllocatePool;
    v23[4] = *(_QWORD *)(v7 + 728);
    v23[5] = v14;
    WdLogEvent5_WdError(v23);
    v9 = v11;
LABEL_31:
    v6 = v53;
    goto LABEL_34;
  }
  v48 = 1;
  if ( (*(_DWORD *)(v7 + 704) & 1) != 0 )
  {
    v24 = 4;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
      {
        if ( (_DWORD)v5 == 2 )
        {
          v24 = 1028;
        }
        else
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)(v5 - 1));
          v25[3] = &DpiAgpAllocatePool;
          v25[4] = v5;
          v25[5] = v7;
          WdLogEvent5_WdError(v25);
        }
      }
    }
    else
    {
      v24 = 516;
    }
    v26 = (PVOID)MmMapIoSpaceEx(*a4, v8, v24);
  }
  else
  {
    Mdl->MdlFlags |= 0x2002u;
    v26 = MmMapLockedPagesSpecifyCache(Mdl, 0, (MEMORY_CACHING_TYPE)v5, 0LL, 0, 0x40000010u);
  }
  *BaseAddress = v26;
  if ( v26 )
  {
    v53 = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
    v37 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v14) = -1073741801;
      v38 = (_QWORD *)WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
      v38[4] = ExAllocatePoolWithTag;
      v38[3] = &DpiAgpAllocatePool;
      v38[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v38);
      v9 = v50;
      goto LABEL_36;
    }
    PoolWithTag[4] = 1953656900;
    PoolWithTag[5] = 9;
    *((_QWORD *)PoolWithTag + 3) = v51;
    *((_QWORD *)PoolWithTag + 4) = *a4;
    *((_QWORD *)PoolWithTag + 5) = v52[0];
    *((_QWORD *)PoolWithTag + 6) = Mdl;
    PoolWithTag[14] = v8;
    v39 = *(_BYTE *)(v7 + 704) & 1;
    v37[16] = v5;
    *((_BYTE *)v37 + 60) = v39;
    *((_QWORD *)v37 + 9) = *BaseAddress;
    KeWaitForSingleObject((PVOID)(v7 + 1384), Executive, 0, 0, 0LL);
    v40 = *(_QWORD *)(v7 + 1368);
    *(_QWORD *)v37 = v40;
    *((_QWORD *)v37 + 1) = v7 + 1368;
    if ( *(_QWORD *)(v40 + 8) != v7 + 1368 )
      __fastfail(3u);
    *(_QWORD *)(v40 + 8) = v37;
    *(_QWORD *)(v7 + 1368) = v37;
    KeReleaseMutex((PRKMUTEX)(v7 + 1384), 0);
    v45 = WdLogNewEntry5_WdEvent(v42, v41, v43, v44);
    *(_QWORD *)(v45 + 24) = &DpiAgpAllocatePool;
    *(_QWORD *)(v45 + 32) = *BaseAddress;
    WdLogEvent5_WdEvent(v45);
    v9 = v50;
    goto LABEL_31;
  }
  LODWORD(v14) = -1073741670;
  v31 = (_QWORD *)WdLogNewEntry5_WdLowResource(v28, v27, v29, v30);
  v31[4] = 0LL;
  v31[3] = &DpiAgpAllocatePool;
  v31[5] = -1073741670LL;
  WdLogEvent5_WdLowResource(v31);
  v9 = v50;
LABEL_40:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v7 + 736))(*(_QWORD *)(v7 + 680), v51, v9, 0LL);
LABEL_41:
  if ( Mdl )
    IoFreeMdl(Mdl);
  if ( v49 == 1 )
    goto LABEL_44;
  return (unsigned int)v14;
}
