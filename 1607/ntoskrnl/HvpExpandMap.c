/*
 * XREFs of HvpExpandMap @ 0x14047CBA0
 * Callers:
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     HvpApplyLogEntry @ 0x1406126C4 (HvpApplyLogEntry.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     HvpAllocateMap @ 0x1404C6174 (HvpAllocateMap.c)
 *     HvpFreeMap @ 0x1404CC7DC (HvpFreeMap.c)
 */

__int64 __fastcall HvpExpandMap(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r13
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // ebp
  void *v13; // rax
  void *v14; // r14
  _QWORD *v15; // rax
  _QWORD *v16; // r12
  _QWORD *v17; // rax
  _QWORD *v18; // r15

  v4 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v13 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(20480LL, 0LL, 925977923LL);
    v14 = v13;
    if ( !v13 )
      return (unsigned int)-1073741801;
    memset(v13, 0, 0x5000uLL);
    v15 = (_QWORD *)(632 * v5 + a1 + 1416);
    *(_QWORD *)(632 * v5 + a1 + 1408) = v15;
    *v15 = v14;
  }
  if ( a3 )
    v9 = (a3 >> 12) - 1;
  else
    v9 = 0;
  v10 = v9 >> 9;
  v11 = ((a4 >> 12) - 1) >> 9;
  if ( v11 > v10 )
  {
    if ( v10 || (v16 = (_QWORD *)(632 * v5 + a1 + 1416), *(_QWORD **)(632 * v5 + a1 + 1408) != v16) )
    {
LABEL_14:
      if ( !(unsigned __int8)HvpAllocateMap(a1, *(_QWORD *)(632 * v5 + a1 + 1408), v10 + 1, v11) )
      {
        v4 = -1073741801;
        HvpFreeMap(a1, *(_QWORD *)(632 * v5 + a1 + 1408), v10 + 1, v11);
      }
      return v4;
    }
    v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(0x2000LL, 0LL, 942755139LL);
    v18 = v17;
    if ( v17 )
    {
      memset(v17, 0, 0x2000uLL);
      *v18 = *v16;
      *(_QWORD *)(632 * v5 + a1 + 1408) = v18;
      goto LABEL_14;
    }
    return (unsigned int)-1073741801;
  }
  return v4;
}
