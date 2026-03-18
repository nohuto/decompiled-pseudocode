/*
 * XREFs of MiScrubNodeLargePages @ 0x1406A97C0
 * Callers:
 *     MiScrubNode @ 0x140232B18 (MiScrubNode.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiReleaseNonPagedResources @ 0x1400FC2A8 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x140123878 (MiAcquireNonPagedResources.c)
 *     MiScrubNodeLargePageList @ 0x14022D300 (MiScrubNodeLargePageList.c)
 */

void __fastcall MiScrubNodeLargePages(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r8
  __int64 *v5; // r14
  unsigned int v6; // edx
  int v7; // ebp
  __int64 v8; // r12
  int v9; // esi
  __int64 i; // r15
  unsigned int j; // edi
  _QWORD *v12; // rcx

  v3 = (_QWORD *)(qword_140353D28 + 1336LL * a2);
  if ( (v3[1] || *v3) && (unsigned int)MiAcquireNonPagedResources(MiSystemPartition, 0x200uLL) )
  {
    v5 = MiReservePtes((__int64)&qword_14034FC70, 0x200u, v4);
    if ( v5 )
    {
      v6 = MmNumberOfChannels;
      v7 = 0;
      v8 = 0LL;
      do
      {
        v9 = 1;
        for ( i = 1LL; ; --i )
        {
          for ( j = 0; j < v6; ++j )
          {
            v12 = &v3[8 * v8 + 2 + 8 * i + 2 * j];
            if ( (_QWORD *)*v12 != v12 )
            {
              if ( !(unsigned int)MiScrubNodeLargePageList((__int64)v3, v7, v9, j, a1, a3) )
                goto LABEL_16;
              v6 = MmNumberOfChannels;
            }
          }
          if ( !v9 )
            break;
          --v9;
        }
        ++v7;
        v8 += 2LL;
      }
      while ( v7 <= 1 );
LABEL_16:
      MiReleaseNonPagedResources((__int64)MiSystemPartition, 0x200uLL);
      MiReleasePtes((__int64)&qword_14034FC70, v5, 0x200u);
    }
    else
    {
      MiReleaseNonPagedResources((__int64)MiSystemPartition, 0x200uLL);
    }
  }
}
