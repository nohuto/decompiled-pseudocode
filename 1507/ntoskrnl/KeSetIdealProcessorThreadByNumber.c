/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x140138144
 * Callers:
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x14049C030 (NtQueryInformationThread.c)
 * Callees:
 *     KeSetIdealProcessorThreadEx @ 0x140118AF4 (KeSetIdealProcessorThreadEx.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(struct _KTHREAD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // ax
  unsigned __int8 v5; // r8
  int v6; // edx
  unsigned int v7; // eax
  unsigned int IdealProcessor; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a2 + 3) )
    goto LABEL_17;
  v4 = *(_WORD *)a2;
  if ( !*(_WORD *)a2 && !*(_BYTE *)(a2 + 2) )
  {
    v6 = 0;
    goto LABEL_8;
  }
  if ( v4 >= (unsigned __int16)KiMaximumGroups || (v5 = *(_BYTE *)(a2 + 2), v5 >= 0x40u) )
  {
    v6 = -1;
  }
  else
  {
    v6 = KiProcessorNumberToIndexMappingTable[64 * v4 + v5];
    if ( !v6 )
      goto LABEL_17;
  }
  if ( v6 != -1 )
  {
LABEL_8:
    v7 = KeSetIdealProcessorThreadEx((__int64)a1, v6, &v12);
    IdealProcessor = v12;
    v9 = v7;
    goto LABEL_9;
  }
LABEL_17:
  v9 = -1073741811;
  if ( a1 == KeGetCurrentThread() )
    IdealProcessor = a1->IdealProcessor;
  else
    IdealProcessor = a1->UserIdealProcessor;
LABEL_9:
  if ( IdealProcessor )
  {
    if ( IdealProcessor < 0x280 )
    {
      v10 = KiProcessorIndexToNumberMappingTable[IdealProcessor];
      if ( v10 )
      {
        *(_BYTE *)(a3 + 3) = 0;
        *(_WORD *)a3 = v10 >> 6;
        *(_BYTE *)(a3 + 2) = v10 & 0x3F;
      }
    }
  }
  else
  {
    *(_DWORD *)a3 = 0;
  }
  return v9;
}
