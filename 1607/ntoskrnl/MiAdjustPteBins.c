/*
 * XREFs of MiAdjustPteBins @ 0x1400BED6C
 * Callers:
 *     MiWorkingSetManager @ 0x1400BDF08 (MiWorkingSetManager.c)
 * Callees:
 *     MiEmptyPteBins @ 0x140017B18 (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x1400BEE38 (MiPteBinsNeedTrimming.c)
 *     MiAttemptCoalesce @ 0x1400C06A0 (MiAttemptCoalesce.c)
 */

char MiAdjustPteBins()
{
  __int64 v0; // rsi
  __int64 *v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  _QWORD **v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 2LL;
  v7[0] = &qword_140327870;
  v1 = v7;
  v2 = 2LL;
  v7[1] = &unk_1403274D8;
  do
  {
    v3 = *v1;
    if ( (*(_DWORD *)(*v1 + 24) & 1) != 0 )
    {
      MiEmptyPteBins(*v1, 0);
      if ( (unsigned int)MiPteBinsNeedTrimming(v3) == 1 )
        MiEmptyPteBins(v3, 1);
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  LOBYTE(v4) = byte_140327565 + 1;
  byte_140327565 = v4;
  if ( (v4 & 0xF) == 0 )
  {
    v5 = (_QWORD **)v7;
    do
    {
      v4 = 0xCCCCCCCCCCCCCCCDuLL * (*v5)[8];
      if ( (*v5)[12] > (*v5)[8] / 0xAuLL )
        LOBYTE(v4) = MiAttemptCoalesce(*v5, 0LL, **v5);
      ++v5;
      --v0;
    }
    while ( v0 );
  }
  return v4;
}
