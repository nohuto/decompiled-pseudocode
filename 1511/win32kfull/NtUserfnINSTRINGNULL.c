/*
 * XREFs of NtUserfnINSTRINGNULL @ 0x1C008FE20
 * Callers:
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C013FF80 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C00900B8 (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C00907B4 (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINSTRINGNULL(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v7; // r11
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  v7 = a3;
  if ( a4 )
  {
    if ( a7 )
    {
      RtlInitLargeAnsiString(v11);
    }
    else
    {
      if ( (a4 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlInitLargeUnicodeString(v11, a4);
    }
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, v7);
}
