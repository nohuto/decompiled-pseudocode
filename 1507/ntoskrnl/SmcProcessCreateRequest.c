/*
 * XREFs of SmcProcessCreateRequest @ 0x1406DA5E4
 * Callers:
 *     SmSetStoreInformation @ 0x140546F94 (SmSetStoreInformation.c)
 * Callees:
 *     SmAlloc @ 0x1400D9FF4 (SmAlloc.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmcCacheCreatePrepare @ 0x1406DA4B0 (SmcCacheCreatePrepare.c)
 *     SmcCacheAdd @ 0x1406DAD34 (SmcCacheAdd.c)
 *     SmcCacheCleanup @ 0x1406DAEB8 (SmcCacheCleanup.c)
 *     SmcCacheDelete @ 0x1406DAF34 (SmcCacheDelete.c)
 *     SmcCacheDereference @ 0x1406DAF84 (SmcCacheDereference.c)
 *     SmcCacheInitialize @ 0x1406DAFB8 (SmcCacheInitialize.c)
 *     SmcCacheStart @ 0x1406DB3A8 (SmcCacheStart.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmcProcessCreateRequest(__int64 a1, ULONG64 a2, int a3, char a4)
{
  struct _PRIVILEGE_SET *v8; // rsi
  __int64 v9; // r9
  int Prepare; // ebx
  _BYTE *v11; // rcx
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int64 v14; // rdx
  struct _PRIVILEGE_SET *v15; // rax
  _DWORD v17[4]; // [rsp+20h] [rbp-478h] BYREF
  __int64 v18; // [rsp+30h] [rbp-468h]
  _QWORD v19[132]; // [rsp+40h] [rbp-458h] BYREF

  v18 = a1;
  v8 = 0LL;
  v17[0] = -1;
  memset(v19, 0, sizeof(v19));
  if ( a3 == 1056 )
  {
    if ( a4 )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (_BYTE *)a2;
      if ( a2 >= MmUserProbeAddress )
        v11 = (_BYTE *)MmUserProbeAddress;
      *v11 = *v11;
      v11[1055] = v11[1055];
    }
    v12 = (_OWORD *)a2;
    v13 = v19;
    v14 = 8LL;
    do
    {
      *v13 = *v12;
      v13[1] = v12[1];
      v13[2] = v12[2];
      v13[3] = v12[3];
      v13[4] = v12[4];
      v13[5] = v12[5];
      v13[6] = v12[6];
      v13 += 8;
      *(v13 - 1) = v12[7];
      v12 += 8;
      --v14;
    }
    while ( v14 );
    *v13 = *v12;
    v13[1] = v12[1];
    if ( LOBYTE(v19[0]) != 3 || (v19[0] & 0xFFFFFF00) != 0 || HIDWORD(v19[2]) )
    {
      Prepare = -1073741811;
    }
    else
    {
      Prepare = SmcCacheCreatePrepare(a1, 0LL, 128LL, v9);
      if ( Prepare >= 0 )
      {
        v15 = (struct _PRIVILEGE_SET *)SmAlloc(0x428uLL, 0x61436D73u);
        v8 = v15;
        if ( v15 )
        {
          SmcCacheInitialize(v15);
          HIWORD(v19[131]) = 0;
          Prepare = SmcCacheStart(v8, &v19[1], &v19[4]);
          if ( Prepare >= 0 )
          {
            Prepare = SmcCacheAdd(a1, v8, v17);
            if ( Prepare >= 0 )
            {
              v8 = 0LL;
              v17[1] = 1;
              Prepare = 0;
              *(_DWORD *)(a2 + 4) = v17[0];
            }
          }
        }
        else
        {
          Prepare = -1073741670;
        }
      }
    }
  }
  else
  {
    Prepare = -1073741306;
  }
  if ( v17[0] != -1 )
    SmcCacheDereference(a1);
  if ( v8 )
  {
    SmcCacheCleanup(v8);
    ExFreePoolEx(v8);
  }
  return (unsigned int)Prepare;
}
