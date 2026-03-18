/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B2FAC
 * Callers:
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     bDeleteSurface @ 0x1C0037780 (bDeleteSurface.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00A8A80 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  SURFACE *v3; // rax
  SURFACE *v4; // rbx
  __int64 v5; // rdx

  v1 = *((_QWORD *)this + 12);
  KeAcquireGuardedMutex(ghfmMemory);
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      v3 = (SURFACE *)HmgShareLockCheck(*(_QWORD *)(v1 + 8), 5);
      v4 = v3;
      if ( v3 )
      {
        SURFACE::vDec_cRef(v3);
        HmgDecrementShareReferenceCount(v4);
        bDeleteSurface(*(_QWORD *)(v1 + 8), v5);
      }
      Win32FreePool();
      v1 = v2;
    }
    while ( v2 );
  }
  KeReleaseGuardedMutex(ghfmMemory);
}
