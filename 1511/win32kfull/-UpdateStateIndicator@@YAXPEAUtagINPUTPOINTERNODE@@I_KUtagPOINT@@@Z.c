/*
 * XREFs of ?UpdateStateIndicator@@YAXPEAUtagINPUTPOINTERNODE@@I_KUtagPOINT@@@Z @ 0x1C01FD28C
 * Callers:
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01FCF10 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAG.c)
 * Callees:
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     ?PassedHoldTime@@YAHK_K0@Z @ 0x1C01FCA4C (-PassedHoldTime@@YAHK_K0@Z.c)
 */

void __fastcall UpdateStateIndicator(struct tagINPUTPOINTERNODE *a1, int a2, __int64 a3, struct tagPOINT a4)
{
  __int64 v4; // r10
  int v6; // edx
  bool v7; // zf
  int v8; // r8d
  int v9; // eax

  v4 = a3;
  if ( (a2 & 0x10000) != 0 )
  {
    *((_DWORD *)a1 + 38) &= 0xFFFFFFFC;
    v6 = 270;
    v7 = *((_DWORD *)a1 + 10) == 3;
    *((_QWORD *)a1 + 9) = a3;
    if ( v7 )
      v6 = 300;
    *((_DWORD *)a1 + 20) = a4.x - v6;
    *((_DWORD *)a1 + 21) = a4.y - v6;
    *((_DWORD *)a1 + 22) = a4.x + v6;
    *((_DWORD *)a1 + 23) = a4.y + v6;
  }
  else if ( (a2 & 0x40004) != 0 )
  {
    if ( (*((_DWORD *)a1 + 38) & 2) == 0 && !PtInRect((_DWORD *)a1 + 20, *(_QWORD *)&a4) )
      *((_DWORD *)a1 + 38) = v8 | 2;
    v9 = *((_DWORD *)a1 + 38);
    if ( (v9 & 2) == 0 && (v9 & 1) == 0 && (unsigned int)PassedHoldTime(*((_DWORD *)a1 + 10), *((_QWORD *)a1 + 9), v4) )
      *((_DWORD *)a1 + 38) |= 1u;
  }
  else
  {
    *((_DWORD *)a1 + 38) &= 0xFFFFFFFC;
    *((_QWORD *)a1 + 9) = 0LL;
    *((_QWORD *)a1 + 10) = 0LL;
    *((_QWORD *)a1 + 11) = 0LL;
  }
}
