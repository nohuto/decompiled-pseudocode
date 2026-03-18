/*
 * XREFs of GreSetBitmapContentOwner @ 0x14014BC6C
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x14014D538 (CreateOrGetRedirectionBitmap.c)
 *     ChangeWindowBitmapOwner @ 0x1402A4358 (ChangeWindowBitmapOwner.c)
 *     GreSetLWContentOwner @ 0x140333598 (GreSetLWContentOwner.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreSetBitmapContentOwner(HSURF a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  SURFACE *v7; // rcx
  SURFACE *v8; // rbx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  _BYTE v13[32]; // [rsp+20h] [rbp-30h] BYREF
  SURFACE *v14; // [rsp+40h] [rbp-10h]
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF

  v6 = 0;
  if ( (unsigned int)GreSetBitmapOwner(a1, 0LL) )
  {
    SURFREF::SURFREF((SURFREF *)v13, a1);
    v7 = v14;
    if ( v14 && (*((_DWORD *)v14 + 28) & 0x800) != 0 )
    {
      v8 = 0LL;
      if ( v14 != (SURFACE *)-24LL )
      {
        v9 = *((_DWORD *)v14 + 28);
        if ( ((v9 & 0x4000) != 0 || v9 < 0) && (v9 & 0x200) == 0 )
        {
          v8 = v14;
          GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)v14 + 6));
          v7 = v14;
        }
      }
      W32PIDLOCK::vLockSingleThread((SURFACE *)((char *)v7 + 272));
      v15 = *((_QWORD *)v14 + 6);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v15,
        (struct _SURFOBJ *)(((unsigned __int64)v14 + 24) & -(__int64)(v14 != 0LL)),
        0LL,
        2u);
      if ( a2 != -1 )
        *((_QWORD *)v14 + 81) = a2;
      *((_DWORD *)v14 + 164) = a3;
      W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)v14 + 272));
      v6 = 1;
      if ( a3 && (unsigned int)SURFACE::Map(v14, v10, v11) <= 1 )
        SURFACE::bUnMap(v14);
      if ( v8 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)v8 + 6));
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v13);
  }
  return v6;
}
