/*
 * XREFs of GreRectInRegion @ 0x1C0025120
 * Callers:
 *     NtGdiRectInRegion @ 0x1C0084110 (NtGdiRectInRegion.c)
 *     EngRectInRgn @ 0x1C00BF540 (EngRectInRgn.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z @ 0x1C00296E0 (-bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GreRectInRegion(HRGN a1, struct _RECTL *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a1, 1);
  v4 = v6[0];
  if ( a2 && v6[0] )
    LOBYTE(v3) = (unsigned int)RGNOBJ::bInside((RGNOBJ *)v6, a2) == 2;
  if ( !v7 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v6);
  if ( v4 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
  return v3;
}
