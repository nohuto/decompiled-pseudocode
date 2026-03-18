/*
 * XREFs of MiRevertHiberPhasePages @ 0x1403EC28C
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MiRevertHiberPhasePages(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 *i; // rdi
  __int64 PteShadow; // rbx
  BOOL v7; // r9d
  unsigned __int64 v8; // rbx

  if ( !a4 )
  {
    for ( i = a2; (unsigned __int64)i <= a3; ++i )
    {
      PteShadow = *i;
      v7 = MiPteInShadowRange((__int64)i);
      if ( v7 )
        PteShadow = MiReadPteShadow((__int64)i, PteShadow);
      if ( (PteShadow & 1) == 0 && (PteShadow & 0x400) != 0 && (PteShadow & 4) != 0 )
      {
        v8 = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 1;
        *i = v8;
        if ( v7 )
          MiWritePteShadow((__int64)i, v8);
      }
    }
  }
}
