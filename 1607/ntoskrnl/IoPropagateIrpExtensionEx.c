/*
 * XREFs of IoPropagateIrpExtensionEx @ 0x14008DC60
 * Callers:
 *     IoPropagateIrpExtension @ 0x14008DC50 (IoPropagateIrpExtension.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14008DD68 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateIrpExtension @ 0x14008DD94 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoPropagateIrpExtensionEx(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 IrpExtension; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, __int64, __int64); // r9

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
    *(_OWORD *)(IrpExtension + 24) = *(_OWORD *)(v4 + 24);
  }
  if ( (a4 & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || v9 && (*(_BYTE *)(v9 + 2) & 4) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = *(_DWORD *)(v4 + 4);
  }
  if ( (a4 & 4) == 0 )
    goto LABEL_14;
  v10 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v10 || (*(_BYTE *)(v10 + 2) & 0x20) == 0 )
    goto LABEL_14;
  v14 = IopAllocateIrpExtension(a2, 5LL);
  v15 = v14;
  if ( v14 )
  {
    *(_QWORD *)(v14 + 48) = a3 + *(_QWORD *)(v4 + 48);
    v16 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v15 + 40) = v16;
    v17 = *(_QWORD *)(v4 + 40);
    v18 = *(void (__fastcall **)(__int64, __int64, __int64))(v17 + 8);
    if ( v18 )
      v18(v17, v16, a3);
LABEL_14:
    if ( (a4 & 8) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 200);
      if ( *(char *)(a1 + 71) >= 0 )
      {
        if ( v11 )
        {
          if ( (*(_BYTE *)(v11 + 2) & 0x40) != 0 )
            IopSetDiskIoAttributionExtension(a2, *(_QWORD *)(v4 + 16));
        }
      }
    }
    return 0LL;
  }
  return 3221225626LL;
}
