/*
 * XREFs of KeCleanupThreadState @ 0x14010D068
 * Callers:
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR BugCheckParameter1)
{
  int v1; // edx
  unsigned int v2; // r9d
  ULONG_PTR v3; // r8

  v1 = 1;
  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 1) != 0 )
  {
    v2 = 0;
    v3 = BugCheckParameter1 + 824;
    while ( 1 )
    {
      if ( *(_QWORD *)(v3 + 8) )
        goto LABEL_13;
      if ( (*(_DWORD *)v3 & 0xFFFFFF00) != 0 )
        break;
      if ( BugCheckParameter1 != v3 - 24 - (unsigned __int16)(16 * (unsigned __int8)*(_DWORD *)v3) )
      {
        v1 = 3;
        goto LABEL_13;
      }
      if ( (*(_DWORD *)(v3 + 64) & 0x1FFFF) != 0 )
      {
        v1 = 4;
        goto LABEL_13;
      }
      ++v2;
      v3 += 96LL;
      if ( v2 >= 6 )
        goto LABEL_8;
    }
    v1 = 2;
LABEL_13:
    KeBugCheckEx(0x153u, BugCheckParameter1, v3 - 24, v1, 0LL);
  }
LABEL_8:
  if ( *(_WORD *)(BugCheckParameter1 + 1420) )
    KeFlushQueuedDpcs();
}
