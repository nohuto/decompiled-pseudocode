/*
 * XREFs of AcpiConvertPackageArgumentToPackageObj @ 0x1C003EFD0
 * Callers:
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C003ED4C (AcpiConvertMethodArgumentsToObjData.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C003ED4C (AcpiConvertMethodArgumentsToObjData.c)
 */

__int64 __fastcall AcpiConvertPackageArgumentToPackageObj(_WORD *a1, unsigned int *a2, PVOID *a3)
{
  unsigned int v5; // ebx
  unsigned __int16 *v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  _WORD *v10; // rdx
  unsigned __int16 v11; // cx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  PVOID PoolWithTag; // rax
  int v17; // ebx

  *a2 = 0;
  *a3 = 0LL;
  if ( !a1 || (unsigned __int16)(*a1 - 3) > 1u )
  {
    v17 = -1073741811;
    goto LABEL_19;
  }
  v5 = 0;
  v6 = a1 + 2;
  *a3 = 0LL;
  v7 = 0LL;
  v8 = (unsigned __int16)a1[1];
  v9 = (unsigned __int64)a1 + v8 + 4;
  v10 = a1 + 2;
  if ( (unsigned __int64)(a1 + 2) >= v9 )
  {
LABEL_14:
    v15 = 40 * v5 + 8;
    *a2 = v15;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x4E706341u);
    *a3 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a2 = 0;
      v17 = -1073741670;
LABEL_20:
      if ( *a3 )
      {
        ExFreePoolWithTag(*a3, 0x4E706341u);
        *a2 = 0;
        *a3 = 0LL;
      }
      return (unsigned int)v17;
    }
    memset(PoolWithTag, 0, *a2);
    *(_DWORD *)*a3 = v5;
    v17 = AcpiConvertMethodArgumentsToObjData(v6, v7, v5, (__int64)*a3 + 8);
LABEL_19:
    if ( v17 >= 0 )
      return (unsigned int)v17;
    goto LABEL_20;
  }
  while ( *v10 <= 4u )
  {
    v11 = v10[1];
    if ( v11 > (unsigned __int16)v8 )
      break;
    v12 = 4LL;
    if ( v11 >= 4u )
      v12 = v11;
    if ( (unsigned __int64)v10 + v12 + 4 > v9 )
      break;
    ++v5;
    v13 = 4LL;
    if ( v11 >= 4u )
      v13 = v11;
    v7 += v13 + 4;
    v14 = 4LL;
    if ( v11 >= 4u )
      v14 = v11;
    v10 = (_WORD *)((char *)v10 + v14 + 4);
    if ( (unsigned __int64)v10 >= v9 )
      goto LABEL_14;
  }
  return (unsigned int)-1073741788;
}
