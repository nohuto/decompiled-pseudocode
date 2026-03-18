/*
 * XREFs of GreGetRgnBox @ 0x1C00251A0
 * Callers:
 *     NtGdiGetRgnBox @ 0x1C00725C0 (NtGdiGetRgnBox.c)
 *     EngGetRgnBox @ 0x1C00BF440 (EngGetRgnBox.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetRgnBox(HRGN a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a1, 1);
  v4 = v6[0];
  if ( a2 && v6[0] )
  {
    *(_OWORD *)a2 = *(_OWORD *)(v6[0] + 88LL);
    if ( *(_DWORD *)(v4 + 84) == 1 )
    {
      *(_DWORD *)a2 = 0;
      v3 = 1;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 12) = 0;
    }
    else
    {
      LOBYTE(v3) = *(_DWORD *)(v4 + 80) > 0xA0u;
      v3 += 2;
    }
  }
  if ( !v7 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v6);
  if ( v4 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
  return v3;
}
