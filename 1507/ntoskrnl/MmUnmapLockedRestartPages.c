/*
 * XREFs of MmUnmapLockedRestartPages @ 0x1406A0550
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1401088BC (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 */

void __fastcall MmUnmapLockedRestartPages(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r10
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // r9
  _BYTE v7[192]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  MiInitializeTbFlushList((__int64)v7, 0, 20);
  v4 = (_QWORD *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = v2;
  MiInsertTbFlushEntry((__int64)v7, v3 & 0xFFFFFFFFFFFFF000uLL, v2, 0);
  if ( v2 )
  {
    do
    {
      *v4 = 0LL;
      if ( MiPteInShadowRange((__int64)v4) )
        MiWritePteShadow((__int64)v4, 0LL);
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  MiFlushTbList((__int64)v7);
  *(_WORD *)(a1 + 10) &= 0xFFDEu;
  MiReleaseDriverPtes(0, (unsigned __int64)&v4[-v2], (unsigned int)v2, v6);
}
