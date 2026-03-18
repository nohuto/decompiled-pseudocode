/*
 * XREFs of NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0086A64
 * Callers:
 *     ACPIInitialize @ 0x1C0086574 (ACPIInitialize.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000E05C (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     AMLIEvalPackageElement @ 0x1C001AFE8 (AMLIEvalPackageElement.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall NotifyHalWithMachineStatesAndRetrieveInterruptModel(int *a1)
{
  _QWORD *PoolWithTag; // rax
  _BYTE *v2; // r14
  char v3; // dl
  signed int v4; // esi
  __int64 v5; // r13
  unsigned __int8 v6; // r12
  int v7; // ebx
  __int64 *v8; // rdi
  char *v9; // rbx
  int v10; // eax
  int *v11; // rsi
  int v12; // ecx
  volatile signed __int32 *v13; // rdi
  int v14; // eax
  unsigned int v15; // ebx
  int v17; // [rsp+38h] [rbp-59h] BYREF
  __int64 v18; // [rsp+40h] [rbp-51h] BYREF
  __int64 InputBuffer; // [rsp+48h] [rbp-49h] BYREF
  __int64 v20; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-39h]
  int *v22; // [rsp+60h] [rbp-31h]
  _QWORD v23[5]; // [rsp+68h] [rbp-29h] BYREF
  void *Src[5]; // [rsp+90h] [rbp-1h]
  char v25[8]; // [rsp+B8h] [rbp+27h] BYREF

  strcpy(v25, "\\_PIC");
  Src[0] = "\\_S1";
  v22 = a1;
  Src[1] = "\\_S2";
  BugCheckParameter4 = 0LL;
  Src[2] = "\\_S3";
  Src[3] = "\\_S4";
  Src[4] = "\\_S5";
  v18 = 0LL;
  InputBuffer = 0LL;
  v20 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x4D706341u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v3 = AcpiOverrideAttributes;
  v4 = 2;
  AcpiSupportedSystemStates = 98;
  *PoolWithTag = 0LL;
  v5 = 0LL;
  *((_DWORD *)PoolWithTag + 2) = 0;
  *((_WORD *)PoolWithTag + 6) = 0;
  *((_BYTE *)PoolWithTag + 14) = 0;
  do
  {
    v6 = byte_1C004DC98[v5];
    v7 = *(_DWORD *)((char *)&unk_1C004DC78 + v5);
    if ( v4 == 2 && (v3 & 0x10) != 0 || v4 == 3 && (v3 & 0x20) != 0 || v4 == 4 && (v3 & 0x40) != 0 )
    {
      v2[2 * v6 + v6] = 0;
      if ( v7 )
      {
        HIDWORD(v20) |= v7;
        LODWORD(v20) = 2;
      }
      goto LABEL_12;
    }
    if ( (v3 & 4) != 0 && v4 < 5 )
    {
      v2[2 * v6 + v6] = 0;
      if ( v7 )
      {
        HIDWORD(v18) |= v7;
        LODWORD(v18) = 9;
      }
      goto LABEL_12;
    }
    if ( *((_BYTE *)AcpiInformation + 133) && v4 >= 5 )
      goto LABEL_10;
    if ( (int)AMLIGetNameSpaceObject(Src[v6]) >= 0 )
    {
      v8 = (__int64 *)BugCheckParameter4;
      AcpiSupportedSystemStates |= 1 << v4;
      AMLIEvalPackageElement((__int64 *)BugCheckParameter4, 0, v23);
      v9 = &v2[2 * v6];
      v9[v6 + 1] = v23[2];
      dword_1C005A228 = 0;
      byte_1C005A22C[0] = 0;
      FreeDataBuffs((__int64)v23, 1u);
      AMLIEvalPackageElement(v8, 1u, v23);
      v9[v6 + 2] = v23[2];
      dword_1C005A228 = 0;
      byte_1C005A22C[0] = 0;
      FreeDataBuffs((__int64)v23, 1u);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v8);
      v3 = AcpiOverrideAttributes;
      BugCheckParameter4 = 0LL;
LABEL_10:
      v10 = AcpiSupportedSystemStates;
      if ( _bittest(&v10, v4) )
        v2[2 * v6 + v6] = 1;
      goto LABEL_12;
    }
    v3 = AcpiOverrideAttributes;
    v2[2 * v6 + v6] = 0;
    if ( v7 )
    {
      HIDWORD(InputBuffer) |= v7;
      LODWORD(InputBuffer) = 1;
    }
LABEL_12:
    ++v4;
    v5 += 4LL;
  }
  while ( v4 <= 6 );
  if ( *((_BYTE *)AcpiInformation + 133) && (AcpiSupportedSystemStates & 0xFFFFFF9D) != 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 0xDuLL, 0LL, 0LL);
  if ( (_DWORD)InputBuffer )
    ZwPowerInformation(SystemPowerLoggingEntry, &InputBuffer, 8u, 0LL, 0);
  if ( (_DWORD)v20 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v20, 8u, 0LL, 0);
  if ( (_DWORD)v18 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v18, 8u, 0LL, 0);
  v17 = 0;
  (*(void (__fastcall **)(_BYTE *, int *))(PmHalDispatchTable + 16))(v2, &v17);
  ExFreePoolWithTag(v2, 0);
  v11 = v22;
  v12 = 4096;
  if ( (unsigned int)(v17 - 1) <= 2 )
    v12 = v17;
  *v22 = v12;
  if ( (int)AMLIGetNameSpaceObject(v25) < 0 )
  {
    return 0;
  }
  else
  {
    memset(v23, 0, sizeof(v23));
    v13 = (volatile signed __int32 *)BugCheckParameter4;
    v23[2] = v17;
    WORD1(v23[0]) = 1;
    v14 = AMLIEvalNameSpaceObject((__int64 *)BugCheckParameter4, 0LL, 1u, v23);
    v15 = v14;
    if ( v14 < 0 )
      KeBugCheckEx(0xA5u, 0x2001uLL, *v11, v14, (ULONG_PTR)v13);
    AMLIDereferenceHandleEx(v13);
  }
  return v15;
}
