/*
 * XREFs of RaspScanConvert @ 0x140128500
 * Callers:
 *     RaspRasterize @ 0x1401294D0 (RaspRasterize.c)
 * Callees:
 *     RaspTestIntersection @ 0x140128920 (RaspTestIntersection.c)
 *     BgpFmRoundUp @ 0x140128CD8 (BgpFmRoundUp.c)
 *     BgpFmRoundDefault @ 0x140128CF0 (BgpFmRoundDefault.c)
 *     RaspRectangleCreate @ 0x140128D08 (RaspRectangleCreate.c)
 *     BgpGxInitializeRectangle @ 0x140128D7C (BgpGxInitializeRectangle.c)
 *     RaspCreateSegmentList @ 0x1401295C8 (RaspCreateSegmentList.c)
 *     RaspDestroySegmentList @ 0x140129980 (RaspDestroySegmentList.c)
 *     RaspAllocateMemory @ 0x140129A3C (RaspAllocateMemory.c)
 *     RaspFreeMemory @ 0x140129BE8 (RaspFreeMemory.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RaspScanConvert(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 **a6,
        _DWORD *a7,
        __int64 a8)
{
  unsigned int v8; // r13d
  bool v11; // bp
  __int64 v12; // r12
  __int64 v13; // rdx
  int SegmentList; // ebx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r14d
  __int64 v18; // rdx
  unsigned int v19; // r9d
  int v20; // edi
  int v21; // r9d
  int v22; // r10d
  int v23; // r15d
  int v24; // r11d
  int v25; // eax
  __int64 *v26; // rsi
  __int64 *Memory; // r14
  int v28; // ebp
  unsigned int v29; // ebx
  __int64 v30; // rsi
  size_t v31; // rcx
  __int64 v32; // rbp
  _BYTE *v33; // rbx
  signed int v34; // r9d
  int v35; // edx
  _BYTE *v36; // r8
  __int64 i; // rax
  __int64 *v38; // rcx
  int v40; // r8d
  int v41; // edx
  int v42; // r10d
  unsigned int v43; // r8d
  __int64 v44; // rcx
  signed int v45; // r11d
  signed int v46; // edx
  int v47; // [rsp+30h] [rbp-68h]
  signed int v48; // [rsp+34h] [rbp-64h] BYREF
  signed int v49; // [rsp+38h] [rbp-60h] BYREF
  int v50; // [rsp+3Ch] [rbp-5Ch]
  __int64 v51; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v52; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v53[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v54; // [rsp+A0h] [rbp+8h] BYREF
  int v55; // [rsp+B0h] [rbp+18h]
  int v56; // [rsp+B8h] [rbp+20h]

  v56 = a4;
  v55 = a3;
  v8 = 0;
  v52 = 0LL;
  v51 = 0LL;
  v11 = (a5 & 1) != 0;
  v12 = a8;
  SegmentList = RaspCreateSegmentList(a1, a2, *(unsigned __int16 *)(a1 + 24), (unsigned int)&v51, (__int64)&v54, a8);
  if ( SegmentList < 0 )
    goto LABEL_28;
  v15 = BgpFmRoundUp(*(unsigned int *)(a1 + 14), v13);
  v16 = *(unsigned int *)(a1 + 6);
  v17 = v15;
  v56 = v15;
  if ( v15 == (unsigned int)BgpFmRoundUp(v16, v18) )
  {
    v56 = BgpFmRoundDefault(*(unsigned int *)(17LL * (v19 + 1) + a2 + 4));
    v17 = v56;
  }
  v20 = 4
      * BgpFmRoundDefault((unsigned int)(*(_DWORD *)(17LL * (v19 + 1) + a2)
                                       + *(_DWORD *)(17LL * (v19 + 1) + a2 + 8)
                                       - *(_DWORD *)(17LL * v19 + a2)
                                       - *(_DWORD *)(17LL * v19 + a2 + 8)));
  v23 = v21 + v22;
  v50 = v20;
  v55 = 4 * v24;
  v53[1] = 4 * v24;
  v53[0] = v20;
  v53[2] = v20;
  if ( v11 )
  {
    v26 = qword_140775840;
    v52 = qword_140775840;
    SegmentList = BgpGxInitializeRectangle(v53, 1LL, qword_140775840, 3140LL);
    if ( SegmentList < 0 )
      goto LABEL_28;
  }
  else
  {
    v25 = RaspRectangleCreate(v53, 1LL, &v52, v12);
    v26 = v52;
    SegmentList = v25;
  }
  if ( SegmentList >= 0 )
  {
    memset((void *)v26[3], 0, *((unsigned int *)v26 + 3));
    if ( !v51 )
    {
      *a6 = v26;
      *a7 = v17;
      return 0LL;
    }
    if ( v11 )
    {
      if ( v20 <= 104 )
      {
        Memory = qword_1407756A0;
LABEL_10:
        v28 = v55;
        v29 = 0;
        a5 = 0;
        v30 = v20;
        if ( v55 <= 0 )
          goto LABEL_25;
        v31 = 4LL * v20;
        v47 = v56 << 6;
        while ( 1 )
        {
          memset(Memory, 0, v31);
          if ( v54 )
            break;
LABEL_17:
          v35 = 128 >> (v29 & 7);
          v36 = (_BYTE *)(v52[3] + ((unsigned __int64)v29 >> 3));
          for ( i = 0LL; i < v30; ++i )
          {
            if ( *((_DWORD *)Memory + i) )
              *v36 |= v35;
            LOBYTE(v35) = (unsigned __int8)v35 >> 1;
            if ( !(_BYTE)v35 )
            {
              LOBYTE(v35) = 0x80;
              ++v36;
            }
          }
          v29 += v20;
          v31 = 4 * v30;
          ++v8;
          a5 = v29;
          if ( (int)v8 >= v28 )
          {
            v12 = a8;
LABEL_25:
            SegmentList = 0;
            *a6 = v52;
            *a7 = v56;
            if ( Memory != qword_1407756A0 )
            {
              v38 = Memory;
              goto LABEL_27;
            }
            goto LABEL_28;
          }
        }
        v32 = v54;
        v33 = (_BYTE *)(v51 + 16);
        while ( 1 )
        {
          RaspTestIntersection(v33 - 16, v47 + -16 * (v8 % 4) - ((v8 / 4) << 6), &v48, &v49);
          v34 = v48;
          if ( v48 != 0x7FFFFFFF )
            break;
LABEL_15:
          v33 += 25;
          if ( !--v32 )
          {
            v29 = a5;
            v20 = v50;
            v28 = v55;
            goto LABEL_17;
          }
        }
        v40 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
        v41 = v40
            + *(_DWORD *)(*(_QWORD *)v33 + 4LL)
            - *(_DWORD *)(*((_QWORD *)v33 - 2) + 12LL)
            - *(_DWORD *)(*((_QWORD *)v33 - 2) + 4LL);
        if ( !v41 )
        {
          if ( v33[8] == 1 )
            goto LABEL_50;
          v41 = v40
              + *(_DWORD *)(*(_QWORD *)v33 + 4LL)
              - *(_DWORD *)(*((_QWORD *)v33 - 1) + 12LL)
              - *(_DWORD *)(*((_QWORD *)v33 - 1) + 4LL);
        }
        if ( v41 > 0 )
        {
          v42 = 1;
LABEL_34:
          v43 = 0;
          v44 = 0LL;
          if ( v30 <= 0 )
            goto LABEL_15;
          v45 = v49;
          while ( 1 )
          {
            v46 = v23 + ((v43 / 4) << 6) + 16 * (v43 % 4);
            if ( v33[8] == 1 )
              break;
            if ( v45 != 0x7FFFFFFF )
            {
              if ( v46 < v34 || v46 > v45 )
                goto LABEL_40;
LABEL_39:
              *((_DWORD *)Memory + v44) += v42;
              goto LABEL_40;
            }
            if ( v46 <= v34 )
              goto LABEL_39;
LABEL_40:
            ++v43;
            if ( ++v44 >= v30 )
              goto LABEL_15;
          }
          if ( v46 > v34 )
            goto LABEL_40;
          goto LABEL_39;
        }
        if ( v41 < 0 )
        {
          v42 = -1;
          goto LABEL_34;
        }
LABEL_50:
        v42 = 0;
        goto LABEL_34;
      }
    }
    else
    {
      Memory = (__int64 *)RaspAllocateMemory(4LL * v20);
      if ( Memory )
        goto LABEL_10;
    }
    SegmentList = -1073741670;
  }
  if ( v26 )
  {
    v38 = v26;
LABEL_27:
    RaspFreeMemory(v38, v12);
  }
LABEL_28:
  if ( v51 )
    RaspDestroySegmentList(v51, v54, v12);
  return (unsigned int)SegmentList;
}
