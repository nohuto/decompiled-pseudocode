/*
 * XREFs of ProcessorpFindIdtEntriesApic @ 0x1C006B430
 * Callers:
 *     <none>
 * Callees:
 *     IrqPolicyGetDevicePolicy @ 0x1C006ACC4 (IrqPolicyGetDevicePolicy.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C006B600 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IcIsInterruptTypeSecondary @ 0x1C006B8DC (IcIsInterruptTypeSecondary.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C006BA60 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorpSelectProcessorSet @ 0x1C006CDD4 (ProcessorpSelectProcessorSet.c)
 *     ProcessorpValidateTargetSet @ 0x1C006D694 (ProcessorpValidateTargetSet.c)
 *     ProcessorpGetSecondaryInterruptAffinity @ 0x1C0080398 (ProcessorpGetSecondaryInterruptAffinity.c)
 */

__int64 __fastcall ProcessorpFindIdtEntriesApic(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char a7,
        unsigned int a8)
{
  int DeviceIdtAssignment; // edi
  NTSTATUS DevicePolicy; // eax
  char v13; // si
  unsigned __int16 v14; // di
  __int64 v15; // rdx
  __int64 v16; // rcx
  int SecondaryInterruptAffinity; // ecx
  int v18; // r8d
  int v19; // r9d
  __int128 v20; // xmm0
  __int64 result; // rax
  int v22; // r8d
  int v23; // r9d
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  int v26; // r8d
  int v27; // r9d
  _BYTE v28[4]; // [rsp+58h] [rbp-29h] BYREF
  int v29; // [rsp+5Ch] [rbp-25h] BYREF
  int v30; // [rsp+60h] [rbp-21h] BYREF
  __int128 v31; // [rsp+68h] [rbp-19h] BYREF
  __int128 v32; // [rsp+78h] [rbp-9h] BYREF
  int v33; // [rsp+8Ch] [rbp+Bh]

  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, &v32);
  if ( DeviceIdtAssignment >= 0 )
  {
    v25 = v32;
    *(_DWORD *)(a3 + 32) = v33;
    LOWORD(v29) = IrqMachinePolicy;
    *(_BYTE *)(a3 + 4) = 1;
    *(_OWORD *)(a3 + 16) = v25;
    IrqPolicyGetDevicePolicy(a1, a2, (unsigned __int64 *)&v31, &v30, (__int16 *)&v29, (__int64)v28);
    *(_WORD *)(a3 + 6) = v29;
    return (unsigned int)DeviceIdtAssignment;
  }
  else
  {
    if ( *(_BYTE *)(a3 + 4) )
    {
      v14 = *(_WORD *)(a3 + 6);
      v13 = *(_BYTE *)(a3 + 8);
      v31 = *(_OWORD *)(a3 + 16);
    }
    else
    {
      DevicePolicy = IrqPolicyGetDevicePolicy(a1, a2, (unsigned __int64 *)&v31, &v30, (__int16 *)&v29, (__int64)v28);
      v13 = v28[0];
      if ( DevicePolicy < 0 )
      {
        v14 = IrqMachinePolicy;
        v31 = 0uLL;
      }
      else
      {
        v14 = v29;
      }
    }
    if ( (unsigned __int8)IcIsInterruptTypeSecondary(a5) )
    {
      v29 = 0;
      SecondaryInterruptAffinity = ProcessorpGetSecondaryInterruptAffinity(v16, a4, &v31);
      if ( SecondaryInterruptAffinity >= 0 )
      {
        v13 = 0;
        LOBYTE(v27) = a7 & 1;
        SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                       (_DWORD)a1,
                                       (unsigned int)&v31,
                                       v26,
                                       v27,
                                       a4,
                                       a5,
                                       a6,
                                       a8,
                                       (__int64)&v29);
LABEL_10:
        if ( SecondaryInterruptAffinity >= 0 )
        {
          v20 = v31;
          *(_DWORD *)(a3 + 32) = v29;
          *(_OWORD *)(a3 + 16) = v20;
          *(_WORD *)(a3 + 6) = v14;
          *(_BYTE *)(a3 + 8) = v13;
          *(_BYTE *)(a3 + 4) = 1;
        }
      }
      return (unsigned int)SecondaryInterruptAffinity;
    }
    if ( !(_QWORD)v31 )
    {
LABEL_7:
      v29 = 0;
      LOBYTE(v32) = 0;
      while ( 1 )
      {
        LOBYTE(v15) = v13;
        SecondaryInterruptAffinity = ProcessorpSelectProcessorSet(v14, v15, &v31, &v32);
        if ( SecondaryInterruptAffinity < 0 )
          return (unsigned int)SecondaryInterruptAffinity;
        LOBYTE(v19) = a7 & 1;
        SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                       (_DWORD)a1,
                                       (unsigned int)&v31,
                                       v18,
                                       v19,
                                       a4,
                                       a5,
                                       a6,
                                       a8,
                                       (__int64)&v29);
        if ( SecondaryInterruptAffinity >= 0 )
          goto LABEL_10;
      }
    }
    if ( (unsigned __int8)ProcessorpValidateTargetSet(&v31) )
    {
      LOBYTE(v23) = a7 & 1;
      result = ProcessorpFindAffinitizedIdtEntries(
                 (_DWORD)a1,
                 (unsigned int)&v31,
                 v22,
                 v23,
                 a4,
                 a5,
                 a6,
                 a8,
                 (__int64)&v29);
      v15 = (unsigned int)result;
      if ( (int)result >= 0 )
      {
        v24 = v31;
        *(_DWORD *)(a3 + 32) = v29;
        *(_OWORD *)(a3 + 16) = v24;
        *(_WORD *)(a3 + 6) = v14;
        *(_BYTE *)(a3 + 8) = v13;
        *(_BYTE *)(a3 + 4) = 1;
        return result;
      }
    }
    else
    {
      v15 = 3221225659LL;
    }
    if ( v14 != 4 )
      goto LABEL_7;
    if ( !a2 || (*(_BYTE *)(a2 + 4) & 4) == 0 )
    {
      v14 = IrqMachinePolicy;
      goto LABEL_7;
    }
    return (unsigned int)v15;
  }
}
