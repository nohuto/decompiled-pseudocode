/*
 * XREFs of ACPIIoctlEvalPreProcessingEx @ 0x1C000BCA8
 * Callers:
 *     ACPIIoctlEvalControlMethodEx @ 0x1C000BBBC (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D558 (ACPIIoctlAsyncEvalControlMethodEx.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsObjectInGivenScope @ 0x1C000A8D8 (AMLIIsObjectInGivenScope.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     AcpiIoctlArgumentToPackageObj @ 0x1C0021738 (AcpiIoctlArgumentToPackageObj.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingEx(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  unsigned int v8; // eax
  int v9; // r10d
  _WORD *v11; // rdi
  PVOID PoolWithTag; // r15
  unsigned int v13; // r12d
  int *v14; // rsi
  _QWORD *v15; // rbp
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rax
  size_t v20; // rbx
  unsigned __int16 *v21; // rsi
  _WORD *v22; // rax
  __int64 v23; // r8
  unsigned int v24; // ebp
  char *v25; // r14
  __int16 v26; // ax
  unsigned __int16 *v27; // rax
  __int64 v28; // rax
  _WORD *v29; // rax

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
  v15 = *(_QWORD **)(ACPIInternalGetDeviceExtension(a1) + 704);
  if ( !v15 )
    return 3221225486LL;
  _strupr((char *)v14 + 4);
  v16 = AMLIGetNameSpaceObject(v14 + 1);
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
            v22 = ExAllocatePoolWithTag(a4, 40 * v18, 0x41706341u);
            v11 = v22;
            if ( v22 )
            {
              memset(v22, 0, v20);
              v24 = 0;
              if ( !v13 )
                goto LABEL_11;
              v25 = (char *)(v11 + 12);
              while ( 1 )
              {
                if ( *v21 == 4 )
                  v26 = 4;
                else
                  v26 = *v21 + 1;
                *((_WORD *)v25 - 11) = v26;
                if ( *v21 )
                {
                  if ( *v21 > 2u )
                  {
                    if ( *v21 == 4 )
                    {
                      LOBYTE(v23) = 1;
                      v16 = AcpiIoctlArgumentToPackageObj(
                              v21,
                              (unsigned int)a4,
                              v23,
                              &v11[20 * v24 + 12],
                              &v11[20 * v24 + 16]);
                      if ( v16 < 0 )
                        goto LABEL_12;
                      goto LABEL_39;
                    }
                    *((_WORD *)v25 - 11) = 3;
                  }
                  *(_DWORD *)v25 = v21[1];
                  v27 = v21 + 2;
                  if ( !v21[1] )
                    v27 = 0LL;
                  *((_QWORD *)v25 + 1) = v27;
                }
                else
                {
                  *((_QWORD *)v25 - 1) = 0LL;
                  memmove(&v11[16 * v24 + 8 + 4 * v24], v21 + 2, v21[1]);
                }
LABEL_39:
                LOWORD(v28) = v21[1];
                if ( (unsigned __int16)v28 >= 4u )
                  v28 = (unsigned __int16)v28;
                else
                  v28 = 4LL;
                v21 = (unsigned __int16 *)((char *)v21 + v28 + 4);
                ++v24;
                v25 += 40;
                if ( v24 >= v13 )
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
        v29 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
        v11 = v29;
        if ( v29 )
        {
          memset(v29, 0, 0x28uLL);
          if ( *v14 == 1147757889 )
          {
            v11[1] = 1;
            *((_QWORD *)v11 + 2) = *((_QWORD *)v14 + 33);
          }
          else
          {
            v11[1] = 2;
            *((_DWORD *)v11 + 6) = v14[65];
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
