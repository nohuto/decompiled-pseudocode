/*
 * XREFs of ?SetOffloadDeviceFormat@@YAJPEBGPEAUtWAVEFORMATEX@@@Z @ 0x180053A18
 * Callers:
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x18006E85C (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SetOffloadDeviceFormat(const unsigned __int16 *a1, struct tWAVEFORMATEX *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  HRESULT v6; // ebx
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF
  __int64 v9; // [rsp+70h] [rbp+30h]
  LPVOID ppv; // [rsp+78h] [rbp+38h] BYREF

  ppv = 0LL;
  v4 = 0LL;
  v8 = 0LL;
  v5 = 0LL;
  v9 = 0LL;
  if ( !a1 || !a2 )
  {
    v6 = -2147024809;
LABEL_8:
    if ( v6 >= 0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v6 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, a1, &v8);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v8 + 24LL))(
             v8,
             &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
             1LL);
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64, struct tWAVEFORMATEX *))(*(_QWORD *)v9 + 40LL))(v9, v8, a2);
        v4 = v8;
        v5 = v9;
        goto LABEL_8;
      }
    }
  }
LABEL_9:
  AudSrvTraceLoggingErrorHelper("SetOffloadDeviceFormat", 1057, v6);
  v4 = v8;
  v5 = v9;
LABEL_10:
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v4 = v8;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v6;
}
