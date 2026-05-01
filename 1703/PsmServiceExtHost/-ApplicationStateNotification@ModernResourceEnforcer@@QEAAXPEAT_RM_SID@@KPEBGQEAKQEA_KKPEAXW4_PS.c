/*
 * XREFs of ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180009FE0
 * Callers:
 *     PsmHostStateNotification2 @ 0x1800134B0 (PsmHostStateNotification2.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180007F20 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000A60C (-HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000A838 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ??2@YAPEAX_K@Z @ 0x18002099C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800217DC (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x180029154 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 */

int __fastcall ModernResourceEnforcer::ApplicationStateNotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        unsigned __int64 *Src,
        unsigned int a7,
        void *a8,
        int a9)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbp
  int v14; // esi
  unsigned __int64 v15; // rbx
  unsigned int v16; // r12d
  unsigned int *v17; // rsi
  __int64 v18; // rbp
  unsigned __int64 *v19; // r15
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  _QWORD *v22; // r15
  unsigned int v23; // edx
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rax
  PVOID Heap; // rbx
  PVOID v27; // rdi

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 16));
  v14 = a9;
  v15 = -1LL;
  v16 = a7;
  if ( a9 )
  {
    if ( a7 )
    {
      v17 = a5;
      v18 = a7;
      v19 = Src;
      do
      {
        if ( a9 == 1 )
        {
          ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(
            (ModernResourceEnforcer *)a1,
            a4,
            (union _RM_SID *)a2,
            a3,
            *v17,
            *v19,
            a8,
            1);
        }
        else if ( a9 == 2 )
        {
          ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(
            (ModernResourceEnforcer *)a1,
            a4,
            (union _RM_SID *)a2,
            a3,
            *v17,
            *v19,
            a8,
            0);
        }
        ++v19;
        ++v17;
        --v18;
      }
      while ( v18 );
      v16 = a7;
      v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
      v14 = a9;
      v15 = -1LL;
    }
  }
  else
  {
    if ( *a5 == 6 )
      v25 = -1LL;
    else
      v25 = *Src;
    ModernResourceEnforcer::HandlePsmHostEmpty((ModernResourceEnforcer *)a1, a4, (union _RM_SID *)a2, a3, *a5, v25);
  }
  RtlLeaveCriticalSection(v9);
  LODWORD(v20) = v14 - 1;
  if ( (unsigned int)(v14 - 1) > 1 && (v16 > 1 || *a5 != 6) )
  {
    v20 = operator new(0x98uLL);
    v21 = v20;
    if ( v20 )
    {
      v20[1] = v20 + 3;
      v22 = v20 + 17;
      v20[2] = v20 + 3;
      *((_WORD *)v20 + 12) = 0;
      v20[14] = 0LL;
      v20[15] = 0LL;
      *((_DWORD *)v20 + 32) = 0;
      v20[17] = 0LL;
      v20[18] = 0LL;
      if ( a4 )
      {
        do
          ++v15;
        while ( a4[v15] );
      }
      else
      {
        v15 = 0LL;
      }
      if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
             (__int64)(v20 + 1),
             (__int64 *)a4,
             v15) )
      {
        if ( v16 <= 1 )
        {
          *((_DWORD *)v21 + 28) = *a5;
          v21[15] = *Src;
LABEL_17:
          *((_DWORD *)v21 + 33) = a9;
          *(_DWORD *)v21 = 2;
          *(_OWORD *)(v21 + 5) = *(_OWORD *)a2;
          *(_OWORD *)(v21 + 7) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(v21 + 9) = *(_OWORD *)(a2 + 32);
          *(_OWORD *)(v21 + 11) = *(_OWORD *)(a2 + 48);
          *((_DWORD *)v21 + 26) = *(_DWORD *)(a2 + 64);
          *((_DWORD *)v21 + 27) = a3;
          *((_DWORD *)v21 + 32) = v16;
          RtlEnterCriticalSection(v9);
          v24 = *(_QWORD **)(a1 + 72);
          if ( *v24 != a1 + 64 )
            __fastfail(3u);
          *v22 = a1 + 64;
          v22[1] = v24;
          *v24 = v22;
          *(_QWORD *)(a1 + 72) = v22;
          if ( (*(_BYTE *)(a1 + 280) & 1) == 0 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
            TpPostWork(*(_QWORD *)(a1 + 56));
            *(_DWORD *)(a1 + 280) |= 1u;
          }
          LODWORD(v20) = RtlLeaveCriticalSection(v9);
          return (int)v20;
        }
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v16);
        if ( Heap )
        {
          v27 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4LL * v16);
          if ( v27 )
          {
            memcpy_0(Heap, Src, 8LL * v16);
            v21[15] = Heap;
            memcpy_0(v27, a5, 4LL * v16);
            v21[14] = v27;
            v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
            goto LABEL_17;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        }
      }
      LODWORD(v20) = (unsigned int)ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
                                     (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v21,
                                     v23);
    }
  }
  return (int)v20;
}
