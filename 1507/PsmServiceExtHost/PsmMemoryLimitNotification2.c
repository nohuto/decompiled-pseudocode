/*
 * XREFs of PsmMemoryLimitNotification2 @ 0x18002F790
 * Callers:
 *     <none>
 * Callees:
 *     RmpRmSidInitialize @ 0x180004D44 (RmpRmSidInitialize.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x180033A9C (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 */

void __fastcall PsmMemoryLimitNotification2(
        void *Src,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  _BYTE v8[80]; // [rsp+30h] [rbp-68h] BYREF

  RmpRmSidInitialize(v8, Src);
  ModernResourceEnforcer::MemoryLimitNotification(
    *((ModernResourceEnforcer **)RmSvcGlobals + 10),
    (union _RM_SID *)v8,
    a2,
    a3,
    a4,
    a5);
}
