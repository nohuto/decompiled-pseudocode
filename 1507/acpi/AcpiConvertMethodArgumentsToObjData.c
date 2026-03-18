/*
 * XREFs of AcpiConvertMethodArgumentsToObjData @ 0x1C003F20C
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C003F490 (AcpiConvertPackageArgumentToPackageObj.c)
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C003F820 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     memmove @ 0x1C0023800 (memmove.c)
 *     AcpiCleanupObjDataArguments @ 0x1C003F18C (AcpiCleanupObjDataArguments.c)
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C003F490 (AcpiConvertPackageArgumentToPackageObj.c)
 */

__int64 __fastcall AcpiConvertMethodArgumentsToObjData(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // r12d
  __int64 i; // rdi
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ebx
  PVOID PoolWithTag; // rax
  size_t v15; // r8
  void *v16; // rcx
  int v17; // eax
  __int64 v18; // rax

  v4 = 0LL;
  v5 = 0;
  if ( !a3 )
    return 0;
  for ( i = a4 + 2; ; i += 40LL )
  {
    v11 = a1[1];
    if ( v4 + v11 > a2 )
      break;
    v12 = *a1;
    if ( !*a1 )
    {
      if ( (unsigned int)v11 > 8 )
        break;
      *(_WORD *)i = 1;
      v16 = (void *)(i + 14);
      v17 = a1[1];
      *(_QWORD *)(i + 14) = 0LL;
      *(_DWORD *)(i + 22) = v17;
      v15 = a1[1];
      goto LABEL_15;
    }
    if ( (unsigned int)(v12 - 3) > 1 )
    {
      if ( (_WORD)v12 == 1 )
        *(_WORD *)i = 2;
      else
        *(_WORD *)i = 3;
      *(_DWORD *)(i + 22) = a1[1];
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a1[1], 0x4E706341u);
      *(_QWORD *)(i + 30) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v13 = -1073741670;
        goto LABEL_23;
      }
      v15 = *(unsigned int *)(i + 22);
      v16 = PoolWithTag;
LABEL_15:
      memmove(v16, a1 + 2, v15);
      goto LABEL_16;
    }
    *(_WORD *)i = 4;
    v13 = AcpiConvertPackageArgumentToPackageObj(a1, i + 22, i + 30, 2LL);
    if ( v13 < 0 )
      goto LABEL_23;
LABEL_16:
    v18 = a1[1];
    v4 += v18;
    if ( (unsigned __int16)v18 < 4u )
      v18 = 4LL;
    ++v5;
    a1 = (unsigned __int16 *)((char *)a1 + v18 + 4);
    if ( v5 >= a3 )
      return 0;
  }
  v13 = -1073741788;
LABEL_23:
  AcpiCleanupObjDataArguments(a4, a3);
  return (unsigned int)v13;
}
