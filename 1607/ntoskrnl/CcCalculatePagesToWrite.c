/*
 * XREFs of CcCalculatePagesToWrite @ 0x1400C9AC0
 * Callers:
 *     CcLazyWriteScan @ 0x140070820 (CcLazyWriteScan.c)
 *     CcScanLogHandleList @ 0x1400CA8AC (CcScanLogHandleList.c)
 *     CcNotifyExternalCaches @ 0x140134614 (CcNotifyExternalCaches.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcCalculatePagesToWrite(int a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v14; // r8

  if ( (unsigned int)(a1 - 1) <= 1 || a1 == 16 )
  {
    v7 = *(_QWORD *)a2;
  }
  else
  {
    v4 = *(_QWORD *)a2;
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(unsigned int *)(a2 + 16);
    v7 = v4;
    v8 = *a3;
    v9 = a3[1];
    v10 = *((unsigned int *)a3 + 6);
    if ( v4 > (unsigned int)CcMaxLazyWritePages || (a4 & 1) != 0 )
      v7 = v4 >> 3;
    v11 = 0LL;
    if ( v6 + v4 > v5 )
      v11 = v4 + v6 - v5;
    v12 = v4 + v11 - v7;
    if ( v12 > v10 )
    {
      v14 = v12 - v10;
      v7 += v14;
      if ( v8 < v9 || *(_QWORD *)(*(_QWORD *)qword_140327038 + 6464LL) < 0x1000uLL )
        v7 += 2 * v14;
    }
    if ( v7 > v4 )
      v7 = v4;
  }
  if ( v7 > 0xFFFFFFFF )
    LODWORD(v7) = -1;
  return (unsigned int)v7;
}
