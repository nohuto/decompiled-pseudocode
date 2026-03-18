/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x1C000F910
 * Callers:
 *     Bulk_PrepareStage @ 0x1C000F728 (Bulk_PrepareStage.c)
 * Callees:
 *     TR_IsUrbUsingChainedMdl @ 0x1C0004244 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0027E34 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0028AEC (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x1C002F21C (WPP_RECORDER_SF_DDDqDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // r13
  unsigned int v5; // edx
  unsigned int v6; // edx
  __int64 *v7; // r12
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  unsigned int v10; // esi
  int v11; // r13d
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned int v15; // r8d
  int v16; // edx
  int v17; // edx
  unsigned int v18; // r9d
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // [rsp+20h] [rbp-88h]
  int i; // [rsp+B0h] [rbp+8h]
  int v24; // [rsp+B8h] [rbp+10h]
  unsigned int v25; // [rsp+C0h] [rbp+18h]

  v2 = *a1;
  v3 = *(_QWORD *)(v2 + 40);
  if ( *(_DWORD *)(v2 + 60) <= 2u )
  {
    *((_DWORD *)a1 + 21) = 2;
    *((_DWORD *)a1 + 20) = 2;
  }
  else
  {
    v4 = *((unsigned int *)a1 + 10);
    v5 = *(_DWORD *)(*(_QWORD *)(v3 + 56) + 152LL);
    if ( v5 > (unsigned int)v4 )
      v5 = *((_DWORD *)a1 + 10);
    v25 = v5;
    *((_DWORD *)a1 + 20) = (((unsigned __int64)v5 + 8190) >> 12) + 1;
    if ( TR_IsUrbUsingChainedMdl(*(_QWORD *)(v2 + 32)) )
    {
      v7 = (__int64 *)a1[6];
      v8 = 0;
      for ( i = 0; (_DWORD)v4; v7 = (__int64 *)*v7 )
      {
        v9 = *((_DWORD *)v7 + 10);
        if ( (unsigned int)v4 < v9 )
        {
          v9 = v4;
          LODWORD(v4) = 0;
        }
        else
        {
          LODWORD(v4) = v4 - v9;
        }
        v24 = v4;
        v10 = v9;
        if ( v9 )
        {
          v11 = i;
          do
          {
            v12 = v7[4] + *((unsigned int *)v7 + 11) + (unsigned __int64)(v9 - v10);
            if ( v10 + v8 < v6 )
            {
              v8 = v10;
              v14 = ((v12 & 0xFFF) + v10 + 4095LL) >> 12;
              v11 = v14;
              v10 = 0;
            }
            else
            {
              v13 = v6 - v8;
              v10 += v8 - v6;
              v8 = 0;
              LODWORD(v14) = v11 + ((v13 + (v12 & 0xFFF) + 4095) >> 12);
              v11 = 0;
            }
            *((_DWORD *)a1 + 21) += v14;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_DDDqDDDDD(
                *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
                v12,
                *((_DWORD *)a1 + 21),
                v22,
                *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
                *(_DWORD *)(v3 + 64),
                v12,
                v14,
                v10,
                v11,
                v8,
                *((_DWORD *)a1 + 21));
            v15 = *(_DWORD *)(v3 + 188);
            if ( (unsigned int)v14 >= v15 )
            {
              v16 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
              LOBYTE(v16) = 3;
              WPP_RECORDER_SF_DDDDD(
                *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                v16,
                v15,
                29,
                (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
                *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
                *(_DWORD *)(v3 + 64),
                v14,
                *(_DWORD *)(v3 + 188));
            }
            if ( (unsigned int)v14 > *((_DWORD *)a1 + 20) )
            {
              *((_DWORD *)a1 + 20) = v14;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                v17 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
                LOBYTE(v17) = 5;
                WPP_RECORDER_SF_DDDD(
                  *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                  v17,
                  13,
                  30,
                  (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
                  *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
                  *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
                  *(_DWORD *)(v3 + 64),
                  v14);
              }
            }
            v6 = v25;
          }
          while ( v10 );
          i = v11;
          LODWORD(v4) = v24;
        }
      }
      ++*((_DWORD *)a1 + 21);
    }
    else
    {
      *((_DWORD *)a1 + 21) = (v4 + 4095 + (unsigned __int64)((*(_DWORD *)(a1[6] + 32) + *(_DWORD *)(a1[6] + 44)) & 0xFFF)) >> 12;
      ++*((_DWORD *)a1 + 21);
    }
  }
  v18 = *((_DWORD *)a1 + 10);
  result = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 232LL);
  if ( (result & 0x400000000LL) != 0 )
  {
    v20 = *(_QWORD *)(v3 + 48);
    if ( *(_DWORD *)(v20 + 40) )
    {
      v21 = *(_QWORD *)(v3 + 56);
      if ( *(char *)(v21 + 98) < 0 && *(_DWORD *)(v20 + 20) <= 1u )
      {
        result = v18 / (*(_WORD *)(v21 + 100) & 0x7FFu);
        if ( v18 % (*(_WORD *)(v21 + 100) & 0x7FFu) )
        {
          ++*((_DWORD *)a1 + 20);
          ++*((_DWORD *)a1 + 21);
        }
      }
    }
  }
  return result;
}
