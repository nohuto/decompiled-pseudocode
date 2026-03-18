/*
 * XREFs of ViGenericDriverEntry @ 0x1406CE7C8
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall ViGenericDriverEntry(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 (**v2)(void); // r9
  __int64 (*v3)(void); // rax

  v2 = *(__int64 (***)(void))(*(_QWORD *)(BugCheckParameter2 + 48) + 64LL);
  if ( !v2 || (v3 = *v2) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, BugCheckParameter2, (ULONG_PTR)v2, 0LL);
  if ( pXdvDriverEntry )
    return pXdvDriverEntry(BugCheckParameter2, a2, v3);
  else
    return v3();
}
