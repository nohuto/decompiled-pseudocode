/*
 * XREFs of NtGdiEngDeleteSurface @ 0x1C02AC1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall NtGdiEngDeleteSurface(HSURF a1)
{
  unsigned int v2; // ebx
  void *v3; // rcx
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v5, a1);
  v2 = 0;
  if ( v6 && (*(_DWORD *)(v6 + 112) & 0x40000) != 0 )
  {
    v3 = *(void **)(v6 + 136);
    if ( v3 )
    {
      MmUnsecureVirtualMemory(v3);
      *(_QWORD *)(v6 + 136) = 0LL;
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v5);
    if ( EngDeleteSurface(a1) )
      return 1;
  }
  else
  {
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v5);
  }
  return v2;
}
