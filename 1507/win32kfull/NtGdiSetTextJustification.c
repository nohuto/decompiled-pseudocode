/*
 * XREFs of NtGdiSetTextJustification @ 0x1C02927A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetTextJustification(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v5 = 0;
  if ( v7[0] )
  {
    v5 = 1;
    *(_DWORD *)(*(_QWORD *)(v7[0] + 80LL) + 168LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v7[0] + 80LL) + 172LL) = a3;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v5;
}
