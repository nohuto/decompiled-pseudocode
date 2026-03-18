/*
 * XREFs of ACPIThermalGetSensorDevice @ 0x1C000A438
 * Callers:
 *     ACPIThermalStartDevice @ 0x1C0081910 (ACPIThermalStartDevice.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0013940 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0082E98 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalGetSensorDevice(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rax
  int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  void **v9; // rax
  int v10; // eax
  __int64 v11; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+80h] [rbp-80h]
  PVOID P[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v15; // [rsp+98h] [rbp-68h]
  __int128 v16; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v17[40]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v18[48]; // [rsp+128h] [rbp+28h] BYREF

  v1 = a1[25];
  P[1] = a1;
  v3 = a1[89];
  P[0] = 0LL;
  Handle = 0LL;
  v11 = 0LL;
  v4 = (__int64 *)AMLIGetNamedChild(v3, 1314083935LL);
  v15 = v4;
  if ( v4 )
  {
    v5 = AMLIEvalNameSpaceObject(v4, v17, 0, 0LL);
    v9 = (void **)v17;
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
    memset(v18, 0, sizeof(v18));
    v7 = a1[89];
    v16 = THRM_EXTENSIONS_DSM_UUID;
    v5 = ACPIAmliEvaluateDsm(v7, (unsigned int)&v16, 0, 2, (__int64)v18, (__int64)P);
    v9 = (void **)P[0];
  }
  Object = v9;
  if ( v5 >= 0 )
  {
    if ( *((_WORD *)v9 + 1) == 2 )
    {
      v10 = AMLIGetNameSpaceObject(v9[4]);
      dword_1C0074698 = 0;
      v5 = v10;
      byte_1C007469C = 0;
      FreeDataBuffs(Object, 1LL);
      if ( v5 >= 0 )
        v5 = -1073741810;
    }
    else
    {
      dword_1C0074698 = 0;
      byte_1C007469C = 0;
      v5 = -1072431095;
      FreeDataBuffs(v9, 1LL);
    }
  }
  if ( v15 )
    AMLIDereferenceHandleEx(v15, v8);
  if ( v11 )
    AMLIDereferenceHandleEx(v11, v8);
LABEL_4:
  if ( Handle )
    ZwClose(Handle);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x52706341u);
  return (unsigned int)v5;
}
