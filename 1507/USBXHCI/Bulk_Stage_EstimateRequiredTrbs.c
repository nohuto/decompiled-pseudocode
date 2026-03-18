/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x1C002BDE8
 * Callers:
 *     Bulk_PrepareStage @ 0x1C002A83C (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C001F854 (WPP_RECORDER_SF_DDDD.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C00208A0 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0020C3C (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x1C002DBB4 (WPP_RECORDER_SF_DDDqDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  unsigned int v1; // r11d
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v6; // r13d
  __int64 *v7; // r12
  unsigned int v8; // edx
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  unsigned int v11; // edi
  unsigned __int64 v12; // r8
  char v13; // r10
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // r9d
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-88h]
  unsigned int v22; // [rsp+B0h] [rbp+8h]
  unsigned int v23; // [rsp+B8h] [rbp+10h]
  int v24; // [rsp+C0h] [rbp+18h]

  v1 = 0;
  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 40);
  if ( *(_DWORD *)(v3 + 60) <= 2u )
  {
    *((_DWORD *)a1 + 21) = 2;
    *((_DWORD *)a1 + 20) = 2;
    goto LABEL_29;
  }
  v5 = *((unsigned int *)a1 + 10);
  v6 = *(_DWORD *)(*(_QWORD *)(v4 + 56) + 152LL);
  if ( v6 > (unsigned int)v5 )
    v6 = *((_DWORD *)a1 + 10);
  *((_DWORD *)a1 + 20) = (((unsigned __int64)v6 + 8190) >> 12) + 1;
  if ( TR_IsUrbUsingChainedMdl(*(_QWORD *)(v3 + 32)) )
  {
    v7 = (__int64 *)a1[6];
    v8 = v1;
    v22 = v1;
    while ( 1 )
    {
      if ( !(_DWORD)v5 )
        goto LABEL_27;
      v9 = *((_DWORD *)v7 + 10);
      if ( (unsigned int)v5 < v9 )
      {
        v9 = v5;
        LODWORD(v5) = v1;
      }
      else
      {
        LODWORD(v5) = v5 - v9;
      }
      v24 = v5;
      v10 = v9;
      if ( v9 )
        break;
LABEL_25:
      v7 = (__int64 *)*v7;
    }
    v11 = v22;
    while ( 1 )
    {
      v12 = v7[4] + *((unsigned int *)v7 + 11) + (unsigned __int64)(v9 - v10);
      if ( v10 + v11 < v6 )
      {
        v15 = v10;
        v11 = v10;
        v10 = v1;
        v14 = (v15 + (v12 & 0xFFF) + 4095) >> 12;
        v23 = v14;
        v13 = (v15 + (v12 & 0xFFF) + 4095) >> 12;
      }
      else
      {
        v23 = v1;
        v13 = v1;
        v14 = v8 + (((v12 & 0xFFF) + v6 - v11 + 4095LL) >> 12);
        v10 += v11 - v6;
        v11 = v1;
      }
      *((_DWORD *)a1 + 21) += v14;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v1 )
        WPP_RECORDER_SF_DDDqDDDDD(
          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
          v12,
          *((_DWORD *)a1 + 21),
          v21,
          *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
          *(_DWORD *)(v4 + 64),
          v12,
          v14,
          v10,
          v13,
          v11,
          *((_DWORD *)a1 + 21));
      v16 = *(unsigned int *)(v4 + 188);
      if ( v14 >= (unsigned int)v16 )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
          3u,
          v16,
          0x1Du,
          (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids);
      if ( v14 <= *((_DWORD *)a1 + 20) )
        goto LABEL_22;
      *((_DWORD *)a1 + 20) = v14;
      v1 = 0;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        break;
LABEL_23:
      v8 = v23;
      if ( !v10 )
      {
        v22 = v11;
        LODWORD(v5) = v24;
        goto LABEL_25;
      }
    }
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
      5u,
      0xDu,
      0x1Eu,
      (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids);
LABEL_22:
    v1 = 0;
    goto LABEL_23;
  }
  *((_DWORD *)a1 + 21) = (v5 + 4095 + (unsigned __int64)((*(_DWORD *)(a1[6] + 32) + *(_DWORD *)(a1[6] + 44)) & 0xFFF)) >> 12;
LABEL_27:
  ++*((_DWORD *)a1 + 21);
LABEL_29:
  v17 = *((_DWORD *)a1 + 10);
  result = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 232LL);
  if ( (result & 0x400000000LL) != 0 )
  {
    v19 = *(_QWORD *)(v4 + 48);
    if ( *(_DWORD *)(v19 + 40) != v1 )
    {
      v20 = *(_QWORD *)(v4 + 56);
      if ( *(char *)(v20 + 98) < 0 && *(_DWORD *)(v19 + 20) <= 1u )
      {
        result = v17 / (*(_WORD *)(v20 + 100) & 0x7FFu);
        if ( v17 % (*(_WORD *)(v20 + 100) & 0x7FFu) )
        {
          ++*((_DWORD *)a1 + 20);
          ++*((_DWORD *)a1 + 21);
        }
      }
    }
  }
  return result;
}
