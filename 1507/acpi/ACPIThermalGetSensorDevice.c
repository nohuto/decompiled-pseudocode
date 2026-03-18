/*
 * XREFs of ACPIThermalGetSensorDevice @ 0x1C001A680
 * Callers:
 *     ACPIThermalStartDevice @ 0x1C006EEB0 (ACPIThermalStartDevice.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0004FB0 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C006DFF0 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalGetSensorDevice(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rax
  int v5; // ebx
  __int64 v7; // rcx
  _BYTE *v8; // rax
  int v9; // eax
  volatile signed __int32 *v10; // [rsp+70h] [rbp-90h]
  PVOID Object; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h]
  PVOID P[2]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v14; // [rsp+98h] [rbp-68h]
  __int128 v15; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v16[40]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v17[48]; // [rsp+128h] [rbp+28h] BYREF

  v1 = a1[24];
  P[1] = a1;
  v3 = a1[88];
  P[0] = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  v4 = (volatile signed __int32 *)AMLIGetNamedChild(v3, 1314083935);
  v14 = v4;
  if ( v4 )
  {
    v5 = AMLIEvalNameSpaceObject((__int64 *)v4, v16, 0, 0LL);
    v8 = v16;
  }
  else
  {
    if ( (*(_DWORD *)(v1 + 128) & 4) == 0 )
    {
      v5 = 0;
      *(_QWORD *)(v1 + 208) = *(_QWORD *)(v1 + 192);
      *(_QWORD *)(v1 + 216) = *(_QWORD *)(v1 + 200);
      goto LABEL_4;
    }
    memset(v17, 0, sizeof(v17));
    v7 = a1[88];
    v15 = THRM_EXTENSIONS_DSM_UUID;
    v5 = ACPIAmliEvaluateDsm(v7, (unsigned int)&v15, 0, 2, (__int64)v17, (__int64)P);
    v8 = P[0];
  }
  Object = v8;
  if ( v5 >= 0 )
  {
    if ( *((_WORD *)v8 + 1) == 2 )
    {
      v9 = AMLIGetNameSpaceObject(*((_BYTE **)v8 + 4));
      dword_1C005A218 = 0;
      v5 = v9;
      byte_1C005A21C = 0;
      FreeDataBuffs((__int64)Object, 1u);
      if ( v5 >= 0 )
        v5 = -1073741810;
    }
    else
    {
      dword_1C005A218 = 0;
      byte_1C005A21C = 0;
      v5 = -1072431095;
      FreeDataBuffs((__int64)v8, 1u);
    }
  }
  if ( v14 )
    AMLIDereferenceHandleEx(v14);
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
LABEL_4:
  if ( Handle )
    ZwClose(Handle);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x52706341u);
  return (unsigned int)v5;
}
