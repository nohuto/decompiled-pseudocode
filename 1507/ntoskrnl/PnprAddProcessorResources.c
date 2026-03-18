/*
 * XREFs of PnprAddProcessorResources @ 0x14068F788
 * Callers:
 *     PnprAddDeviceResources @ 0x14068F530 (PnprAddDeviceResources.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnprAddProcessorResources(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  _DWORD *v4; // rbx
  char v5; // di
  __int64 v7; // rsi
  unsigned int v9; // ebp
  int v10; // eax
  int v11; // r12d
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // r14
  SIZE_T v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 result; // rax
  unsigned int v18; // ecx
  unsigned int Size; // [rsp+60h] [rbp+8h]

  v4 = *(_DWORD **)a4;
  v5 = 0;
  v7 = a2;
  LOWORD(v9) = 0;
  v10 = *(_DWORD *)(*(_QWORD *)a4 + 16LL);
  if ( v10 == *(_DWORD *)(*(_QWORD *)a4 + 12LL) )
  {
    v11 = v10 + 4;
    Size = 4 * v10 + 20;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(4 * (v10 + 4) + 20), 0x51706E50u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v14 = PnprContext;
      v15 = *(_DWORD *)(PnprContext + 10744);
      if ( !v15 )
        v15 = 820;
      *(_DWORD *)(PnprContext + 10744) = v15;
      v16 = *(_DWORD *)(v14 + 10748);
      if ( !v16 )
        v16 = 10;
      *(_DWORD *)(v14 + 10748) = v16;
      return 3221225626LL;
    }
    memmove(PoolWithTag, v4, Size);
    ExFreePoolWithTag(v4, 0x51706E50u);
    v4 = v13;
    v13[3] = v11;
  }
  if ( (_DWORD)v7 != -1 )
  {
    if ( (_DWORD)v7 )
    {
      if ( (unsigned int)v7 < 0x280 && (v18 = KiProcessorIndexToNumberMappingTable[v7]) != 0 )
      {
        v9 = v18 >> 6;
        v5 = v18 & 0x3F;
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      LOWORD(v9) = 0;
    }
    *(_QWORD *)(*(_QWORD *)v4 + 8LL * (unsigned __int16)v9) |= 1LL << v5;
  }
  v4[v4[4]++ + 5] = a3;
  result = 0LL;
  *(_QWORD *)a4 = v4;
  return result;
}
