/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00BD2BC
 * Callers:
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0026A8C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0026AFC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     bDeleteSurface @ 0x1C003A320 (bDeleteSurface.c)
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
        bDeleteSurface(*(_QWORD *)(v1 + 8));
      Win32FreePool();
      v1 = v2;
    }
    while ( v2 );
  }
  KeReleaseGuardedMutex(ghfmMemory);
}
