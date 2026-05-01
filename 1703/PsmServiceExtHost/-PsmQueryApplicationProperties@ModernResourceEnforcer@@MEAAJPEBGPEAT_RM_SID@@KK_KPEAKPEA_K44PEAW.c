/*
 * XREFs of ?PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18002A530
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpInitializePsmApplicationProperties@@YAXPEAKPEA_K11PEAW4_PSM_APPLICATION_PRIORITY@@1EPEAU_PSM_APPLICATION_PROPERTIES@@@Z @ 0x18001B030 (-RmpInitializePsmApplicationProperties@@YAXPEAKPEA_K11PEAW4_PSM_APPLICATION_PRIORITY@@1EPEAU_PSM.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18002A310 (-LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORI.c)
 *     ?RmpUnserializePsmApplicationProperties@@YAXPEAU_PSM_APPLICATION_PROPERTIES@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@2@Z @ 0x18002A690 (-RmpUnserializePsmApplicationProperties@@YAXPEAU_PSM_APPLICATION_PROPERTIES@@PEAKPEA_K22PEAW4_PS.c)
 */

__int64 __fastcall ModernResourceEnforcer::PsmQueryApplicationProperties(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        const SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        enum _PSM_APPLICATION_PRIORITY *a11,
        unsigned __int64 *a12)
{
  int v14; // ebx
  _BYTE v18[48]; // [rsp+70h] [rbp-88h] BYREF

  RmpInitializePsmApplicationProperties(a7, a8, a9, a10, a11, a12, 0, (struct _PSM_APPLICATION_PROPERTIES *)v18);
  v14 = (*((__int64 (__fastcall **)(const SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, _BYTE *))this
         + 12))(
          a3,
          a4,
          a2,
          a5,
          a6,
          v18);
  if ( v14 >= 0 )
    RmpUnserializePsmApplicationProperties((struct _PSM_APPLICATION_PROPERTIES *)v18, a7, a8, a9, a10, a11, a12);
  LogQueryApplicationProperties((unsigned int)v14, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return (unsigned int)v14;
}
