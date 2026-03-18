/*
 * XREFs of HvlpFastFlushListTb @ 0x140221688
 * Callers:
 *     HvlpFlushRangeListTb @ 0x140221880 (HvlpFlushRangeListTb.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x14015D130 (HvcallpExtendedFastHypercall.c)
 *     HvlpFastFlushSecureRangeList @ 0x1401B3648 (HvlpFastFlushSecureRangeList.c)
 */

NTSTATUS __fastcall HvlpFastFlushListTb(__int128 *a1, char a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // xmm1_8
  int v7; // eax
  __int64 v9; // r8
  unsigned int v10; // ecx
  _QWORD *v11; // r9
  __int64 v12; // r10
  __int64 v13; // rax
  NTSTATUS result; // eax
  __int64 v15; // [rsp+20h] [rbp-49h]
  __int128 v16; // [rsp+30h] [rbp-39h] BYREF
  __int64 v17; // [rsp+40h] [rbp-29h]
  _BYTE v18[88]; // [rsp+48h] [rbp-21h] BYREF

  v5 = a3;
  v6 = *((_QWORD *)a1 + 2);
  v7 = a3 & 0xFFF;
  LODWORD(v15) = 3;
  v9 = 8 * a3 + 24;
  HIDWORD(v15) = v7;
  v16 = *a1;
  v17 = v6;
  v10 = ((unsigned int)HvlpFlags >> 15) & 1;
  if ( !v10 )
    *((_QWORD *)&v16 + 1) |= 8uLL;
  if ( (_DWORD)v5 )
  {
    v11 = v18;
    v12 = v5;
    do
    {
      v13 = *(_QWORD *)((char *)v11 + (char *)a4 - v18);
      if ( v10 )
        v13 &= ~0x800uLL;
      *v11++ = v13;
      --v12;
    }
    while ( v12 );
  }
  LODWORD(v15) = v15 | 0x10000;
  result = HvcallpExtendedFastHypercall(v15, &v16, v9);
  if ( a2 )
    return HvlpFastFlushSecureRangeList(a4, v5);
  return result;
}
