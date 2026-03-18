/*
 * XREFs of itrp_FLIPPT @ 0x1C02DCE80
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_FLIPPT(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rsi
  int *v4; // r14
  int v5; // r15d
  __int64 v6; // r12
  _WORD *v7; // r9
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ebp
  int v13; // edi
  __int16 v14; // cx
  __int64 result; // rax

  v1 = qword_1C0323E30;
  v2 = LocalGS;
  v4 = (int *)qword_1C0323E18;
  v5 = dword_1C0323E50;
  v6 = *(_QWORD *)(LocalGS + 48);
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && dword_1C0323E50 + 1LL <= (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) )
  {
    if ( dword_1C0323E50 >= 0 )
    {
      while ( 1 )
      {
        v7 = *(_WORD **)(v1 + 344);
        --v4;
        v8 = v7[4];
        v9 = v7[6];
        v10 = *v4;
        v11 = v8;
        if ( v8 <= v9 )
          v11 = v9;
        if ( v11 <= 1 )
        {
          v12 = 1;
        }
        else if ( v8 <= v9 )
        {
          v12 = v9;
        }
        else
        {
          v12 = v8;
        }
        if ( qword_1C0323E28 == v2 )
        {
          if ( (int)v10 >= (unsigned __int16)v7[8] || (int)v10 < 0 )
            goto LABEL_24;
          v13 = 0;
        }
        else
        {
          if ( (int)v10 >= *(_DWORD *)(v1 + 440) || (int)v10 < 0 )
          {
LABEL_24:
            dword_1C0323E80 = 4370;
            return qword_1C0323E88;
          }
          v13 = 4;
        }
        if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2) )
          goto LABEL_24;
        v14 = *(_WORD *)(v2 + 80);
        if ( v14 >= 1 && v14 <= v12 && (int)v10 >= *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * v14 - 2) + v13 + 1 )
          goto LABEL_24;
        *(_BYTE *)(v10 + v6) ^= 1u;
        if ( --v5 < 0 )
          break;
        v1 = qword_1C0323E30;
        v2 = LocalGS;
      }
    }
    dword_1C0323E50 = 0;
    result = a1;
    qword_1C0323E18 = (__int64)v4;
  }
  else
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  return result;
}
