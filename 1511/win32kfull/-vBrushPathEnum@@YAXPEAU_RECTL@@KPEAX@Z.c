/*
 * XREFs of ?vBrushPathEnum@@YAXPEAU_RECTL@@KPEAX@Z @ 0x1C02C99C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vBrushPathEnum(struct _RECTL *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rsi
  void (__fastcall *v6)(_QWORD *); // rax

  if ( a2 )
  {
    v4 = a2;
    do
    {
      v6 = (void (__fastcall *)(_QWORD *))*a3;
      a3[5] = a1++;
      v6(a3 + 2);
      --v4;
    }
    while ( v4 );
  }
}
