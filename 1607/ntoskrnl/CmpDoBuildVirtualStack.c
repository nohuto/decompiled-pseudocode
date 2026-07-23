/*
 * XREFs of CmpDoBuildVirtualStack @ 0x140600C9C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14060184C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     CmpWalkOneLevel @ 0x14002D530 (CmpWalkOneLevel.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1403FADCC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpUnlockHashEntryByKcb @ 0x1403FB840 (CmpUnlockHashEntryByKcb.c)
 *     HvMarkCellDirty @ 0x1403FC340 (HvMarkCellDirty.c)
 *     CmpAssignSecurityToKcb @ 0x1403FCCF8 (CmpAssignSecurityToKcb.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpStartKcbStack @ 0x140403F80 (CmpStartKcbStack.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1404CE0B4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404CE120 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopySaclToVirtualKey @ 0x140602258 (CmpCopySaclToVirtualKey.c)
 */

__int64 __fastcall CmpDoBuildVirtualStack(__int64 a1, unsigned int a2, ULONG_PTR a3, __int64 a4)
{
  unsigned int v7; // edi
  int AccessState; // ebx
  __int64 v9; // r14
  _DWORD *v10; // r15
  __int64 v11; // rbx
  __int16 v12; // dx
  int v13; // eax
  int v14; // eax
  ULONG_PTR v15; // rdi
  __int64 v16; // rdx
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edi
  ULONG_PTR v21; // r15
  __int64 v22; // r14
  __int64 v23; // rdi
  _BYTE v25[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v26; // [rsp+54h] [rbp-ACh]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v30[16]; // [rsp+70h] [rbp-90h] BYREF
  _WORD v31[16]; // [rsp+80h] [rbp-80h] BYREF
  _WORD v32[16]; // [rsp+A0h] [rbp-60h] BYREF
  const UNICODE_STRING *v33; // [rsp+C0h] [rbp-40h]
  _DWORD v34[60]; // [rsp+D0h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v35[5]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v36[28]; // [rsp+260h] [rbp+160h] BYREF

  BugCheckParameter4 = 0LL;
  v26 = a2;
  v25[0] = 0;
  v7 = a2;
  HvpGetCellContextReinitialize((__int64)v29);
  HvpGetCellContextReinitialize((__int64)v30);
  memset(v34, 0, 0xE8uLL);
  memset(v31, 0, sizeof(v31));
  v31[1] = -1;
  memset(v32, 0, sizeof(v32));
  v32[1] = -1;
  AccessState = SeCreateAccessState(v35, v36, 4u, (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
  if ( AccessState >= 0 )
  {
    v9 = 0LL;
    if ( v7 )
    {
      v10 = (_DWORD *)(a1 + 40);
      while ( 1 )
      {
        v11 = *((_QWORD *)v10 - 3);
        v34[6] = 0;
        v27 = v11;
        v33 = (const UNICODE_STRING *)(a1 + 48 * v9);
        memset(v32, 0, sizeof(v32));
        v32[1] = -1;
        memset(v31, 0, sizeof(v31));
        v12 = *(_WORD *)(v11 + 58);
        v31[1] = -1;
        AccessState = CmpStartKcbStack((__int64)v32, v12);
        if ( AccessState < 0 )
          break;
        AccessState = CmpStartKcbStackForTopLayerKcb((__int64)v31, v27);
        if ( AccessState < 0 )
          break;
        v13 = CmpHashUnicodeComponent((__m128i *)(a1 + 48 * v9));
        v14 = CmpWalkOneLevel(
                v27,
                (__int64)v31,
                &BugCheckParameter4,
                (__int64)v32,
                v25,
                a1 + 48 * v9,
                v13,
                v13 + 37 * *(_DWORD *)(v27 + 8),
                0LL,
                1);
        v15 = BugCheckParameter4;
        AccessState = v14;
        if ( v14 < 0 )
          goto LABEL_19;
        if ( *(_DWORD *)(BugCheckParameter4 + 32) == -1 )
        {
          if ( *v10 == 1 || *(int *)(v27 + 32) < 0 )
            v34[6] = 1;
          v34[0] = 1;
          CmpLockKcbStackTopExclusiveRestShared((__int64)v31);
          CmpLockKcbStackTopExclusiveRestShared((__int64)v32);
          AccessState = CmpCreateChild((__int64)v31, (__int64)v32, (__int64)v35, v33, (__int64)v34, 512, 3, 0, 0LL);
          if ( AccessState < 0 )
          {
            CmpUnlockKcbStack((__int64)v32);
            CmpUnlockKcbStack((__int64)v31);
LABEL_19:
            if ( v15 )
              CmpDereferenceKeyControlBlock(v15);
            break;
          }
          CmpUnlockKcbStack((__int64)v32);
          CmpUnlockKcbStack((__int64)v31);
        }
        CmpUnlockHashEntryByKcb(v15);
        *((_QWORD *)v10 - 2) = v15;
        *(v10 - 1) = *(_DWORD *)(v15 + 32);
        if ( (unsigned int)v9 < v26 - 1 )
        {
          v16 = 6LL * (unsigned int)(v9 + 1);
          *(_QWORD *)(a1 + 8 * v16 + 16) = v15;
          *(_DWORD *)(a1 + 8 * v16 + 32) = *(_DWORD *)(v15 + 32);
        }
        BugCheckParameter4 = 0LL;
        CmpCleanupKcbStack((__int64)v32);
        CmpCleanupKcbStack((__int64)v31);
        v7 = v26;
        v9 = (unsigned int)(v9 + 1);
        v10 += 12;
        if ( (unsigned int)v9 >= v26 )
          goto LABEL_16;
      }
      CmpCleanupKcbStack((__int64)v32);
      CmpCleanupKcbStack((__int64)v31);
    }
    else
    {
LABEL_16:
      v17 = *(unsigned int *)(a4 + 32);
      v18 = *(_QWORD *)(a4 + 24);
      v19 = 6LL * (v7 - 1);
      v20 = *(_DWORD *)(a1 + 48LL * (v7 - 1) + 36);
      v21 = *(_QWORD *)(a1 + 8 * v19 + 24);
      v26 = v20;
      HvMarkCellDirty(v18, v17);
      HvMarkCellDirty(a3, v20);
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(a4 + 24) + 8LL))(
              *(_QWORD *)(a4 + 24),
              *(unsigned int *)(a4 + 32),
              v29);
      if ( v22 )
      {
        v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(a3 + 8))(a3, v20, v30);
        if ( v23 )
        {
          CmpLockTwoSecurityCachesExclusiveShared(a3, *(_QWORD *)(a4 + 24));
          AccessState = CmpCopySaclToVirtualKey(*(_QWORD *)(a4 + 24), v22, a3, v23, v26);
          CmpUnlockTwoSecurityCaches(a3, *(_QWORD *)(a4 + 24));
          if ( AccessState >= 0 )
          {
            CmpAssignSecurityToKcb(v21, *(unsigned int *)(v23 + 44), 0LL, 0, 0);
            *(_WORD *)(v21 + 178) |= 0x100u;
            *(_WORD *)(v23 + 2) |= 0x100u;
            *(_WORD *)(a4 + 178) |= 0x80u;
            *(_WORD *)(v22 + 2) |= 0x80u;
            AccessState = 0;
          }
        }
        else
        {
          AccessState = -1073741670;
        }
        (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(a4 + 24) + 16LL))(*(_QWORD *)(a4 + 24), v29);
        if ( v23 )
          (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v21 + 24) + 16LL))(*(_QWORD *)(v21 + 24), v30);
      }
      else
      {
        AccessState = -1073741670;
      }
    }
    SeDeleteAccessState(v35);
  }
  CmpCleanupParseContext((__int64)v34, 1);
  return (unsigned int)AccessState;
}
