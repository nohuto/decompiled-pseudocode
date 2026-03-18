/*
 * XREFs of CmpDoReOpenTransKey @ 0x140665888
 * Callers:
 *     CmpDoReDoCreateKey @ 0x140665478 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x140665540 (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRecord @ 0x140665590 (CmpDoReDoRecord.c)
 *     CmpDoReDoRenameKey @ 0x140665668 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x1406656B8 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x14066570C (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x14066576C (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x1406657CC (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x140665820 (CmpDoReDoSetValueExisting.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpSplitParentKeyName @ 0x14065EB2C (CmpSplitParentKeyName.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __m128i *a2, ACCESS_MASK a3, _QWORD *a4)
{
  __m128i v7; // xmm0
  char v8; // r14
  int v9; // esi
  bool v10; // r12
  HANDLE v11; // rdi
  NTSTATUS v12; // eax
  _QWORD *v13; // rbx
  NTSTATUS v14; // eax
  _QWORD v16[2]; // [rsp+42h] [rbp-C6h] BYREF
  int v17; // [rsp+52h] [rbp-B6h]
  __int16 v18; // [rsp+56h] [rbp-B2h]
  void *v19; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  HANDLE v22; // [rsp+78h] [rbp-90h]
  __m128i *v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+88h] [rbp-80h]
  __int128 v25; // [rsp+90h] [rbp-78h]
  PVOID Object; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v27[48]; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+180h] [rbp+78h] BYREF
  ACCESS_MASK v29; // [rsp+188h] [rbp+80h]
  _QWORD *v30; // [rsp+190h] [rbp+88h]

  v30 = a4;
  v29 = a3;
  memset(v27, 0, 136);
  v7 = *a2;
  HIWORD(v16[0]) = 0;
  v16[1] = 0LL;
  v20 = v7;
  v17 = 0;
  v18 = 0;
  v19 = 0LL;
  Handle = 0LL;
  v8 = 0;
  v9 = -1073741762;
  v10 = ExIsResourceAcquiredSharedLite(&CmpRegistryLock) != 0;
  if ( !v7.m128i_i16[0] )
    return (unsigned int)v9;
  while ( 1 )
  {
    v23 = &v20;
    v27[6] = 8;
    LODWORD(v21) = 48;
    v22 = 0LL;
    v24 = 832;
    v25 = 0LL;
    v9 = ObOpenObjectByName((__int64)&v21, (__int64)CmKeyObjectType, 0, 0LL, a3, (__int64)v27, &Handle);
    if ( v9 >= 0 )
      break;
    CmpSplitParentKeyName(a2, &v20, (__m128i *)((char *)v16 + 6));
    if ( !v20.m128i_i16[0] )
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
    if ( *(_QWORD *)(a1 + 56) != *(_QWORD *)(*(_QWORD *)(v13[1] + 32LL) + 5400LL) )
      goto LABEL_9;
    if ( v8 )
    {
      CmpUnlockRegistry();
      v8 = 0;
    }
    v13[8] = a1 + 80;
    ObfDereferenceObject(v13);
    v13 = 0LL;
    if ( HIWORD(v16[0]) )
    {
      v23 = (__m128i *)((char *)v16 + 6);
      v27[6] = 8;
      LODWORD(v21) = 48;
      v22 = v11;
      v24 = 832;
      v25 = 0LL;
      v9 = ObOpenObjectByName((__int64)&v21, (__int64)CmKeyObjectType, 0, 0LL, v29, (__int64)v27, &v19);
      if ( v9 < 0
        || (v14 = ObReferenceObjectByHandle(v11, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Handle, 0LL),
            v13 = Handle,
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
      if ( *(_QWORD *)(a1 + 56) != *(_QWORD *)(*(_QWORD *)(v13[1] + 32LL) + 5400LL) )
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
      v13[8] = a1 + 80;
      ObfDereferenceObject(v13);
      v13 = 0LL;
      ZwClose(v11);
      v11 = v19;
    }
    v9 = 0;
    *v30 = v11;
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
