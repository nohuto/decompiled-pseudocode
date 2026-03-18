/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x14002D354
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x140141060 (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsRevertToUserPagePriorityThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  if ( (_DWORD)a2 == -1 )
  {
    v3 = *(_DWORD *)(a1 + 1732) & 0xFFFFF0FF;
  }
  else
  {
    a2 = (unsigned int)((_DWORD)a2 << 9);
    v3 = a2 | *(_DWORD *)(a1 + 1732) & 0xFFFFF1FF;
  }
  *(_DWORD *)(a1 + 1732) = v3;
  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 486))++ + 1);
  if ( !(_WORD)result )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(a1, a2, a3);
  }
  return result;
}
