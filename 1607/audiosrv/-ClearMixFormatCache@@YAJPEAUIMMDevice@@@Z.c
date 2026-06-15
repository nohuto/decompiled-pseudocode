/*
 * XREFs of ?ClearMixFormatCache@@YAJPEAUIMMDevice@@@Z @ 0x18008AB0C
 * Callers:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x180087F5C (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18008AD48 (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18008ADA8 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ClearMixFormatCache(struct IMMDevice *a1)
{
  int ProcessingModeSpecificMixFormatKey; // ebx
  unsigned int v2; // r14d
  struct _GUID *v3; // rdi
  struct _GUID *v4; // rsi
  unsigned int i; // esi
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  struct _GUID v8; // [rsp+30h] [rbp-50h] BYREF
  PROPVARIANT pvar[4]; // [rsp+40h] [rbp-40h] BYREF
  struct _tagpropertykey v10; // [rsp+60h] [rbp-20h] BYREF

  pvar[3] = (PROPVARIANT)-2LL;
  v7 = 0LL;
  memset(pvar, 0, 24);
  ProcessingModeSpecificMixFormatKey = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                                         a1,
                                         2LL,
                                         &v7);
  if ( ProcessingModeSpecificMixFormatKey >= 0 )
  {
    ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v7 + 48LL))(
                                           v7,
                                           &PKEY_AudioEngine_HWMixFormat,
                                           pvar);
    if ( ProcessingModeSpecificMixFormatKey >= 0 )
    {
      ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v7 + 48LL))(
                                             v7,
                                             &PKEY_AudioEngine_MixFormat,
                                             pvar);
      if ( ProcessingModeSpecificMixFormatKey >= 0 )
      {
        v2 = 0;
        v3 = (struct _GUID *)qword_1800CA460;
        v4 = (struct _GUID *)qword_1800CA460;
        while ( 1 )
        {
          v8 = *v4;
          ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v8, 0, &v10);
          if ( ProcessingModeSpecificMixFormatKey < 0 )
            break;
          ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v7 + 48LL))(
                                                 v7,
                                                 &v10,
                                                 pvar);
          if ( ProcessingModeSpecificMixFormatKey < 0 )
            break;
          v8 = *v4;
          ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v8, 1, &v10);
          if ( ProcessingModeSpecificMixFormatKey < 0 )
            break;
          ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v7 + 48LL))(
                                                 v7,
                                                 &v10,
                                                 pvar);
          if ( ProcessingModeSpecificMixFormatKey < 0 )
            break;
          ++v2;
          ++v4;
          if ( v2 >= 7 )
          {
            for ( i = 0; i < 7; ++i )
            {
              v8 = *v3;
              ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v8, 0, &v10);
              if ( ProcessingModeSpecificMixFormatKey < 0 )
                break;
              ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v7 + 48LL))(
                                                     v7,
                                                     &v10,
                                                     pvar);
              if ( ProcessingModeSpecificMixFormatKey < 0 )
                break;
              v8 = *v3;
              ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(&v8, 1, &v10);
              if ( ProcessingModeSpecificMixFormatKey < 0 )
                break;
              ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v7 + 48LL))(
                                                     v7,
                                                     &v10,
                                                     pvar);
              if ( ProcessingModeSpecificMixFormatKey < 0 )
                break;
              ++v3;
            }
            break;
          }
        }
      }
    }
  }
  PropVariantClear(pvar);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
