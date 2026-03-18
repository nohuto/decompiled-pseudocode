/*
 * XREFs of Template_ppxt @ 0x1C001E4EC
 * Callers:
 *     ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z @ 0x1C0066890 (-MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z.c)
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1C0083BD0 (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_ppxt(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v8; // [rsp+30h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-11h] BYREF
  char *v10; // [rsp+50h] [rbp-1h]
  __int64 v11; // [rsp+58h] [rbp+7h]
  char *v12; // [rsp+60h] [rbp+Fh]
  __int64 v13; // [rsp+68h] [rbp+17h]
  char *v14; // [rsp+70h] [rbp+1Fh]
  __int64 v15; // [rsp+78h] [rbp+27h]

  UserData.Ptr = (ULONGLONG)&v8;
  v8 = 0LL;
  v10 = &a5;
  *(_QWORD *)&UserData.Size = 8LL;
  v12 = &a6;
  v11 = 8LL;
  v14 = &a7;
  v13 = 8LL;
  v15 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 4u, &UserData);
}
