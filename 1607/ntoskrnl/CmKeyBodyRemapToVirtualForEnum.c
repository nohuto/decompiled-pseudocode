/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x140437630
 * Callers:
 *     NtEnumerateValueKey @ 0x140438410 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1404C0BFC (NtQueryMultipleValueKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1400B0B88 (CmpAllocateTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpSetKcbAtLayerHeight @ 0x1404B0A9C (CmpSetKcbAtLayerHeight.c)
 *     CmVirtualKCBToRealPath @ 0x140600410 (CmVirtualKCBToRealPath.c)
 *     CmpReparseToVirtualPath @ 0x14060180C (CmpReparseToVirtualPath.c)
 *     CmObReferenceObjectByName @ 0x140606D64 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(_QWORD *a1, char a2, int a3, _QWORD *a4)
{
  int v4; // esi
  char v5; // r15
  int v7; // r12d
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r13
  __int16 v12; // r14
  struct _PRIVILEGE_SET *v13; // rbx
  struct _PRIVILEGE_SET *v14; // rsi
  SIZE_T v15; // r15
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int16 v17; // r10
  __int64 v18; // r11
  __int64 v19; // r11
  __int16 v20; // r10
  __int64 v21; // rcx
  char v22; // si
  char IsKeyDeletedForKeyBody; // al
  __int64 v24; // rdx
  char *v25; // rcx
  char v26; // al
  char *v27; // rcx
  int v28; // edx
  int v29; // r9d
  int v30; // eax
  void *v31; // rbx
  int v32; // ebx
  int v33; // edx
  int v34; // r9d
  int v35; // eax
  int v36; // ebx
  _QWORD *v39; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING *p_UnicodeString; // [rsp+68h] [rbp-98h]
  struct _PRIVILEGE_SET *v44; // [rsp+70h] [rbp-90h]
  __int128 v45; // [rsp+78h] [rbp-88h]
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+98h] [rbp-68h]
  _QWORD v48[30]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = a3;
  v5 = a2;
  *a4 = 0LL;
  v39 = 0LL;
  v40 = a4;
  v7 = 0;
  v8 = a4;
  memset(v48, 0, 0xE8uLL);
  v9 = *a1;
  LODWORD(v48[0]) = 8;
  v10 = *(_QWORD *)(v9 + 8);
  if ( *(_WORD *)(v10 + 58) )
    return 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_60;
  if ( (*(_WORD *)(v10 + 178) & 0x200) != 0 )
    goto LABEL_45;
  v47 = *(_QWORD *)(v10 + 24);
  if ( v47 == CmpMasterHive )
    goto LABEL_45;
  v12 = *(_WORD *)(v10 + 58);
  v13 = 0LL;
  v41 = 4294901760LL;
  v14 = 0LL;
  v42 = 0LL;
  p_UnicodeString = 0LL;
  if ( v12 < 2 || v12 == 1 )
    goto LABEL_10;
  v15 = 8LL * (unsigned int)(v12 - 1);
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(512LL, v15, 0x35364D43u);
  v14 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, v15);
LABEL_10:
    v17 = *(_WORD *)(v10 + 58);
    v13 = v14;
    LOWORD(v41) = v12;
    v44 = v14;
    WORD1(v41) = v17;
    if ( v17 )
    {
      v18 = *(_QWORD *)(v10 + 184);
      if ( v18 )
      {
        do
        {
          CmpSetKcbAtLayerHeight(&v41, (unsigned __int16)v17, *(_QWORD *)(v18 + 16));
          v18 = *(_QWORD *)(v19 + 24);
          v17 = v20 - 1;
        }
        while ( v18 );
        v13 = v44;
        v17 = WORD1(v41);
      }
    }
    else
    {
      v42 = v10;
    }
    if ( v17 >= 0 )
    {
      do
      {
        v21 = v17 < 2 ? *(&v42 + v17) : *((_QWORD *)v13 + v17 - 2);
        if ( *(_WORD *)(v21 + 58) && *(_BYTE *)(v21 + 57) == 1 )
          break;
        if ( *(_DWORD *)(v21 + 32) != -1 )
        {
          v22 = 0;
          goto LABEL_24;
        }
      }
      while ( --v17 >= 0 );
    }
  }
  v22 = 1;
