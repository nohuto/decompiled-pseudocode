/*
 * XREFs of EtwpCompressBuffer @ 0x140229F34
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x14022A2B4 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     RtlCompressBuffer @ 0x140080D40 (RtlCompressBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x1400A86DC (EtwpUpdateEventsLostCount.c)
 *     EtwpGetNextEventOffsetType @ 0x14022A940 (EtwpGetNextEventOffsetType.c)
 *     EtwpRotateCompressionTarget @ 0x14022AC78 (EtwpRotateCompressionTarget.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x14022ACDC (EtwpRotateCompressionTargetIfNeeded.c)
 */

__int64 __fastcall EtwpCompressBuffer(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  ULONG v5; // edi
  unsigned int v6; // esi
  NTSTATUS v7; // r8d
  __int64 v8; // r15
  __int64 v9; // r12
  ULONG CompressedBufferSize; // r9d
  unsigned int v11; // eax
  unsigned int v12; // edi
  ULONG i; // r13d
  ULONG v14; // r9d
  int NextEventOffsetType; // r10d
  ULONG v16; // eax
  ULONG v18; // eax
  ULONG FinalCompressedSize; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+18h]
  int v21; // [rsp+A8h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a2 + 8) <= *(_DWORD *)a2 )
    v4 = *(_DWORD *)(a2 + 8);
  else
    v4 = *(_DWORD *)(a2 + 4);
  v5 = v4 - 72;
  v6 = 72;
  if ( v4 == 72 )
    return 0;
  EtwpRotateCompressionTargetIfNeeded();
  while ( 1 )
  {
    if ( !*(_QWORD *)(a1 + 960) )
    {
      ++*(_DWORD *)(a1 + 252);
      return 3221225495LL;
    }
    v8 = *(_QWORD *)(a1 + 960);
    v9 = *(unsigned int *)(v8 + 8);
    CompressedBufferSize = *(_DWORD *)(a1 + 4) - *(_DWORD *)(v8 + 8) - 72;
    if ( *(_DWORD *)(v8 + 8) == 72 || v5 < CompressedBufferSize * *(_DWORD *)(a1 + 980) )
    {
      v7 = RtlCompressBuffer(
             3u,
             (PUCHAR)(a2 + v6),
             v5,
             (PUCHAR)(*(unsigned int *)(*(_QWORD *)(a1 + 960) + 8LL) + 72LL + v8),
             CompressedBufferSize,
             0,
             &FinalCompressedSize,
             *(PVOID *)(a1 + 968));
      if ( v7 >= 0 )
      {
        *(_OWORD *)(v8 + v9) = *(_OWORD *)a2;
        *(_OWORD *)(v8 + v9 + 16) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v8 + v9 + 32) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v8 + v9 + 48) = *(_OWORD *)(a2 + 48);
        *(_QWORD *)(v8 + v9 + 64) = *(_QWORD *)(a2 + 64);
        v18 = FinalCompressedSize;
        *(_QWORD *)(v8 + v9 + 24) = 0LL;
        *(_DWORD *)(v8 + v9) = v18 + 72;
        *(_DWORD *)(v8 + v9 + 8) = v5 + 72;
        *(_DWORD *)(v8 + v9 + 4) = v5 + 72;
        *(_DWORD *)(v8 + v9 + 12) = 0;
        *(_DWORD *)(v8 + v9 + 44) = 3;
        *(_DWORD *)(*(_QWORD *)(a1 + 960) + 8LL) += 72;
        *(_DWORD *)(*(_QWORD *)(a1 + 960) + 8LL) += FinalCompressedSize;
        return (unsigned int)v7;
      }
    }
    LOBYTE(v11) = 1;
    v20 = 1;
    if ( *(_DWORD *)(a1 + 984) )
      break;
LABEL_26:
    EtwpRotateCompressionTarget(a1);
LABEL_27:
    v5 = v4 - v6;
  }
  while ( 1 )
  {
    v12 = v6 + (v5 >> v11);
    for ( i = 0; ; i += v21 )
    {
      NextEventOffsetType = EtwpGetNextEventOffsetType(a2, v6 + i, &v21);
      if ( !NextEventOffsetType || i + v21 + v6 > v12 )
        break;
    }
    if ( i )
    {
      if ( RtlCompressBuffer(
             3u,
             (PUCHAR)(a2 + v6),
             i,
             (PUCHAR)(v9 + v8 + 72),
             v14,
             0,
             &FinalCompressedSize,
             *(PVOID *)(a1 + 968)) >= 0 )
      {
        *(_OWORD *)(v8 + v9) = *(_OWORD *)a2;
        *(_OWORD *)(v8 + v9 + 16) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v8 + v9 + 32) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v8 + v9 + 48) = *(_OWORD *)(a2 + 48);
        *(_QWORD *)(v8 + v9 + 64) = *(_QWORD *)(a2 + 64);
        v16 = FinalCompressedSize;
        *(_QWORD *)(v8 + v9 + 24) = 0LL;
        *(_DWORD *)(v8 + v9) = v16 + 72;
        *(_DWORD *)(v8 + v9 + 8) = i + 72;
        *(_DWORD *)(v8 + v9 + 4) = i + 72;
        *(_DWORD *)(v8 + v9 + 12) = 0;
        *(_DWORD *)(v8 + v9 + 44) = 3;
        *(_DWORD *)(*(_QWORD *)(a1 + 960) + 8LL) += 72;
        *(_DWORD *)(*(_QWORD *)(a1 + 960) + 8LL) += FinalCompressedSize;
        EtwpRotateCompressionTarget(a1);
        v6 += i;
        goto LABEL_27;
      }
      v11 = ++v20;
      goto LABEL_23;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 960) + 8LL) != 72 )
      goto LABEL_26;
    if ( !NextEventOffsetType )
      break;
    EtwpUpdateEventsLostCount(a1);
    v6 += v21;
    if ( v6 == v4 )
      return 0;
    if ( v6 > v4 )
      return (unsigned int)-1073741566;
    v11 = v20;
LABEL_23:
    v5 = v4 - v6;
    if ( v11 > *(_DWORD *)(a1 + 984) )
      goto LABEL_26;
  }
  ++*(_DWORD *)(a1 + 252);
  return (unsigned int)-1073741566;
}
