/*
 * XREFs of RtlpHeapTrkReportResult @ 0x1800F01F8
 * Callers:
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x1800EFCAC (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x1800EFE1C (RtlpHeapTrkDumpStacks.c)
 *     RtlpHeapTrkLeakCallback @ 0x1800F0000 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800F0304 (RtlpHeapTrkSyncWithDiagnoser.c)
 */

char __fastcall RtlpHeapTrkReportResult(size_t Size, __int64 a2, __int64 a3, __int64 a4, void *Src, size_t Sizea)
{
  unsigned int v6; // ebx
  size_t v8; // rsi
  int v9; // r14d
  unsigned __int16 v10; // r15
  unsigned int v11; // r10d
  int v12; // eax
  char result; // al
  __int64 v14; // rdi
  __int64 v15; // [rsp+20h] [rbp-238h] BYREF
  __int64 v16; // [rsp+28h] [rbp-230h]
  __int64 v17; // [rsp+30h] [rbp-228h]
  _DWORD v18[130]; // [rsp+38h] [rbp-220h] BYREF

  v6 = dword_18014FE10;
  v8 = (unsigned int)Size;
  v9 = a3;
  v10 = a2;
  v11 = dword_18014FE10 + Size;
  if ( dword_18014FE10 + (int)Size < (unsigned int)dword_18014FE10 )
  {
    v11 = -1;
    v12 = -1073741675;
  }
  else
  {
    v12 = 0;
  }
  if ( (v12 & 0xC0000000) == 0xC0000000 )
    return 0;
  v14 = TrkContext;
  if ( !TrkContext )
    return 0;
  if ( (unsigned __int64)v11 > *(_QWORD *)TrkContext )
  {
    if ( (unsigned __int8)RtlpHeapTrkSyncWithDiagnoser(3221225472LL, a2, a3, a4, v15, v16, v17, v18[0]) )
    {
      v6 = 88;
      *(_DWORD *)(TrkContext + 60) = 0;
      v14 = TrkContext;
      goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  LODWORD(v15) = v8;
  HIDWORD(v15) = v10;
  LODWORD(v16) = v9;
  v17 = a4;
  if ( Sizea <= 0x200 )
    memmove(v18, Src, Sizea);
  memmove((void *)(v14 + v6), &v15, v8);
  dword_18014FE10 = v8 + v6;
  result = 1;
  ++*(_DWORD *)(TrkContext + 60);
  return result;
}
