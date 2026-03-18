/*
 * XREFs of DbgkCaptureLiveDump @ 0x14066980C
 * Callers:
 *     NtSystemDebugControl @ 0x1406FBA78 (NtSystemDebugControl.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoThreadToProcess @ 0x1400507F0 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     DbgkpLkmdSnapData @ 0x1401E1210 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapDataEx @ 0x1401E1238 (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapGlobals @ 0x1401E124C (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapThread @ 0x1401E1598 (DbgkpLkmdSnapThread.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x1401E15F4 (DbgkpLkmdSqmIncrementDword.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 *     DbgkpLkmdFireCallbacks @ 0x140669CE0 (DbgkpLkmdFireCallbacks.c)
 *     DbgkpLkmdSqmIsOptedIn @ 0x14066A1D4 (DbgkpLkmdSqmIsOptedIn.c)
 *     DbgkpLkmdSqmStatus @ 0x14066A35C (DbgkpLkmdSqmStatus.c)
 *     DbgkpTriageDumpInitialize @ 0x14066B3A0 (DbgkpTriageDumpInitialize.c)
 */

__int64 __fastcall DbgkCaptureLiveDump(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  PVOID v7; // r12
  PEPROCESS v8; // r14
  _DWORD *PoolWithTag; // rdi
  REGHANDLE v10; // rsi
  int v12; // eax
  int v13; // r13d
  int v14; // r15d
  unsigned int i; // ecx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  NTSTATUS v19; // eax
  int v20; // ecx
  char v21; // al
  PEPROCESS v22; // rax
  int v23; // eax
  char AccessMode; // [rsp+30h] [rbp-D0h]
  char v25; // [rsp+34h] [rbp-CCh]
  ULONGLONG RegHandle[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v30; // [rsp+60h] [rbp-A0h]
  _BYTE v31[5120]; // [rsp+70h] [rbp-90h] BYREF
  PVOID v32[6]; // [rsp+1470h] [rbp+1370h] BYREF
  _QWORD v33[6]; // [rsp+14A0h] [rbp+13A0h] BYREF
  _DWORD v34[2]; // [rsp+14D0h] [rbp+13D0h] BYREF
  __int64 v35; // [rsp+14D8h] [rbp+13D8h]

  v27 = a4;
  RegHandle[0] = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  PoolWithTag = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v10 = 0LL;
  if ( !*(_DWORD *)(a1 + 44) || a3 < 0x40000 || (*(_DWORD *)a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)DbgkpLkmdSqmIsOptedIn() )
  {
    EtwRegister(&stru_140294848, 0LL, 0LL, RegHandle);
    v10 = RegHandle[0];
    if ( RegHandle[0] )
      DbgkpLkmdSqmIncrementDword(RegHandle[0], 3292);
  }
  memset(v32, 0, sizeof(v32));
  v12 = DbgkpTriageDumpInitialize(v32, a2, a3, v33);
  v13 = 0;
  v14 = v12;
  if ( v12 >= 0 )
  {
    v14 = ((__int64 (__fastcall *)(PVOID *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v33[0])(
            v32,
            *(unsigned int *)(a1 + 4),
            *(_QWORD *)(a1 + 8),
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 24),
            *(_QWORD *)(a1 + 32));
    if ( v14 >= 0 )
    {
      DbgkpLkmdSnapGlobals((__int64)v31);
      LODWORD(RegHandle[0]) = 4 * *(_DWORD *)(a1 + 44) + 4;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, LODWORD(RegHandle[0]), 0x704E534Bu);
      if ( PoolWithTag )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 44); PoolWithTag[v16] = -1073741823 )
          v16 = i++;
        PoolWithTag[i] = 1112752980;
      }
      v14 = -1073741790;
      v25 = 1;
      if ( *(_DWORD *)(a1 + 44) )
      {
        while ( 1 )
        {
          v17 = *(_DWORD *)(a1 + 40);
          v18 = *(_QWORD *)(a1 + 48);
          v34[1] = 0;
          v35 = 0LL;
          v34[0] = -1073741823;
          v19 = ObReferenceObjectByHandle(
                  *(HANDLE *)(v18 + 8LL * (unsigned int)(v13 + v17)),
                  0x1FFFFFu,
                  (POBJECT_TYPE)PsThreadType,
                  AccessMode,
                  &Object,
                  0LL);
          v7 = Object;
          v20 = v19;
          v21 = v25;
          if ( v20 != -1073741790 )
            v21 = 0;
          v25 = v21;
          if ( v20 >= 0 )
          {
            if ( !v8 )
            {
              v22 = IoThreadToProcess((PETHREAD)Object);
              v8 = v22;
              if ( v22 )
              {
                ObfReferenceObjectWithTag(v22, 0x4C676244u);
                DbgkpLkmdSnapDataEx((__int64)v31);
              }
            }
            v23 = DbgkpLkmdSnapThread((__int64)v31, a1, (__int64)v7, (__int64)v34);
            if ( !v23 )
              v23 = v34[0];
            if ( PoolWithTag )
              PoolWithTag[v13] = v23;
            DbgkpLkmdFireCallbacks(v31, 2LL, v7);
            if ( v10 )
              DbgkpLkmdSqmStatus(v10);
            ObfDereferenceObject(v7);
            v7 = 0LL;
            if ( v34[0] == -1073741670 )
            {
LABEL_33:
              if ( !v25 )
              {
                if ( v8 )
                  DbgkpLkmdFireCallbacks(v31, 1LL, v8);
                v29 = *(_DWORD *)(a1 + 44);
                v30 = PoolWithTag;
                DbgkpLkmdSnapData((__int64)v31, (__int64)&v29, 16LL);
                if ( PoolWithTag )
                  DbgkpLkmdSnapData((__int64)v31, (__int64)PoolWithTag, LODWORD(RegHandle[0]));
                if ( (int)DbgkpLkmdSnapDataEx((__int64)v31) >= 0 )
                  *(_QWORD *)RegHandle[1] = &v29;
                v14 = ((__int64 (__fastcall *)(PVOID *, __int64))v33[5])(v32, v27);
              }
              break;
            }
          }
          else
          {
            if ( PoolWithTag )
              PoolWithTag[v13] = v20;
            if ( v10 )
            {
              v34[0] = v20;
              DbgkpLkmdSqmStatus(v10);
            }
          }
          if ( (unsigned int)++v13 >= *(_DWORD *)(a1 + 44) )
            goto LABEL_33;
        }
      }
      if ( v8 )
        ObfDereferenceObjectWithTag(v8, 0x4C676244u);
      if ( v7 )
        ObfDereferenceObject(v7);
    }
  }
  if ( v32[4] )
    ExFreePoolWithTag(v32[4], 0x4D574454u);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x704E534Bu);
  if ( v10 )
    EtwUnregister(v10);
  return (unsigned int)v14;
}
