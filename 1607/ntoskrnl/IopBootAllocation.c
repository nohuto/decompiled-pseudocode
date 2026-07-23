/*
 * XREFs of IopBootAllocation @ 0x140557CD4
 * Callers:
 *     IopAllocateBootResourcesInternal @ 0x140556700 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     IopAddRemoveReqDescs @ 0x140557DA0 (IopAddRemoveReqDescs.c)
 */

__int64 __fastcall IopBootAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  int v7; // eax
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v10; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v9[1] = v9;
  LOBYTE(a4) = 1;
  v9[0] = v9;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  IopAddRemoveReqDescs(*(_QWORD *)(a1 + 40) + 24LL, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL), v9, a4);
  v5 = (_QWORD *)v9[0];
  while ( v5 != v9 )
  {
    v6 = v5 - 11;
    v5 = (_QWORD *)*v5;
    if ( *((_BYTE *)v6 + 105) )
    {
      v10 = v6 + 5;
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD **))(v6[3] + 32LL))(*(_QWORD *)(v6[3] + 8LL), 9LL, &v10);
      if ( v7 < 0 )
        v4 = v7;
      *((_WORD *)v6 + 52) = 0;
      v6[12] = v6 + 11;
      v6[11] = v6 + 11;
      v6[10] = v6 + 9;
      v6[9] = v6 + 9;
      v6[6] = v6 + 5;
      v6[5] = v6 + 5;
      v6[8] = v6 + 7;
      v6[7] = v6 + 7;
    }
  }
  return v4;
}
