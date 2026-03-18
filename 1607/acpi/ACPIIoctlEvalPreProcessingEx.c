/*
 * XREFs of ACPIIoctlEvalPreProcessingEx @ 0x1C002499C
 * Callers:
 *     ACPIIoctlEvalControlMethodEx @ 0x1C00248B0 (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C00506A8 (ACPIIoctlAsyncEvalControlMethodEx.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     AcpiIoctlArgumentToPackageObj @ 0x1C0007F40 (AcpiIoctlArgumentToPackageObj.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     AMLIIsObjectInGivenScope @ 0x1C0024B00 (AMLIIsObjectInGivenScope.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingEx(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _QWORD *a6,
        unsigned int **a7,
        unsigned int *a8)
{
  unsigned int v8; // eax
  int v9; // r10d
  unsigned int *v11; // rdi
  PVOID PoolWithTag; // r15
  unsigned int v13; // r12d
  int *v14; // rsi
  __int64 v15; // rbp
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rax
  size_t v20; // rbx
  unsigned __int16 *v21; // rsi
  unsigned int *v22; // rax
  unsigned int v23; // ebp
  char *v24; // r14
  __int16 v25; // ax
  unsigned __int16 *v26; // rax
  __int64 v27; // rax
  unsigned int *v28; // rax

  v8 = *(_DWORD *)(a3 + 16);
  v9 = *(_DWORD *)(a3 + 8);
  v11 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  PoolWithTag = 0LL;
  v13 = 0;
  if ( v8 < 0x104 )
    return 3221225476LL;
  if ( (unsigned int)(v9 - 1) <= 0x12 )
    return 3221225507LL;
  v14 = *(int **)(a2 + 24);
  v15 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
  if ( !v15 )
    return 3221225486LL;
  _strupr((char *)v14 + 4);
  v16 = AMLIGetNameSpaceObject((_BYTE *)v14 + 4);
  if ( v16 >= 0 )
  {
    v16 = AMLIIsObjectInGivenScope(0LL, v15);
    if ( v16 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
      if ( PoolWithTag )
      {
        v17 = *v14;
        if ( *v14 == 1097426241 )
        {
LABEL_11:
          *a5 = 0LL;
          *a6 = PoolWithTag;
          *a7 = v11;
          *a8 = v13;
          return 0LL;
        }
        if ( v17 != 1147757889 )
        {
          if ( v17 == 1181312321 )
          {
            v18 = (unsigned int)v14[66];
            if ( !(_DWORD)v18 )
              goto LABEL_11;
            v20 = 40 * v18;
            v13 = v14[66];
            v21 = (unsigned __int16 *)(v14 + 67);
            v22 = (unsigned int *)ExAllocatePoolWithTag(a4, 40 * v18, 0x41706341u);
            v11 = v22;
            if ( v22 )
            {
              memset(v22, 0, v20);
              v23 = 0;
              if ( !v13 )
                goto LABEL_11;
              v24 = (char *)(v11 + 6);
              while ( 1 )
              {
                if ( *v21 == 4 )
                  v25 = 4;
                else
                  v25 = *v21 + 1;
                *((_WORD *)v24 - 11) = v25;
                if ( *v21 )
                {
                  if ( *v21 > 2u )
                  {
                    if ( *v21 == 4 )
                    {
                      v16 = AcpiIoctlArgumentToPackageObj(v21, a4, 1, &v11[10 * v23 + 6], (PVOID *)&v11[10 * v23 + 8]);
                      if ( v16 < 0 )
                        goto LABEL_12;
                      goto LABEL_39;
                    }
                    *((_WORD *)v24 - 11) = 3;
                  }
                  *(_DWORD *)v24 = v21[1];
                  v26 = v21 + 2;
                  if ( !v21[1] )
                    v26 = 0LL;
                  *((_QWORD *)v24 + 1) = v26;
                }
                else
                {
                  *((_QWORD *)v24 - 1) = 0LL;
                  memmove(&v11[8 * v23 + 4 + 2 * v23], v21 + 2, v21[1]);
                }
LABEL_39:
                LOWORD(v27) = v21[1];
                if ( (unsigned __int16)v27 >= 4u )
                  v27 = (unsigned __int16)v27;
                else
                  v27 = 4LL;
                v21 = (unsigned __int16 *)((char *)v21 + v27 + 4);
                ++v23;
                v24 += 40;
                if ( v23 >= v13 )
                  goto LABEL_11;
              }
            }
            goto LABEL_20;
          }
          if ( v17 != 1164535105 )
          {
            v16 = -1073741585;
            goto LABEL_12;
          }
        }
        v13 = 1;
        v28 = (unsigned int *)ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
        v11 = v28;
        if ( v28 )
        {
          memset(v28, 0, 0x28uLL);
          if ( *v14 == 1147757889 )
          {
            *((_WORD *)v11 + 1) = 1;
            *((_QWORD *)v11 + 2) = *((_QWORD *)v14 + 33);
          }
          else
          {
            *((_WORD *)v11 + 1) = 2;
            v11[6] = v14[65];
            *((_QWORD *)v11 + 4) = v14 + 66;
          }
          goto LABEL_11;
        }
      }
LABEL_20:
      v16 = -1073741670;
    }
  }
LABEL_12:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x52706341u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x52706341u);
  return (unsigned int)v16;
}
