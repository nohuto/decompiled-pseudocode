/*
 * XREFs of AcpiIoctlArgumentToPackageObj @ 0x1C0021F28
 * Callers:
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C000C1B8 (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C000C91C (ACPIIoctlEvalPreProcessing.c)
 *     AcpiIoctlArgumentToPackageObj @ 0x1C0021F28 (AcpiIoctlArgumentToPackageObj.c)
 * Callees:
 *     AcpiIoctlArgumentToPackageObj @ 0x1C0021F28 (AcpiIoctlArgumentToPackageObj.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObj(_WORD *a1, POOL_TYPE a2, char a3, unsigned int *a4, PVOID *a5)
{
  unsigned int *v5; // rdi
  __int64 v8; // r9
  unsigned int v9; // ebx
  unsigned __int16 *v10; // rsi
  unsigned __int64 v11; // r8
  _WORD *v12; // rcx
  unsigned int v13; // eax
  PVOID PoolWithTag; // rax
  __int64 v15; // r8
  unsigned int v16; // ecx
  int v17; // ebx
  unsigned __int16 v19; // dx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 i; // rdi
  char *v23; // rdx
  __int16 v24; // ax
  __int64 v25; // rax
  unsigned int v26; // [rsp+60h] [rbp+8h]
  unsigned int v30; // [rsp+80h] [rbp+28h]

  *a4 = 0;
  v5 = a4;
  *a5 = 0LL;
  if ( !a1 || *a1 != 4 )
  {
    v17 = -1073741811;
LABEL_39:
    if ( *a5 )
    {
      ExFreePoolWithTag(*a5, 0x41706341u);
      *v5 = 0;
      *a5 = 0LL;
    }
    return (unsigned int)v17;
  }
  v8 = (unsigned __int16)a1[1];
  v9 = 0;
  v10 = a1 + 2;
  v11 = (unsigned __int64)a1 + v8 + 4;
  v26 = 0;
  v12 = v10;
  if ( (unsigned __int64)v10 >= v11 )
  {
LABEL_4:
    v13 = 40 * v9 + 8;
    *v5 = v13;
    PoolWithTag = ExAllocatePoolWithTag(a2, v13, 0x41706341u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, *v5);
      v16 = 0;
      v30 = 0;
      *(_DWORD *)*a5 = v9;
      if ( !v9 )
        return 0;
      for ( i = 0LL; ; i += 40LL )
      {
        v23 = (char *)*a5;
        if ( *v10 == 4 )
          v24 = 4;
        else
          v24 = *v10 + 1;
        *(_WORD *)&v23[i + 10] = v24;
        if ( *v10 )
        {
          if ( *v10 <= 2u )
            goto LABEL_36;
          if ( *v10 != 4 )
          {
            *(_WORD *)&v23[i + 10] = 3;
LABEL_36:
            *(_DWORD *)&v23[i + 32] = v10[1];
            *(_QWORD *)&v23[i + 40] = v10 + 2;
            goto LABEL_23;
          }
          LOBYTE(v15) = a3;
          v17 = AcpiIoctlArgumentToPackageObj(v10, (unsigned int)a2, v15, &v23[i + 32], &v23[i + 40]);
          if ( v17 < 0 )
          {
            v5 = a4;
            goto LABEL_39;
          }
          v9 = v26;
        }
        else
        {
          *(_DWORD *)&v23[i + 32] = a3 != 0 ? 8 : 4;
          *(_QWORD *)&v23[i + 24] = *((unsigned int *)v10 + 1);
        }
        v16 = v30;
LABEL_23:
        LOWORD(v25) = v10[1];
        if ( (unsigned __int16)v25 < 4u )
          v25 = 4LL;
        else
          v25 = (unsigned __int16)v25;
        ++v16;
        v10 = (unsigned __int16 *)((char *)v10 + v25 + 4);
        v30 = v16;
        if ( v16 >= v9 )
          return 0;
      }
    }
    v17 = -1073741670;
    goto LABEL_39;
  }
  while ( *v12 <= 4u )
  {
    v19 = v12[1];
    if ( v19 > (unsigned __int16)v8 )
      break;
    v20 = 4LL;
    if ( v19 >= 4u )
      v20 = v19;
    if ( (unsigned __int64)v12 + v20 + 4 > v11 )
      break;
    ++v9;
    v21 = 4LL;
    v26 = v9;
    if ( v19 >= 4u )
      v21 = v19;
    v12 = (_WORD *)((char *)v12 + v21 + 4);
    if ( (unsigned __int64)v12 >= v11 )
      goto LABEL_4;
  }
  return (unsigned int)-1073741788;
}
