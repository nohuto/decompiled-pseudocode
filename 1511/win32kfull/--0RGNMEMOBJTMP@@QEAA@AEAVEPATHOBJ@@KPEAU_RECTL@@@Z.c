/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C013073C
 * Callers:
 *     EngPlgBlt @ 0x1C00041F0 (EngPlgBlt.c)
 *     GreRectVisible @ 0x1C00DAA88 (GreRectVisible.c)
 *     NtGdiFrameRgn @ 0x1C012FC30 (NtGdiFrameRgn.c)
 *     NtGdiSelectClipPath @ 0x1C02A5380 (NtGdiSelectClipPath.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(
        RGNMEMOBJTMP *this,
        struct EPATHOBJ *a2,
        unsigned int a3,
        struct _RECTL *a4)
{
  *((_DWORD *)this + 2) = 0;
  RGNMEMOBJ::vCreate(this, a2, a3, 0LL);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
