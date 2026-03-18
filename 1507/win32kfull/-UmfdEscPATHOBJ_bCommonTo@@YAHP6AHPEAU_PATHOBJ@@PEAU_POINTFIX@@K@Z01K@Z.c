/*
 * XREFs of ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C02A405C
 * Callers:
 *     UmfdDispatchEscape @ 0x1C02A47DC (UmfdDispatchEscape.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ULongLongMult @ 0x1C026BA08 (ULongLongMult.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D4A8C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 */

__int64 __fastcall UmfdEscPATHOBJ_bCommonTo(
        int (*a1)(struct _PATHOBJ *, struct _POINTFIX *, unsigned int),
        struct _PATHOBJ *a2,
        struct _POINTFIX *a3,
        unsigned int a4)
{
  struct UmfdTls *v8; // rax
  __int64 v9; // r14
  size_t v10; // rbx
  void *v11; // rsi
  unsigned int v12; // ebx
  size_t Size; // [rsp+58h] [rbp+10h] BYREF

  Size = (size_t)a2;
  if ( ULongLongMult(a4, 8uLL, &Size) < 0 )
    return 0LL;
  v8 = UmfdTls::EnsureTls();
  if ( !v8 )
    return 0LL;
  v9 = *((_QWORD *)v8 + 5);
  if ( !v9 )
    return 0LL;
  v10 = Size;
  v11 = PALLOCMEM2((unsigned int)Size, 1801733703LL, 0);
  if ( !v11 )
    return 0LL;
  if ( v10 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a3 + v10 > W32UserProbeAddress || (struct _POINTFIX *)((char *)a3 + v10) < a3 )
      *W32UserProbeAddress = 0;
  }
  memmove(v11, a3, v10);
  v12 = ((__int64 (__fastcall *)(__int64, void *, _QWORD))a1)(v9, v11, a4);
  Win32FreePool(v11);
  return v12;
}
