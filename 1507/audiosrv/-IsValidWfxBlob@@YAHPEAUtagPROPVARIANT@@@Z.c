/*
 * XREFs of ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180037ECC
 * Callers:
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F1A0 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F6A0 (-GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     ?GetDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800871D4 (-GetDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidWfxBlob(struct tagPROPVARIANT *a1)
{
  __int64 ulVal; // rdx
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( a1->vt == 65 )
    {
      ulVal = a1->ulVal;
      if ( (unsigned int)ulVal >= 0x12 && ulVal == *((unsigned __int16 *)a1->bstrblobVal.pData + 8) + 18LL )
        return 1;
    }
  }
  return result;
}
