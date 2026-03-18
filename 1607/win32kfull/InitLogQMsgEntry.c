/*
 * XREFs of InitLogQMsgEntry @ 0x1C01CB064
 * Callers:
 *     LogQMsg @ 0x1C01CB178 (LogQMsg.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

int __fastcall InitLogQMsgEntry(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rax

  *(_DWORD *)(a2 + 152) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_DWORD *)(a2 + 156) = (unsigned int)PsGetCurrentThreadId();
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 128);
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a1 + 144);
  memset((void *)(a2 + 168), 0, 8LL * Count);
  *(_DWORD *)(a2 + 160) = 0;
  v4 = dword_1C03267E8;
  if ( (dword_1C03267E8 & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)(a2 + 160) = RtlWalkFrameChain((PVOID *)(a2 + 168), Count, 0);
    v4 = dword_1C03267E8;
  }
  LODWORD(v5) = v4 - 1;
  if ( (unsigned int)v5 <= 1 )
  {
    v5 = *(int *)(a2 + 160);
    if ( (int)v5 < (int)Count )
    {
      LODWORD(v5) = RtlWalkFrameChain((PVOID *)(a2 + 8 * (v5 + 21)), Count - v5, 1u);
      *(_DWORD *)(a2 + 160) += v5;
    }
  }
  return v5;
}
