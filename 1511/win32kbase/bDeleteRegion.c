/*
 * XREFs of bDeleteRegion @ 0x1C0037860
 * Callers:
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0028010 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

_BOOL8 __fastcall bDeleteRegion(HRGN a1)
{
  struct HOBJ__ **v1; // rbx
  int v2; // eax
  BOOL v3; // edi
  struct HOBJ__ **v5[2]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v5, a1, 0);
  v1 = v5[0];
  v3 = 0;
  if ( v5[0] )
  {
    if ( !*((_DWORD *)v5[0] + 8) )
    {
      v2 = RGNOBJAPI::bDeleteRGNOBJAPI(v5);
      v1 = v5[0];
      if ( v2 )
        v3 = 1;
    }
  }
  if ( !v6 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v5);
  if ( v1 )
    _InterlockedDecrement((volatile signed __int32 *)v1 + 3);
  return v3;
}
