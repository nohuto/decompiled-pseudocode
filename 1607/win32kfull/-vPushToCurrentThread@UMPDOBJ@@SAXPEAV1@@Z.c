/*
 * XREFs of ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C02854A8
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0284E18 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C02B1410 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

void __fastcall UMPDOBJ::vPushToCurrentThread(struct UMPDOBJ *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx

  v4 = (_QWORD *)((char *)a1 + 40);
  v5 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 40;
  v6 = *(_QWORD *)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v4 = v6;
  v4[1] = v5;
  *(_QWORD *)(v6 + 8) = v4;
  *(_QWORD *)v5 = v4;
}
