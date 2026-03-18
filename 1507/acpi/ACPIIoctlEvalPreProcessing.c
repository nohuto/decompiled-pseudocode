/*
 * XREFs of ACPIIoctlEvalPreProcessing @ 0x1C000C40C
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C000C300 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C003D3B0 (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     AcpiIoctlArgumentToPackageObj @ 0x1C0021738 (AcpiIoctlArgumentToPackageObj.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessing(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  _DWORD *v8; // rbx
  _WORD *v10; // rsi
  unsigned int v11; // r12d
  unsigned int v12; // eax
  int v14; // ecx
  _DWORD *v15; // rdi
  __int64 result; // rax
  PVOID PoolWithTag; // rbp
  int v18; // eax
  __int64 v19; // rax
  unsigned __int16 *v20; // r14
  size_t v21; // rdi
  _WORD *v22; // rax
  unsigned int v23; // ecx
  char *v24; // r15
  __int16 v25; // ax
  __int64 v26; // rax
  unsigned __int16 *v27; // rax
  int v28; // edi
  _WORD *v29; // rax
  unsigned int Src; // [rsp+60h] [rbp-48h] BYREF
  char v32; // [rsp+64h] [rbp-44h]

  v8 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = *(_DWORD *)(a3 + 16);
  v14 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v12 < 8 )
    return 3221225476LL;
  if ( (unsigned int)(v14 - 1) <= 0x12 )
    return 3221225507LL;
  v15 = *(_DWORD **)(a2 + 24);
  v32 = 0;
  Src = v15[1];
  if ( !*(_QWORD *)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 704) )
    return 3221225486LL;
  result = AMLIGetNameSpaceObject(&Src);
  if ( (int)result < 0 )
    return result;
  PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
  if ( PoolWithTag )
  {
    v18 = *v15;
    if ( *v15 == 1114203457 )
    {
LABEL_7:
      *a5 = 0LL;
      *a6 = PoolWithTag;
      *a7 = v10;
      *a8 = v11;
      return 0LL;
    }
    if ( v18 == 1130980673 )
    {
      v19 = (unsigned int)v15[3];
      if ( !(_DWORD)v19 )
        goto LABEL_7;
      v20 = (unsigned __int16 *)(v15 + 4);
      v21 = 40 * v19;
      v11 = v19;
      v22 = ExAllocatePoolWithTag(a4, 40 * v19, 0x41706341u);
      v10 = v22;
      if ( v22 )
      {
        memset(v22, 0, v21);
        Src = 0;
        v23 = 0;
        v24 = (char *)(v10 + 12);
        while ( 1 )
        {
          if ( *v20 == 4 )
            v25 = 4;
          else
            v25 = *v20 + 1;
          *((_WORD *)v24 - 11) = v25;
          if ( *v20 )
          {
            if ( *v20 > 2u )
            {
              if ( *v20 == 4 )
              {
                v28 = AcpiIoctlArgumentToPackageObj(
                        v20,
                        (unsigned int)a4,
                        0LL,
                        &v10[20 * v23 + 12],
                        &v10[20 * v23 + 16]);
                if ( v28 < 0 )
                  goto LABEL_34;
                v23 = Src;
                goto LABEL_16;
              }
              *((_WORD *)v24 - 11) = 3;
            }
            *(_DWORD *)v24 = v20[1];
            v27 = v20 + 2;
            if ( !v20[1] )
              v27 = 0LL;
            *((_QWORD *)v24 + 1) = v27;
          }
          else
          {
            *((_QWORD *)v24 - 1) = *((unsigned int *)v20 + 1);
          }
LABEL_16:
          LOWORD(v26) = v20[1];
          if ( (unsigned __int16)v26 < 4u )
            v26 = 4LL;
          else
            v26 = (unsigned __int16)v26;
          ++v23;
          v20 = (unsigned __int16 *)((char *)v20 + v26 + 4);
          Src = v23;
          v24 += 40;
          if ( v23 >= v11 )
            goto LABEL_7;
        }
      }
    }
    else
    {
      if ( v18 != 1231643969 && v18 != 1399416129 )
        return 3221225711LL;
      v11 = 1;
      v29 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
      v10 = v29;
      if ( v29 )
      {
        memset(v29, 0, 0x28uLL);
        if ( *v15 == 1231643969 )
        {
          v10[1] = 1;
          *((_QWORD *)v10 + 2) = (unsigned int)v15[2];
        }
        else
        {
          v10[1] = 2;
          *((_DWORD *)v10 + 6) = v15[2];
          if ( v15[2] )
            v8 = v15 + 3;
          *((_QWORD *)v10 + 4) = v8;
        }
        goto LABEL_7;
      }
    }
  }
  v28 = -1073741670;
LABEL_34:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x52706341u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x52706341u);
  return (unsigned int)v28;
}
