/*
 * XREFs of MiAdjustPteBins @ 0x140013A60
 * Callers:
 *     MiWorkingSetManager @ 0x1400131F4 (MiWorkingSetManager.c)
 * Callees:
 *     MiEmptyPteBins @ 0x140013B2C (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x140014130 (MiPteBinsNeedTrimming.c)
 *     MiAttemptCoalesce @ 0x140015270 (MiAttemptCoalesce.c)
 */

char MiAdjustPteBins()
{
  __int64 v0; // rsi
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  _QWORD **v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 2LL;
  v7[0] = &qword_1402FF7B0;
  v1 = v7;
  v2 = 2LL;
  v7[1] = &unk_1402FF0D8;
  do
  {
    v3 = *v1;
    if ( (*(_DWORD *)(*v1 + 24LL) & 1) != 0 )
    {
      MiEmptyPteBins(*v1, 0LL);
      if ( (unsigned int)MiPteBinsNeedTrimming(v3) == 1 )
        MiEmptyPteBins(v3, 1LL);
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  LOBYTE(v4) = byte_1402FF155 + 1;
  byte_1402FF155 = v4;
  if ( (v4 & 0xF) == 0 )
  {
    v5 = (_QWORD **)v7;
    do
    {
      v4 = 0xCCCCCCCCCCCCCCCDuLL * (*v5)[8];
      if ( (*v5)[11] > (*v5)[8] / 0xAuLL )
        LOBYTE(v4) = MiAttemptCoalesce(*v5, 0LL, **v5);
      ++v5;
      --v0;
    }
    while ( v0 );
  }
  return v4;
}
