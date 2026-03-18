/*
 * XREFs of PpmCheckComputeEnergy @ 0x1400E9ECC
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 */

char PpmCheckComputeEnergy()
{
  unsigned __int64 v1; // r9
  unsigned __int16 v2; // r10
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r11
  __int64 v6; // r8
  int CurrentFrequency; // eax
  __int64 v8; // r8
  __int64 v9; // r11
  _QWORD *v10; // r8
  __int64 v11; // r10
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  _QWORD v15[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+20h] BYREF
  _DWORD v19[2]; // [rsp+78h] [rbp+28h] BYREF

  if ( PopComputeEnergy )
  {
    v1 = qword_1403D15E8[0];
    v2 = 0;
    v18 = 0x4000000040LL;
    v16[0] = 0LL;
    v16[1] = 0LL;
    v15[0] = 0LL;
    v15[1] = 0LL;
    while ( 1 )
    {
      while ( v1 )
      {
        _BitScanForward64(&v3, v1);
        v4 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v2 + (unsigned __int8)v3];
        if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
        {
          v5 = 0LL;
        }
        else
        {
          _mm_lfence();
          v5 = KiProcessorBlock[v4];
        }
        v6 = *(unsigned __int8 *)(v5 + 23858);
        v19[v6 - 2] = v4;
        v16[v6] += *(_QWORD *)(v5 + 24256);
        v15[v6] += *(_QWORD *)(v5 + 24264);
        CurrentFrequency = PpmPerfGetCurrentFrequency(v5);
        v19[v8] = CurrentFrequency;
        *(_QWORD *)(v9 + 24256) = 0LL;
        *(_QWORD *)(v9 + 24264) = 0LL;
      }
      if ( ++v2 >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
        break;
      v1 = qword_1403D15E8[v2];
    }
    ((void (__fastcall *)(_QWORD *, _QWORD *, _DWORD *, _BYTE *))PopComputeEnergy)(v16, v15, v19, v17);
    v10 = v17;
    v11 = 2LL;
    v12 = &v18;
    do
    {
      v13 = *(unsigned int *)v12;
      if ( (_DWORD)v13 != 64 )
      {
        if ( (unsigned int)v13 >= (unsigned int)KeNumberProcessors_0 )
        {
          v14 = 0LL;
        }
        else
        {
          _mm_lfence();
          v14 = KiProcessorBlock[v13];
        }
        *(_QWORD *)(v14 + 24248) += *v10;
      }
      v12 = (__int64 *)((char *)v12 + 4);
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  return 1;
}
