/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x1C000BB40
 * Callers:
 *     Bulk_PrepareStage @ 0x1C000AF78 (Bulk_PrepareStage.c)
 * Callees:
 *     TR_IsUrbUsingChainedMdl @ 0x1C0001A90 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002846C (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C002911C (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x1C002F8A4 (WPP_RECORDER_SF_DDDqDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r15
  __int64 v4; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  unsigned int v7; // r12d
  unsigned int v8; // edi
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // esi
  char v12; // r10
  unsigned int v13; // r8d
  int v14; // edx
  int v15; // edx
  unsigned int v16; // edx
  __int64 *v17; // r13
  unsigned int v18; // r9d
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // [rsp+20h] [rbp-88h]
  unsigned int i; // [rsp+B0h] [rbp+8h]
  unsigned int v24; // [rsp+B8h] [rbp+10h]
  int v25; // [rsp+C0h] [rbp+18h]

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
    *((_DWORD *)a1 + 20) = (((unsigned __int64)v5 + 8190) >> 12) + 1;
    if ( TR_IsUrbUsingChainedMdl(*(_QWORD *)(v2 + 32)) )
    {
      v16 = 0;
      v17 = (__int64 *)a1[6];
      for ( i = 0; (_DWORD)v4; v17 = (__int64 *)*v17 )
      {
        v6 = *((_DWORD *)v17 + 10);
        if ( (unsigned int)v4 < v6 )
        {
          v6 = v4;
          LODWORD(v4) = 0;
        }
        else
        {
          LODWORD(v4) = v4 - v6;
        }
        v25 = v4;
        v7 = v6;
        if ( v6 )
        {
          v8 = i;
          do
          {
            v9 = v17[4] + *((unsigned int *)v17 + 11) + (unsigned __int64)(v6 - v7);
            if ( v7 + v8 < v5 )
            {
              v8 = v7;
              v11 = (v7 + (v9 & 0xFFF) + 4095) >> 12;
              v24 = v11;
              v12 = (v7 + (v9 & 0xFFF) + 4095) >> 12;
              v7 = 0;
            }
            else
            {
              v10 = v5 - v8;
              v7 += v8 - v5;
              v8 = 0;
              v11 = v16 + ((v10 + (v9 & 0xFFF) + 4095) >> 12);
              v12 = 0;
              v24 = 0;
            }
            *((_DWORD *)a1 + 21) += v11;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_DDDqDDDDD(
                *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
                v9,
                *((_DWORD *)a1 + 21),
                v22,
                *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
                *(_DWORD *)(v3 + 64),
                v9,
                v11,
                v7,
                v12,
                v8,
                *((_DWORD *)a1 + 21));
            v13 = *(_DWORD *)(v3 + 188);
            if ( v11 >= v13 )
            {
              v14 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
              LOBYTE(v14) = 3;
              WPP_RECORDER_SF_DDDDD(
                *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                v14,
                v13,
                29,
                (__int64)&WPP_67ca0b9ba6d331f4aeeb1b749b99e189_Traceguids,
                *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
                *(_DWORD *)(v3 + 64),
                v11,
                *(_DWORD *)(v3 + 188));
            }
            if ( v11 > *((_DWORD *)a1 + 20) )
            {
              *((_DWORD *)a1 + 20) = v11;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                v15 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL);
                LOBYTE(v15) = 5;
                WPP_RECORDER_SF_DDDD(
                  *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                  v15,
                  13,
                  30,
                  (__int64)&WPP_67ca0b9ba6d331f4aeeb1b749b99e189_Traceguids,
                  *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
                  *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
                  *(_DWORD *)(v3 + 64),
                  v11);
              }
            }
            v16 = v24;
          }
          while ( v7 );
          i = v8;
          LODWORD(v4) = v25;
        }
      }
    }
    else
    {
      *((_DWORD *)a1 + 21) = (v4 + 4095 + (unsigned __int64)((*(_DWORD *)(a1[6] + 32) + *(_DWORD *)(a1[6] + 44)) & 0xFFF)) >> 12;
    }
    ++*((_DWORD *)a1 + 21);
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
