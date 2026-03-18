/*
 * XREFs of ShrinkAV_CY @ 0x1C02508C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

unsigned __int16 *__fastcall ShrinkAV_CY(int *a1)
{
  int v1; // esi
  __int64 v3; // rdx
  unsigned __int16 *v4; // rax
  int v5; // edi
  unsigned __int16 *result; // rax

  v1 = *a1;
  v3 = *((_QWORD *)a1 + 39);
  *a1 &= ~0x2000u;
  v4 = *(unsigned __int16 **)(v3 + 216);
  v5 = *v4;
  result = v4 + 1;
  for ( *(_QWORD *)(v3 + 216) = result; v5; --v5 )
  {
    (*((void (__fastcall **)(int *))a1 + 29))(a1);
    result = (unsigned __int16 *)a1[65];
    *((_QWORD *)a1 + 31) += result;
    *a1 = v1;
  }
  return result;
}
