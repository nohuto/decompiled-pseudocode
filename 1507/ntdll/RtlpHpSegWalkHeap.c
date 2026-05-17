/*
 * XREFs of RtlpHpSegWalkHeap @ 0x1800F1664
 * Callers:
 *     RtlpWalkHeapInternal @ 0x1800DB648 (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x1800373EC (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegReportBusyBlock @ 0x1800F144C (RtlpHpSegReportBusyBlock.c)
 *     RtlpHpSegReportPageRange @ 0x1800F1554 (RtlpHpSegReportPageRange.c)
 *     RtlpHpSegReportSegment @ 0x1800F15CC (RtlpHpSegReportSegment.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800F3508 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpVsSubsegmentWalk @ 0x1800F376C (RtlpHpVsSubsegmentWalk.c)
 */

__int64 __fastcall RtlpHpSegWalkHeap(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // edi
  __int64 *v7; // rdx
  __int64 v8; // rdx
  __int64 *v9; // r15
  unsigned __int64 i; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  int v23[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+48h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0;
  if ( !*(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = a1;
    *(_QWORD *)(a2 + 8) = 4096LL;
    *(_WORD *)(a2 + 18) = -32766;
    *(_BYTE *)(a2 + 17) = 0;
    *(_QWORD *)(a2 + 24) = 4096LL;
    *(_QWORD *)(a2 + 32) = a1;
    *(_QWORD *)(a2 + 40) = a1;
    return v4;
  }
  if ( v3 == a1 )
  {
    v7 = (__int64 *)(a1 + 96);
    if ( (__int64 *)*v7 != v7 )
    {
      v8 = *v7;
LABEL_6:
      RtlpHpSegReportSegment(a2, v8);
      return v4;
    }
    return (unsigned int)-2147483622;
  }
  if ( (*(_BYTE *)(a2 + 18) & 2) != 0 )
  {
    v9 = *(__int64 **)a2;
    if ( a3 )
    {
      for ( i = v3 + 64; ; i += 32LL * *(unsigned __int8 *)(i + 27) )
      {
        v12 = i & 0xFFFFFFFFFFF00000uLL;
        v13 = (__int64)(i - (i & 0xFFFFFFFFFFF00000uLL)) >> 5;
        if ( (unsigned int)v13 >= 0x100 )
          break;
        if ( (*(_BYTE *)(i + 24) & 4) == 0 || (*(_BYTE *)(i + 24) & 0x10) != 0 )
        {
          *(_QWORD *)a2 = (i & 0xFFFFFFFFFFF00000uLL)
                        + ((unsigned int)((__int64)(i - (i & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
          *(_WORD *)(a2 + 18) = 4096;
          *(_QWORD *)(a2 + 8) = *(unsigned __int8 *)(i + 27) << 12;
          *(_WORD *)(a2 + 16) = 0;
          return v4;
        }
        v14 = (_DWORD)v13 << 12;
        v15 = v12 + v14;
        if ( (*(_BYTE *)(i + 24) & 0x21) == 0 )
        {
          *(_QWORD *)a2 = v15;
          RtlpHpSegReportPageRange(a1, (unsigned __int64 *)a2);
          return v4;
        }
        v16 = v12 + v14;
        if ( (*(_BYTE *)(i + 24) & 1) != 0 )
        {
          v17 = RtlpHpLfhSubsegmentWalk((int)a1 + 288, v15, v16, (unsigned int)&v25, (__int64)&v24, (__int64)v23);
          *(_QWORD *)a2 = v17;
          if ( v17 )
          {
            RtlpHpSegReportBusyBlock(a1, a2, v25, v24, v23[0]);
            *(_WORD *)(a2 + 18) |= 0x8000u;
            return v4;
          }
        }
        else
        {
          v21 = RtlpHpVsSubsegmentWalk((int)a1 + 176, v15, v16, (unsigned int)&v25, (__int64)&v24, (__int64)v23);
          *(_QWORD *)a2 = v21;
          if ( v21 )
          {
            RtlpHpSegReportBusyBlock(a1, a2, v25, v24, v23[0]);
            return v4;
          }
        }
LABEL_15:
        ;
      }
      v11 = a1 + 96;
    }
    else
    {
      v11 = a1 + 96;
    }
    if ( *v9 != v11 )
    {
      v8 = *v9;
      goto LABEL_6;
    }
    return (unsigned int)-2147483622;
  }
  if ( !a3 )
    return (unsigned int)-2147483622;
  v9 = (__int64 *)(v3 & 0xFFFFFFFFFFF00000uLL);
  if ( (v3 & 0xFFF) == 0
    && (*(_BYTE *)(32LL * (unsigned int)((v3 - (v3 & 0xFFFFFFFFFFF00000uLL)) >> 12) + (v3 & 0xFFFFFFFFFFF00000uLL) + 0x18) & 8) != 0 )
  {
    i = (*(_QWORD *)a2 & 0xFFFFFFFFFFF00000uLL)
      + 32LL * (unsigned int)((*(_QWORD *)a2 - (*(_QWORD *)a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
    goto LABEL_15;
  }
  i = RtlpHpSegDescriptorValidate(0LL, *(_QWORD *)a2);
  v18 = *(_QWORD *)a2;
  v19 = (i & 0xFFF00000) + ((unsigned int)((__int64)(i - (i & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  if ( (*(_BYTE *)(i + 24) & 1) != 0 )
    v20 = RtlpHpLfhSubsegmentWalk((int)a1 + 288, v19, v18, (unsigned int)&v25, (__int64)&v24, (__int64)v23);
  else
    v20 = RtlpHpVsSubsegmentWalk((int)a1 + 176, v19, v18, (unsigned int)&v25, (__int64)&v24, (__int64)v23);
  *(_QWORD *)a2 = v20;
  if ( !v20 )
    goto LABEL_15;
  RtlpHpSegReportBusyBlock(a1, a2, v25, v24, v23[0]);
  *(_WORD *)(a2 + 18) |= (*(_BYTE *)(i + 24) & 1) << 15;
  return v4;
}
