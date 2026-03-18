/*
 * XREFs of NtGdiSetSizeDevice @ 0x1C00F1C50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetSizeDevice(HDC a1, int a2, int a3)
{
  unsigned int v3; // ebx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  if ( a2 && a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v7, a1);
    if ( v7[0] )
    {
      v3 = 1;
      *(_DWORD *)(*(_QWORD *)(v7[0] + 80LL) + 372LL) = a2;
      *(_DWORD *)(*(_QWORD *)(v7[0] + 80LL) + 376LL) = a3;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v7);
  }
  return v3;
}
