/*
 * XREFs of IopFastQueryNetworkAttributes @ 0x1405FA488
 * Callers:
 *     IoFastQueryNetworkAttributes @ 0x1405F9ED8 (IoFastQueryNetworkAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     FsRtlpRestoreCallerEcpsToCallerList @ 0x1401AC274 (FsRtlpRestoreCallerEcpsToCallerList.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 */

char __fastcall IopFastQueryNetworkAttributes(
        __int64 a1,
        ACCESS_MASK a2,
        unsigned __int8 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v16; // [rsp+110h] [rbp+10h] BYREF

  memset(v15, 0, sizeof(v15));
  v15[13] = a6;
  HIWORD(v15[8]) = 7;
  LODWORD(v15[0]) = 12582920;
  LODWORD(v15[8]) = a4 | 0x200000;
  v15[6] = a1;
  LODWORD(v15[11]) = 1;
  HIDWORD(v15[10]) = 1;
  BYTE1(v15[16]) = 1;
  BYTE3(v15[16]) = 1;
  v15[17] = &v16;
  memset(&v15[19], 0, 0x28uLL);
  v15[20] = 0LL;
  LOWORD(v15[19]) = 40;
  v15[23] = 1LL;
  if ( !a3 )
    *(_DWORD *)(a1 + 24) |= 0x200u;
  v15[23] = PsGetCurrentServerSilo();
  v10 = ObOpenObjectByNameEx(a1, (struct _OBJECT_TYPE *)IoFileObjectType, a3, 0LL, a2, v15, v15[23], Handle);
  v11 = v15[23];
  v12 = v10;
  if ( v15[23] )
    ObfDereferenceObject((PVOID)v15[23]);
  if ( v15[20] )
    FsRtlpRestoreCallerEcpsToCallerList(v11, (struct _ECP_LIST *)v15[20]);
  if ( LODWORD(v15[4]) == -1096154543 )
  {
    *(_DWORD *)a5 = v15[2];
    *(_QWORD *)(a5 + 8) = v15[3];
  }
  else
  {
    if ( v12 >= 0 )
    {
      ObCloseHandle(Handle[0], a3);
      v12 = -1073741788;
    }
    *(_DWORD *)a5 = v12;
  }
  return 1;
}
