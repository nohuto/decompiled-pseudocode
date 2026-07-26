/*
 * XREFs of Duplicate802_11AttachAttributes @ 0x1C0073FA4
 * Callers:
 *     ndisMSetNative802_11Attributes @ 0x1C00D15F8 (ndisMSetNative802_11Attributes.c)
 * Callees:
 *     Duplicate802_11AttachAttributesCommon @ 0x1C0073FC0 (Duplicate802_11AttachAttributesCommon.c)
 */

__int64 __fastcall Duplicate802_11AttachAttributes(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v6; // [rsp+20h] [rbp-38h]
  size_t v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h]
  size_t v9; // [rsp+38h] [rbp-20h]

  return Duplicate802_11AttachAttributesCommon(a1, a2, a3, a4, v6, v7, v8, v9, a5);
}
