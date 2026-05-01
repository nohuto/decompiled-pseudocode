/*
 * XREFs of ?PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18003ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpInitializePsmApplicationProperties@@YAXPEAKPEA_K11PEAW4_PSM_APPLICATION_PRIORITY@@1EPEAU_PSM_APPLICATION_PROPERTIES@@@Z @ 0x180005008 (-RmpInitializePsmApplicationProperties@@YAXPEAKPEA_K11PEAW4_PSM_APPLICATION_PRIORITY@@1EPEAU_PSM.c)
 *     ?LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180019D70 (-LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORI.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?RmpUnserializePsmApplicationProperties@@YAXPEAU_PSM_APPLICATION_PROPERTIES@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@2@Z @ 0x18003B078 (-RmpUnserializePsmApplicationProperties@@YAXPEAU_PSM_APPLICATION_PROPERTIES@@PEAKPEA_K22PEAW4_PS.c)
 */

__int64 __fastcall ModernResourceEnforcer::PsmQueryApplicationProperties(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
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
  __int64 (__fastcall *v12)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, _BYTE *); // rbx
  int v14; // ebx
  _BYTE v18[48]; // [rsp+70h] [rbp-88h] BYREF

  v12 = (__int64 (__fastcall *)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, _BYTE *))*((_QWORD *)this + 11);
  RmpInitializePsmApplicationProperties(a7, a8, a9, a10, a11, a12, 0, (struct _PSM_APPLICATION_PROPERTIES *)v18);
  v14 = v12(a3, a4, a2, a5, a6, v18);
  if ( v14 >= 0 )
    RmpUnserializePsmApplicationProperties((struct _PSM_APPLICATION_PROPERTIES *)v18, a7, a8, a9, a10, a11, a12);
  LogQueryApplicationProperties(v14, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  return (unsigned int)v14;
}
