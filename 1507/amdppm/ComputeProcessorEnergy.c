/*
 * XREFs of ComputeProcessorEnergy @ 0x1C0005590
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0001BB4 (ProcLibGetProcessorNumber.c)
 *     EnumerateNextDevice @ 0x1C0004BBC (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeProcessorEnergy(__int64 a1, __int64 a2, char *a3, unsigned __int64 *a4)
{
  char *v5; // rbx
  unsigned int *v7; // r11
  __int64 v10; // rsi
  unsigned __int64 *v11; // r10
  char *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // r9d
  __int64 v28; // rax
  REGHANDLE v29; // rcx
  __int64 result; // rax
  struct _PROCESSOR_NUMBER v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v38[3]; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 *p_Number; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  int *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]

  v5 = (char *)((char *)&qword_1C00098C4 - a3);
  v7 = (unsigned int *)a3;
  v33 = *(_QWORD *)DevExts;
  v10 = *(_QWORD *)(v33 + 320);
  v11 = a4;
  v12 = (char *)(&unk_1C00098BC - (_UNKNOWN *)a3);
  v13 = 2LL;
  v14 = a1 - (_QWORD)v11;
  do
  {
    v15 = *(unsigned int *)((char *)v7 + (_QWORD)v5);
    if ( (_DWORD)v15 )
      *v11 = 10
           * *v7
           * *(unsigned __int64 *)((char *)v11 + v14)
           * *(unsigned int *)((char *)v7 + (_QWORD)v12)
           / (v10
            * v15);
    else
      *v11 = 0LL;
    ++v7;
    ++v11;
    --v13;
  }
  while ( v13 );
  v39 = 32;
  v38[0] = &qword_1C00093A8;
  v38[2] = 0LL;
  v38[1] = &qword_1C00093A8;
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64)v38, &v33);
    if ( (_DWORD)result )
      break;
    v16 = v33;
    v17 = *(unsigned __int8 *)(v33 + 328);
    v37 = *(unsigned int *)&a3[4 * v17];
    v34 = *(_QWORD *)(a2 + 8 * v17);
    v36 = *(_QWORD *)(a1 + 8 * v17);
    v35 = a4[v17];
    if ( EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PROCESSOR_COMPUTE_ENERGY)
      && (int)ProcLibGetProcessorNumber(v16, &v31) >= 0 )
    {
      v18 = *(_QWORD *)(v16 + 312);
      UserData.Ptr = (unsigned __int64)&v31;
      *(_QWORD *)&UserData.Size = 2LL;
      p_Number = &v31.Number;
      v19 = v18 + 56;
      v42 = 1LL;
      v43 = &v32;
      v20 = 3;
      v32 = 4;
      v44 = 4LL;
      v21 = 4LL;
      do
      {
        v22 = 2LL * v20;
        *(&UserData.Ptr + v22) = v19 - 32;
        v23 = v20 + 1;
        v20 += 2;
        v23 *= 2LL;
        *((_QWORD *)&UserData.Size + v22) = 8LL;
        *(&UserData.Ptr + v23) = v19;
        v19 += 8LL;
        *((_QWORD *)&UserData.Size + v23) = 8LL;
        --v21;
      }
      while ( v21 );
      v24 = 2LL * v20;
      *(&UserData.Ptr + v24) = (unsigned __int64)&v36;
      *((_QWORD *)&UserData.Size + v24) = 8LL;
      v25 = 2LL * (v20 + 1);
      *(&UserData.Ptr + v25) = (unsigned __int64)&v34;
      *((_QWORD *)&UserData.Size + v25) = 8LL;
      v26 = v20 + 2;
      v27 = v20 + 3;
      v26 *= 2LL;
      *(&UserData.Ptr + v26) = (unsigned __int64)&v37;
      *((_QWORD *)&UserData.Size + v26) = 8LL;
      v28 = 2LL * v27;
      *(&UserData.Ptr + v28) = (unsigned __int64)&v35;
      v29 = ProcLibEtwHandle;
      *((_QWORD *)&UserData.Size + v28) = 8LL;
      EtwWrite(v29, &PPM_ETW_PROCESSOR_COMPUTE_ENERGY, 0LL, v27 + 1, &UserData);
    }
  }
  return result;
}
