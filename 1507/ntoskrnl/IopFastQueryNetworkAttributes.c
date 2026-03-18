/*
 * XREFs of IopFastQueryNetworkAttributes @ 0x1406748BC
 * Callers:
 *     IoFastQueryNetworkAttributes @ 0x140674164 (IoFastQueryNetworkAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     FsRtlpRestoreCallerEcpsToCallerList @ 0x1401E1DB4 (FsRtlpRestoreCallerEcpsToCallerList.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 */

char __fastcall IopFastQueryNetworkAttributes(__int64 a1, ACCESS_MASK a2, char a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  int v11; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v15; // [rsp+110h] [rbp+10h] BYREF

  memset(v14, 0, 0xB8uLL);
  v14[20] = 0LL;
  HIWORD(v14[8]) = 7;
  LODWORD(v14[0]) = 12058632;
  LODWORD(v14[8]) = a4 | 0x200000;
  v14[13] = a6;
  LODWORD(v14[11]) = 1;
  v14[17] = &v15;
  HIDWORD(v14[10]) = 1;
  BYTE1(v14[16]) = 1;
  BYTE3(v14[16]) = 1;
  v14[6] = a1;
  if ( !a3 )
    *(_DWORD *)(a1 + 24) |= 0x200u;
  v11 = ObOpenObjectByName(a1, (__int64)IoFileObjectType, a3, 0LL, a2, (__int64)v14, Handle);
  if ( v14[20] )
    FsRtlpRestoreCallerEcpsToCallerList(v10, (struct _ECP_LIST *)v14[20]);
  if ( LODWORD(v14[4]) == -1096154543 )
  {
    *(_DWORD *)a5 = v14[2];
    *(_QWORD *)(a5 + 8) = v14[3];
  }
  else
  {
    if ( v11 >= 0 )
    {
      ObCloseHandle(Handle[0], a3);
      v11 = -1073741788;
    }
    *(_DWORD *)a5 = v11;
  }
  return 1;
}
