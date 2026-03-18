/*
 * XREFs of AcpiSetupNativeMethodContext @ 0x1C0053C90
 * Callers:
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C0053740 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007348 (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C005314C (AcpiConvertObjDataToMethodArguments.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00544B0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_sqqD @ 0x1C00545FC (WPP_RECORDER_SF_sqqD.c)
 *     AcpiGetNativeMethodHandleFromAcpiObject @ 0x1C00579D8 (AcpiGetNativeMethodHandleFromAcpiObject.c)
 */

__int64 __fastcall AcpiSetupNativeMethodContext(__int64 a1, _QWORD *a2)
{
  PVOID v3; // rsi
  __int64 v4; // rcx
  PVOID PoolWithTag; // rbp
  int v7; // ebx
  __int64 v8; // rax
  volatile signed __int32 *v9; // r14
  int NativeMethodHandleFromAcpiObject; // eax
  int v11; // edx
  __int64 v12; // rdx
  SIZE_T v13; // rsi
  SIZE_T v14; // rax
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  SIZE_T v17; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  P = 0LL;
  PoolWithTag = 0LL;
  v7 = -1073741823;
  v8 = AMLIGetParent(v4);
  v9 = (volatile signed __int32 *)v8;
  if ( v8 )
  {
    NativeMethodHandleFromAcpiObject = AcpiGetNativeMethodHandleFromAcpiObject(v8, &v17);
    v7 = NativeMethodHandleFromAcpiObject;
    if ( NativeMethodHandleFromAcpiObject >= 0 )
    {
      memset(a2, 0, 0x48uLL);
      v13 = v17;
      *a2 = *(_QWORD *)(a1 + 32);
      a2[1] = v13;
      v7 = AcpiConvertObjDataToMethodArguments(*(_DWORD *)(a1 + 44), *(_QWORD *)(a1 + 48), &P, &v17);
      if ( v7 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 40) )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x4E706341u);
          if ( !PoolWithTag )
          {
            v7 = -1073741670;
            WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v12, 21, 20);
            v3 = P;
            goto LABEL_13;
          }
        }
        v14 = v17;
        v3 = P;
        a2[4] = P;
        a2[3] = v14;
        *((_DWORD *)a2 + 4) = *(_DWORD *)(a1 + 44);
        if ( PoolWithTag )
        {
          a2[7] = PoolWithTag;
          *((_DWORD *)a2 + 10) = *(_DWORD *)(a1 + 40);
          a2[6] = 64LL;
        }
        v7 = 0;
      }
      else
      {
        WPP_RECORDER_SF_sqqD(WPP_GLOBAL_Control->DeviceExtension, v12, 19, 19);
        v3 = P;
      }
    }
    else
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        19,
        18,
        (__int64)&WPP_04283116df513c0b4bfc015614b55db9_Traceguids,
        (char)v9,
        NativeMethodHandleFromAcpiObject);
    }
    if ( v7 >= 0 )
    {
LABEL_17:
      AMLIDereferenceHandleEx(v9, v12);
      return (unsigned int)v7;
    }
LABEL_13:
    if ( v3 )
      ExFreePoolWithTag(v3, 0x4E706341u);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4E706341u);
    goto LABEL_17;
  }
  return (unsigned int)v7;
}
