/*
 * XREFs of GreSetRedirection @ 0x140018AE4
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x1400189F4 (DeleteOldRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x14014D538 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1401EDA58 (DeleteOrSetRedirectionBitmap.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreSetRedirection(HSURF a1, int a2)
{
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v3 = 0;
  SURFREF::SURFREF((SURFREF *)v5, a1);
  if ( v6 )
  {
    if ( a2 )
    {
      *(_DWORD *)(v6 + 112) |= 0x800u;
      *(_DWORD *)(v6 + 116) |= 0x80u;
    }
    else
    {
      *(_DWORD *)(v6 + 116) &= ~0x80u;
      *(_DWORD *)(v6 + 112) &= ~0x800u;
    }
    v3 = 1;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v5);
  return v3;
}
