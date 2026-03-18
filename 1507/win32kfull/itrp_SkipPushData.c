/*
 * XREFs of itrp_SkipPushData @ 0x1C02DDA04
 * Callers:
 *     itrp_IDEF @ 0x1C02DCC90 (itrp_IDEF.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall itrp_SkipPushData(unsigned __int8 *a1)
{
  __int64 v1; // rdx
  unsigned __int8 *v2; // rax
  int v3; // eax

  v1 = qword_1C03231B8;
  v2 = a1 - 1;
  if ( (unsigned __int64)(a1 - 1) < qword_1C03231C0 || (unsigned __int64)a1 > qword_1C03231B8 || a1 < v2 )
    goto LABEL_19;
  _mm_lfence();
  v3 = byte_1C02E2640[*v2];
  if ( !v3 )
    return a1;
  v1 = qword_1C03231B8;
  if ( v3 == 21 )
  {
    if ( (unsigned __int64)a1 >= qword_1C03231C0 && (unsigned __int64)(a1 + 1) <= qword_1C03231B8 && a1 + 1 >= a1 )
    {
      v3 = *a1 + 1;
      goto LABEL_15;
    }
LABEL_19:
    dword_1C03231B0 = 4381;
    return (unsigned __int8 *)v1;
  }
  if ( v3 == 22 )
  {
    if ( (unsigned __int64)a1 < qword_1C03231C0 || (unsigned __int64)(a1 + 1) > qword_1C03231B8 || a1 + 1 < a1 )
      goto LABEL_19;
    v3 = 2 * *a1 + 1;
  }
LABEL_15:
  a1 += v3;
  if ( (unsigned __int64)a1 >= qword_1C03231C0 )
  {
    if ( (unsigned __int64)a1 > qword_1C03231B8 )
      return (unsigned __int8 *)v1;
    return a1;
  }
  dword_1C03231B0 = 4363;
  return (unsigned __int8 *)v1;
}
