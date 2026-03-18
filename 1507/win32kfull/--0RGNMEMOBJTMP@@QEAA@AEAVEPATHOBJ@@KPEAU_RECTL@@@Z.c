/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C01057B4
 * Callers:
 *     EngPlgBlt @ 0x1C00C8FF0 (EngPlgBlt.c)
 *     GreRectVisible @ 0x1C00D49F8 (GreRectVisible.c)
 *     NtGdiFrameRgn @ 0x1C0104C30 (NtGdiFrameRgn.c)
 *     NtGdiSelectClipPath @ 0x1C02A5910 (NtGdiSelectClipPath.c)
 * Callees:
 *     <none>
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(
        RGNMEMOBJTMP *this,
        struct EPATHOBJ *a2,
        unsigned int a3,
        struct _RECTL *a4)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  RGNMEMOBJ::vCreate(this, a2, a3, 0LL);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
