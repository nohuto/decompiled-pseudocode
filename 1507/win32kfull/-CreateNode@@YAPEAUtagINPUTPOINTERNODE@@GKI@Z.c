/*
 * XREFs of ?CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z @ 0x1C01FC04C
 * Callers:
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01FCA70 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAG.c)
 * Callees:
 *     ?SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FC758 (-SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z.c)
 */

struct tagINPUTPOINTERNODE *__fastcall CreateNode(__int16 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int16 v7; // cx
  unsigned int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rcx

  if ( a2 < 2 || a2 > 3 && a2 != 5 )
    return 0LL;
  v6 = Win32AllocPoolZInit(160LL, 1885958997LL);
  if ( !v6 )
    return 0LL;
  v7 = word_1C032F0F8++;
  if ( (unsigned __int16)word_1C032F0F8 < 2u )
    word_1C032F0F8 = 2;
  *(_WORD *)(v6 + 32) = v7;
  *(_WORD *)(v6 + 34) = a1;
  *(_DWORD *)(v6 + 40) = a2;
  *(_QWORD *)(v6 + 120) = v6 + 112;
  *(_QWORD *)(v6 + 112) = v6 + 112;
  *(_QWORD *)(v6 + 104) = v6 + 96;
  *(_QWORD *)(v6 + 96) = v6 + 96;
  *(_QWORD *)(v6 + 144) = v6 + 136;
  *(_QWORD *)(v6 + 136) = v6 + 136;
  v8 = *(_DWORD *)(v6 + 152) & 0xFFFFF4BF;
  *(_WORD *)(v6 + 128) = 0;
  *(_DWORD *)(v6 + 36) = 0;
  *(_DWORD *)(v6 + 152) = v8 | 0x480;
  if ( !(unsigned int)SetNewValidState(a3, (struct tagINPUTPOINTERNODE *)v6) )
  {
    Win32FreePool(v6);
    return 0LL;
  }
  v10 = qword_1C03253C8;
  *(_QWORD *)v6 = qword_1C03253C8;
  *(_QWORD *)(v6 + 8) = &qword_1C03253C8;
  if ( *(__int64 **)(v10 + 8) != &qword_1C03253C8 )
    __fastfail(3u);
  *(_QWORD *)(v10 + 8) = v6;
  v11 = qword_1C03253D8;
  qword_1C03253C8 = v6;
  *(_QWORD *)(v6 + 16) = qword_1C03253D8;
  *(_QWORD *)(v6 + 24) = &qword_1C03253D8;
  if ( *(__int64 **)(v11 + 8) != &qword_1C03253D8 )
    __fastfail(3u);
  *(_QWORD *)(v11 + 8) = v6 + 16;
  qword_1C03253D8 = v6 + 16;
  return (struct tagINPUTPOINTERNODE *)v6;
}
