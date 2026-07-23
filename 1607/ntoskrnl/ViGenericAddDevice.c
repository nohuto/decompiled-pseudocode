/*
 * XREFs of ViGenericAddDevice @ 0x14071A73C
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall ViGenericAddDevice(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v2; // r9
  __int64 (*v3)(void); // rax

  v2 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 64LL);
  if ( !v2 || (v3 = *(__int64 (**)(void))(v2 + 24)) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, BugCheckParameter2, v2, 0LL);
  if ( pXdvAddDevice )
    return pXdvAddDevice(BugCheckParameter2, a2, v3);
  else
    return v3();
}
