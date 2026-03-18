/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C000B310
 * Callers:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C00B7AE0 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(DXGDEVICE *this, unsigned int a2, const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  const struct DXGALLOCATION **v8; // rbx
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rax
  _BYTE v12[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, (DXGDEVICE *)((char *)this + 232));
  v6 = 0LL;
  v7 = (unsigned int)v3;
  v8 = (const struct DXGALLOCATION **)((char *)this + 248 * v3 + 592);
  v9 = 31LL;
  do
  {
    if ( a3 == *v8 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace();
      v10[3] = a3;
      v10[4] = v6;
      v10[5] = v7;
      if ( (*((_DWORD *)this + v7 + 1188) & 0x1F) == 0 )
      {
        v11 = WdLogNewEntry5_WdAssertion();
        *(_QWORD *)(v11 + 24) = 727LL;
        WdLogEvent5_WdAssertion(v11);
      }
      *v8 = 0LL;
      *((_DWORD *)this + v7 + 1188) ^= ((unsigned __int8)*((_DWORD *)this + v7 + 1188) ^ (unsigned __int8)(*((_DWORD *)this + v7 + 1188) - 1)) & 0x1F;
    }
    ++v6;
    ++v8;
    --v9;
  }
  while ( v9 );
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
}
