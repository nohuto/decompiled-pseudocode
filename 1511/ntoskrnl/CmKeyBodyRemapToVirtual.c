/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x1405E1850
 * Callers:
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpIsMasterHive @ 0x1403DF1A0 (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     CmpReparseToVirtualPath @ 0x1405E2990 (CmpReparseToVirtualPath.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1)
{
  unsigned int v2; // ebx
  int v3; // ebp
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // al
  char *v10; // rcx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v13[18]; // [rsp+50h] [rbp-98h] BYREF

  v2 = 0;
  memset(v13, 0, 136);
  v3 = 0;
  if ( CmpVEEnabled )
  {
    v4 = *(_QWORD *)(*a1 + 8);
    if ( (*(_WORD *)(v4 + 186) & 0x200) == 0 && !CmpIsMasterHive(v4) && !CmpIsSystemEntity((int *)&v13[2]) )
    {
      v5 = (_QWORD *)*a1;
      v6 = *(_DWORD *)(*(_QWORD *)(*a1 + 8) + 184LL);
      if ( (v6 & 0x800000) != 0 && (v6 & 0x20) == 0 )
      {
        CmpLockRegistry();
        CmpLockKcbShared(*(_QWORD *)(*a1 + 8));
        v8 = *(_QWORD *)(*a1 + 8);
        if ( (*(_DWORD *)(v8 + 4) & 0x20000) != 0 )
        {
          CmpUnlockKcb((char *)v8);
          v2 = -1073741444;
LABEL_11:
          CmpUnlockRegistry();
          return v2;
        }
        v9 = CmpReparseToVirtualPath(v8, v7, &UnicodeString);
        v10 = *(char **)(*a1 + 8);
        if ( !v9 )
        {
          CmpUnlockKcb(v10);
          goto LABEL_11;
        }
        CmpUnlockKcb(v10);
        CmpUnlockRegistry();
        LODWORD(v13[0]) = 8;
        v13[10] = v5[7];
        v3 = ObReferenceObjectByName(
               (ULONG64)&UnicodeString,
               576,
               0LL,
               0,
               (struct _OBJECT_TYPE *)CmKeyObjectType,
               0,
               (__int64)v13,
               a1);
        if ( v3 < 0 )
          *a1 = (__int64)v5;
        else
          ObfDereferenceObject(v5);
        RtlFreeAnsiString(&UnicodeString);
      }
    }
  }
  return (unsigned int)v3;
}
