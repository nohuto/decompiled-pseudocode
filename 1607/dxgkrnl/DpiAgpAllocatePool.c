/*
 * XREFs of DpiAgpAllocatePool @ 0x1C019C7C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpAllocatePool(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4, _QWORD *BaseAddress)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  SIZE_T v7; // r12
  unsigned int v8; // esi
  PMDL Mdl; // rbp
  char v10; // r13
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // esi
  __int64 v21; // rax
  PVOID v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v26; // rcx
  _DWORD *v27; // rsi
  __int64 v28; // rax
  char v29; // al
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  char v36; // [rsp+40h] [rbp-58h]
  unsigned int v37; // [rsp+44h] [rbp-54h]
  __int64 v38; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v39[9]; // [rsp+50h] [rbp-48h] BYREF
  char v40; // [rsp+A0h] [rbp+8h]

  v5 = (int)a3;
  v6 = 0LL;
  v7 = a2;
  v8 = 0;
  v38 = 0LL;
  Mdl = 0LL;
  v36 = 0;
  v10 = 0;
  v40 = 0;
  if ( !a1 || !a2 || !BaseAddress )
  {
    LODWORD(v13) = -1073741811;
    goto LABEL_34;
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6
    || *(_DWORD *)(v6 + 16) != 1953656900
    || *(_DWORD *)(v6 + 20) != 2
    || !*(_QWORD *)(v6 + 712)
    || !*(_QWORD *)(v6 + 728) )
  {
    LODWORD(v13) = -1073741811;
    v34 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    return (unsigned int)v13;
  }
  *BaseAddress = 0LL;
  v8 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v37 = v8;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _QWORD *))(v6 + 712))(
          *(_QWORD *)(v6 + 680),
          v8,
          a3,
          &v38,
          a4);
  v13 = v11;
  if ( v11 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(v6 + 712);
    *(_QWORD *)(v14 + 32) = v13;
LABEL_11:
    WdLogEvent5_WdError(v14);
    goto LABEL_34;
  }
  v36 = 1;
  Mdl = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
  if ( !Mdl )
  {
    LODWORD(v13) = -1073741670;
    v16 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v16 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v16);
LABEL_44:
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 720))(*(_QWORD *)(v6 + 680), v38);
    return (unsigned int)v13;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, PMDL, _QWORD *))(v6 + 728))(
          *(_QWORD *)(v6 + 680),
          v38,
          v8,
          0LL,
          Mdl,
          v39);
  v13 = v17;
  if ( v17 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(v6 + 728);
    v14 = v19;
    *(_QWORD *)(v19 + 32) = v13;
    goto LABEL_11;
  }
  v40 = 1;
  if ( (*(_DWORD *)(v6 + 704) & 1) != 0 )
  {
    v20 = 4;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
      {
        if ( (_DWORD)v5 == 2 )
        {
          v20 = 1028;
        }
        else
        {
          v21 = WdLogNewEntry5_WdError((unsigned int)(v5 - 1));
          *(_QWORD *)(v21 + 24) = v5;
          *(_QWORD *)(v21 + 32) = v6;
          WdLogEvent5_WdError(v21);
        }
      }
    }
    else
    {
      v20 = 516;
    }
    v22 = (PVOID)MmMapIoSpaceEx(*a4, v7, v20);
  }
  else
  {
    Mdl->MdlFlags |= 0x2002u;
    v22 = MmMapLockedPagesSpecifyCache(Mdl, 0, (MEMORY_CACHING_TYPE)v5, 0LL, 0, 0x40000010u);
  }
  *BaseAddress = v22;
  if ( v22 )
  {
    v10 = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
    v27 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v13) = -1073741801;
      v28 = WdLogNewEntry5_WdLowResource(v26);
      *(_QWORD *)(v28 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v28);
      v8 = v37;
      goto LABEL_36;
    }
    PoolWithTag[4] = 1953656900;
    PoolWithTag[5] = 9;
    *((_QWORD *)PoolWithTag + 3) = v38;
    *((_QWORD *)PoolWithTag + 4) = *a4;
    *((_QWORD *)PoolWithTag + 5) = v39[0];
    *((_QWORD *)PoolWithTag + 6) = Mdl;
    PoolWithTag[14] = v7;
    v29 = *(_BYTE *)(v6 + 704) & 1;
    v27[16] = v5;
    *((_BYTE *)v27 + 60) = v29;
    *((_QWORD *)v27 + 9) = *BaseAddress;
    KeWaitForSingleObject((PVOID)(v6 + 2464), Executive, 0, 0, 0LL);
    v30 = (_QWORD *)(v6 + 2448);
    v31 = *(_QWORD *)(v6 + 2448);
    if ( *(_QWORD *)(v31 + 8) != v6 + 2448 )
      __fastfail(3u);
    *(_QWORD *)v27 = v31;
    *((_QWORD *)v27 + 1) = v30;
    *(_QWORD *)(v31 + 8) = v27;
    *v30 = v27;
    KeReleaseMutex((PRKMUTEX)(v6 + 2464), 0);
    v33 = WdLogNewEntry5_WdEvent(v32);
    *(_QWORD *)(v33 + 24) = *BaseAddress;
    WdLogEvent5_WdEvent(v33);
    v8 = v37;
LABEL_34:
    if ( (int)v13 >= 0 )
      return (unsigned int)v13;
    if ( v10 != 1 )
    {
LABEL_39:
      if ( v40 != 1 )
        goto LABEL_41;
      goto LABEL_40;
    }
LABEL_36:
    if ( (*(_DWORD *)(v6 + 704) & 1) != 0 )
      MmUnmapIoSpace(BaseAddress, v7);
    else
      MmUnmapLockedPages(BaseAddress, Mdl);
    goto LABEL_39;
  }
  LODWORD(v13) = -1073741670;
  v24 = WdLogNewEntry5_WdLowResource(v23);
  *(_QWORD *)(v24 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v24);
  v8 = v37;
LABEL_40:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v6 + 736))(*(_QWORD *)(v6 + 680), v38, v8, 0LL);
LABEL_41:
  if ( Mdl )
    IoFreeMdl(Mdl);
  if ( v36 == 1 )
    goto LABEL_44;
  return (unsigned int)v13;
}
