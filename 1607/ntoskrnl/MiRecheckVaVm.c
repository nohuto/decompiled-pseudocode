/*
 * XREFs of MiRecheckVaVm @ 0x1401FA118
 * Callers:
 *     MiCrcStillIntact @ 0x1401F9300 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiRecheckVaVm(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  char v5; // al
  int v6; // ecx
  bool v7; // zf
  __int64 v8; // rdi
  __int16 v9; // ax

  v4 = 1;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    if ( a2 < 0xFFFF800000000000uLL )
      goto LABEL_7;
    return 0LL;
  }
  if ( a2 < 0xFFFF800000000000uLL )
    return 0LL;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140326D78);
  v5 = *(_BYTE *)(a1 + 184) & 7;
  v6 = *(unsigned __int8 *)(48 * ((*(_QWORD *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                          - 0x57FFFFFFFDALL) >> 4;
  switch ( v5 )
  {
    case 1:
      if ( v6 == 1 )
        goto LABEL_7;
      v7 = v6 == 11;
      break;
    case 2:
      v7 = v6 == 8;
      break;
    case 3:
      v7 = v6 == 6;
      break;
    case 4:
      v7 = v6 == 9;
      break;
    default:
      goto LABEL_7;
  }
  if ( !v7 )
  {
LABEL_10:
    v4 = 0;
    goto LABEL_11;
  }
LABEL_7:
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !MiIsAddressValid(v8) )
    goto LABEL_10;
  v9 = MI_READ_PTE_LOCK_FREE(v8);
  if ( (v9 & 1) == 0 && (v9 & 0xC00) != 0x800LL )
    goto LABEL_10;
LABEL_11:
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
  return v4;
}
