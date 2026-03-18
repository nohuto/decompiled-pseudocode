/*
 * XREFs of itrp_IF @ 0x1C00CBF90
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

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2 )
  {
    qword_1C03294C8 -= 4LL;
    if ( !*(_DWORD *)qword_1C03294C8 )
    {
      v1 = 1;
      while ( 1 )
      {
        v2 = a1 == (unsigned __int8 *)qword_1C0329538;
        if ( (unsigned __int64)a1 >= qword_1C0329538 )
          break;
        if ( (unsigned __int64)a1 < qword_1C0329540 || (unsigned __int64)(a1 + 1) > qword_1C0329538 || a1 + 1 < a1 )
        {
LABEL_36:
          dword_1C0329530 = 4381;
          return qword_1C0329538;
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
              v2 = a1 == (unsigned __int8 *)qword_1C0329538;
              goto LABEL_17;
            }
            break;
          default:
            v4 = byte_1C02E9060[v3];
            if ( byte_1C02E9060[v3] )
            {
              if ( v4 == 21 )
              {
                if ( (unsigned __int64)a1 < qword_1C0329540
                  || (unsigned __int64)(a1 + 1) > qword_1C0329538
                  || a1 + 1 < a1 )
                {
                  goto LABEL_36;
                }
                v4 = *a1 + 1;
              }
              else if ( v4 == 22 )
              {
                if ( (unsigned __int64)a1 < qword_1C0329540
                  || (unsigned __int64)(a1 + 1) > qword_1C0329538
                  || a1 + 1 < a1 )
                {
                  goto LABEL_36;
                }
                v4 = 2 * *a1 + 1;
              }
              a1 += v4;
              if ( (unsigned __int64)a1 < qword_1C0329540 )
              {
                dword_1C0329530 = 4363;
                return qword_1C0329538;
              }
              if ( (unsigned __int64)a1 > qword_1C0329538 )
                return qword_1C0329538;
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
          dword_1C0329530 = 4357;
      }
    }
    return (__int64)a1;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
