/*
 * XREFs of PsSetSystemPagePriorityThread @ 0x14002D2DC
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x140141060 (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall PsSetSystemPagePriorityThread(__int64 a1, int a2, __int64 a3)
{
  int v4; // ecx
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  __int16 v8; // cx
  _QWORD *v9; // rcx

  --*(_WORD *)(a1 + 486);
  LOBYTE(a3) = *(_BYTE *)(a1 + 1733);
  v4 = *(_DWORD *)(a1 + 1732);
  v5 = (unsigned int)(a2 << 9);
  if ( (a3 & 1) != 0 )
  {
    v6 = ((unsigned __int8)a3 >> 1) & 7;
    v7 = v4 & 0xFFFFF1FF;
  }
  else
  {
    v6 = -1;
    v7 = v4 | 0x100;
  }
  *(_DWORD *)(a1 + 1732) = v5 | v7;
  v8 = *(_WORD *)(a1 + 486) + 1;
  *(_WORD *)(a1 + 486) = v8;
  if ( !v8 )
  {
    v9 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v9 != v9 )
      KiCheckForKernelApcDelivery(v9, v5, a3);
  }
  return v6;
}
