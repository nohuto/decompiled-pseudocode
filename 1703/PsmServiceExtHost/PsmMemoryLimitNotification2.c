/*
 * XREFs of PsmMemoryLimitNotification2 @ 0x18001AA50
 * Callers:
 *     <none>
 * Callees:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000A2A0 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800217DC (memcpy_0.c)
 */

void __fastcall PsmMemoryLimitNotification2(
        void *Src,
        int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  ULONG v9; // eax
  _BYTE v10[64]; // [rsp+30h] [rbp-78h] BYREF
  int v11; // [rsp+70h] [rbp-38h]

  memset(v10, 0, sizeof(v10));
  v11 = 0;
  v9 = RtlLengthSid(Src);
  memcpy_0(v10, Src, v9);
  ModernResourceEnforcer::MemoryLimitNotification(
    *((ModernResourceEnforcer **)RmSvcGlobals + 7),
    (union _RM_SID *)v10,
    a2,
    a3,
    a4,
    a5);
}
