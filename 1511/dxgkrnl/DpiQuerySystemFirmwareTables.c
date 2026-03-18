/*
 * XREFs of DpiQuerySystemFirmwareTables @ 0x1C00E8170
 * Callers:
 *     DpiReadSystemFirmwareTable @ 0x1C00E8100 (DpiReadSystemFirmwareTable.c)
 *     DpiEnumSystemFirmwareTables @ 0x1C01700B0 (DpiEnumSystemFirmwareTables.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 */

__int64 __fastcall DpiQuerySystemFirmwareTables(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  _DWORD *PoolWithTag; // rbx
  unsigned int v7; // esi
  int v8; // r15d
  int v9; // r12d
  int v10; // r13d
  ULONG v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // edx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE SystemInformation[128]; // [rsp+30h] [rbp-B8h] BYREF

  PoolWithTag = SystemInformation;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  if ( KeGetCurrentIrql() )
  {
    LODWORD(v18) = -1073741811;
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v21[6] = 0LL;
    v21[5] = DpiQuerySystemFirmwareTables;
    v21[3] = 275LL;
    v21[4] = 21LL;
    v21[7] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  else if ( (a5 || !a4) && a6 )
  {
    v11 = a4 + 16;
    if ( a4 + 16 <= 0x80 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x74727044u)) != 0LL )
    {
      PoolWithTag[1] = v10;
      *PoolWithTag = v9;
      PoolWithTag[2] = v8;
      PoolWithTag[3] = v7;
      v16 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, v11, ReturnLength);
      v18 = v16;
      if ( v16 < 0 )
      {
        if ( v16 == -1073741789 && ReturnLength[0] >= 0x10 )
        {
          *a6 = PoolWithTag[3];
        }
        else
        {
          *a6 = 0;
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v24[3] = DpiQuerySystemFirmwareTables;
          v24[4] = ZwQuerySystemInformation;
          v24[5] = v18;
          WdLogEvent5_WdError(v24);
        }
      }
      else
      {
        v19 = PoolWithTag[3];
        *a6 = v19;
        if ( v19 <= v7 )
          v7 = v19;
        if ( a5 )
          memmove(a5, PoolWithTag + 4, v7);
      }
    }
    else
    {
      LODWORD(v18) = -1073741801;
      v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      v23[3] = DpiQuerySystemFirmwareTables;
      v23[4] = ExAllocatePoolWithTag;
      v23[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v23);
    }
    if ( PoolWithTag != (_DWORD *)SystemInformation )
      ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  }
  else
  {
    LODWORD(v18) = -1073741811;
    v22 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v22[3] = DpiQuerySystemFirmwareTables;
    v22[4] = 0LL;
    v22[5] = -1073741811LL;
    WdLogEvent5_WdError(v22);
  }
  return (unsigned int)v18;
}
