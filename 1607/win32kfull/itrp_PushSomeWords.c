/*
 * XREFs of itrp_PushSomeWords @ 0x1C00C7C34
 * Callers:
 *     itrp_PUSHW @ 0x1C00C7C20 (itrp_PUSHW.c)
 *     itrp_NPUSHW @ 0x1C0111FC0 (itrp_NPUSHW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_PushSomeWords(unsigned int a1, unsigned __int8 *a2)
{
  _DWORD *v2; // r11
  unsigned int v4; // r10d
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int16 v7; // dx
  __int16 v8; // ax

  v2 = (_DWORD *)qword_1C03294C8;
  v4 = a1;
  v5 = *(_QWORD *)(qword_1C03294E0 + 424);
  if ( (qword_1C03294E0 ^ v5 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330]) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (int)a1 > (unsigned __int64)((v5 - qword_1C03294C8) >> 2) )
  {
    dword_1C0329530 = 4369;
    return qword_1C0329538;
  }
  if ( a1 > 0x3FFFFFFE )
  {
    dword_1C0329530 = 4381;
    return qword_1C0329538;
  }
  if ( (unsigned __int64)a2 < qword_1C0329540
    || (v6 = (unsigned __int64)&a2[2 * a1], v6 > qword_1C0329538)
    || v6 < (unsigned __int64)a2 )
  {
    dword_1C0329530 = 4381;
    return qword_1C0329538;
  }
  else
  {
    if ( a1 )
    {
      do
      {
        v7 = *a2 << 8;
        v8 = a2[1];
        a2 += 2;
        *v2++ = (__int16)(v7 + v8);
        --v4;
      }
      while ( v4 );
    }
    qword_1C03294C8 = (__int64)v2;
    return (__int64)a2;
  }
}
