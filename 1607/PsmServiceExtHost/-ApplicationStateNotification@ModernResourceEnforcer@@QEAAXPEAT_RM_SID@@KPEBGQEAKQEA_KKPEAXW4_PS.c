/*
 * XREFs of ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B990
 * Callers:
 *     PsmHostStateNotification2 @ 0x180015CC0 (PsmHostStateNotification2.c)
 * Callees:
 *     ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C038 (-HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000C140 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x18000D850 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x18002965C (--$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEn.c)
 */

int __fastcall ModernResourceEnforcer::ApplicationStateNotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        unsigned int *a5,
        unsigned __int64 *Src,
        unsigned int a7,
        void *a8,
        int a9)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbp
  int v14; // esi
  unsigned __int64 v15; // rbx
  unsigned int v16; // r13d
  unsigned int *v17; // rsi
  __int64 v18; // rbp
  unsigned __int64 *v19; // r15
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  _QWORD *v22; // r12
  unsigned __int16 *v23; // rcx
  char **v24; // r13
  char *v25; // rax
  char *v26; // rbp
  size_t v27; // rbx
  char *v28; // rbx
  char **v29; // rcx
  void *v30; // rax
  char *v31; // rcx
  _QWORD *v32; // rcx
  unsigned __int64 v33; // rcx
  _WORD *v34; // rcx
  PVOID Heap; // rdi
  PVOID v36; // rbp
  void *v38[9]; // [rsp+40h] [rbp-48h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 16));
  v14 = a9;
  v15 = -1LL;
  if ( a9 )
  {
    v16 = a7;
    if ( !a7 )
      goto LABEL_10;
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
    v14 = a9;
    v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    v15 = -1LL;
  }
  else
  {
    if ( *a5 == 6 )
      v33 = -1LL;
    else
      v33 = *Src;
    ModernResourceEnforcer::HandlePsmHostEmpty((ModernResourceEnforcer *)a1, a4, (union _RM_SID *)a2, a3, *a5, v33);
  }
  v16 = a7;
LABEL_10:
  RtlLeaveCriticalSection(v9);
  LODWORD(v20) = v14 - 1;
  if ( (unsigned int)(v14 - 1) <= 1 )
    return (int)v20;
  if ( v16 <= 1 )
  {
    LODWORD(v20) = (_DWORD)a5;
    if ( *a5 == 6 )
      return (int)v20;
  }
  v20 = operator new(0x98uLL);
  v21 = v20;
  if ( !v20 )
    return (int)v20;
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
  v23 = (unsigned __int16 *)v20[1];
  v24 = (char **)(v20 + 3);
  if ( v23 == (unsigned __int16 *)(v20 + 3) )
    v25 = (char *)v20 + 38;
  else
    v25 = *v24;
  if ( v15 <= (v25 - (char *)v23) >> 1 )
  {
    if ( v23 != a4 )
      memmove(v23, a4, 2 * v15);
    v34 = (_WORD *)(v21[1] + 2 * v15);
    v21[2] = v34;
    *v34 = 0;
  }
  else
  {
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      v21 + 1,
      v38,
      v15);
    v26 = (char *)v38[0];
    if ( !v38[0] )
      goto LABEL_44;
    v27 = 2 * v15;
    memcpy_0(v38[0], a4, v27);
    v28 = &v26[v27];
    *(_WORD *)v28 = 0;
    v29 = (char **)v21[1];
    if ( v29 != v24 )
      operator delete(v29);
    v30 = v38[1];
    v31 = v26 - 2;
    v21[1] = v26;
    v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    v21[2] = v28;
    *v24 = &v31[2 * (_QWORD)v30];
  }
  if ( a7 > 1 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * a7);
    if ( Heap )
    {
      v36 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4LL * a7);
      if ( v36 )
      {
        memcpy_0(Heap, Src, 8LL * a7);
        v21[15] = Heap;
        memcpy_0(v36, a5, 4LL * a7);
        v21[14] = v36;
        v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
        goto LABEL_25;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
LABEL_44:
    LODWORD(v20) = tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(v21);
    return (int)v20;
  }
  *((_DWORD *)v21 + 28) = *a5;
  v21[15] = *Src;
LABEL_25:
  *((_DWORD *)v21 + 33) = a9;
  *(_DWORD *)v21 = 2;
  *(_OWORD *)(v21 + 5) = *(_OWORD *)a2;
  *(_OWORD *)(v21 + 7) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v21 + 9) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v21 + 11) = *(_OWORD *)(a2 + 48);
  *((_DWORD *)v21 + 26) = *(_DWORD *)(a2 + 64);
  *((_DWORD *)v21 + 27) = a3;
  *((_DWORD *)v21 + 32) = a7;
  RtlEnterCriticalSection(v9);
  v32 = *(_QWORD **)(a1 + 72);
  if ( *v32 != a1 + 64 )
    __fastfail(3u);
  *v22 = a1 + 64;
  v22[1] = v32;
  *v32 = v22;
  *(_QWORD *)(a1 + 72) = v22;
  if ( (*(_BYTE *)(a1 + 288) & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    TpPostWork(*(_QWORD *)(a1 + 56));
    *(_DWORD *)(a1 + 288) |= 1u;
  }
  LODWORD(v20) = RtlLeaveCriticalSection(v9);
  return (int)v20;
}
