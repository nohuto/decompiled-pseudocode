/*
 * XREFs of GreSetStretchBltMode @ 0x1C0051924
 * Callers:
 *     BltIcon @ 0x1C0051658 (BltIcon.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetStretchBltMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_QWORD *)(v6[0] + 80LL);
    v3 = *(_DWORD *)(v4 + 100);
    *(_DWORD *)(v4 + 100) = a2;
    if ( a2 > 4 )
      LOBYTE(a2) = 2;
    *(_BYTE *)(*(_QWORD *)(v6[0] + 80LL) + 75LL) = a2;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  return v3;
}
