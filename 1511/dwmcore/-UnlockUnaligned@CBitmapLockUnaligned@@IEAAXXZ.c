/*
 * XREFs of ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x180153C78
 * Callers:
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x1801538FC (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?WriteUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x180153D28 (-WriteUnalignedScanline@@YAXPEAEPEBEII@Z.c)
 */

void __fastcall CBitmapLockUnaligned::UnlockUnaligned(CBitmapLockUnaligned *this)
{
  const unsigned __int8 *v1; // rbx
  unsigned __int8 *v3; // rdi
  unsigned int i; // ebp

  v1 = (const unsigned __int8 *)*((_QWORD *)this + 18);
  if ( v1 )
  {
    if ( (*((_BYTE *)this + 160) & 2) != 0 )
    {
      v3 = (unsigned __int8 *)*((_QWORD *)this + 22);
      for ( i = 0; i < *((_DWORD *)this + 27); v1 += *((unsigned int *)this + 28) )
      {
        WriteUnalignedScanline(v3, v1, *((_DWORD *)this + 48), *((_DWORD *)this + 49));
        ++i;
        v3 += *((unsigned int *)this + 46);
      }
    }
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 18));
  *((_QWORD *)this + 18) = 0LL;
}
