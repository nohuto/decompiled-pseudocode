/*
 * XREFs of ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00398D8
 * Callers:
 *     xxxDesktopRecalc @ 0x1C0039710 (xxxDesktopRecalc.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall PostThreadRecalc(
        struct tagTHREADINFO *a1,
        struct tagMONITORRECTS *a2,
        struct tagWINDOWANDRECT *a3,
        int a4,
        unsigned int a5)
{
  unsigned int v9; // edi
  size_t v10; // r15
  __int64 v11; // rbx
  size_t v12; // rsi
  void *v13; // rax

  v9 = 0;
  v10 = 24LL * a4;
  v11 = Win32AllocPool(v10 + 16, 2004054869LL);
  if ( v11 )
  {
    v12 = 112 * *(_DWORD *)a2 + 8;
    v13 = (void *)Win32AllocPool(v12, 2004054869LL);
    *(_QWORD *)v11 = v13;
    if ( v13 )
    {
      memmove(v13, a2, v12);
      *(_DWORD *)(v11 + 8) = a5;
      *(_DWORD *)(v11 + 12) = a4;
      memmove((void *)(v11 + 16), a3, v10);
      v9 = PostEventMessageEx((_DWORD)a1, *((_QWORD *)a1 + 49), 23, 0, 0, v11, 0LL, 0LL);
      if ( v9 )
        return v9;
      Win32FreePool(*(_QWORD *)v11);
    }
    Win32FreePool(v11);
  }
  return v9;
}
