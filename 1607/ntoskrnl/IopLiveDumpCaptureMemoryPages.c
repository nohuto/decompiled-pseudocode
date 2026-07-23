/*
 * XREFs of IopLiveDumpCaptureMemoryPages @ 0x1403DA8AC
 * Callers:
 *     IoCaptureLiveDump @ 0x140625FE4 (IoCaptureLiveDump.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     VslIsSecureKernelRunning @ 0x1400B3DC0 (VslIsSecureKernelRunning.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     VslFinalizeLiveDumpInSk @ 0x1401C27B0 (VslFinalizeLiveDumpInSk.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     IopLiveDumpUncorralProcessors @ 0x1403DB958 (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpCaptureMemoryPages(__int64 a1)
{
  __int64 v2; // r14
  int v3; // esi
  unsigned __int64 v5; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v6[5]; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int64 *v8; // [rsp+80h] [rbp+27h]
  int v9; // [rsp+88h] [rbp+2Fh]
  int v10; // [rsp+8Ch] [rbp+33h]

  memset(&v6[1], 0, 0x20uLL);
  v2 = MEMORY[0xFFFFF78000000008];
  v6[0] = IopLiveDumpStartMirroringCallback;
  v6[1] = IopLiveDumpEndMirroringCallback;
  v6[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
  LODWORD(v6[4]) = 17;
  v3 = MmDuplicateMemory((__int64)v6);
  if ( v3 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 248) & 1) != 0 )
      IopLiveDumpUncorralProcessors(a1 + 240);
  }
  else if ( *(_QWORD *)(a1 + 504) && VslIsSecureKernelRunning() )
  {
    VslFinalizeLiveDumpInSk((_QWORD *)(a1 + 176), a1 + 128);
  }
  if ( stru_1402F3560.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F3560, 0x400000000000uLL) )
  {
    v9 = 8;
    v10 = 0;
    v5 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v8 = &v5;
    TlgWrite(&stru_1402F3560, &unk_14027BBA4, (LPCGUID)(a1 + 624), (LPCGUID)(a1 + 608), 3u, &pData);
  }
  return (unsigned int)v3;
}
