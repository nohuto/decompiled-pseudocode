/*
 * XREFs of RtlpHpSegWalkHeap @ 0x18004DEEC
 * Callers:
 *     RtlpWalkHeapInternal @ 0x18004D354 (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x1800435F4 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegReportBusyBlock @ 0x18004E1C8 (RtlpHpSegReportBusyBlock.c)
 *     RtlpHpVsSubsegmentWalk @ 0x18004E288 (RtlpHpVsSubsegmentWalk.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x18004E850 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpSegReportSegment @ 0x180050ED8 (RtlpHpSegReportSegment.c)
 *     RtlpHpSegReportPageRange @ 0x1800FA0D4 (RtlpHpSegReportPageRange.c)
 */

__int64 __fastcall RtlpHpSegWalkHeap(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  _QWORD *v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  _DWORD v23[4]; // [rsp+30h] [rbp-10h] BYREF
  int v24; // [rsp+78h] [rbp+38h] BYREF
  int v25; // [rsp+88h] [rbp+48h] BYREF

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
    v20 = (_QWORD *)(a1 + 96);
    if ( (_QWORD *)*v20 == v20 )
      return (unsigned int)-2147483622;
    v21 = (_QWORD *)*v20;
LABEL_30:
    RtlpHpSegReportSegment(a2, v21);
    return v4;
  }
  if ( (*(_BYTE *)(a2 + 18) & 2) != 0 )
  {
    v7 = *(_QWORD **)a2;
    if ( a3 )
    {
      v8 = v3 + 64;
      goto LABEL_14;
    }
    v19 = a1 + 96;
LABEL_26:
    if ( *v7 == v19 )
      return (unsigned int)-2147483622;
    v21 = (_QWORD *)*v7;
    goto LABEL_30;
  }
  if ( !a3 )
    return (unsigned int)-2147483622;
  v7 = (_QWORD *)(v3 & 0xFFFFFFFFFFF00000uLL);
  if ( (v3 & 0xFFF) != 0
    || (*(_BYTE *)(32LL * (unsigned int)((v3 - (v3 & 0xFFFFFFFFFFF00000uLL)) >> 12) + (v3 & 0xFFFFFFFFFFF00000uLL) + 0x18) & 8) == 0 )
  {
    v8 = RtlpHpSegDescriptorValidate(0LL, *(_QWORD *)a2);
    v9 = *(_QWORD *)a2;
    v10 = (v8 & 0xFFF00000) + ((unsigned int)((__int64)(v8 - (v8 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
    if ( (*(_BYTE *)(v8 + 24) & 1) != 0 )
      v11 = RtlpHpLfhSubsegmentWalk((int)a1 + 288, v10, v9, (unsigned int)&v25, (__int64)&v24, (__int64)v23);
    else
      v11 = RtlpHpVsSubsegmentWalk((int)a1 + 176, v10, v9, (unsigned int)&v25, (__int64)&v24, (__int64)v23);
    *(_QWORD *)a2 = v11;
    if ( !v11 )
      goto LABEL_13;
    RtlpHpSegReportBusyBlock(a1, a2, v25, v24, v23[0]);
    *(_WORD *)(a2 + 18) |= (*(_BYTE *)(v8 + 24) & 1) << 15;
  }
  else
  {
    v8 = (*(_QWORD *)a2 & 0xFFFFFFFFFFF00000uLL)
       + 32LL * (unsigned int)((*(_QWORD *)a2 - (*(_QWORD *)a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
    while ( 1 )
    {
LABEL_13:
      v8 += 32LL * *(unsigned __int8 *)(v8 + 27);
LABEL_14:
      v13 = v8 & 0xFFFFFFFFFFF00000uLL;
      v14 = (__int64)(v8 - (v8 & 0xFFFFFFFFFFF00000uLL)) >> 5;
      if ( (unsigned int)v14 >= 0x100 )
      {
        v19 = a1 + 96;
        goto LABEL_26;
      }
      if ( (*(_BYTE *)(v8 + 24) & 4) == 0 || (*(_BYTE *)(v8 + 24) & 0x10) != 0 )
      {
        *(_QWORD *)a2 = (v8 & 0xFFFFFFFFFFF00000uLL)
                      + ((unsigned int)((__int64)(v8 - (v8 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
        *(_WORD *)(a2 + 18) = 4096;
        *(_QWORD *)(a2 + 8) = *(unsigned __int8 *)(v8 + 27) << 12;
        *(_WORD *)(a2 + 16) = 0;
        return v4;
      }
      v15 = (_DWORD)v14 << 12;
      v16 = v13 + v15;
      if ( (*(_BYTE *)(v8 + 24) & 0x21) == 0 )
        break;
      v17 = v13 + v15;
      if ( (*(_BYTE *)(v8 + 24) & 1) != 0 )
      {
        v18 = RtlpHpLfhSubsegmentWalk((int)a1 + 288, v16, v17, (unsigned int)&v25, (__int64)&v24, (__int64)v23);
        *(_QWORD *)a2 = v18;
        if ( v18 )
        {
          RtlpHpSegReportBusyBlock(a1, a2, v25, v24, v23[0]);
          *(_WORD *)(a2 + 18) |= 0x8000u;
          return v4;
        }
      }
      else
      {
        v22 = RtlpHpVsSubsegmentWalk((int)a1 + 176, v16, v17, (unsigned int)&v25, (__int64)&v24, (__int64)v23);
        *(_QWORD *)a2 = v22;
        if ( v22 )
        {
          RtlpHpSegReportBusyBlock(a1, a2, v25, v24, v23[0]);
          return v4;
        }
      }
    }
    *(_QWORD *)a2 = v16;
    RtlpHpSegReportPageRange(a1, a2);
  }
  return v4;
}
