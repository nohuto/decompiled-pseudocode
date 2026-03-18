/*
 * XREFs of NtGdiBeginPath @ 0x1C02A5E20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiBeginPath(HDC a1)
{
  DC *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax
  DC *v5[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v6[32]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v7[8]; // [rsp+50h] [rbp-88h] BYREF
  struct HPATH__ **v8; // [rsp+58h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = v5[0];
  v2 = 0;
  if ( v5[0] )
  {
    if ( *((_QWORD *)v5[0] + 21) )
    {
      v3 = *((_DWORD *)v5[0] + 44);
      if ( (v3 & 2) != 0 )
      {
        *((_DWORD *)v5[0] + 44) = v3 & 0xFFFFFFFD;
        v1 = v5[0];
      }
      *((_DWORD *)v1 + 44) &= ~1u;
      DC::hpath(v1, 0LL);
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v7);
    if ( v8 )
    {
      DC::hpath(v5[0], *v8);
      v2 = 1;
      *((_DWORD *)v5[0] + 44) |= 1u;
    }
    else
    {
      EngSetLastError(8u);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v7);
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v6);
  return v2;
}
