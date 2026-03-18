/*
 * XREFs of IovBuildAsynchronousFsdRequest @ 0x140734AAC
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     XdvIopBuildAsynchronousFsdRequest @ 0x14025B0A0 (XdvIopBuildAsynchronousFsdRequest.c)
 *     VfSetIoBuildRequest @ 0x140741848 (VfSetIoBuildRequest.c)
 */

__int64 __fastcall IovBuildAsynchronousFsdRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v6 = XdvIopBuildAsynchronousFsdRequest(
         a1,
         a2,
         a3,
         a4,
         a5,
         a6,
         (int)retaddr,
         (__int64 (*)(void))IopBuildAsynchronousFsdRequest);
  v7 = v6;
  if ( v6 )
    VfSetIoBuildRequest(v6);
  return v7;
}
