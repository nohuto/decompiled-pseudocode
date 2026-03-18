/*
 * XREFs of IopFreeIrpExtension @ 0x1401F7D7C
 * Callers:
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IopFreeIrp @ 0x14004BC80 (IopFreeIrp.c)
 *     IoSetActivityIdIrp @ 0x1401F669C (IoSetActivityIdIrp.c)
 *     IopPerfCompleteRequest @ 0x1401F80E4 (IopPerfCompleteRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrpExtension(__int64 a1, int a2, char a3)
{
  _BYTE *v4; // rcx
  char v5; // al

  v4 = *(_BYTE **)(a1 + 200);
  v5 = *(_BYTE *)(a1 + 71);
  if ( v5 < 0 )
  {
    *(_BYTE *)(a1 + 71) = v5 & 0x7F;
LABEL_14:
    *(_QWORD *)(a1 + 200) = 0LL;
    return;
  }
  if ( v4 )
  {
    if ( *(char *)(a1 + 71) >= 0 && (v4[2] & 0x20) != 0 )
      *((_QWORD *)v4 + 4) = 0LL;
    if ( a2 == -1 )
      *((_WORD *)v4 + 1) = 0;
    else
      *((_WORD *)v4 + 1) &= ~(1 << a2);
    if ( !*((_WORD *)v4 + 1) && (*v4 & 1) != 0 && a3 )
    {
      ExFreePoolWithTag(v4, 0x58707249u);
      *(_BYTE *)(a1 + 71) &= ~0x40u;
      goto LABEL_14;
    }
  }
}
