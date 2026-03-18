/*
 * XREFs of ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C026143C
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026056C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0010444 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00105A0 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0010F0C (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0012894 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0012928 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C02617FC (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 */

__int64 __fastcall bSpDwmUpdateCursor(
        HSPRITE a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _BLENDFUNCTION *a6)
{
  __int64 v7; // rdi
  unsigned int v9; // esi
  struct DWMSPRITE *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int updated; // eax
  struct SFMLOGICALSURFACE *v14; // rdx
  __int64 v15; // rax
  struct DWMSPRITE *v17; // [rsp+88h] [rbp-29h] BYREF
  struct SFMLOGICALSURFACE *v18; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v19[8]; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v20[8]; // [rsp+A0h] [rbp-11h] BYREF
  _BYTE v21[48]; // [rsp+A8h] [rbp-9h] BYREF
  int v22; // [rsp+120h] [rbp+6Fh] BYREF
  int v23; // [rsp+124h] [rbp+73h]

  v23 = HIDWORD(a4);
  v22 = 33488896;
  v7 = 0LL;
  v17 = 0LL;
  v9 = 0;
  DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v17, a1);
  v10 = v17;
  if ( v17 )
  {
    v11 = *((_QWORD *)v17 + 16);
    LODWORD(v17) = 0;
    v18 = (struct SFMLOGICALSURFACE *)v11;
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v21, (HLSURF *)v11);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v20, (struct DWMSPRITE *)((char *)v10 + 120));
    if ( !a3 || a2 )
    {
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v19, (struct _EX_PUSH_LOCK *)(v11 + 264));
      updated = bSpDwmUpdateMaskCursor(
                  *((HDEV *)g_pDwmState + 22),
                  v10,
                  (struct SFMLOGICALSURFACE *)v11,
                  a2,
                  a3,
                  a5,
                  (unsigned int *)&v17,
                  &v18);
    }
    else
    {
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v19, (struct _EX_PUSH_LOCK *)(v11 + 264));
      *((_DWORD *)v10 + 34) &= ~4u;
      v12 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
      updated = bSpDwmUpdateSpriteShape(
                  *((HDEV *)g_pDwmState + 22),
                  v10,
                  (struct SFMLOGICALSURFACE *)v11,
                  a3,
                  a5,
                  *(struct PALETTE **)(v12 + 120),
                  (unsigned int *)&v17,
                  0LL,
                  &v18);
    }
    v9 = updated;
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v19);
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v20);
    if ( v9 )
    {
      if ( a6 )
        v22 = (int)*a6;
      v9 = GreUpdateSprite(
             *((HDEV *)g_pDwmState + 22),
             0LL,
             *(void **)v10,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL,
             0,
             (struct _BLENDFUNCTION *)&v22,
             0x21200002u,
             0LL,
             0LL,
             1,
             0);
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v22, (struct DWMSPRITE *)((char *)v10 + 120));
      v14 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v10 + 16);
      v15 = *((_QWORD *)v14 + 24);
      if ( v15 )
        v7 = *(_QWORD *)(v15 + 8);
      bSpDwmNotifyDirty(*(HSPRITE *)v10, v14, (unsigned int)v17, v7);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v22);
    }
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v21);
    DEC_SHARE_REF_CNT(v10);
  }
  return v9;
}
