/*
 * XREFs of ACPIProcessorDeviceControl @ 0x1C0069B70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNSObjectType @ 0x1C000386C (AMLIGetNSObjectType.c)
 *     AMLIFreeDataBuffs @ 0x1C0004D14 (AMLIFreeDataBuffs.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C000BBBC (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000C300 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEnumChildren @ 0x1C0018FF0 (ACPIIoctlEnumChildren.c)
 *     ACPIDispatchPowerIrpInvalid @ 0x1C0023470 (ACPIDispatchPowerIrpInvalid.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C003D3B0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D558 (ACPIIoctlAsyncEvalControlMethodEx.c)
 */

__int64 __fastcall ACPIProcessorDeviceControl(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r14
  int v9; // edi
  __int64 *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  _BYTE v14[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  if ( !*(_BYTE *)(a2 + 64) )
  {
    DeviceExtension = ACPIInternalGetDeviceExtension(a1);
    v5 = *(_QWORD *)(a2 + 184);
    v6 = DeviceExtension;
    v7 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v5 + 24) != 2703744 )
    {
      switch ( *(_DWORD *)(v5 + 24) )
      {
        case 0x32C000:
          return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
        case 0x32C004:
          return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2);
        case 0x32C018:
          return (unsigned int)ACPIIoctlEvalControlMethodEx(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
        case 0x32C01C:
          return (unsigned int)ACPIIoctlAsyncEvalControlMethodEx(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
        case 0x32C020:
          return (unsigned int)ACPIIoctlEnumChildren(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
      }
      v9 = -1073741637;
LABEL_18:
      *(_DWORD *)(a2 + 48) = v9;
      IofCompleteRequest((PIRP)a2, 0);
      return (unsigned int)v9;
    }
    if ( *(_DWORD *)(v5 + 8) < 0xCu )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
      v9 = -1073741820;
      goto LABEL_18;
    }
    if ( (unsigned int)AMLIGetNSObjectType(*(_QWORD *)(DeviceExtension + 704)) == 12 )
    {
      v9 = AMLIEvalNameSpaceObject(v11, v14, 0, 0LL);
      if ( v9 < 0 )
        goto LABEL_18;
      v12 = v15;
      *(_DWORD *)v7 = *(unsigned __int8 *)(v15 + 8);
      *(_DWORD *)(v7 + 4) = *(_DWORD *)v12;
      *(_BYTE *)(v7 + 8) = *(_BYTE *)(v12 + 4);
      AMLIFreeDataBuffs((__int64)v14);
    }
    else
    {
      v13 = *(_DWORD *)(v6 + 188);
      *(_DWORD *)(v7 + 4) = 0;
      v9 = 0;
      *(_DWORD *)v7 = v13;
      *(_BYTE *)(v7 + 8) = 0;
    }
    if ( *(_DWORD *)(v5 + 8) == 16 )
    {
      *(_DWORD *)(v7 + 12) = *(_DWORD *)(v6 + 184);
      *(_QWORD *)(a2 + 56) = 16LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = 12LL;
    }
    goto LABEL_18;
  }
  return ACPIDispatchPowerIrpInvalid(a1, (IRP *)a2);
}
