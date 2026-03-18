/*
 * XREFs of NtGdiEqualRgn @ 0x1C00191F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C0019254 (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042C0C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall NtGdiEqualRgn(HRGN a1, HRGN a2)
{
  _BYTE v4[56]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v5[64]; // [rsp+58h] [rbp-40h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 1, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v4, a2, 1, 0);
  LODWORD(a2) = GreEqualRgn((struct RGNOBJAPI *)v5, (struct RGNOBJAPI *)v4);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v4);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v5);
  return (unsigned int)a2;
}
