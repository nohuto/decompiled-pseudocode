/*
 * XREFs of MiExpandVadBitMapDown @ 0x14065B50C
 * Callers:
 *     MiExpandVadBitMap @ 0x14046C874 (MiExpandVadBitMap.c)
 * Callees:
 *     MiUpdateVadBits @ 0x14046C99C (MiUpdateVadBits.c)
 *     MiMakeHyperRangeAccessible @ 0x14046C9F0 (MiMakeHyperRangeAccessible.c)
 */

__int64 __fastcall MiExpandVadBitMapDown(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  unsigned int v4; // esi
  unsigned int v5; // esi
  _DWORD *v6; // rbp
  unsigned __int64 v7; // rax
  int v8; // edi
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = qword_140327FD0;
  v2 = 8 * (*(_DWORD *)(qword_140327FD0 + 276840472) - qword_140327FD0);
  if ( a1 > v2 )
    return 0LL;
  v4 = 8 * (((a1 & 0x3F) != 0) + (a1 >> 6));
  v5 = ((v4 & 0xFFF) != 0) + (v4 >> 12);
  v6 = (_DWORD *)(*(_QWORD *)(qword_140327FD0 + 276840472) - (v5 << 12));
  if ( (int)MiMakeHyperRangeAccessible((unsigned __int64)v6, *(_QWORD *)(qword_140327FD0 + 276840472) - 1LL, &v9) < 0 )
    return 0LL;
  v7 = v9;
  *(_DWORD *)(v1 + 276840544) += v9;
  _InterlockedExchangeAdd64(&qword_140327948, v7);
  *(_QWORD *)(v1 + 276840472) = v6;
  *(_DWORD *)(v1 + 276840464) += v5 << 15;
  v8 = v2 - (v5 << 15);
  if ( v6 == (_DWORD *)qword_140327FD0 )
  {
    *v6 |= 1u;
    v8 = 1;
  }
  *(_DWORD *)(v1 + 276840484) = 0;
  *(_DWORD *)(v1 + 276840480) = v8;
  *(_DWORD *)(v1 + 276840488) = v8;
  MiUpdateVadBits(
    (*(_QWORD *)(v1 + 276840472) - qword_140327FD0) << 19,
    ((*(_QWORD *)(v1 + 276840472) - qword_140327FD0) << 19) + ((unsigned __int64)v5 << 31));
  return 1LL;
}
