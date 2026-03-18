/*
 * XREFs of IoPropagateIrpExtensionEx @ 0x14010DD50
 * Callers:
 *     IoPropagateIrpExtension @ 0x1401F7C74 (IoPropagateIrpExtension.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x140135D90 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoPropagateIrpExtensionEx(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 IrpExtension; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  void (__fastcall *v17)(__int64, __int64, __int64); // r9

  v4 = *(_QWORD *)(a1 + 200);
  if ( !v4 )
    return 0LL;
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( (a4 & 1) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = v4;
    return 0LL;
  }
  if ( (a4 & 2) != 0 && *(char *)(a1 + 71) >= 0 && (*(_BYTE *)(v4 + 2) & 1) != 0 )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 0LL);
    if ( !IrpExtension )
      return 3221225626LL;
    *(_OWORD *)(IrpExtension + 16) = *(_OWORD *)(v4 + 16);
  }
  if ( (a4 & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || v9 && (*(_BYTE *)(v9 + 2) & 4) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = *(_DWORD *)(v4 + 4);
  }
  if ( (a4 & 4) == 0 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v10 || (*(_BYTE *)(v10 + 2) & 0x20) == 0 )
    return 0LL;
  v13 = IopAllocateIrpExtension(a2, 5LL);
  v14 = v13;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 40) = a3 + *(_QWORD *)(v4 + 40);
    v15 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v14 + 32) = v15;
    v16 = *(_QWORD *)(v4 + 32);
    v17 = *(void (__fastcall **)(__int64, __int64, __int64))(v16 + 8);
    if ( v17 )
      v17(v16, v15, a3);
    return 0LL;
  }
  return 3221225626LL;
}
