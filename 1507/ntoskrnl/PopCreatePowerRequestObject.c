/*
 * XREFs of PopCreatePowerRequestObject @ 0x1404E5E2C
 * Callers:
 *     PopCreateKernelPowerRequest @ 0x1404E5880 (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x1404EA9B8 (PopCreateUserPowerRequest.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x1400D09F0 (PsGetCurrentProcessSessionId.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     PopPowerRequestInsertElementNoLock @ 0x1404E5F40 (PopPowerRequestInsertElementNoLock.c)
 *     PopPowerRequestDeleteEntryNoLock @ 0x1406B0C50 (PopPowerRequestDeleteEntryNoLock.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, _DWORD *a2)
{
  bool v4; // bl
  unsigned __int32 v5; // esi
  _DWORD *inserted; // rdi
  int v7; // r9d
  int Object; // ebp
  int v10; // [rsp+50h] [rbp-48h] BYREF
  __int64 v11; // [rsp+58h] [rbp-40h]
  __int64 v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  __int128 v14; // [rsp+70h] [rbp-28h]

  v4 = *a2 != 0;
  v5 = _InterlockedIncrement(&PopPowerRequestId);
  inserted = (_DWORD *)PopPowerRequestInsertElementNoLock(v5);
  if ( inserted )
  {
    v11 = 0LL;
    v12 = 0LL;
    LOBYTE(v7) = v4;
    v10 = 48;
    v13 = 32;
    v14 = 0LL;
    Object = ObCreateObject(0, (int)PopPowerRequestObjectType, (int)&v10, v7);
    if ( Object >= 0 )
    {
      memset(0LL, 0, 0x70uLL);
      MEMORY[0x10] = PsGetCurrentProcessSessionId();
      MEMORY[0x50] = a2;
      MEMORY[0x1C] = v5;
      inserted[2] = v5;
      *(_QWORD *)inserted = 0LL;
      inserted = 0LL;
      *a1 = 0LL;
    }
    if ( inserted )
      PopPowerRequestDeleteEntryNoLock(inserted);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Object;
}
