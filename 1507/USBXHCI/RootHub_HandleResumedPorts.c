/*
 * XREFs of RootHub_HandleResumedPorts @ 0x1C0001950
 * Callers:
 *     RootHub_D0Exit @ 0x1C0001A90 (RootHub_D0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     RootHub_ForceU3 @ 0x1C001E7BC (RootHub_ForceU3.c)
 */

void __fastcall RootHub_HandleResumedPorts(__int64 a1)
{
  unsigned int i; // esi
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rbx
  char v6; // al
  int v7; // edx
  unsigned int *v8; // r14
  __int64 v9; // r15
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // r13d
  unsigned int v13; // edi
  int v14; // r12d
  int v15; // eax
  unsigned int v16; // ebx

  for ( i = 1; i <= *(_DWORD *)(a1 + 16); ++i )
  {
    v3 = i - 1;
    v4 = 56 * v3;
    v5 = 56 * v3 + *(_QWORD *)(a1 + 48);
    v6 = *(_BYTE *)(v5 + 1);
    if ( v6 == 2 )
    {
      if ( !(unsigned __int8)ExCancelTimer(*(_QWORD *)(v5 + 32), 0LL) )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          v7,
          10,
          227,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          i);
LABEL_5:
        v8 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16 * v3);
        v9 = v4 + *(_QWORD *)(a1 + 48);
        v10 = *v8;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          4,
          10,
          218,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          i,
          *v8);
        v12 = 0;
        v13 = v10;
        v14 = 1200;
        while ( v10 != -1 )
        {
          if ( !*(_BYTE *)(v9 + 6) )
            goto LABEL_8;
          if ( (v10 & 0x20203) != 0x203 )
            goto LABEL_8;
          v15 = (v10 >> 5) & 0xF;
          if ( v15 == 4 || v15 != 15 && v15 != 8 )
            goto LABEL_8;
          if ( !v14 )
          {
            LOBYTE(v11) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
              v11,
              10,
              219,
              (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
              i);
LABEL_8:
            if ( (v10 & 0x20203) == 0x203 )
            {
              v16 = (v10 >> 5) & 0xF;
              if ( v16 != 4 && (v16 <= 2 || v16 == 8) )
                RootHub_ForceU3(a1, i);
            }
            goto LABEL_9;
          }
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            4,
            10,
            220,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            i,
            v12);
          --v14;
          ++v12;
          KeStallExecutionProcessor(0xAu);
          v10 = *v8;
          if ( *v8 != v13 )
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
              4,
              10,
              221,
              (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
              i,
              *v8);
        }
        continue;
      }
      *(_BYTE *)(v5 + 6) = 0;
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        v7,
        10,
        226,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        i);
    }
    else if ( v6 == 3 )
    {
      goto LABEL_5;
    }
LABEL_9:
    ;
  }
}
