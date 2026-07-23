/*
 * XREFs of CmpDoReOpenTransKey @ 0x140611CD0
 * Callers:
 *     CmpDoReDoCreateKey @ 0x1406118C0 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x140611988 (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRecord @ 0x1406119D8 (CmpDoReDoRecord.c)
 *     CmpDoReDoRenameKey @ 0x140611AB0 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x140611B00 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140611B54 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140611BB4 (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140611C14 (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x140611C68 (CmpDoReDoSetValueExisting.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 *     CmpSplitParentKeyName @ 0x140606DD8 (CmpSplitParentKeyName.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __m128i *a2, ACCESS_MASK a3, _QWORD *a4)
{
  __m128i v4; // xmm0
  char v8; // r14
  int v9; // esi
  char v10; // r15
  HANDLE v11; // rdi
  NTSTATUS v12; // eax
  _QWORD *v13; // rbx
  NTSTATUS v14; // eax
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v19; // [rsp+58h] [rbp-A8h] BYREF
  void *v20; // [rsp+68h] [rbp-98h] BYREF
  __m128i v21; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v24; // [rsp+90h] [rbp-70h]
  __m128i *v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  __int128 v27; // [rsp+A8h] [rbp-58h]
  _DWORD v28[60]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *a2;
  v22 = a4;
  v19.m128i_i16[0] = 0;
  *(__int64 *)((char *)v19.m128i_i64 + 2) = 0LL;
  v21 = v4;
  *(__int32 *)((char *)&v19.m128i_i32[2] + 2) = 0;
  v19.m128i_i16[7] = 0;
  v20 = 0LL;
  Handle = 0LL;
  v8 = 0;
  v9 = -1073741762;
  v10 = ExIsResourceAcquiredSharedLite(&CmpRegistryLock) != 0;
  if ( !v4.m128i_i16[0] )
    return (unsigned int)v9;
  while ( 1 )
  {
    memset(v28, 0, 0xE8uLL);
    v25 = &v21;
    v28[6] = 8;
    v23 = 48;
    v24 = 0LL;
    v26 = 4928;
    v27 = 0LL;
    v9 = ObOpenObjectByName((__int64)&v23, (__int64)CmKeyObjectType, 0, 0LL, a3, (__int64)v28, &Handle);
    CmpCleanupParseContext((__int64)v28, v10);
    if ( v9 >= 0 )
      break;
    CmpSplitParentKeyName(a2, &v21, &v19);
    if ( !v21.m128i_i16[0] )
    {
      v11 = Handle;
      goto LABEL_26;
    }
  }
  v11 = Handle;
  v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v13 = Object;
  v9 = v12;
  if ( v12 >= 0 )
  {
    if ( !v10 )
    {
      CmpLockRegistry();
      v8 = 1;
    }
    if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(*(_QWORD *)(v13[1] + 24LL) + 5400LL) )
      goto LABEL_9;
    if ( v8 )
    {
      CmpUnlockRegistry();
      v8 = 0;
    }
    v13[8] = a1 + 88;
    ObfDereferenceObject(v13);
    v13 = 0LL;
    if ( v19.m128i_i16[0] )
    {
      memset(v28, 0, 0xE8uLL);
      v25 = &v19;
      v28[6] = 8;
      v23 = 48;
      v24 = v11;
      v26 = 4928;
      v27 = 0LL;
      v9 = ObOpenObjectByName((__int64)&v23, (__int64)CmKeyObjectType, 0, 0LL, a3, (__int64)v28, &v20);
      CmpCleanupParseContext((__int64)v28, v10);
      if ( v9 < 0
        || (v14 = ObReferenceObjectByHandle(v11, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL),
            v13 = Object,
            v9 = v14,
            v14 < 0) )
      {
LABEL_22:
        if ( v8 )
          CmpUnlockRegistry();
        goto LABEL_24;
      }
      if ( !v10 )
      {
        CmpLockRegistry();
        v8 = 1;
      }
      if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(*(_QWORD *)(v13[1] + 24LL) + 5400LL) )
      {
LABEL_9:
        v9 = -1073741762;
        goto LABEL_22;
      }
      if ( v8 )
      {
        CmpUnlockRegistry();
        v8 = 0;
      }
      v13[8] = a1 + 88;
      ObfDereferenceObject(v13);
      v13 = 0LL;
      ZwClose(v11);
      v11 = v20;
    }
    v9 = 0;
    *v22 = v11;
    v11 = 0LL;
    goto LABEL_22;
  }
LABEL_24:
  if ( v13 )
    ObfDereferenceObject(v13);
LABEL_26:
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v9;
}
