/*
 * XREFs of VrpPreOpenOrCreate @ 0x140616498
 * Callers:
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x1404635D0 (RegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     VrpLockJobContextShared @ 0x140613034 (VrpLockJobContextShared.c)
 *     VrpUnlockJobContextShared @ 0x140613150 (VrpUnlockJobContextShared.c)
 *     VrpTranslatePath @ 0x140616A6C (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x140617B98 (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x140617D80 (VrpGetNextToken.c)
 */

__int64 __fastcall VrpPreOpenOrCreate(PCUNICODE_STRING *a1, __int64 a2)
{
  PCUNICODE_STRING v4; // r15
  char *v5; // rdi
  const UNICODE_STRING *v6; // rbx
  UNICODE_STRING *v7; // rsi
  const UNICODE_STRING *v8; // r12
  int v9; // ebx
  _OWORD *PoolWithTag; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  UNICODE_STRING v14; // xmm1
  UNICODE_STRING *v15; // rax
  UNICODE_STRING v16; // xmm0
  PCUNICODE_STRING v17; // rax
  unsigned __int16 *p_Length; // rcx
  bool v19; // zf
  int v20; // edx
  int v22; // [rsp+30h] [rbp-A9h] BYREF
  PVOID v23[2]; // [rsp+38h] [rbp-A1h] BYREF
  UNICODE_STRING *v24; // [rsp+48h] [rbp-91h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-89h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-79h] BYREF
  __int64 v27; // [rsp+70h] [rbp-69h] BYREF
  UNICODE_STRING v28; // [rsp+78h] [rbp-61h] BYREF
  GUID ActivityId; // [rsp+88h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD *v31; // [rsp+C0h] [rbp-19h]
  __int64 v32; // [rsp+C8h] [rbp-11h]
  __int64 v33; // [rsp+D0h] [rbp-9h]
  _DWORD v34[2]; // [rsp+D8h] [rbp-1h] BYREF
  int *v35; // [rsp+E0h] [rbp+7h]
  __int64 v36; // [rsp+E8h] [rbp+Fh]

  *(PVOID *)((char *)v23 + 2) = 0LL;
  LOWORD(v23[0]) = 0;
  LOWORD(P[0]) = 0;
  v4 = *a1;
  v5 = 0LL;
  v6 = a1[11];
  v7 = 0LL;
  v28 = (UNICODE_STRING)0LL;
  v8 = 0LL;
  v22 = 0;
  v24 = 0LL;
  ActivityId.Data1 = 0;
  *(_DWORD *)((char *)&v23[1] + 2) = 0;
  HIWORD(v23[1]) = 0;
  *(PVOID *)((char *)P + 2) = 0LL;
  *(_DWORD *)((char *)&P[1] + 2) = 0;
  HIWORD(P[1]) = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  EtwActivityIdControl(3u, &ActivityId);
  if ( v6 )
    v8 = v6 + 1;
  if ( v4->Length && *v4->Buffer == 92 )
  {
    v9 = VrpBuildKeyPath(0LL, *a1, (PUNICODE_STRING)v23);
    if ( v9 < 0 )
    {
LABEL_18:
      if ( v9 >= 0 )
        return (unsigned int)v9;
      goto LABEL_21;
    }
  }
  else
  {
    if ( !v6 )
      return 0;
    v9 = VrpBuildKeyPath(v8, *a1, (PUNICODE_STRING)v23);
    if ( v9 < 0 )
      goto LABEL_21;
  }
  v27 = 0LL;
  *(_QWORD *)&String1.MaximumLength = 0LL;
  *(_DWORD *)((char *)&String1.Buffer + 2) = 0;
  HIWORD(String1.Buffer) = 0;
  String1.Length = 0;
  VrpGetNextToken(v23, &v27, &String1);
  if ( RtlEqualUnicodeString(&String1, &gRegistryString, 1u) )
  {
    VrpGetNextToken(v23, &v27, &String1);
    if ( RtlEqualUnicodeString(&String1, &gWcString, 1u) )
    {
      v9 = -1073741790;
      goto LABEL_21;
    }
  }
  VrpLockJobContextShared(a2);
  v9 = VrpTranslatePath(v23, P, &v28, &v24, a2, &v22);
  VrpUnlockJobContextShared(a2);
  if ( v9 == -1073741772 )
    return 0;
  if ( v9 < 0 )
  {
    v7 = v24;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x67655256u);
    v7 = v24;
    v5 = (char *)PoolWithTag;
    if ( PoolWithTag )
    {
      v11 = *(_OWORD *)v23;
      a1[10] = (PCUNICODE_STRING)PoolWithTag;
      *(_QWORD *)PoolWithTag = a1[1];
      *(UNICODE_STRING *)((char *)PoolWithTag + 8) = **a1;
      v12 = (__int128)*a1[14];
      v13 = v22;
      *(_OWORD *)(v5 + 40) = v11;
      *((_DWORD *)v5 + 14) = v13;
      v14 = v28;
      *(_OWORD *)(v5 + 24) = v12;
      v15 = (UNICODE_STRING *)*a1;
      v16 = *(UNICODE_STRING *)P;
      a1[1] = v7;
      *v15 = v16;
      *a1[14] = v14;
      goto LABEL_18;
    }
    v9 = -1073741670;
  }
LABEL_21:
  if ( stru_1402F3520.LevelPlus1 > 2 )
  {
    v17 = *a1;
    p_Length = (unsigned __int16 *)&EmptyUnicodeString;
    v19 = (*a1)->Buffer == 0LL;
    v22 = v9;
    if ( !v19 )
      p_Length = &v17->Length;
    v20 = *p_Length;
    v33 = *((_QWORD *)p_Length + 1);
    v35 = &v22;
    v31 = v34;
    v32 = 2LL;
    v34[0] = v20;
    v34[1] = 0;
    v36 = 4LL;
    TlgWrite(&stru_1402F3520, &unk_14027B63B, &ActivityId, 0LL, 5u, &pData);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v23[1] )
    ExFreePoolWithTag(v23[1], 0x67655256u);
  return (unsigned int)v9;
}
