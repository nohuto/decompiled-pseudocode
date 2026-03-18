/*
 * XREFs of AcpiIrqLibSetupSciInterrupt @ 0x1C006F918
 * Callers:
 *     OSInterruptVector @ 0x1C00864E0 (OSInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     IcCopyInputStateToDeviceState @ 0x1C006C134 (IcCopyInputStateToDeviceState.c)
 *     IcCopyData @ 0x1C006C670 (IcCopyData.c)
 *     ProcessorCopyData @ 0x1C006C760 (ProcessorCopyData.c)
 *     IcClearPossibleData @ 0x1C006CBF0 (IcClearPossibleData.c)
 *     IrqArbGetDeviceIrql @ 0x1C006CFA4 (IrqArbGetDeviceIrql.c)
 *     IcRemapInputs @ 0x1C006D098 (IcRemapInputs.c)
 *     IcSetPossibleInput @ 0x1C006DC58 (IcSetPossibleInput.c)
 *     IcAddPossibleReference @ 0x1C006E138 (IcAddPossibleReference.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1C0086344 (IrqPolicyGetDistributionDisposition.c)
 *     IrqLibpSetSciConnectionData @ 0x1C0086424 (IrqLibpSetSciConnectionData.c)
 */

__int64 AcpiIrqLibSetupSciInterrupt()
{
  _DWORD *PoolWithTag; // rax
  _DWORD *UserData; // rbx
  char v2; // bp
  ULONGLONG v3; // rdx
  unsigned int v4; // edi
  char v5; // cl
  int v6; // eax
  __int64 v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+58h] [rbp-60h] BYREF
  int v10; // [rsp+6Ch] [rbp-4Ch]
  _BYTE v11[40]; // [rsp+78h] [rbp-40h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x49706341u);
  UserData = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x80uLL);
  *UserData = 1;
  UserData[2] = 1;
  v2 = 3;
  UserData[12] = 0;
  UserData[16] = 0;
  UserData[15] = 2;
  v3 = *(unsigned __int16 *)(*((_QWORD *)AcpiInformation + 1) + 46LL);
  if ( (unsigned int)v3 >= 0x10 )
  {
    v4 = *(unsigned __int16 *)(*((_QWORD *)AcpiInformation + 1) + 46LL);
  }
  else
  {
    v4 = *((_DWORD *)&IsaVectorOverrides + 2 * v3);
    v5 = *((_BYTE *)&IsaVectorOverrides + 8 * v3 + 4);
    if ( v5 != -1 )
    {
      v6 = UserData[15];
      v2 = *((_BYTE *)&IsaVectorOverrides + 8 * v3 + 4);
      if ( (v5 & 1) == 0 )
        v6 = 1;
      UserData[15] = v6;
    }
  }
  v7 = RootDeviceExtension;
  UserData[26] = v4;
  IrqLibSciGsiv = v4;
  RtlAddRange(RangeList, v3, v3, 0, 0x12u, UserData, *(PVOID *)(v7 + 728));
  v11[4] = 0;
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _BYTE *, int, _DWORD, int, int, __int128 *))ProcessorReserveIdtEntries)(
             *(_QWORD *)(RootDeviceExtension + 728),
             0LL,
             (unsigned int)IrqLibSciGsiv,
             v11,
             1,
             0,
             1,
             1,
             &v9);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)(UserData + 18) = v9;
    UserData[13] = v10;
    result = IrqArbGetDeviceIrql(UserData + 12, (_BYTE *)UserData + 56);
    if ( (int)result >= 0 )
    {
      IcClearPossibleData();
      result = IcSetPossibleInput(v4, (__int64)&v9, v2, 0);
      if ( (int)result >= 0 )
      {
        IcAddPossibleReference(v4, 0);
        result = ProcessorCopyData(0LL);
        if ( (int)result >= 0 )
        {
          result = IcRemapInputs();
          if ( (int)result >= 0 )
          {
            IcCopyInputStateToDeviceState((__int64)&IrqLibArbiterInstance, 0);
            result = IcCopyData(0);
            if ( (int)result >= 0 )
            {
              result = IrqLibpSetSciConnectionData(UserData + 12);
              if ( (int)result >= 0 )
              {
                IrqPolicyGetDistributionDisposition();
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
