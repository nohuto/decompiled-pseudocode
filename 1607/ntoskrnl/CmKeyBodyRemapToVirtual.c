/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x1405FFEFC
 * Callers:
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     CmpIsMasterHive @ 0x1404BCA00 (CmpIsMasterHive.c)
 *     CmpReparseToVirtualPath @ 0x14060180C (CmpReparseToVirtualPath.c)
 *     CmObReferenceObjectByName @ 0x140606D64 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, int a3)
{
  int v6; // edi
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // edx
  int v12; // r9d
  int v13; // eax
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING *p_UnicodeString; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+68h] [rbp-98h]
  __int128 v20; // [rsp+70h] [rbp-90h]
  _QWORD v21[30]; // [rsp+80h] [rbp-80h] BYREF

  v6 = -1073741790;
  v7 = *(_QWORD *)(*a1 + 8);
  if ( !*(_WORD *)(v7 + 58) )
  {
    if ( CmpVEEnabled )
    {
      if ( (*(_WORD *)(v7 + 178) & 0x200) == 0 && !CmpIsMasterHive(v7) && !CmpIsSystemEntity((int *)&v21[2]) )
      {
        v8 = (_QWORD *)*a1;
        v9 = *(_DWORD *)(*(_QWORD *)(*a1 + 8) + 176LL);
        if ( (v9 & 0x800000) != 0 && (v9 & 0x20) == 0 )
        {
          CmpLockRegistry();
          CmpLockKcbShared(*(_QWORD *)(*a1 + 8));
          if ( CmpIsKeyDeletedForKeyBody(*a1, 0LL) )
          {
            v6 = -1073741444;
LABEL_11:
            CmpUnlockKcb(*(char **)(*a1 + 8));
            CmpUnlockRegistry();
            return (unsigned int)v6;
          }
          if ( !(unsigned __int8)CmpReparseToVirtualPath(*(_QWORD *)(*a1 + 8), v10, &UnicodeString) )
            goto LABEL_11;
          CmpUnlockKcb(*(char **)(*a1 + 8));
          CmpUnlockRegistry();
          memset(v21, 0, 0xE8uLL);
          LODWORD(v21[0]) = 8;
          v21[10] = v8[7];
          v13 = 576;
          if ( a2 == 1 )
            v13 = 1600;
          v16 = 48;
          v19 = v13;
          v17 = 0LL;
          p_UnicodeString = &UnicodeString;
          v20 = 0LL;
          v6 = CmObReferenceObjectByName((unsigned int)&v16, v11, a3, v12, 0, (__int64)v21, (__int64)a1);
          if ( v6 < 0 )
            *a1 = (__int64)v8;
          else
            ObfDereferenceObject(v8);
          CmpCleanupParseContext((__int64)v21, 0);
          RtlFreeAnsiString(&UnicodeString);
        }
      }
    }
  }
  return (unsigned int)v6;
}
