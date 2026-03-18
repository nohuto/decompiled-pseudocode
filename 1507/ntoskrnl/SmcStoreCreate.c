/*
 * XREFs of SmcStoreCreate @ 0x1406DB7E4
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x1406DAB54 (SmcProcessStoreCreateRequest.c)
 * Callees:
 *     SmAlloc @ 0x1400D9FF4 (SmAlloc.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmStoreCreate @ 0x1406DA108 (SmStoreCreate.c)
 *     SmcCacheDereference @ 0x1406DAF84 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x1406DB1DC (SmcCacheReference.c)
 *     SmcStoreSlotAbort @ 0x1406DC14C (SmcStoreSlotAbort.c)
 *     SmcStoreSlotCommit @ 0x1406DC248 (SmcStoreSlotCommit.c)
 *     SmcStoreSlotReserve @ 0x1406DC350 (SmcStoreSlotReserve.c)
 *     SmKmKeyGenGenerate @ 0x1406DCD18 (SmKmKeyGenGenerate.c)
 *     SmKmRegParamsLoad @ 0x1406DD494 (SmKmRegParamsLoad.c)
 */

__int64 __fastcall SmcStoreCreate(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, unsigned int *a5)
{
  struct _PRIVILEGE_SET *v9; // r15
  struct _EX_RUNDOWN_REF v10; // rsi
  NTSTATUS v11; // edi
  __int64 v12; // r14
  int v13; // eax
  __int16 v14; // bx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  unsigned int v21; // [rsp+28h] [rbp-81h] BYREF
  unsigned int v22; // [rsp+30h] [rbp-79h] BYREF
  char v23; // [rsp+34h] [rbp-75h]
  int v24; // [rsp+38h] [rbp-71h] BYREF
  __int64 v25; // [rsp+40h] [rbp-69h]
  _OWORD v26[5]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v27[8]; // [rsp+98h] [rbp-11h] BYREF
  char v28; // [rsp+120h] [rbp+77h]

  v28 = a4;
  memset(v26, 0, 0x48uLL);
  v9 = 0LL;
  v21 = 0;
  v10.Count = SmcCacheReference(a1, a4).Count;
  if ( !v10.Count )
    return (unsigned int)-1073741672;
  if ( !a3[3] )
  {
    v11 = -1073741811;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v10.Count + 24) != a3[2] || (unsigned __int8)*a3 != 1 )
  {
    v11 = -1073741637;
    goto LABEL_23;
  }
  v12 = SmcStoreSlotReserve(v10.Count);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v10.Count + 8);
    v26[0] = *(_OWORD *)a3;
    HIDWORD(v26[0]) = v13;
    DWORD2(v26[1]) = *(_DWORD *)(v10.Count + 4);
    v14 = (LOWORD(v26[0]) ^ ((unsigned __int16)*(_DWORD *)(v10.Count + 28) << 13)) & 0x6000 ^ LOWORD(v26[0]);
    v15 = *(_DWORD *)(v10.Count + 32);
    LODWORD(v26[0]) ^= (LOWORD(v26[0]) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v10.Count + 28) << 13)) & 0x6000;
    LODWORD(v26[1]) = v15;
    memset(v27, 0, sizeof(v27));
    v27[0] = *(_QWORD *)(v10.Count + 40);
    v27[1] = *(_QWORD *)(v10.Count + 48);
    v27[2] = *(_QWORD *)(v10.Count + 56);
    v27[3] = *(_QWORD *)(v10.Count + 64);
    v27[6] = *(_QWORD *)(v10.Count + 88);
    LODWORD(v27[7]) = *(_DWORD *)(v10.Count + 96);
    *(_QWORD *)&v26[3] = v27;
    v11 = SmKmRegParamsLoad(&v22);
    if ( v11 >= 0 )
    {
      if ( (*(_DWORD *)(v10.Count + 28) & 1) == 0 )
      {
        v16 = v23 & 3;
        if ( v16 == 2 || v16 == 1 && (v14 & 0x800) != 0 )
        {
          v17 = 0;
          goto LABEL_19;
        }
      }
      v17 = v22;
      v9 = (struct _PRIVILEGE_SET *)SmAlloc(v22, 0x4B456D73u);
      if ( v9 )
      {
        v11 = SmKmKeyGenGenerate(a1 + 512);
        if ( v11 >= 0 )
        {
LABEL_19:
          v18 = *(_QWORD *)(v12 + 8);
          v24 = *(_DWORD *)(v10.Count + 8);
          *(_QWORD *)&v26[4] = &v24;
          v25 = v18;
          *((_QWORD *)&v26[3] + 1) = v10.Count + 104;
          *(_QWORD *)&v26[2] = v9;
          DWORD2(v26[2]) = v17;
          v11 = SmStoreCreate(a2, (__int64)v26, &v21);
          if ( v11 >= 0 )
          {
            v19 = v21;
            SmcStoreSlotCommit(v10.Count, v12, v21, a2);
            v12 = 0LL;
            v11 = 0;
            *a5 = v19;
          }
        }
      }
      else
      {
        v11 = -1073741670;
      }
    }
    if ( v12 )
      SmcStoreSlotAbort(v10.Count, v12, 0LL);
    goto LABEL_23;
  }
  v11 = -1073741697;
LABEL_23:
  SmcCacheDereference(a1, v28);
  if ( v9 )
    ExFreePoolEx(v9);
  return (unsigned int)v11;
}
