/*
 * XREFs of MiExpandVadBitMap @ 0x14046C874
 * Callers:
 *     MiFindEmptyAddressRange @ 0x1404352A0 (MiFindEmptyAddressRange.c)
 *     MiInitializeVadBitMap @ 0x14046C79C (MiInitializeVadBitMap.c)
 * Callees:
 *     MiUpdateVadBits @ 0x14046C99C (MiUpdateVadBits.c)
 *     MiMakeHyperRangeAccessible @ 0x14046C9F0 (MiMakeHyperRangeAccessible.c)
 *     MiExpandVadBitMapDown @ 0x14065B50C (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(unsigned int *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v5; // r14
  int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // ebp
  int v14; // edx
  unsigned __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = qword_140327FD0;
  v5 = *a1;
  v6 = v5 + 8 * (a1[2] - qword_140327FD0);
  if ( a2 > *(_DWORD *)(qword_140327FD0 + 276840548) - v6 + 1 )
    return MiExpandVadBitMapDown(a2);
  v7 = *((_QWORD *)a1 + 1);
  v8 = v7 + ((unsigned __int64)(unsigned int)v5 >> 3);
  v9 = (v5 + 8 * (v7 - qword_140327FD0)) << 16;
  if ( (int)MiMakeHyperRangeAccessible(v8, v7 + ((unsigned __int64)((unsigned int)v5 + a2 - 1) >> 3), &v16) < 0 )
    return 0LL;
  v10 = v16;
  *(_DWORD *)(v2 + 276840544) += v16;
  _InterlockedExchangeAdd64(&qword_140327948, v10);
  v11 = 8 * (((a2 & 0x3F) != 0) + (a2 >> 6));
  v12 = ((v11 & 0xFFF) != 0) + (v11 >> 12);
  *a1 += v12 << 15;
  v13 = (v12 << 15) + v6;
  v14 = *(_DWORD *)(v2 + 276840548);
  if ( v13 > v14 + 1 )
    *a1 = *a1 - v13 + v14 + 1;
  if ( v8 == qword_140327FD0 )
  {
    **((_DWORD **)a1 + 1) |= 1u;
    if ( (_DWORD)v5 )
      a1[4] = 1;
  }
  MiUpdateVadBits(v9, v9 + ((unsigned __int64)v12 << 31));
  return 1LL;
}
