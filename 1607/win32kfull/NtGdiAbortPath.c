/*
 * XREFs of NtGdiAbortPath @ 0x1C02A5DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiAbortPath(HDC a1)
{
  DC *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = (DC *)v5[0];
  v2 = 0;
  if ( v5[0] )
  {
    if ( *(_QWORD *)(v5[0] + 168LL) )
    {
      v3 = *(_DWORD *)(v5[0] + 176LL);
      if ( (v3 & 2) != 0 )
      {
        *(_DWORD *)(v5[0] + 176LL) = v3 & 0xFFFFFFFD;
        v1 = (DC *)v5[0];
      }
      *((_DWORD *)v1 + 44) &= ~1u;
      DC::hpath(v1, 0LL);
    }
    v2 = 1;
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v6);
  return v2;
}
