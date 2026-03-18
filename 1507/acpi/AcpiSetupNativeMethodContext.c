/*
 * XREFs of AcpiSetupNativeMethodContext @ 0x1C003FCE0
 * Callers:
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C003F820 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000B88C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C003F368 (AcpiConvertObjDataToMethodArguments.c)
 *     AcpiGetNativeMethodHandleFromAcpiObject @ 0x1C00413E0 (AcpiGetNativeMethodHandleFromAcpiObject.c)
 */

__int64 __fastcall AcpiSetupNativeMethodContext(__int64 a1, _QWORD *a2)
{
  PVOID PoolWithTag; // rbp
  int NativeMethodHandleFromAcpiObject; // ebx
  __int64 v6; // rax
  volatile signed __int32 *v7; // r14
  PVOID P; // [rsp+40h] [rbp+8h] BYREF
  SIZE_T v10; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  PoolWithTag = 0LL;
  NativeMethodHandleFromAcpiObject = -1073741823;
  v6 = AMLIGetParent(*(_QWORD *)(a1 + 24));
  v7 = (volatile signed __int32 *)v6;
  if ( v6 )
  {
    NativeMethodHandleFromAcpiObject = AcpiGetNativeMethodHandleFromAcpiObject(v6, &v10);
    if ( NativeMethodHandleFromAcpiObject >= 0 )
    {
      memset(a2, 0, 0x48uLL);
      *a2 = *(_QWORD *)(a1 + 32);
      a2[1] = v10;
      NativeMethodHandleFromAcpiObject = AcpiConvertObjDataToMethodArguments(
                                           *(_DWORD *)(a1 + 44),
                                           *(_QWORD *)(a1 + 48),
                                           &P,
                                           &v10);
      if ( NativeMethodHandleFromAcpiObject >= 0 )
      {
        if ( !*(_DWORD *)(a1 + 40) || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x4E706341u)) != 0LL )
        {
          a2[4] = P;
          a2[3] = v10;
          *((_DWORD *)a2 + 4) = *(_DWORD *)(a1 + 44);
          if ( PoolWithTag )
          {
            a2[7] = PoolWithTag;
            *((_DWORD *)a2 + 10) = *(_DWORD *)(a1 + 40);
            a2[6] = 64LL;
          }
          NativeMethodHandleFromAcpiObject = 0;
          goto LABEL_9;
        }
        NativeMethodHandleFromAcpiObject = -1073741670;
      }
      if ( P )
        ExFreePoolWithTag(P, 0x4E706341u);
    }
LABEL_9:
    AMLIDereferenceHandleEx(v7);
  }
  return (unsigned int)NativeMethodHandleFromAcpiObject;
}
