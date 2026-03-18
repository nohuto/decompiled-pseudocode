/*
 * XREFs of GrePtInRegion @ 0x1C00726F0
 * Callers:
 *     NtGdiPtInRegion @ 0x1C0083910 (NtGdiPtInRegion.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027EDC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00297A0 (-bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 */

__int64 __fastcall GrePtInRegion(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  struct _POINTL v8; // [rsp+68h] [rbp+20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a1, 1);
  v5 = 0;
  if ( v7[0] )
  {
    v8.x = a2;
    v8.y = a3;
    LOBYTE(v5) = (unsigned int)RGNOBJ::bInside((RGNOBJ *)v7, &v8) == 2;
  }
  else
  {
    EngSetLastError(6u);
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v5;
}
