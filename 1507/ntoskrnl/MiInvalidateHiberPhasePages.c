/*
 * XREFs of MiInvalidateHiberPhasePages @ 0x1403EC140
 * Callers:
 *     <none>
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MiInvalidateHiberPhasePages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 i; // rsi
  __int64 PteShadow; // rbx
  BOOL v8; // r12d
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  __int64 *v11; // r14
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( !a4 )
  {
    for ( i = a2; i <= a3; i += 8LL )
    {
      PteShadow = *(_QWORD *)i;
      v8 = MiPteInShadowRange(i);
      if ( v8 )
        PteShadow = MiReadPteShadow(i, PteShadow);
      v14[0] = PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        v9 = PteShadow;
        if ( MiPteInShadowRange((__int64)v14) )
          v9 = MiReadPteShadow((__int64)v14, PteShadow);
        v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
        if ( MI_IS_PFN(v10) )
        {
          if ( v10 != qword_14034F6F8 )
            goto LABEL_13;
          v11 = (__int64 *)(((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v12 = *v11;
          if ( MiPteInShadowRange((__int64)v11) )
            LOWORD(v12) = MiReadPteShadow((__int64)v11, v12);
          if ( (v12 & 0x800) != 0 )
          {
LABEL_13:
            if ( _bittest64(*(const signed __int64 **)(a1 + 8), (unsigned int)v10) )
              return;
            v13 = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
            v14[0] = v13;
            *(_QWORD *)i = v13;
            if ( v8 )
              MiWritePteShadow(i, v13);
          }
        }
      }
    }
  }
}
