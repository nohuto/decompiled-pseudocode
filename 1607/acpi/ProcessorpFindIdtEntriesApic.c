/*
 * XREFs of ProcessorpFindIdtEntriesApic @ 0x1C0089060
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0089270 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IcIsInterruptTypeSecondary @ 0x1C00895C8 (IcIsInterruptTypeSecondary.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0089780 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorpSelectProcessorSet @ 0x1C008ABAC (ProcessorpSelectProcessorSet.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C008AD3C (IrqPolicyGetDevicePolicy.c)
 *     ProcessorpValidateTargetSet @ 0x1C008C308 (ProcessorpValidateTargetSet.c)
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1C008D904 (IrqPolicyQueryInterruptSteeringEnabled.c)
 *     ProcessorpGetSecondaryInterruptAffinity @ 0x1C00A20B8 (ProcessorpGetSecondaryInterruptAffinity.c)
 */

__int64 __fastcall ProcessorpFindIdtEntriesApic(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char a7,
        unsigned int a8)
{
  int DeviceIdtAssignment; // edi
  int DevicePolicy; // eax
  char v13; // si
  unsigned __int16 v14; // di
  unsigned int v15; // edx
  int v16; // r8d
  __int16 v17; // ax
  char v18; // al
  int SecondaryInterruptAffinity; // ecx
  int v20; // r8d
  int v21; // r9d
  __int128 v22; // xmm0
  __int64 result; // rax
  int v24; // r9d
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  unsigned int v27; // r14d
  int v28; // r8d
  int v29; // r9d
  _BYTE v30[4]; // [rsp+50h] [rbp-49h] BYREF
  int v31; // [rsp+54h] [rbp-45h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-41h]
  __int128 v33; // [rsp+60h] [rbp-39h] BYREF
  char v34; // [rsp+70h] [rbp-29h] BYREF
  __int128 v35; // [rsp+78h] [rbp-21h] BYREF
  __int64 v36; // [rsp+88h] [rbp-11h]

  v32 = a4;
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, &v35);
  if ( DeviceIdtAssignment >= 0 )
  {
    v26 = v35;
    *(_DWORD *)(a3 + 32) = HIDWORD(v36);
    LOWORD(v31) = IrqMachinePolicy;
    *(_BYTE *)(a3 + 4) = 1;
    *(_OWORD *)(a3 + 16) = v26;
    IrqPolicyGetDevicePolicy(a1, a2, (unsigned int)&v33, (unsigned int)&v34, (__int64)&v31, (__int64)v30);
    *(_WORD *)(a3 + 6) = v31;
    return (unsigned int)DeviceIdtAssignment;
  }
  else
  {
    if ( *(_BYTE *)(a3 + 4) )
    {
      v14 = *(_WORD *)(a3 + 6);
      v13 = *(_BYTE *)(a3 + 8);
      v33 = *(_OWORD *)(a3 + 16);
    }
    else
    {
      DevicePolicy = IrqPolicyGetDevicePolicy(
                       a1,
                       a2,
                       (unsigned int)&v33,
                       (unsigned int)&v34,
                       (__int64)&v31,
                       (__int64)v30);
      v13 = v30[0];
      if ( DevicePolicy < 0 )
      {
        v14 = IrqMachinePolicy;
        v33 = 0uLL;
      }
      else
      {
        v14 = v31;
      }
    }
    if ( (unsigned __int8)IcIsInterruptTypeSecondary(a5) )
    {
      v27 = v32;
      v31 = 0;
      SecondaryInterruptAffinity = ProcessorpGetSecondaryInterruptAffinity(0LL, v32, &v33);
      if ( SecondaryInterruptAffinity >= 0 )
      {
        v13 = 0;
        LOBYTE(v29) = a7 & 1;
        SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                       a1,
                                       (unsigned int)&v33,
                                       v28,
                                       v29,
                                       v27,
                                       a5,
                                       a6,
                                       a8,
                                       (__int64)&v31);
LABEL_13:
        if ( SecondaryInterruptAffinity >= 0 )
        {
          v22 = v33;
          *(_DWORD *)(a3 + 32) = v31;
          *(_OWORD *)(a3 + 16) = v22;
          *(_WORD *)(a3 + 6) = v14;
          *(_BYTE *)(a3 + 8) = v13;
          *(_BYTE *)(a3 + 4) = 1;
        }
      }
      return (unsigned int)SecondaryInterruptAffinity;
    }
    if ( !(_QWORD)v33 )
      goto LABEL_7;
    if ( (unsigned __int8)ProcessorpValidateTargetSet(&v33) )
    {
      LOBYTE(v24) = a7 & 1;
      result = ProcessorpFindAffinitizedIdtEntries(a1, (unsigned int)&v33, v16, v24, v32, a5, a6, a8, (__int64)&v31);
      v15 = result;
      if ( (int)result >= 0 )
      {
        v25 = v33;
        *(_DWORD *)(a3 + 32) = v31;
        *(_OWORD *)(a3 + 16) = v25;
        *(_WORD *)(a3 + 6) = v14;
        *(_BYTE *)(a3 + 8) = v13;
        *(_BYTE *)(a3 + 4) = 1;
        return result;
      }
    }
    else
    {
      v15 = -1073741637;
    }
    if ( v14 != 4 )
    {
LABEL_7:
      v17 = IrqMachinePolicy;
      goto LABEL_8;
    }
    if ( !a2 || (*(_BYTE *)(a2 + 4) & 4) == 0 )
    {
      v17 = IrqMachinePolicy;
      v14 = IrqMachinePolicy;
LABEL_8:
      if ( v17 == 6 )
      {
        v36 = 0LL;
        BYTE4(v35) = a5 + 0x100000 > 0xFFFFE;
        LODWORD(v35) = a5;
        WORD3(v35) = 1;
        BYTE5(v35) = a6 & 1;
        *((_QWORD *)&v35 + 1) = KeQueryGroupAffinity(0);
        v18 = IrqPolicyQueryInterruptSteeringEnabled(&v35);
      }
      else
      {
        v18 = 0;
      }
      LOBYTE(v35) = 0;
      v31 = 0;
      while ( 1 )
      {
        LOBYTE(v16) = v18;
        LOBYTE(v15) = v13;
        SecondaryInterruptAffinity = ProcessorpSelectProcessorSet(v14, v15, v16, (unsigned int)&v33, (__int64)&v35);
        if ( SecondaryInterruptAffinity < 0 )
          return (unsigned int)SecondaryInterruptAffinity;
        LOBYTE(v21) = a7 & 1;
        SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                       a1,
                                       (unsigned int)&v33,
                                       v20,
                                       v21,
                                       v32,
                                       a5,
                                       a6,
                                       a8,
                                       (__int64)&v31);
        v18 = 0;
        if ( SecondaryInterruptAffinity >= 0 )
          goto LABEL_13;
      }
    }
    return v15;
  }
}
