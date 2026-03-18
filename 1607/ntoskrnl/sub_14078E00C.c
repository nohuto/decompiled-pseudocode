/*
 * XREFs of sub_14078E00C @ 0x14078E00C
 * Callers:
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     KiErrata671Present @ 0x1402535D0 (KiErrata671Present.c)
 */

__int64 sub_14078E00C()
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v1; // rbx
  char v2; // si
  unsigned int v3; // ecx
  unsigned __int8 v5; // [rsp+58h] [rbp+10h]

  CurrentIrql = KeGetCurrentIrql();
  v5 = CurrentIrql;
  __writecr8(0xFuLL);
  v1 = __readcr0();
  __writecr0(v1 & 0xFFFFFFFFFFFEFFFFuLL);
  v2 = *((_BYTE *)KiErrata671Present + 2);
  *((_BYTE *)KiErrata671Present + 2) = -61;
  v3 = KiErrata671Present();
  if ( *((_BYTE *)KiErrata671Present + 2) != v2 )
    *((_BYTE *)KiErrata671Present + 2) = v2;
  __writecr0(v1);
  __writecr8(v5);
  return v3;
}
