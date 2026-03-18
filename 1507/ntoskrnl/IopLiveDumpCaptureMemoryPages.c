/*
 * XREFs of IopLiveDumpCaptureMemoryPages @ 0x1403FEC1C
 * Callers:
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 * Callees:
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     IopLiveDumpUncorralProcessors @ 0x1403FFE28 (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpCaptureMemoryPages(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // edi
  unsigned __int64 v5; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v6[5]; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+17h] BYREF
  unsigned __int64 *v8; // [rsp+88h] [rbp+37h]
  int v9; // [rsp+90h] [rbp+3Fh]
  int v10; // [rsp+94h] [rbp+43h]

  memset(&v6[1], 0, 0x20uLL);
  v2 = MEMORY[0xFFFFF78000000008];
  v6[0] = IopLiveDumpStartMirroringCallback;
  v6[1] = IopLiveDumpEndMirroringCallback;
  v6[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
  LODWORD(v6[4]) = 17;
  v3 = MmDuplicateMemory((__int64)v6);
  if ( v3 < 0 && (*(_DWORD *)(a1 + 248) & 1) != 0 )
    IopLiveDumpUncorralProcessors(a1 + 240);
  if ( stru_140320EC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140320EC0, 0x400000000000uLL) )
  {
    v9 = 8;
    v10 = 0;
    v5 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v8 = &v5;
    TlgWrite(&stru_140320EC0, &unk_1402A3F8B, (LPCGUID)(a1 + 608), (LPCGUID)(a1 + 592), 3u, &pData);
  }
  return (unsigned int)v3;
}
