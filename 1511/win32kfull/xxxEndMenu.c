/*
 * XREFs of xxxEndMenu @ 0x1C023C80C
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0104D00 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenuLoop @ 0x1C013A060 (xxxEndMenuLoop.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0138900 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C01395FC (xxxMNReleaseCapture.c)
 */

void __fastcall xxxEndMenu(__int64 a1)
{
  __int64 v1; // rsi
  BOOL v3; // ebx
  int v4; // eax
  int v5; // ebx
  _QWORD *v6; // rcx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_DWORD *)(a1 + 8) &= 0xFFFFFFFA;
    *(_DWORD *)v1 |= 0x8000u;
    v3 = gptiCurrent == *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 64LL) == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
      xxxMNReleaseCapture(a1);
    if ( v3 )
    {
      v4 = *(_DWORD *)(a1 + 8);
      if ( (v4 & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 8) = v4 | 0x10;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        {
          if ( (**(_DWORD **)a1 & 0x80000) == 0 )
            xxxMNCancel(a1, 0, 0, 0LL);
        }
        else
        {
          v5 = *(_DWORD *)v1 >> 3;
          xxxMNCloseHierarchy((unsigned int *)v1, a1);
          if ( (v5 & 1) != 0 )
          {
            v6 = *(_QWORD **)(v1 + 16);
            if ( v6 )
              xxxDestroyWindow(v6);
          }
        }
      }
    }
  }
}
