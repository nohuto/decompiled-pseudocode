/*
 * XREFs of ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0136118
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBI_N@Z @ 0x1C013640C (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBI_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

char __fastcall DXGDEVICE::InsertDirectFlipAllocationToList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // r14
  struct _KTHREAD **v13; // rcx
  char v14; // bl
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v19[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, this + 32);
  if ( (*((_BYTE *)a3 + 72) & 0xFE) != 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = 7631LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = 0;
  v12 = v3;
  v13 = &this[96 * v3 + 602];
  v14 = 1;
  do
  {
    if ( !*v13 )
      break;
    ++v11;
    ++v13;
  }
  while ( v11 < 0x60 );
  if ( v11 == 96 )
  {
    v14 = 0;
  }
  else
  {
    v15 = v11 + 96 * v12;
    if ( this[v15 + 602] )
    {
      v16 = WdLogNewEntry5_WdAssertion(v13, v6, v8, v9);
      *(_QWORD *)(v16 + 24) = 7645LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( *((_DWORD *)this + v12 + 4276) >= 0x60u )
    {
      v17 = WdLogNewEntry5_WdAssertion(v13, v6, v8, v9);
      *(_QWORD *)(v17 + 24) = 7646LL;
      WdLogEvent5_WdAssertion(v17);
    }
    this[v15 + 602] = a3;
    ++*((_DWORD *)this + v12 + 4276);
    *((_DWORD *)a3 + 18) ^= (*((_DWORD *)a3 + 18) ^ (2 * v11)) & 0xFE;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v14;
}
