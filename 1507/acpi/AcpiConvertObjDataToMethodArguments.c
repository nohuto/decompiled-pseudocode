/*
 * XREFs of AcpiConvertObjDataToMethodArguments @ 0x1C003F368
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C003FCE0 (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferEx @ 0x1C000A700 (ACPIIoctlCalculateOutputBufferEx.c)
 *     ACPIIoctlCalculateOutputBufferSizeEx @ 0x1C000A81C (ACPIIoctlCalculateOutputBufferSizeEx.c)
 */

__int64 __fastcall AcpiConvertObjDataToMethodArguments(unsigned int a1, __int64 a2, _QWORD *a3, SIZE_T *a4)
{
  unsigned int v4; // r15d
  __int64 v7; // rbx
  int v9; // ebx
  unsigned int v10; // edi
  SIZE_T v11; // rbp
  PVOID PoolWithTag; // rax
  __int64 v13; // r9
  void *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rax
  SIZE_T v18[9]; // [rsp+20h] [rbp-48h] BYREF
  int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h]

  v20 = a2;
  v4 = 0;
  v7 = a2;
  if ( a1 )
  {
    v18[0] = 0LL;
    v19 = 0;
    v10 = 0;
    while ( 1 )
    {
      v9 = ACPIIoctlCalculateOutputBufferSizeEx(v7 + 40LL * v10, v18, &v19, 0);
      if ( v9 < 0 )
        break;
      v7 = v20;
      if ( ++v10 >= a1 )
      {
        v11 = v18[0];
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v18[0], 0x4E706341u);
        v14 = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = (__int64)PoolWithTag;
          if ( a1 )
          {
            while ( 1 )
            {
              v9 = ACPIIoctlCalculateOutputBufferEx(v7 + 40LL * v4, v15, 0, v13);
              if ( v9 < 0 )
                break;
              LOWORD(v16) = *(_WORD *)(v15 + 2);
              if ( (unsigned __int16)v16 >= 4u )
                v16 = (unsigned __int16)v16;
              else
                v16 = 4LL;
              v7 = v20;
              v15 += v16 + 4;
              if ( ++v4 >= a1 )
                goto LABEL_14;
            }
            ExFreePoolWithTag(v14, 0x4E706341u);
          }
          else
          {
LABEL_14:
            *a3 = v14;
            v9 = 0;
            *a4 = v11;
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
        return (unsigned int)v9;
      }
    }
  }
  else
  {
    *a3 = 0LL;
    v9 = 0;
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
