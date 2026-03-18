/*
 * XREFs of MxZeroBootMappings @ 0x1407C6688
 * Callers:
 *     MxZeroBootMappings @ 0x1407C6688 (MxZeroBootMappings.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MxZeroBootMappings @ 0x1407C6688 (MxZeroBootMappings.c)
 *     MiFreeBootPageTable @ 0x1407C67D8 (MiFreeBootPageTable.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // eax
  unsigned __int64 PteShadow; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h]

  if ( a1 < a2 )
  {
    v10 = a3;
    v3 = a1;
    v4 = a3;
    do
    {
      PteShadow = *(_QWORD *)v3;
      if ( v3 + 0x90482413000LL <= 0x7F8 )
      {
        if ( (unsigned int)MiPteHasShadow()
          && (PteShadow & 1) != 0
          && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
        {
          v7 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v7 )
          {
            v8 = *(_QWORD *)(v7 + 8 * ((v3 >> 3) & 0x1FF));
            if ( (v8 & 0x20) != 0 )
              PteShadow |= 0x20uLL;
            if ( (v8 & 0x42) != 0 )
              PteShadow |= 0x42uLL;
          }
        }
        v4 = v10;
      }
      v9 = PteShadow;
      if ( !PteShadow )
        goto LABEL_24;
      if ( (PteShadow & 1) != 0 )
      {
        if ( v4 > 1 )
        {
          MxZeroBootMappings((__int64)(v3 << 25) >> 16, ((__int64)(v3 << 25) >> 16) + 4096, v4 - 1);
LABEL_19:
          if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
            PteShadow = MiReadPteShadow((__int64)&v9, PteShadow);
          MiFreeBootPageTable((PteShadow >> 12) & 0xFFFFFFFFFLL);
          goto LABEL_22;
        }
        if ( (PteShadow & 0x80u) == 0LL )
          goto LABEL_19;
      }
LABEL_22:
      *(_QWORD *)v3 = 0LL;
      if ( v3 + 0x90482413000LL <= 0x7F8 )
        MiWritePteShadow(v3, 0LL);
LABEL_24:
      v4 = v10;
      v3 += 8LL;
    }
    while ( v3 < a2 );
  }
}
