/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00AF20C
 * Callers:
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C003A8E0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C003A938 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     bDeleteSurface @ 0x1C005C5B0 (bDeleteSurface.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // esi
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v5; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 12);
  KeAcquireGuardedMutex(ghfmMemory);
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      v3 = 0;
      SURFREF::SURFREF((SURFREF *)v4, *(HSURF *)(v1 + 8));
      if ( v5 )
      {
        SURFACE::vDec_cRef(v5);
        v3 = 1;
      }
      SURFREF::~SURFREF((SURFREF *)v4);
      if ( v3 )
        bDeleteSurface(*(HSURF *)(v1 + 8));
      Win32FreePool();
      v1 = v2;
    }
    while ( v2 );
  }
  KeReleaseGuardedMutex(ghfmMemory);
}
