/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x140657574
 * Callers:
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpIsMasterHive @ 0x140448D7C (CmpIsMasterHive.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpReparseToVirtualPath @ 0x140658F0C (CmpReparseToVirtualPath.c)
 *     CmObReferenceObjectByName @ 0x14065EAB8 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 a1, char a2, int a3)
{
  int v6; // edi
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // al
  char *v16; // rcx
  int v17; // edx
  int v18; // r9d
  int v19; // eax
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v22[3]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp-98h]
  _QWORD v24[18]; // [rsp+88h] [rbp-80h] BYREF

  memset(v24, 0, 136);
  v6 = -1073741790;
  if ( CmpVEEnabled )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( (*(_WORD *)(v7 + 186) & 0x200) == 0 && !CmpIsMasterHive(v7) && !CmpIsSystemEntity((int *)&v24[2]) )
    {
      v8 = *(_QWORD **)a1;
      v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 184LL);
      if ( (v9 & 0x800000) != 0 && (v9 & 0x20) == 0 )
      {
        CmpLockRegistry();
        CmpLockKcbShared(*(_QWORD *)(*(_QWORD *)a1 + 8LL), v10, v11, v12);
        v14 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
        if ( (*(_DWORD *)(v14 + 4) & 0x20000) != 0 )
        {
          CmpUnlockKcb((char *)v14);
          v6 = -1073741444;
LABEL_11:
          CmpUnlockRegistry();
          return (unsigned int)v6;
        }
        v15 = CmpReparseToVirtualPath(v14, v13, &UnicodeString);
        v16 = *(char **)(*(_QWORD *)a1 + 8LL);
        if ( !v15 )
        {
          CmpUnlockKcb(v16);
          goto LABEL_11;
        }
        CmpUnlockKcb(v16);
        CmpUnlockRegistry();
        LODWORD(v24[0]) = 8;
        v24[10] = v8[7];
        v19 = 576;
        if ( a2 == 1 )
          v19 = 1600;
        LODWORD(v22[0]) = 48;
        v22[1] = 0LL;
        LODWORD(v23[0]) = v19;
        v22[2] = &UnicodeString;
        *(_OWORD *)&v23[1] = 0LL;
        v6 = CmObReferenceObjectByName((unsigned int)v22, v17, a3, v18, 0, (__int64)v24, a1);
        if ( v6 < 0 )
          *(_QWORD *)a1 = v8;
        else
          ObfDereferenceObject(v8);
        RtlFreeAnsiString(&UnicodeString);
      }
    }
  }
  return (unsigned int)v6;
}
