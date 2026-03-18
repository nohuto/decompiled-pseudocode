/*
 * XREFs of RtlStringCbLengthW @ 0x1C0001B30
 * Callers:
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C006A5EC (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     DpiAppendStringToString @ 0x1C00CF6C0 (DpiAppendStringToString.c)
 * Callees:
 *     sub_1C0001B88 @ 0x1C0001B88 (sub_1C0001B88.c)
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  __int64 v3; // rax
  size_t v4; // rdx
  size_t *v5; // r11
  NTSTATUS v6; // r8d
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = cbMax >> 1;
  v8 = 0LL;
  v5 = pcbLength;
  if ( psz && v4 <= 0x7FFFFFFF )
  {
    v6 = sub_1C0001B88(psz, v4, &v8);
    v3 = v8;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v5 )
  {
    if ( v6 < 0 )
      *v5 = 0LL;
    else
      *v5 = 2 * v3;
  }
  return v6;
}
