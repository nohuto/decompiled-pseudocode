/*
 * XREFs of PspSetJobIoAttribution @ 0x1404D4800
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspSetJobIoRateControl @ 0x1404D4610 (PspSetJobIoRateControl.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     IoStartDiskIoAttributionForContext @ 0x1400B5034 (IoStartDiskIoAttributionForContext.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspIsSetJobIoAttribution @ 0x1404D49E4 (PspIsSetJobIoAttribution.c)
 *     PspRemoveIoAttribution @ 0x1404D4A40 (PspRemoveIoAttribution.c)
 *     IoDiskIoAttributionAllocate @ 0x1404D4AC4 (IoDiskIoAttributionAllocate.c)
 */

__int64 __fastcall PspSetJobIoAttribution(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  char v4; // r15
  char v7; // r12
  unsigned int v9; // eax
  unsigned int v10; // eax
  _RTL_BALANCED_NODE *v11; // rax
  _RTL_BALANCED_NODE *v12; // rdi
  unsigned int v13; // esi
  const EVENT_DESCRIPTOR *v14; // rbx
  REGHANDLE v15; // rdi
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v22[3]; // [rsp+40h] [rbp-29h] BYREF
  _RTL_BALANCED_NODE *v23; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  _RTL_BALANCED_NODE **v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+78h] [rbp+Fh]
  int v27; // [rsp+7Ch] [rbp+13h]
  unsigned int *v28; // [rsp+80h] [rbp+17h]
  int v29; // [rsp+88h] [rbp+1Fh]
  int v30; // [rsp+8Ch] [rbp+23h]

  v4 = 0;
  v7 = a2;
  if ( !(_BYTE)a2 )
  {
    if ( !a3 )
      goto LABEL_22;
    v17 = *(_DWORD *)(a1 + 1336);
    if ( v17 < a4 )
    {
      v12 = 0LL;
      v13 = -1073741811;
      goto LABEL_14;
    }
    v18 = v17 - a4;
    *(_DWORD *)(a1 + 1336) = v18;
    if ( v18 )
    {
      v12 = *(_RTL_BALANCED_NODE **)(a1 + 1344);
    }
    else
    {
LABEL_22:
      v19 = *(_DWORD *)(a1 + 1340);
      v12 = *(_RTL_BALANCED_NODE **)(a1 + 1344);
      if ( v19 > a4 )
      {
        *(_DWORD *)(a1 + 1340) = v19 - a4;
      }
      else
      {
        PspRemoveIoAttribution(a1);
        *(_DWORD *)(a1 + 1340) = 0;
      }
    }
    goto LABEL_11;
  }
  if ( (unsigned __int8)PspIsSetJobIoAttribution(a1, a2, 0LL) )
  {
    v12 = 0LL;
    v13 = -1073741637;
    goto LABEL_14;
  }
  if ( a3 )
  {
    v9 = *(_DWORD *)(a1 + 1336);
    if ( v9 + a4 < v9 )
    {
      v12 = 0LL;
      v13 = -1073741670;
      goto LABEL_14;
    }
    if ( v9 )
    {
      *(_DWORD *)(a1 + 1336) = v9 + a4;
      goto LABEL_25;
    }
    *(_DWORD *)(a1 + 1336) = a4;
    v4 = 1;
  }
  v10 = *(_DWORD *)(a1 + 1340);
  if ( v10 + a4 < v10 )
  {
    v12 = 0LL;
    v13 = -1073741670;
    goto LABEL_12;
  }
  if ( v10 )
  {
    *(_DWORD *)(a1 + 1340) = v10 + a4;
LABEL_25:
    v12 = *(_RTL_BALANCED_NODE **)(a1 + 1344);
    goto LABEL_11;
  }
  v11 = (_RTL_BALANCED_NODE *)IoDiskIoAttributionAllocate(a1, 0LL);
  v12 = v11;
  if ( v11 )
  {
    IoStartDiskIoAttributionForContext(v11);
    v22[2] = 1LL;
    v22[0] = v12;
    v22[1] = a1;
    PspEnumJobsAndProcessesInJobHierarchy(
      (_QWORD *)a1,
      (int)PspSetJobIoAttributionJobPreCallback,
      0,
      (int)PspSetJobIoAttributionProcessCallback,
      (__int64)v22,
      5);
    *(_DWORD *)(a1 + 1340) = a4;
    *(_QWORD *)(a1 + 1344) = v12;
LABEL_11:
    v4 = 0;
    v13 = 0;
    goto LABEL_12;
  }
  v12 = 0LL;
  v13 = -1073741801;
LABEL_12:
  if ( v4 )
    *(_DWORD *)(a1 + 1336) -= a4;
LABEL_14:
  v20 = *(_DWORD *)(a1 + 1236);
  v14 = (const EVENT_DESCRIPTOR *)&PsDiskIoAttributionStart;
  v23 = v12;
  v15 = EtwpPsProvRegHandle;
  if ( !v7 )
    v14 = &PsDiskIoAttributionStop;
  v21 = v13;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, v14) )
  {
    UserData.Reserved = 0;
    v27 = 0;
    v30 = 0;
    UserData.Ptr = (ULONGLONG)&v20;
    UserData.Size = 4;
    v25 = &v23;
    v29 = 4;
    v28 = &v21;
    v26 = 8;
    EtwWrite(v15, v14, 0LL, 3u, &UserData);
  }
  return v13;
}
