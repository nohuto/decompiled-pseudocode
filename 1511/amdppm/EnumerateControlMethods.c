/*
 * XREFs of EnumerateControlMethods @ 0x1C00118F0
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 */

__int64 __fastcall EnumerateControlMethods(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  SIZE_T *v5; // rdi
  int v6; // r15d
  unsigned int (__fastcall *v7)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, _QWORD); // rax
  int v8; // ebx
  size_t v9; // rbx
  __int64 v10; // rsi
  SIZE_T *PoolWithTag; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  _DWORD *v14; // r9
  unsigned int v15; // r11d
  __int64 v16; // r14
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // eax
  _BYTE *v20; // rcx
  int v21; // ecx
  unsigned int v22; // edx
  unsigned __int8 *v23; // r10
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rax
  char *v27; // rdx
  __int64 v29; // [rsp+50h] [rbp-39h] BYREF
  SIZE_T *v30; // [rsp+58h] [rbp-31h]
  __int64 v31; // [rsp+60h] [rbp-29h]
  _QWORD v32[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v33; // [rsp+78h] [rbp-11h]
  __int64 v34; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v35[2]; // [rsp+88h] [rbp-1h] BYREF
  SIZE_T NumberOfBytes[2]; // [rsp+98h] [rbp+Fh] BYREF
  int v37; // [rsp+A8h] [rbp+1Fh]

  v35[0] = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v32[0] = 0LL;
  v33 = 0LL;
  v6 = 0;
  v35[1] = 0LL;
  v32[1] = v35;
  v29 = 0LL;
  v31 = 0LL;
  NumberOfBytes[0] = 0LL;
  NumberOfBytes[1] = 0LL;
  v37 = 0;
  v30 = NumberOfBytes;
  v35[0] = 0x148696541LL;
  v7 = *(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  LODWORD(v32[0]) = 1;
  LODWORD(v33) = 16;
  LODWORD(v29) = 1;
  LODWORD(v31) = 20;
  if ( v7(WdfDriverGlobals, v4, 0LL, 3325984LL, v32, &v29, 0LL, 0LL) != -2147483643 )
  {
    v8 = -1072431089;
    goto LABEL_36;
  }
  if ( LODWORD(NumberOfBytes[0]) != 1198089537 )
    goto LABEL_33;
  v9 = HIDWORD(NumberOfBytes[0]);
  if ( HIDWORD(NumberOfBytes[0]) < 0x14 )
    goto LABEL_33;
  v10 = HIDWORD(NumberOfBytes[0]);
  PoolWithTag = (SIZE_T *)ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes[0]), 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_36;
  }
  memset(PoolWithTag, 0, v9);
  v12 = *(_QWORD *)(a1 + 16);
  v29 = 1LL;
  v30 = v5;
  v31 = (unsigned int)v9;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v12,
         0LL,
         3325984LL,
         v32,
         &v29,
         0LL,
         &v34);
  if ( v8 < 0 )
    goto LABEL_34;
  if ( *(_DWORD *)v5 != 1198089537 || (v13 = *((_DWORD *)v5 + 1)) == 0 || v34 != v10 )
  {
LABEL_33:
    v8 = -1072431089;
    goto LABEL_34;
  }
  v14 = v5 + 1;
  if ( v13 <= 1 )
    goto LABEL_34;
  v15 = *((_DWORD *)v5 + 3);
  v16 = v13 - 1;
  do
  {
    v14 = (_DWORD *)((char *)v14 + v15 + 8);
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v15 = v14[1];
    if ( !v15 )
      goto LABEL_21;
    v20 = v14 + 2;
    while ( *v20 == 46 )
    {
      v17 = v19;
LABEL_18:
      ++v19;
      ++v20;
      if ( v19 >= v15 )
        goto LABEL_21;
    }
    if ( *v20 )
      goto LABEL_18;
    v18 = v19;
LABEL_21:
    v21 = 0;
    if ( v18 > v17 && v18 - v17 - 1 <= 4 )
    {
      v22 = v18 - 1;
      if ( v22 > v17 )
      {
        v23 = (unsigned __int8 *)v14 + v22 + 8;
        v24 = v22 - v17;
        do
        {
          v25 = *v23--;
          v21 = v25 + (v21 << 8);
          --v24;
        }
        while ( v24 );
      }
    }
    v26 = 0LL;
    v27 = AcpiFeatureMethods;
    while ( *(_DWORD *)v27 != v21 )
    {
      v26 = (unsigned int)(v26 + 1);
      v27 += 8;
      if ( (unsigned int)v26 >= 0xF )
        goto LABEL_31;
    }
    v6 |= *(_DWORD *)&AcpiFeatureMethods[8 * v26 + 4];
LABEL_31:
    --v16;
  }
  while ( v16 );
LABEL_34:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
LABEL_36:
  *a2 = v6;
  return (unsigned int)v8;
}
