/*
 * XREFs of GreForceUFIMapping @ 0x1C026A648
 * Callers:
 *     NtGdiForceUFIMapping @ 0x1C02A6870 (NtGdiForceUFIMapping.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreForceUFIMapping(HDC a1, __int64 *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rax
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v3 = v7[0];
  v4 = 0;
  if ( v7[0] )
  {
    v5 = *a2;
    v4 = 1;
    *(_DWORD *)(v7[0] + 264LL) |= 4u;
    *(_QWORD *)(v3 + 268) = v5;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v4;
}
