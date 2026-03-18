/*
 * XREFs of MiRecheckVaVm @ 0x140129974
 * Callers:
 *     MiCrcStillIntact @ 0x140128AC0 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiRecheckVaVm(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int16 v6; // ax
  char v8; // al
  int v9; // ecx
  bool v10; // zf

  v4 = 1;
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
  {
    if ( a2 < 0xFFFF800000000000uLL )
      goto LABEL_3;
    return 0LL;
  }
  if ( a2 < 0xFFFF800000000000uLL )
    return 0LL;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_1402FE9C8);
  v8 = *(_BYTE *)(a1 + 216) & 7;
  v9 = *(unsigned __int8 *)(48 * ((*(_QWORD *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                          - 0x57FFFFFFFDALL) >> 4;
  switch ( v8 )
  {
    case 1:
      if ( v9 == 1 )
        goto LABEL_3;
      v10 = v9 == 11;
      break;
    case 2:
      v10 = v9 == 8;
      break;
    case 3:
      v10 = v9 == 6;
      break;
    case 4:
      v10 = v9 == 9;
      break;
    default:
      goto LABEL_3;
  }
  if ( !v10 )
  {
LABEL_18:
    v4 = 0;
    goto LABEL_5;
  }
LABEL_3:
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !MiIsAddressValid(v5) )
    goto LABEL_18;
  v6 = MI_READ_PTE_LOCK_FREE(v5);
  if ( (v6 & 1) == 0 && (v6 & 0xC00) != 0x800LL )
    goto LABEL_18;
LABEL_5:
  if ( (*(_BYTE *)(a1 + 216) & 7) != 0 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
  return v4;
}
