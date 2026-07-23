/*
 * XREFs of CmpCreateRootNode @ 0x1407AE788
 * Callers:
 *     CmpCreateRegistryRoot @ 0x1407AE4D4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     CmpCopyName @ 0x140400BB4 (CmpCopyName.c)
 *     HvAllocateCell @ 0x140400BFC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1404010E0 (CmpNameSize.c)
 */

char __fastcall CmpCreateRootNode(__int64 a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rsi
  unsigned __int16 v5; // ax
  int Cell; // eax
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int16 v9; // ax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v12 = a1;
  v3 = CmpMasterHive;
  v13 = 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"REGISTRY");
  v5 = CmpNameSize(&DestinationString.Length);
  Cell = HvAllocateCell(v3, (unsigned int)v5 + 76, 0LL, (__int64)&v12, (__int64)&v13);
  *a3 = Cell;
  if ( Cell == -1 )
    return 0;
  v7 = v12;
  *(_DWORD *)(*(_QWORD *)(v3 + 64) + 36LL) = Cell;
  *(_DWORD *)v7 = 813934;
  v8 = v12;
  *(_QWORD *)(v12 + 4) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 16) = -1;
  *(_QWORD *)(v8 + 20) = 0LL;
  *(_DWORD *)(v8 + 28) = -1;
  *(_DWORD *)(v8 + 32) = -1;
  *(_DWORD *)(v8 + 36) = 0;
  *(_DWORD *)(v8 + 40) = -1;
  *(_DWORD *)(v8 + 44) = -1;
  *(_DWORD *)(v8 + 48) = -1;
  *(_WORD *)(v8 + 74) = 0;
  *(_QWORD *)(v8 + 60) = 0LL;
  *(_WORD *)(v8 + 52) = 0;
  *(_DWORD *)(v8 + 52) &= 0xFF00FFFF;
  *(_BYTE *)(v8 + 55) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  v9 = CmpCopyName((_BYTE *)(v8 + 76), (const void **)&DestinationString);
  *(_WORD *)(v8 + 72) = v9;
  if ( v9 < DestinationString.Length )
    *(_WORD *)(v7 + 2) |= 0x20u;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v3 + 16))(v3, &v13);
  return 1;
}
