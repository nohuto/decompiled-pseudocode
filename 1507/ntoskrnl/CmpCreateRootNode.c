/*
 * XREFs of CmpCreateRootNode @ 0x1407D79B4
 * Callers:
 *     CmpCreateRegistryRoot @ 0x1407D7838 (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     HvAllocateCell @ 0x14049FC48 (HvAllocateCell.c)
 *     CmpCopyName @ 0x1404A1054 (CmpCopyName.c)
 *     CmpNameSize @ 0x1404A109C (CmpNameSize.c)
 */

char __fastcall CmpCreateRootNode(__int64 a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rsi
  unsigned __int16 v5; // ax
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int16 v9; // ax
  UNICODE_STRING v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  int v14; // [rsp+6Ch] [rbp+14h]

  v14 = HIDWORD(a2);
  v12 = a1;
  v3 = CmpMasterHive;
  v13 = -1;
  RtlInitUnicodeString(v11, L"REGISTRY");
  v5 = CmpNameSize(&v11[0].Length);
  v6 = HvAllocateCell(v3, (unsigned int)v5 + 76, 0LL, (__int64)&v12, &v13);
  *a3 = v6;
  if ( v6 == -1 )
    return 0;
  v7 = v12;
  *(_DWORD *)(*(_QWORD *)(v3 + 64) + 36LL) = v6;
  *(_DWORD *)v7 = 813934;
  v8 = v12;
  *(_QWORD *)(v12 + 4) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 16) = -1;
  *(_QWORD *)(v8 + 20) = 0LL;
  *(_DWORD *)(v8 + 28) = -1;
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFFLL;
  *(_DWORD *)(v8 + 40) = -1;
  *(_DWORD *)(v8 + 44) = -1;
  *(_DWORD *)(v8 + 48) = -1;
  *(_WORD *)(v8 + 74) = 0;
  *(_QWORD *)(v8 + 60) = 0LL;
  *(_WORD *)(v8 + 52) = 0;
  *(_DWORD *)(v8 + 52) &= 0xFF00FFFF;
  *(_BYTE *)(v8 + 55) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  v9 = CmpCopyName((_BYTE *)(v8 + 76), (const void **)v11);
  *(_WORD *)(v8 + 72) = v9;
  if ( v9 < v11[0].Length )
    *(_WORD *)(v7 + 2) |= 0x20u;
  (*(void (__fastcall **)(ULONG_PTR, int *))(v3 + 16))(v3, &v13);
  return 1;
}
