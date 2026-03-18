/*
 * XREFs of itrp_NPUSHB @ 0x1C00CA5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_NPUSHB(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rdx
  unsigned __int64 v2; // r11
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  int v6; // eax

  if ( (unsigned __int64)a1 >= qword_1C0329540 )
  {
    v1 = a1 + 1;
    if ( (unsigned __int64)(a1 + 1) <= qword_1C0329538 && v1 >= a1 )
    {
      v2 = *a1;
      v3 = (_DWORD *)qword_1C03294C8;
      v4 = *(_QWORD *)(qword_1C03294E0 + 424);
      if ( (qword_1C03294E0 ^ v4 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C03294E0 + 432)
        && v2 <= (v4 - qword_1C03294C8) >> 2 )
      {
        if ( (unsigned __int64)v1 >= qword_1C0329540 )
        {
          v5 = (unsigned __int64)&v1[*a1];
          if ( v5 <= qword_1C0329538 && v5 >= (unsigned __int64)v1 )
          {
            if ( *a1 )
            {
              do
              {
                v6 = *v1++;
                *v3++ = v6;
                LODWORD(v2) = v2 - 1;
              }
              while ( (_DWORD)v2 );
            }
            qword_1C03294C8 = (__int64)v3;
            return (__int64)v1;
          }
        }
        dword_1C0329530 = 4381;
      }
      else
      {
        dword_1C0329530 = 4369;
      }
      return qword_1C0329538;
    }
  }
  dword_1C0329530 = 4381;
  return qword_1C0329538;
}
