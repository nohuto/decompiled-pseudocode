/*
 * XREFs of MiShadowTopLevelPxes @ 0x140225870
 * Callers:
 *     MiCopyTopLevelMappings @ 0x14006AE80 (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChange @ 0x14016D0F4 (MiReplicatePteChange.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

void __fastcall MiShadowTopLevelPxes(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r10d
  __int64 v4; // r11
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 *v7; // rcx
  __int64 PteShadow; // rax

  v3 = a3;
  if ( (MiFlags & 0x600000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 1520);
    if ( v4 )
    {
      if ( PsInitialSystemProcess )
      {
        v5 = *(_QWORD *)&PsInitialSystemProcess[2].ProcessLock;
        v6 = (a2 >> 3) & 0x1FF;
        do
        {
          if ( _bittest64(qword_14034EE30, (unsigned int)(v6 - 256)) )
          {
            v7 = (__int64 *)(v5 + 8 * v6);
            PteShadow = *v7;
            if ( (unsigned __int64)(v7 + 0x12090482600LL) <= 0x7F8 )
              PteShadow = MiReadPteShadow((__int64)v7, *v7);
            *(_QWORD *)(v4 + 8 * v6) = PteShadow;
          }
          v6 = (unsigned int)(v6 + 1);
          --v3;
        }
        while ( v3 );
      }
    }
  }
}
