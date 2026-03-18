/*
 * XREFs of ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18009AAEC
 * Callers:
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18009ABC4 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1801108E8 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x18009ADC4 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FastRegion::CRegion::CopyData(
        FastRegion::CRegion **this,
        const struct FastRegion::Internal::CRgnData *a2)
{
  int *v2; // r14
  char *v5; // r10
  int v6; // eax
  int v7; // esi
  LPVOID (__fastcall *v9)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  FastRegion::CRegion *v10; // rax
  FastRegion::CRegion *v11; // rdi

  v2 = (int *)(this + 1);
  v5 = (char *)a2 + 8 * *(_DWORD *)a2 - 8;
  v6 = 60;
  v7 = *((_DWORD *)v5 + 4) + 8 * *(_DWORD *)a2 - *((_DWORD *)a2 + 4) - ((_DWORD)a2 + 12) + (_DWORD)v5 + 24;
  if ( this + 1 != (FastRegion::CRegion **)*this )
    v6 = *v2;
  if ( v6 >= v7 )
    goto LABEL_4;
  v9 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v9 == WPF::ProcessHeapImpl::Alloc )
    v10 = (FastRegion::CRegion *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v7);
  else
    v10 = (FastRegion::CRegion *)v9(WPF::g_pProcessHeap, v7);
  v11 = v10;
  if ( v10 )
  {
    FastRegion::CRegion::FreeMemory(this);
    *this = v11;
    *v2 = v7;
LABEL_4:
    FastRegion::Internal::CRgnData::Copy(*this, a2);
    return 0LL;
  }
  return 2147942414LL;
}
