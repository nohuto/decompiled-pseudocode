/*
 * XREFs of ProcLibTraceEnergyEstimation @ 0x1C0003800
 * Callers:
 *     ComputeAtomEnergy @ 0x1C0002C90 (ComputeAtomEnergy.c)
 *     ComputeCoreEnergy @ 0x1C0002DB0 (ComputeCoreEnergy.c)
 *     ComputeProcessorEnergy @ 0x1C0006A10 (ComputeProcessorEnergy.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0001524 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 */

char ProcLibTraceEnergyEstimation(__int64 a1, ...)
{
  int ProcessorNumber; // eax
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r9d
  __int64 v13; // rax
  REGHANDLE v14; // rcx
  struct _PROCESSOR_NUMBER v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-B0h]
  __int64 v20; // [rsp+60h] [rbp-A8h]
  int *v21; // [rsp+68h] [rbp-A0h]
  int v22; // [rsp+70h] [rbp-98h]
  int v23; // [rsp+74h] [rbp-94h]
  __int64 v24; // [rsp+170h] [rbp+68h] BYREF
  va_list va; // [rsp+170h] [rbp+68h]
  __int64 v26; // [rsp+178h] [rbp+70h] BYREF
  va_list va1; // [rsp+178h] [rbp+70h]
  __int64 v28; // [rsp+180h] [rbp+78h] BYREF
  va_list va2; // [rsp+180h] [rbp+78h]
  va_list va3; // [rsp+188h] [rbp+80h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v24 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v28 = va_arg(va3, _QWORD);
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_COMPUTE_ENERGY);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v16);
    if ( ProcessorNumber >= 0 )
    {
      UserData.Reserved = 0;
      v3 = 4LL;
      v23 = 0;
      v4 = *(_QWORD *)(a1 + 312);
      UserData.Ptr = (unsigned __int64)&v16;
      v5 = v4 + 56;
      UserData.Size = 2;
      p_Number = &v16.Number;
      v6 = 3;
      v20 = 1LL;
      v21 = &v17;
      v17 = 4;
      v22 = 4;
      do
      {
        v7 = 2LL * v6;
        *(&UserData.Reserved + 2 * v7) = 0;
        *(&UserData.Ptr + v7) = v5 - 32;
        *(&UserData.Size + 2 * v7) = 8;
        v8 = v6 + 1;
        v6 += 2;
        v8 *= 2LL;
        *(&UserData.Reserved + 2 * v8) = 0;
        *(&UserData.Ptr + v8) = v5;
        v5 += 8LL;
        *(&UserData.Size + 2 * v8) = 8;
        --v3;
      }
      while ( v3 );
      v9 = 2LL * v6;
      *(&UserData.Reserved + 2 * v9) = 0;
      *(&UserData.Ptr + v9) = (unsigned __int64)va1;
      *(&UserData.Size + 2 * v9) = 8;
      v10 = 2LL * (v6 + 1);
      *(&UserData.Reserved + 2 * v10) = 0;
      *(&UserData.Ptr + v10) = (unsigned __int64)va2;
      *(&UserData.Size + 2 * v10) = 8;
      v11 = v6 + 2;
      v12 = v6 + 3;
      v11 *= 2LL;
      *(&UserData.Reserved + 2 * v11) = 0;
      *(&UserData.Ptr + v11) = (unsigned __int64)va3;
      *(&UserData.Size + 2 * v11) = 8;
      v13 = 2LL * v12;
      *(&UserData.Reserved + 2 * v13) = 0;
      *(&UserData.Ptr + v13) = (unsigned __int64)va;
      v14 = ProcLibEtwHandle;
      *(&UserData.Size + 2 * v13) = 8;
      LOBYTE(ProcessorNumber) = EtwWrite(v14, &PPM_ETW_PROCESSOR_COMPUTE_ENERGY, 0LL, v12 + 1, &UserData);
    }
  }
  return ProcessorNumber;
}
