/*
 * XREFs of NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A92B8
 * Callers:
 *     ACPIInitialize @ 0x1C00A90EC (ACPIInitialize.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004C64 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     AMLIEvalPackageElement @ 0x1C0022C00 (AMLIEvalPackageElement.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall NotifyHalWithMachineStatesAndRetrieveInterruptModel(int *a1)
{
  _QWORD *PoolWithTag; // rax
  int v2; // edx
  _BYTE *v3; // r14
  __int64 v4; // r12
  signed int v5; // esi
  unsigned __int8 v6; // r13
  int v7; // edi
  _BYTE *v8; // rbx
  int v9; // edx
  __int64 *v10; // rdi
  char *v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  int *v14; // rsi
  int v15; // ecx
  volatile signed __int32 *v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  int v21; // [rsp+38h] [rbp-59h] BYREF
  __int64 InputBuffer; // [rsp+40h] [rbp-51h] BYREF
  __int64 v23; // [rsp+48h] [rbp-49h] BYREF
  __int64 v24; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-39h]
  int *v26; // [rsp+60h] [rbp-31h]
  _QWORD v27[5]; // [rsp+68h] [rbp-29h] BYREF
  void *Src[5]; // [rsp+90h] [rbp-1h]
  char v29[8]; // [rsp+B8h] [rbp+27h] BYREF

  strcpy(v29, "\\_PIC");
  Src[0] = "\\_S1";
  v26 = a1;
  Src[1] = "\\_S2";
  BugCheckParameter4 = 0LL;
  Src[2] = "\\_S3";
  Src[3] = "\\_S4";
  Src[4] = "\\_S5";
  v24 = 0LL;
  InputBuffer = 0LL;
  v23 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x4D706341u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v4 = 0LL;
  *PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 2) = 0;
  *((_WORD *)PoolWithTag + 6) = 0;
  *((_BYTE *)PoolWithTag + 14) = 0;
  v5 = 2;
  AcpiSupportedSystemStates = 98;
  do
  {
    v6 = byte_1C00663D8[v4];
    v7 = *(_DWORD *)((char *)&unk_1C00663B8 + v4);
    if ( v5 == 2 && (AcpiOverrideAttributes & 0x10) != 0
      || v5 == 3 && (AcpiOverrideAttributes & 0x20) != 0
      || v5 == 4 && (AcpiOverrideAttributes & 0x40) != 0 )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_s(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        13,
        (__int64)&WPP_db66f502ccd5327f0bbb8755ae72e471_Traceguids,
        (__int64)Src[v6]);
      v3[2 * v6 + v6] = 0;
      if ( v7 )
      {
        HIDWORD(v23) |= v7;
        LODWORD(v23) = 2;
      }
      goto LABEL_12;
    }
    if ( (AcpiOverrideAttributes & 4) != 0 && v5 < 5 )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_s(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        14,
        (__int64)&WPP_db66f502ccd5327f0bbb8755ae72e471_Traceguids,
        (__int64)Src[v6]);
      v3[2 * v6 + v6] = 0;
      if ( v7 )
      {
        HIDWORD(v24) |= v7;
        LODWORD(v24) = 9;
      }
      goto LABEL_12;
    }
    if ( *((_BYTE *)AcpiInformation + 133) && v5 >= 5 )
      goto LABEL_10;
    v8 = Src[v6];
    if ( (int)AMLIGetNameSpaceObject(v8) >= 0 )
    {
      v10 = (__int64 *)BugCheckParameter4;
      AcpiSupportedSystemStates |= 1 << v5;
      AMLIEvalPackageElement((__int64 *)BugCheckParameter4, 0, v27);
      v11 = &v3[2 * v6];
      v11[v6 + 1] = v27[2];
      dword_1C0074698 = 0;
      byte_1C007469C[0] = 0;
      FreeDataBuffs((__int64)v27, 1u);
      AMLIEvalPackageElement(v10, 1u, v27);
      v11[v6 + 2] = v27[2];
      dword_1C0074698 = 0;
      byte_1C007469C[0] = 0;
      FreeDataBuffs((__int64)v27, 1u);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v10, v12);
      BugCheckParameter4 = 0LL;
LABEL_10:
      v13 = AcpiSupportedSystemStates;
      if ( _bittest(&v13, v5) )
        v3[2 * v6 + v6] = 1;
      goto LABEL_12;
    }
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_s(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      6,
      15,
      (__int64)&WPP_db66f502ccd5327f0bbb8755ae72e471_Traceguids,
      (__int64)v8);
    v3[2 * v6 + v6] = 0;
    if ( v7 )
    {
      HIDWORD(InputBuffer) |= v7;
      LODWORD(InputBuffer) = 1;
    }
LABEL_12:
    ++v5;
    v4 += 4LL;
  }
  while ( v5 <= 6 );
  if ( *((_BYTE *)AcpiInformation + 133) && (AcpiSupportedSystemStates & 0xFFFFFF9D) != 0 )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      22,
      16,
      (__int64)&WPP_db66f502ccd5327f0bbb8755ae72e471_Traceguids);
    KeBugCheckEx(0xA5u, 0x11uLL, 0xDuLL, 0LL, 0LL);
  }
  if ( (_DWORD)InputBuffer )
    ZwPowerInformation(SystemPowerLoggingEntry, &InputBuffer, 8u, 0LL, 0);
  if ( (_DWORD)v23 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v23, 8u, 0LL, 0);
  if ( (_DWORD)v24 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v24, 8u, 0LL, 0);
  v21 = 0;
  (*(void (__fastcall **)(_BYTE *, int *))(PmHalDispatchTable + 16))(v3, &v21);
  ExFreePoolWithTag(v3, 0);
  v14 = v26;
  v15 = 4096;
  if ( (unsigned int)(v21 - 1) <= 3 )
    v15 = v21;
  *v26 = v15;
  if ( (int)AMLIGetNameSpaceObject(v29) < 0 )
  {
    return 0;
  }
  else
  {
    memset(v27, 0, sizeof(v27));
    v16 = (volatile signed __int32 *)BugCheckParameter4;
    WORD1(v27[0]) = 1;
    v27[2] = v21;
    v17 = AMLIEvalNameSpaceObject((__int64 *)BugCheckParameter4, 0LL, 1u, v27);
    v19 = v17;
    if ( v17 < 0 )
      KeBugCheckEx(0xA5u, 0x2001uLL, *v14, v17, (ULONG_PTR)v16);
    AMLIDereferenceHandleEx(v16, v18);
  }
  return v19;
}
