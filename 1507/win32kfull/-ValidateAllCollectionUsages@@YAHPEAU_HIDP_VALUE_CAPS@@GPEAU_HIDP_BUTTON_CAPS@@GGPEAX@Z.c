/*
 * XREFs of ?ValidateAllCollectionUsages@@YAHPEAU_HIDP_VALUE_CAPS@@GPEAU_HIDP_BUTTON_CAPS@@GGPEAX@Z @ 0x1C01C6AA4
 * Callers:
 *     IsParallelDevice @ 0x1C01CC030 (IsParallelDevice.c)
 * Callees:
 *     ?IsButtonCapsEqual@@YAHPEAU_HIDP_BUTTON_CAPS@@0G@Z @ 0x1C01C5784 (-IsButtonCapsEqual@@YAHPEAU_HIDP_BUTTON_CAPS@@0G@Z.c)
 *     ?IsValueCapsEqual@@YAHPEAU_HIDP_VALUE_CAPS@@0G@Z @ 0x1C01C5890 (-IsValueCapsEqual@@YAHPEAU_HIDP_VALUE_CAPS@@0G@Z.c)
 *     ?RetrieveAllLinkIndexUsages@@YAJGPEAXPEAGPEAPEAU_HIDP_VALUE_CAPS@@1PEAPEAU_HIDP_BUTTON_CAPS@@@Z @ 0x1C01C605C (-RetrieveAllLinkIndexUsages@@YAJGPEAXPEAGPEAPEAU_HIDP_VALUE_CAPS@@1PEAPEAU_HIDP_BUTTON_CAPS@@@Z.c)
 */

__int64 __fastcall ValidateAllCollectionUsages(
        struct _HIDP_VALUE_CAPS *a1,
        unsigned __int16 a2,
        struct _HIDP_BUTTON_CAPS *a3,
        unsigned __int16 a4,
        USHORT a5,
        struct _HIDP_PREPARSED_DATA *a6)
{
  unsigned int v6; // ebx
  unsigned __int16 v12[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v13; // [rsp+34h] [rbp-1Ch] BYREF
  struct _HIDP_VALUE_CAPS *v14; // [rsp+38h] [rbp-18h] BYREF
  struct _HIDP_BUTTON_CAPS *v15; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0;
  v14 = 0LL;
  v12[0] = 0;
  v15 = 0LL;
  v13 = 0;
  if ( (unsigned int)RetrieveAllLinkIndexUsages(a5, a6, v12, &v14, &v13, &v15) == 1114112 )
  {
    if ( v12[0] == a2
      && (unsigned int)IsValueCapsEqual(a1, v14, a2)
      && v13 == a4
      && (unsigned int)IsButtonCapsEqual(a3, v15, a4) )
    {
      v6 = 1;
    }
    else
    {
      UserLogError(2147483912LL);
    }
    Win32FreePool(v14);
    Win32FreePool(v15);
  }
  return v6;
}
