/*
 * XREFs of KeCopyContextToUmsContext @ 0x140651900
 * Callers:
 *     PspSetUmsThreadContext @ 0x14068297C (PspSetUmsThreadContext.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x1400F1104 (RtlpCopyLegacyContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiCopyXStateArea @ 0x1401D62E4 (KiCopyXStateArea.c)
 *     RtlpSanitizeContextFlags @ 0x1404FBBBC (RtlpSanitizeContextFlags.c)
 */

__int64 __fastcall KeCopyContextToUmsContext(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  int v5; // ebx
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  _WORD *v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+80h] [rbp+18h] BYREF
  int v11; // [rsp+88h] [rbp+20h]

  v11 = *(_DWORD *)(a2 + 48);
  v10 = v11 & 0x100013;
  RtlpSanitizeContextFlags(&v10);
  RtlpCopyLegacyContext(1, a1 + 16, v10, a2);
  v9 = (_WORD *)((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = 4LL;
  if ( (*(_DWORD *)(a1 + 1264) & 4) == 0 )
  {
    *(_WORD *)(((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 2) = 0;
    *(_BYTE *)(((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    if ( MEMORY[0xFFFFF780000003D8] )
    {
      memset(v9 + 256, 0, 0x40uLL);
      *(_QWORD *)(((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x200) = 3LL;
    }
  }
  *(_DWORD *)(a1 + 1264) |= 4u;
  v5 = v11;
  if ( (v11 & 0x100040) == 0x100040 && MEMORY[0xFFFFF780000003D8] )
    KiCopyXStateArea(
      (__int64)v9,
      MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL,
      *(int *)(a2 + 1248) + a2 + 1232 - 512);
  if ( (v5 & 0x100008) == 0x100008 )
  {
    v6 = (_OWORD *)((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL);
    v7 = (_OWORD *)(a2 + 256);
    do
    {
      *v6 = *v7;
      v6[1] = v7[1];
      v6[2] = v7[2];
      v6[3] = v7[3];
      v6[4] = v7[4];
      v6[5] = v7[5];
      v6[6] = v7[6];
      v6 += 8;
      *(v6 - 1) = v7[7];
      v7 += 8;
      --v4;
    }
    while ( v4 );
    *v9 = *(_WORD *)(a2 + 256) & 0x1F3F;
    *(_DWORD *)(((a1 + 1375) & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = KiMxCsrMask & *(_DWORD *)(a2 + 52);
  }
  if ( (v5 & 0x100010) == 0x100010 )
  {
    if ( (*(_DWORD *)(a1 + 128) & 0x355LL) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 4u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1264), 4u);
  }
  return 0LL;
}
