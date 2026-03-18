/*
 * XREFs of MiScrubNodeLargePages @ 0x14062B008
 * Callers:
 *     MiScrubNode @ 0x1401E5DEC (MiScrubNode.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiAcquireNonPagedResources @ 0x1400E8A40 (MiAcquireNonPagedResources.c)
 *     MiReleaseNonPagedResources @ 0x1400E9D1C (MiReleaseNonPagedResources.c)
 *     MiScrubNodeLargePageList @ 0x1401E197C (MiScrubNodeLargePageList.c)
 */

void __fastcall MiScrubNodeLargePages(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r8
  _QWORD *v7; // r15
  unsigned int v8; // edx
  int v9; // r14d
  __int64 v10; // r13
  int v11; // ebp
  __int64 i; // r12
  unsigned int v13; // esi
  __int64 v14; // rcx
  _QWORD *v15; // rcx

  v5 = (_QWORD *)(*(_QWORD *)(a2 + 40) + 1336LL * a3);
  if ( (v5[1] || *v5) && (unsigned int)MiAcquireNonPagedResources((int *)a2, 0x200uLL) )
  {
    v7 = (_QWORD *)MiReservePtes((__int64)&qword_1402FF7B0, 0x200u, v6);
    if ( v7 )
    {
      v8 = MmNumberOfChannels;
      v9 = 0;
      v10 = 0LL;
      do
      {
        v11 = 1;
        for ( i = 1LL; ; --i )
        {
          v13 = 0;
          if ( v8 )
          {
            v14 = i + v10;
            do
            {
              v15 = &v5[8 * v14 + 2 + 2 * v13];
              if ( (_QWORD *)*v15 != v15 )
              {
                if ( !(unsigned int)MiScrubNodeLargePageList((__int64)v5, v9, v11, v13, a1, a4) )
                  goto LABEL_17;
                v8 = MmNumberOfChannels;
              }
              ++v13;
              v14 = i + v10;
            }
            while ( v13 < v8 );
          }
          if ( !v11 )
            break;
          --v11;
        }
        ++v9;
        v10 += 2LL;
      }
      while ( v9 <= 1 );
LABEL_17:
      MiReleaseNonPagedResources(a2, 0x200uLL);
      MiReleasePtes((__int64)&qword_1402FF7B0, v7, 0x200u);
    }
    else
    {
      MiReleaseNonPagedResources(a2, 0x200uLL);
    }
  }
}
