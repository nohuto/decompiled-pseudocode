/*
 * XREFs of ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000BCD0
 * Callers:
 *     PsmMemoryLimitNotification2 @ 0x180002FA0 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x1800283E4 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800284A8 (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 */

void __fastcall ModernResourceEnforcer::MemoryLimitNotification(
        ModernResourceEnforcer *this,
        union _RM_SID *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v7; // rbx
  union _RM_SID *v9; // r13
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  ModernResourceEnforcer *v12; // r14
  unsigned __int16 *v13; // rcx
  unsigned __int16 *v14; // r12
  char *v15; // rax
  char *v16; // rax
  unsigned __int64 v17; // rax
  char v18; // r13
  unsigned int v19; // edx
  void **v20; // rax
  char *v21; // r14
  size_t v22; // rbx
  char *v23; // rbx
  unsigned __int16 *v24; // rcx
  char *v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // eax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  ModernResourceEnforcer **v31; // rcx
  _WORD *v32; // rcx
  int v33; // [rsp+30h] [rbp-79h] BYREF
  int v34; // [rsp+34h] [rbp-75h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-71h] BYREF
  void *Block[2]; // [rsp+48h] [rbp-61h] BYREF
  char *v37; // [rsp+58h] [rbp-51h]
  _QWORD v38[2]; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  void *v40; // [rsp+80h] [rbp-29h]
  int v41; // [rsp+88h] [rbp-21h]
  int v42; // [rsp+8Ch] [rbp-1Dh]
  int *v43; // [rsp+90h] [rbp-19h]
  __int64 v44; // [rsp+98h] [rbp-11h]
  unsigned __int64 *v45; // [rsp+A0h] [rbp-9h]
  __int64 v46; // [rsp+A8h] [rbp-1h]

  v34 = a3;
  v7 = 0LL;
  *(_QWORD *)&EventDescriptor.Id = a2;
  v33 = 0;
  v9 = a2;
  v10 = operator new(0x98uLL);
  v11 = v10;
  if ( !v10 )
  {
    v33 = -1073741801;
    goto LABEL_31;
  }
  v10[1] = v10 + 3;
  v12 = (ModernResourceEnforcer *)(v10 + 17);
  v10[2] = v10 + 3;
  *((_WORD *)v10 + 12) = 0;
  v10[14] = 0LL;
  v10[15] = 0LL;
  *((_DWORD *)v10 + 32) = 0;
  v10[17] = 0LL;
  v10[18] = 0LL;
  *(_DWORD *)v10 = 1;
  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
  }
  v13 = (unsigned __int16 *)v10[1];
  v14 = (unsigned __int16 *)(v10 + 3);
  if ( v13 == (unsigned __int16 *)(v10 + 3) )
    v15 = (char *)v10 + 38;
  else
    v15 = *(char **)v14;
  if ( v7 <= (v15 - (char *)v13) >> 1 )
  {
    if ( v13 != a4 )
      memmove(v13, a4, 2 * v7);
    v32 = (_WORD *)(v11[1] + 2 * v7);
    v11[2] = v32;
    *v32 = 0;
  }
  else
  {
    if ( v13 == v14 )
      v16 = (char *)v11 + 38;
    else
      v16 = *(char **)v14;
    v17 = 2 * ((v16 - (char *)v13) >> 1) + 1;
    if ( v17 < v7 )
      v17 = v7;
    if ( v17 > 0x3FFFFFFFFFFFFFFELL )
      v17 = 0x3FFFFFFFFFFFFFFELL;
    if ( v7 > v17 )
    {
      v38[0] = 0LL;
      v19 = 0;
      v38[1] = 0LL;
      v18 = 2;
      v20 = (void **)v38;
    }
    else
    {
      v18 = 1;
      Block[1] = (void *)(v17 + 1);
      if ( v17 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      {
        v19 = 0;
        Block[0] = 0LL;
      }
      else
      {
        Block[0] = operator new(2 * (v17 + 1), (const struct std::nothrow_t *)&unk_18003CF1A);
        v19 = 0;
      }
      v20 = Block;
    }
    v21 = (char *)*v20;
    v37 = (char *)v20[1];
    *v20 = 0LL;
    if ( (v18 & 2) != 0 )
    {
      v18 &= ~2u;
      utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
        v38,
        0LL);
    }
    if ( (v18 & 1) != 0 && Block[0] )
      operator delete(Block[0]);
    if ( !v21 )
    {
      v33 = -1073741801;
      ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
        (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v11,
        v19);
      goto LABEL_31;
    }
    v22 = 2 * v7;
    memcpy_0(v21, a4, v22);
    v23 = &v21[v22];
    *(_WORD *)v23 = 0;
    v24 = (unsigned __int16 *)v11[1];
    if ( v24 != v14 )
      operator delete(v24);
    v9 = *(union _RM_SID **)&EventDescriptor.Id;
    v25 = v37 - 1;
    v11[1] = v21;
    v11[2] = v23;
    *(_QWORD *)v14 = &v21[2 * (_QWORD)v25];
    v12 = (ModernResourceEnforcer *)(v11 + 17);
  }
  v26 = *(_OWORD *)v9;
  v27 = *((_OWORD *)v9 + 1);
  *((_DWORD *)v11 + 28) = a5;
  v28 = *((_DWORD *)v9 + 16);
  *(_OWORD *)(v11 + 5) = v26;
  v29 = *((_OWORD *)v9 + 2);
  *(_OWORD *)(v11 + 7) = v27;
  v30 = *((_OWORD *)v9 + 3);
  *(_OWORD *)(v11 + 9) = v29;
  *(_OWORD *)(v11 + 11) = v30;
  *((_DWORD *)v11 + 26) = v28;
  *((_DWORD *)v11 + 27) = v34;
  v11[15] = a6;
  *((_DWORD *)v11 + 32) = 1;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 16));
  v31 = (ModernResourceEnforcer **)*((_QWORD *)this + 9);
  if ( *v31 != (ModernResourceEnforcer *)((char *)this + 64) )
    __fastfail(3u);
  *(_QWORD *)v12 = (char *)this + 64;
  *((_QWORD *)v12 + 1) = v31;
  *v31 = v12;
  *((_QWORD *)this + 9) = v12;
  if ( (*((_BYTE *)this + 288) & 1) == 0 )
  {
    (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)this + 8LL))(this);
    TpPostWork(*((_QWORD *)this + 7));
    *((_DWORD *)this + 72) |= 1u;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 16));
LABEL_31:
  if ( (unsigned int)dword_18004C030 > 5 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
  {
    v44 = 4LL;
    v43 = &v33;
    v45 = &a6;
    v46 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18003F0AE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004C038;
    v40 = &unk_18003F0B9;
    UserData.Reserved = 2;
    v41 = 42;
    v42 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}
