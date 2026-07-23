/*
 * XREFs of RtlpHpLfhBucketInitialize @ 0x180077528
 * Callers:
 *     RtlpHpLfhBucketActivate @ 0x180077300 (RtlpHpLfhBucketActivate.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x180077590 (RtlpHpLfhOwnerInitialize.c)
 */

int __fastcall RtlpHpLfhBucketInitialize(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // rax

  RtlpHpLfhOwnerInitialize(a1, a2, 0xFFFFFFFFLL);
  v3 = *(unsigned __int8 *)(a1 + 1);
  *(_QWORD *)(a1 + 80) = 0LL;
  v4 = (unsigned __int16)RtlpBucketBlockSizes[v3];
  if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
  {
    v5 = (unsigned __int16)RtlpBucketBlockSizes[v3];
    _BitScanForward(&v6, 0x4000u);
    LOBYTE(v6) = v6 + 18;
    *(_BYTE *)(a1 + 76) = v6;
    v7 = (v4 - 1 + (1LL << v6)) / v5;
    *(_DWORD *)(a1 + 72) = v7;
  }
  else
  {
    _BitScanForward((unsigned int *)&v7, v4);
    *(_BYTE *)(a1 + 76) = v7;
  }
  return v7;
}
