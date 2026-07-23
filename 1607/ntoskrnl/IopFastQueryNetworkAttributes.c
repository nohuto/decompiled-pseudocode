/*
 * XREFs of IopFastQueryNetworkAttributes @ 0x140623F6C
 * Callers:
 *     IoFastQueryNetworkAttributes @ 0x140623904 (IoFastQueryNetworkAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     FsRtlpRestoreCallerEcpsToCallerList @ 0x1401B8004 (FsRtlpRestoreCallerEcpsToCallerList.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

char __fastcall IopFastQueryNetworkAttributes(__int64 a1, ACCESS_MASK a2, char a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  int v11; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v15; // [rsp+110h] [rbp+10h] BYREF

  memset(v14, 0, sizeof(v14));
  v14[13] = a6;
  HIWORD(v14[8]) = 7;
  LODWORD(v14[0]) = 12582920;
  LODWORD(v14[8]) = a4 | 0x200000;
  v14[6] = a1;
  LODWORD(v14[11]) = 1;
  HIDWORD(v14[10]) = 1;
  BYTE1(v14[16]) = 1;
  BYTE3(v14[16]) = 1;
  v14[17] = &v15;
  memset(&v14[19], 0, 0x28uLL);
  v14[20] = 0LL;
  LOWORD(v14[19]) = 40;
  v14[23] = 1LL;
  if ( !a3 )
    *(_DWORD *)(a1 + 24) |= 0x200u;
  v14[23] = PsGetCurrentSilo();
  v11 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, a3, 0LL, a2, (__int64)v14, v14[23], Handle);
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
