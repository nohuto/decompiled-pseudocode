/*
 * XREFs of itrp_IF @ 0x1C00C4EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_IF(unsigned __int8 *a1)
{
  int v1; // r9d
  bool v2; // zf
  __int64 v3; // rdx
  int v4; // eax
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2 )
  {
    qword_1C0323E18 -= 4LL;
    if ( !*(_DWORD *)qword_1C0323E18 )
    {
      v1 = 1;
      while ( 1 )
      {
        v2 = a1 == (unsigned __int8 *)qword_1C0323E88;
        if ( (unsigned __int64)a1 >= qword_1C0323E88 )
          break;
        if ( (unsigned __int64)a1 < qword_1C0323E90 || (unsigned __int64)(a1 + 1) > qword_1C0323E88 || a1 + 1 < a1 )
        {
LABEL_36:
          dword_1C0323E80 = 4381;
          return qword_1C0323E88;
        }
        v3 = *a1++;
        switch ( (_DWORD)v3 )
        {
          case 0x59:
            --v1;
            break;
          case 0x58:
            ++v1;
            break;
          case 0x1B:
            if ( v1 == 1 )
            {
LABEL_16:
              v2 = a1 == (unsigned __int8 *)qword_1C0323E88;
              goto LABEL_17;
            }
            break;
          default:
            v4 = byte_1C02E1DB0[v3];
            if ( byte_1C02E1DB0[v3] )
            {
              if ( v4 == 21 )
              {
                if ( (unsigned __int64)a1 < qword_1C0323E90
                  || (unsigned __int64)(a1 + 1) > qword_1C0323E88
                  || a1 + 1 < a1 )
                {
                  goto LABEL_36;
                }
                v4 = *a1 + 1;
              }
              else if ( v4 == 22 )
              {
                if ( (unsigned __int64)a1 < qword_1C0323E90
                  || (unsigned __int64)(a1 + 1) > qword_1C0323E88
                  || a1 + 1 < a1 )
                {
                  goto LABEL_36;
                }
                v4 = 2 * *a1 + 1;
              }
              a1 += v4;
              if ( (unsigned __int64)a1 < qword_1C0323E90 )
              {
                dword_1C0323E80 = 4363;
                return qword_1C0323E88;
              }
              if ( (unsigned __int64)a1 > qword_1C0323E88 )
                return qword_1C0323E88;
            }
            break;
        }
        if ( !v1 )
          goto LABEL_16;
      }
LABEL_17:
      if ( v2 )
      {
        if ( v1 )
          dword_1C0323E80 = 4357;
      }
    }
    return (__int64)a1;
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
  }
  return result;
}
