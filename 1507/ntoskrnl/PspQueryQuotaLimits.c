/*
 * XREFs of PspQueryQuotaLimits @ 0x140511084
 * Callers:
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MmQueryWorkingSetInformation @ 0x1400F090C (MmQueryWorkingSetInformation.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PspQueryQuotaLimits(
        HANDLE Handle,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        KPROCESSOR_MODE AccessMode)
{
  size_t v6; // rdi
  NTSTATUS result; // eax
  _QWORD *v9; // rcx
  int v10; // ebx
  int v11; // edx
  int v12; // edx
  int v13; // [rsp+40h] [rbp-D8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD Src[12]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-58h] BYREF
  _BYTE v19[48]; // [rsp+C8h] [rbp-50h] BYREF

  v6 = a4;
  memset(Src, 0, 88);
  if ( a4 != 48 && a4 != 88 )
    return -1073741820;
  result = ObReferenceObjectByHandleWithTag(
             Handle,
             0x1000u,
             (POBJECT_TYPE)PsProcessType,
             AccessMode,
             0x79517350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v9 = (_QWORD *)*((_QWORD *)Object + 130);
    Src[0] = v9[24];
    Src[1] = v9[8];
    Src[4] = v9[40];
    Src[6] = v9[56];
    Src[5] = -1LL;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v19);
    v10 = MmQueryWorkingSetInformation(&v18, &v16, &v17, &Src[2], &Src[3], &v13);
    KiUnstackDetachProcess((struct _KTHREAD *)v19, 0);
    v11 = 2 - ((v13 & 4) != 0);
    if ( (v13 & 1) != 0 )
      v12 = v11 | 4;
    else
      v12 = v11 | 8;
    LODWORD(Src[10]) = v12;
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    if ( v10 >= 0 )
    {
      memmove(a3, Src, v6);
      if ( a5 )
        *a5 = v6;
    }
    return v10;
  }
  return result;
}
