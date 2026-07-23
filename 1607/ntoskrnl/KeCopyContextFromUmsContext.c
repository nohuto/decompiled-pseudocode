/*
 * XREFs of KeCopyContextFromUmsContext @ 0x1406514EC
 * Callers:
 *     PspGetSetContextInternal @ 0x1404FB520 (PspGetSetContextInternal.c)
 *     KeFixUserSwitchContext @ 0x140651AC8 (KeFixUserSwitchContext.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x1400F1104 (RtlpCopyLegacyContext.c)
 *     KiCopyXStateArea @ 0x1401D62E4 (KiCopyXStateArea.c)
 *     RtlpSanitizeContextFlags @ 0x1404FBBBC (RtlpSanitizeContextFlags.c)
 */

__int64 __fastcall KeCopyContextFromUmsContext(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned __int64 v5; // r15
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h]

  v4 = *(_DWORD *)(a1 + 48);
  v12 = v4;
  v11 = v4 & 0x100013;
  RtlpSanitizeContextFlags(&v11);
  RtlpCopyLegacyContext(1, a1, v11, a2 + 16);
  v5 = (a2 + 1375) & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (v4 & 0x100040) == 0x100040 && MEMORY[0xFFFFF780000003D8] )
  {
    *(_DWORD *)(a1 + 48) |= 0x100040u;
    v10 = (_QWORD *)(a1 + *(int *)(a1 + 1248) + 1232LL);
    if ( (*(_DWORD *)(a2 + 1264) & 4) != 0 )
    {
      v5 = (a2 + 1375) & 0xFFFFFFFFFFFFFFC0uLL;
      KiCopyXStateArea((__int64)(v10 - 64), MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, v5);
    }
    else
    {
      *v10 = 0LL;
      v5 = (a2 + 1375) & 0xFFFFFFFFFFFFFFC0uLL;
    }
  }
  if ( (v12 & 0x100008) == 0x100008 )
  {
    *(_DWORD *)(a1 + 48) |= 0x100008u;
    v6 = (_OWORD *)(a1 + 256);
    v7 = (_OWORD *)v5;
    v8 = 4LL;
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
      --v8;
    }
    while ( v8 );
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(v5 + 24);
    if ( (*(_DWORD *)(a2 + 1264) & 4) == 0 )
    {
      *(_WORD *)(a1 + 258) = 0;
      *(_BYTE *)(a1 + 260) = 0;
    }
  }
  if ( (v12 & 0x40000000) != 0 && (*(_DWORD *)(a2 + 1264) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 48) |= 0x80000000;
    if ( (*(_DWORD *)(a2 + 1264) & 4) == 0 )
      *(_DWORD *)(a1 + 48) |= 0x10000000u;
  }
  return 0LL;
}
