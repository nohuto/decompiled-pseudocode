/*
 * XREFs of PopCreatePowerRequestObject @ 0x1405035C0
 * Callers:
 *     PopCreateKernelPowerRequest @ 0x14050137C (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x1405017B8 (PopCreateUserPowerRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C1E74 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400C23E4 (RtlInsertElementGenericTableAvl.c)
 *     PsGetCurrentProcessSessionId @ 0x1400F96A0 (PsGetCurrentProcessSessionId.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v3; // r15
  char v4; // bl
  signed __int32 v5; // ebp
  _DWORD *inserted; // rdi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // esi
  _DWORD *v10; // rbx
  _BYTE Buffer[8]; // [rsp+50h] [rbp-58h] BYREF
  signed __int32 v13; // [rsp+58h] [rbp-50h]
  int v14; // [rsp+60h] [rbp-48h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h]
  __int64 v16; // [rsp+70h] [rbp-38h]
  int v17; // [rsp+78h] [rbp-30h]
  __int128 v18; // [rsp+80h] [rbp-28h]
  void *v19; // [rsp+B8h] [rbp+10h] BYREF

  v3 = a1;
  v4 = *a2 != 0;
  v19 = 0LL;
  v5 = _InterlockedIncrement(&PopPowerRequestId);
  LOBYTE(a1) = 1;
  v13 = v5;
  PopAcquirePowerRequestPushLock(a1);
  inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestTable, Buffer, 0x10u, 0LL);
  PopReleaseRwLock(&PopPowerRequestLock);
  if ( inserted )
  {
    v7 = a2[12];
    v15 = 0LL;
    v16 = 0LL;
    v14 = 48;
    v17 = 32;
    v18 = 0LL;
    v9 = ObCreateObject(0, PopPowerRequestObjectType, (__int64)&v14, v4, 0, 112, v7 + 56, 0, &v19);
    if ( v9 >= 0 )
    {
      v10 = v19;
      memset(v19, 0, 0x70uLL);
      v10[4] = PsGetCurrentProcessSessionId();
      *((_QWORD *)v10 + 10) = a2;
      v10[7] = v5;
      inserted[2] = v5;
      *(_QWORD *)inserted = v10;
      inserted = 0LL;
      *v3 = v10;
    }
    if ( inserted )
    {
      LOBYTE(v8) = 1;
      PopAcquirePowerRequestPushLock(v8);
      RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, inserted);
      PopReleaseRwLock(&PopPowerRequestLock);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
