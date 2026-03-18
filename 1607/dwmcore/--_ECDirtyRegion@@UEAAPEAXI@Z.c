/*
 * XREFs of ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x180072590
 * Callers:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180070E00 (-Release@CDirtyRegion@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDirtyRegion *__fastcall CDirtyRegion::`vector deleting destructor'(CDirtyRegion *this, char a2)
{
  char *v3; // rbx
  char **v5; // rcx
  char **v6; // rax
  __int64 *v7; // rdx
  char **v8; // rcx
  char **v9; // rax
  __int64 *v10; // rdx
  void (__fastcall *v11)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v13; // rax
  WPF::ProcessHeapImpl *v14; // rcx
  __int64 v15; // rax
  WPF::ProcessHeapImpl *v16; // rcx

  *(_QWORD *)this = &CDirtyRegion::`vftable';
  v3 = (char *)this + 712;
  *((_QWORD *)this + 73) = (char *)this + 584;
  *((_QWORD *)this + 74) = (char *)this + 584;
  *((_QWORD *)this + 76) = (char *)this + 600;
  *((_QWORD *)this + 75) = (char *)this + 600;
  *((_QWORD *)this + 78) = (char *)this + 616;
  *((_QWORD *)this + 77) = (char *)this + 616;
  *((_QWORD *)this + 80) = (char *)this + 632;
  *((_QWORD *)this + 79) = (char *)this + 632;
  *((_QWORD *)this + 82) = (char *)this + 648;
  *((_QWORD *)this + 81) = (char *)this + 648;
  *((_QWORD *)this + 84) = (char *)this + 664;
  *((_QWORD *)this + 83) = (char *)this + 664;
  *((_QWORD *)this + 86) = (char *)this + 680;
  *((_QWORD *)this + 85) = (char *)this + 680;
  *((_QWORD *)this + 88) = (char *)this + 696;
  *((_QWORD *)this + 87) = (char *)this + 696;
  v5 = (char **)*((_QWORD *)this + 90);
  v6 = (char **)v5[1];
  if ( *v5 != v3 || *v6 != (char *)v5 )
    __fastfail(3u);
  *((_QWORD *)v3 + 1) = v6;
  *v6 = v3;
  while ( 1 )
  {
    v7 = *(__int64 **)v3;
    if ( *(char **)v3 == v3 )
      break;
    v13 = *v7;
    if ( (char *)v7[1] != v3 || *(__int64 **)(v13 + 8) != v7 )
      __fastfail(3u);
    v14 = WPF::g_pProcessHeap;
    *(_QWORD *)v3 = v13;
    *(_QWORD *)(v13 + 8) = v3;
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)v14 + 32LL))(v14);
  }
  *((_QWORD *)v3 + 1) = v3;
  *(_QWORD *)v3 = v3;
  *((_QWORD *)v3 + 2) = v3;
  *((_QWORD *)v3 + 3) = v3;
  *((_QWORD *)v3 + 1) = v3 + 16;
  *(_QWORD *)v3 = v3 + 16;
  *((_DWORD *)v3 + 392) = 0;
  v8 = (char **)*((_QWORD *)v3 + 1);
  v9 = (char **)v8[1];
  if ( *v8 != v3 || *v9 != (char *)v8 )
    __fastfail(3u);
  *((_QWORD *)v3 + 1) = v9;
  *v9 = v3;
  while ( 1 )
  {
    v10 = *(__int64 **)v3;
    if ( *(char **)v3 == v3 )
      break;
    v15 = *v10;
    if ( (char *)v10[1] != v3 || *(__int64 **)(v15 + 8) != v10 )
      __fastfail(3u);
    v16 = WPF::g_pProcessHeap;
    *(_QWORD *)v3 = v15;
    *(_QWORD *)(v15 + 8) = v3;
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)v16 + 32LL))(v16);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v11 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v11 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v11(WPF::g_pProcessHeap, this);
  }
  return this;
}
