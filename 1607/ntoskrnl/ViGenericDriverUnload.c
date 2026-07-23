/*
 * XREFs of ViGenericDriverUnload @ 0x14071A924
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall ViGenericDriverUnload(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  __int64 (*v2)(void); // rax

  v1 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 64LL);
  if ( !v1 || (v2 = *(__int64 (**)(void))(v1 + 16)) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, BugCheckParameter2, v1, 0LL);
  if ( pXdvDriverUnload )
    return pXdvDriverUnload(BugCheckParameter2, *(_QWORD *)(v1 + 16));
  else
    return v2();
}
