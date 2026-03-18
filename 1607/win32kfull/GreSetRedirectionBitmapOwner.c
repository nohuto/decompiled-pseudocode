/*
 * XREFs of GreSetRedirectionBitmapOwner @ 0x1C011CFFC
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C00637B4 (CreateOrGetRedirectionBitmap.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01DE2BC (ChangeRedirectionBitmapOwner.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetRedirectionBitmapOwner(HSURF a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  SURFACE *v7; // rcx
  char *v8; // rdi
  __int64 v9; // rbx
  _BYTE v11[32]; // [rsp+20h] [rbp-30h] BYREF
  SURFACE *v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v6 = 0;
  if ( (unsigned int)GreSetBitmapOwner(a1, 0LL) )
  {
    SURFREF::SURFREF((SURFREF *)v11, a1);
    v7 = v12;
    if ( v12 && (*((_DWORD *)v12 + 28) & 0x800) != 0 )
    {
      v8 = (char *)v12 + 24;
      v9 = 0LL;
      if ( v12 != (SURFACE *)-24LL )
      {
        if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL((char *)v12 + 24) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v8) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v8) + 112) & 0x200) == 0 )
        {
          v9 = SURFOBJ_TO_SURFACE_NOT_NULL(v8);
          GreLockDisplayDevice(*(_QWORD *)(v9 + 48));
        }
        v7 = v12;
      }
      W32PIDLOCK::vLockSingleThread((SURFACE *)((char *)v7 + 272));
      v13 = *((_QWORD *)v12 + 6);
      PDEVOBJ::vSync((PDEVOBJ *)&v13, (struct _SURFOBJ *)((char *)v12 + 24), 0LL, 2u);
      if ( a2 != -1 )
        *((_QWORD *)v12 + 75) = a2;
      *((_DWORD *)v12 + 152) = a3;
      W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)v12 + 272));
      v6 = 1;
      if ( a3 && (unsigned int)SURFACE::Map(v12, v11, 0LL) <= 1 )
        SURFACE::bUnMap(v12, v11, 0LL);
      if ( v9 )
        GreUnlockDisplayDevice(*(_QWORD *)(v9 + 48));
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v11);
  }
  return v6;
}
