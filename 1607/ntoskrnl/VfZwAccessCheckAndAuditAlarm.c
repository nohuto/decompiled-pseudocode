/*
 * XREFs of VfZwAccessCheckAndAuditAlarm @ 0x14071D140
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140720D68 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140720DF8 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140720E38 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwAccessCheckAndAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckUnicodeString(a1, (int)retaddr);
    ViZwCheckUnicodeString(a3, (int)retaddr);
    ViZwCheckUnicodeString(a4, (int)retaddr);
    ViZwCheckVirtualAddress(a5, (int)retaddr);
    ViZwCheckVirtualAddress(a7, (int)retaddr);
    ViZwCheckVirtualAddress(a9, (int)retaddr);
    ViZwCheckVirtualAddress(a11, (int)retaddr);
  }
  return pXdvZwAccessCheckAndAuditAlarm(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
