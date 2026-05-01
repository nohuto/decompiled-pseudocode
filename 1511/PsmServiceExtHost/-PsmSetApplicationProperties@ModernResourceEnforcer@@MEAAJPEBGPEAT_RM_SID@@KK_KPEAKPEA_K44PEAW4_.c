/*
 * XREFs of ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180017930
 * Callers:
 *     <none>
 * Callees:
 *     ?LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180016050 (-LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ModernResourceEnforcer::PsmSetApplicationProperties(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        enum _PSM_APPLICATION_PRIORITY *a11,
        unsigned __int64 *a12)
{
  const unsigned __int16 *v12; // rax
  int v14; // ecx
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // edi
  unsigned __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v27; // [rsp+78h] [rbp-39h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp-31h]
  unsigned __int64 v29; // [rsp+88h] [rbp-29h]
  unsigned __int64 v30; // [rsp+90h] [rbp-21h]
  __int64 v31; // [rsp+98h] [rbp-19h]
  unsigned __int64 v32; // [rsp+A0h] [rbp-11h]

  v12 = a2;
  if ( __PAIR128__((unsigned __int64)a8, (unsigned __int64)a7) != 0 || a9 || a10 || a11 || a12 )
  {
    v27 = 0LL;
    v14 = 0;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    if ( a7 )
    {
      v15 = *a7;
      v14 = 1;
      LODWORD(v27) = 1;
      HIDWORD(v27) = v15;
    }
    if ( a8 )
    {
      v21 = *a8;
      v14 |= 2u;
      LODWORD(v27) = v14;
      v28 = v21;
    }
    if ( a9 )
    {
      v16 = *a9;
      v14 |= 4u;
      LODWORD(v27) = v14;
      v29 = v16;
    }
    if ( a10 )
    {
      v17 = *a10;
      v14 |= 8u;
      LODWORD(v27) = v14;
      v30 = v17;
    }
    if ( a11 )
    {
      v22 = *(_DWORD *)a11;
      v14 |= 0x10u;
      LODWORD(v27) = v14;
      LODWORD(v31) = v22;
    }
    if ( a12 )
    {
      v23 = *a12;
      LODWORD(v27) = v14 | 0x20;
      v32 = v23;
    }
    v18 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, __int64, __int64 *))this
           + 10))(
            a3,
            a4,
            a2,
            a5,
            a6,
            &v27);
    if ( v18 >= 0 )
      v18 = 0;
    v19 = v18;
    v12 = a2;
  }
  else
  {
    v19 = 0;
  }
  LogSetApplicationProperties(v19, v12, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  return v19;
}
