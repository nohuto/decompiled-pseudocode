/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x140225A30
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MI_MAKE_PROTECT_WRITE_COPY(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // r11
  unsigned __int64 v3; // r10
  __int64 *v4; // r9

  result = *a1;
  v2 = 0x12090482600LL;
  v3 = 2040LL;
  v4 = a1;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    result = MiReadPteShadow((__int64)a1, *a1);
  if ( (result & 0x80u) != 0LL )
  {
    result |= 0x20uLL;
    *v4 = result;
    if ( (unsigned __int64)&v4[v2] <= v3 )
      return (__int64)MiWritePteShadow((__int64)v4, result);
  }
  return result;
}