LABEL_24:
  if ( v13 )
    MiDeleteSubsection(v13);
  if ( (v22 || (*(_DWORD *)(v47 + 5360) & 0x10) != 0 || (*(_WORD *)(v10 + 178) & 0x200) != 0)
    && !CmpIsSystemEntity((int *)&v48[2]) )
  {
    if ( *(char *)(*(_QWORD *)(*a1 + 8LL) + 178LL) >= 0 )
      return 0LL;
    CmpLockRegistry();
    CmpLockKcbShared(*(_QWORD *)(*a1 + 8LL));
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(*a1, 0LL);
    v25 = *(char **)(*a1 + 8LL);
    if ( IsKeyDeletedForKeyBody )
    {
      CmpUnlockKcb(v25);
      CmpUnlockRegistry();
      return 3221225852LL;
    }
    v26 = CmpReparseToVirtualPath(v25, v24, &UnicodeString);
    v27 = *(char **)(*a1 + 8LL);
    if ( !v26 )
    {
      CmpUnlockKcb(v27);
      CmpUnlockRegistry();
      return 0LL;
    }
    CmpUnlockKcb(v27);
    CmpUnlockRegistry();
    v48[10] = *(_QWORD *)(*a1 + 56LL);
    if ( !a3 )
      LODWORD(v48[0]) |= 0x1000u;
    v30 = 576;
    LODWORD(v41) = 48;
    if ( a2 == 1 )
      v30 = 1600;
    v42 = 0LL;
    LODWORD(v44) = v30;
    p_UnicodeString = &UnicodeString;
    v45 = 0LL;
    v7 = CmObReferenceObjectByName((unsigned int)&v41, v28, a3, v29, 0, (__int64)v48, (__int64)&v39);
    RtlFreeAnsiString(&UnicodeString);
    if ( v7 >= 0 )
    {
      CmpLockRegistry();
      v31 = v39;
      if ( !*(_WORD *)(v39[1] + 58LL) )
      {
        *v40 = v39;
        v31 = 0LL;
        CmpUnlockRegistry();
        goto LABEL_58;
      }
      goto LABEL_56;
    }
    goto LABEL_57;
  }
  v5 = a2;
  v8 = v40;
  v4 = a3;
LABEL_45:
  if ( CmpVEEnabled && (*(_WORD *)(*(_QWORD *)(*a1 + 8LL) + 178LL) & 0x100) != 0 && !CmpIsSystemEntity((int *)&v48[2]) )
  {
    CmpLockRegistry();
    CmpLockKcbShared(*(_QWORD *)(*a1 + 8LL));
    v32 = CmVirtualKCBToRealPath(*(_QWORD *)(*a1 + 8LL), &UnicodeString);
    CmpUnlockKcb(*(char **)(*a1 + 8LL));
    CmpUnlockRegistry();
    if ( v32 < 0 )
      return 0LL;
    v48[10] = *(_QWORD *)(*a1 + 56LL);
    if ( !v4 )
      LODWORD(v48[0]) |= 0x1000u;
    v35 = 576;
    LODWORD(v41) = 48;
    v42 = 0LL;
    if ( v5 == 1 )
      v35 = 1600;
    LODWORD(v44) = v35;
    p_UnicodeString = &UnicodeString;
    v45 = 0LL;
    v36 = CmObReferenceObjectByName((unsigned int)&v41, v33, v4, v34, 0, (__int64)v48, (__int64)&v39);
    RtlFreeAnsiString(&UnicodeString);
    if ( v36 >= 0 )
    {
      CmpLockRegistry();
      v31 = v39;
      if ( !*(_WORD *)(v39[1] + 58LL) )
      {
        *v8 = *a1;
        *a1 = v31;
        v31 = 0LL;
      }
LABEL_56:
      CmpUnlockRegistry();
      goto LABEL_58;
    }
LABEL_57:
    v31 = v39;
LABEL_58:
    if ( v31 )
      ObfDereferenceObject(v31);
  }
LABEL_60:
  if ( v48[12] )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v48[12]);
    CmpUnlockRegistry();
  }
  return (unsigned int)v7;
}
