/*
 * XREFs of RtlpHeapTrkReportResult @ 0x1800E7018
 * Callers:
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x1800E6A64 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x1800E6BD4 (RtlpHeapTrkDumpStacks.c)
 *     RtlpHeapTrkLeakCallback @ 0x1800E6E20 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800E7124 (RtlpHeapTrkSyncWithDiagnoser.c)
 */

char __fastcall RtlpHeapTrkReportResult(size_t Size, unsigned __int16 a2, int a3, __int64 a4, void *Src, size_t Sizea)
{
  unsigned int v6; // ebx
  size_t v8; // rsi
  unsigned int v11; // r10d
  int v12; // eax
  char result; // al
  char *v14; // rdi
  _DWORD v15[4]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v16; // [rsp+30h] [rbp-228h]
  _BYTE v17[520]; // [rsp+38h] [rbp-220h] BYREF

  v6 = dword_180142DAC;
  v8 = (unsigned int)Size;
  v11 = dword_180142DAC + Size;
  if ( dword_180142DAC + (int)Size < (unsigned int)dword_180142DAC )
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
  v14 = (char *)TrkContext;
  if ( !TrkContext )
    return 0;
  if ( (unsigned __int64)v11 > *(_QWORD *)TrkContext )
  {
    if ( (unsigned __int8)RtlpHeapTrkSyncWithDiagnoser() )
    {
      v6 = 88;
      *((_DWORD *)TrkContext + 15) = 0;
      v14 = (char *)TrkContext;
      goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  v15[0] = v8;
  v15[1] = a2;
  v15[2] = a3;
  v16 = a4;
  if ( Sizea <= 0x200 )
    memmove(v17, Src, Sizea);
  memmove(&v14[v6], v15, v8);
  dword_180142DAC = v8 + v6;
  result = 1;
  ++*((_DWORD *)TrkContext + 15);
  return result;
}
