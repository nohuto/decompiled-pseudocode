/*
 * XREFs of HT_HalftoneBitmap @ 0x1401449FC
 * Callers:
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 * Callees:
 *     AAHalftoneBitmap @ 0x140141E5C (AAHalftoneBitmap.c)
 *     SanityCheckDimension @ 0x140144DB0 (SanityCheckDimension.c)
 *     pDCIAdjClr @ 0x140144E04 (pDCIAdjClr.c)
 *     CheckABInfo @ 0x140296484 (CheckABInfo.c)
 */

__int64 __fastcall HT_HalftoneBitmap(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int16 *a6)
{
  __int64 v6; // r14
  __int64 v8; // r15
  __int16 v9; // si
  __int16 v10; // r12
  unsigned __int16 v11; // r13
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // r14
  char *v15; // rbx
  char *v16; // r15
  __int64 result; // rax
  __int64 v18; // rax
  PVOID v19; // rax
  _WORD v20[2]; // [rsp+40h] [rbp-28h] BYREF
  __int16 v21; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-20h] BYREF
  int v23; // [rsp+4Ch] [rbp-1Ch]
  int v24; // [rsp+50h] [rbp-18h]
  PVOID pv; // [rsp+58h] [rbp-10h] BYREF
  int v28; // [rsp+C0h] [rbp+58h]
  char v30; // [rsp+D8h] [rbp+70h]

  v6 = *(unsigned __int8 *)(a3 + 10);
  v8 = a3;
  pv = 0LL;
  v9 = 0;
  v22 = 0;
  v10 = *a6;
  v11 = 0;
  v12 = *(unsigned __int8 *)(a5 + 10);
  v24 = v6;
  v30 = v12;
  v21 = 0;
  v20[0] = 0;
  v23 = 0;
  if ( (_DWORD)v6 == 1 || (unsigned int)(v6 - 2) < 2 )
  {
    v18 = *(_QWORD *)(a3 + 32);
    v11 = 1 << byte_140361924[v6];
    if ( !v18 )
      return 4294967278LL;
    v23 = *(_DWORD *)(v18 + 8);
    if ( !v23 )
      return 4294967278LL;
    v8 = a3;
  }
  if ( !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 4), *((unsigned int *)a6 + 6))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 5), *((unsigned int *)a6 + 7))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 8), *((unsigned int *)a6 + 10))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 9), *((unsigned int *)a6 + 11))
    || (*(_BYTE *)a6 & 1) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 12), *((unsigned int *)a6 + 14))
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 13), *((unsigned int *)a6 + 15)))
    || (*(_BYTE *)a6 & 0x10) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 16), *((unsigned int *)a6 + 18))
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)a6 + 17), *((unsigned int *)a6 + 19))) )
  {
    return 4294967294LL;
  }
  if ( (v10 & 0x200) != 0 )
  {
    result = CheckABInfo((_DWORD)a6, v6, v12, (unsigned int)&v21, (__int64)v20);
    v22 = result;
    if ( (int)result <= 0 )
      return result;
    v9 = v21;
  }
  BYTE2(v28) = *((_BYTE *)a6 + 3);
  LOWORD(v28) = 1024;
  HIBYTE(v28) = v12;
  if ( (v10 & 2) != 0 )
    v9 |= 4u;
  if ( (v10 & 4) != 0 )
    v9 |= 2u;
  if ( (v10 & 0x20) != 0 || (_BYTE)v12 == 1 )
    v9 |= 1u;
  if ( (v10 & 0x80u) != 0 )
    v9 |= 8u;
  if ( (v10 & 0x100) != 0 )
    v9 |= 0x20u;
  v13 = pDCIAdjClr(a1, a2, (unsigned int)&pv, 4 * (v11 + (unsigned int)v20[0]) + 688, v9, v28, (__int64)&v22);
  v14 = v13;
  if ( v13 )
  {
    v15 = (char *)pv + 312;
    *((_QWORD *)pv + 39) = v13;
    *((_QWORD *)v15 + 1) = pv;
    *((_QWORD *)v15 + 4) = a4;
    *((_QWORD *)v15 + 5) = a5;
    *((_QWORD *)v15 + 3) = v8;
    v16 = v15 + 688;
    *((_QWORD *)v15 + 6) = v15 + 88;
    *((_QWORD *)v15 + 2) = a6;
    if ( v11 )
    {
      *((_WORD *)v15 + 49) = v23;
      *((_QWORD *)v15 + 22) = v16;
      v16 += 4 * v11;
    }
    if ( (v9 & 0x80u) != 0 )
    {
      if ( !*(_QWORD *)(v13 + 7064) )
      {
        v19 = EngAllocMem(1u, 0xB00u, 0x35345448u);
        *(_QWORD *)(v14 + 7064) = v19;
        if ( !v19 )
        {
          EngReleaseSemaphore(*(HSEMAPHORE *)(v14 + 8));
          return 4294967294LL;
        }
      }
      if ( (v9 & 0x100) != 0 )
      {
        *(_WORD *)(v14 + 7056) = *(_WORD *)(v14 + 7058);
        *(_WORD *)(v14 + 7058) = *(unsigned __int8 *)(*((_QWORD *)a6 + 1) + 1LL);
      }
      if ( v20[0] )
      {
        *((_QWORD *)v15 + 33) = v16;
        *((_WORD *)v15 + 93) = *(_WORD *)(*((_QWORD *)a6 + 1) + 2LL);
      }
    }
    v15[161] = v24;
    v15[249] = v30;
    if ( (v10 & 0x40) != 0 )
      *((_QWORD *)v15 + 4) = 0LL;
    v22 = AAHalftoneBitmap((__int64 *)v15);
    EngFreeMem(pv);
  }
  return v22;
}
