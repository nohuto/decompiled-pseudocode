/*
 * XREFs of ?RetrieveAllLinkIndexUsages@@YAJGPEAXPEAGPEAPEAU_HIDP_VALUE_CAPS@@1PEAPEAU_HIDP_BUTTON_CAPS@@@Z @ 0x1C01C605C
 * Callers:
 *     ?ValidateAllCollectionUsages@@YAHPEAU_HIDP_VALUE_CAPS@@GPEAU_HIDP_BUTTON_CAPS@@GGPEAX@Z @ 0x1C01C6AA4 (-ValidateAllCollectionUsages@@YAHPEAU_HIDP_VALUE_CAPS@@GPEAU_HIDP_BUTTON_CAPS@@GGPEAX@Z.c)
 *     IsParallelDevice @ 0x1C01CC030 (IsParallelDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RetrieveAllLinkIndexUsages(
        USHORT a1,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        unsigned __int16 *ValueCapsLength,
        struct _HIDP_VALUE_CAPS **a4,
        unsigned __int16 *ButtonCapsLength,
        struct _HIDP_BUTTON_CAPS **a6)
{
  unsigned int SpecificValueCaps; // ebx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rax
  struct _HIDP_BUTTON_CAPS *v12; // rax

  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, a1, 0, 0LL, ValueCapsLength, PreparsedData);
  if ( SpecificValueCaps != -1072627705 )
  {
LABEL_8:
    if ( SpecificValueCaps == 1114112 )
      return SpecificValueCaps;
    goto LABEL_9;
  }
  ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInit(72LL * *ValueCapsLength, 1668707157LL);
  *a4 = ValueCaps;
  if ( !ValueCaps )
  {
LABEL_7:
    SpecificValueCaps = -1073741801;
    goto LABEL_8;
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, a1, 0, ValueCaps, ValueCapsLength, PreparsedData);
  if ( SpecificValueCaps == 1114112 )
  {
    SpecificValueCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, a1, 0, 0LL, ButtonCapsLength, PreparsedData);
    if ( SpecificValueCaps != -1072627705 )
      goto LABEL_8;
    v12 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInit(72LL * *ButtonCapsLength, 1668707157LL);
    *a6 = v12;
    if ( v12 )
    {
      SpecificValueCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, a1, 0, v12, ButtonCapsLength, PreparsedData);
      goto LABEL_8;
    }
    goto LABEL_7;
  }
LABEL_9:
  if ( *a4 )
  {
    Win32FreePool(*a4);
    *a4 = 0LL;
  }
  if ( *a6 )
  {
    Win32FreePool(*a6);
    *a6 = 0LL;
  }
  return SpecificValueCaps;
}
