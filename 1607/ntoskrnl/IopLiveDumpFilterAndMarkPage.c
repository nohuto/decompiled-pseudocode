/*
 * XREFs of IopLiveDumpFilterAndMarkPage @ 0x1403DAF74
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1403DB598 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14001757C (RtlSetBitsEx.c)
 *     MmTryIdentifyPage @ 0x1401E53F4 (MmTryIdentifyPage.c)
 */

void __fastcall IopLiveDumpFilterAndMarkPage(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5[0] = 0LL;
  v5[1] = 0LL;
  v6 = 0LL;
  if ( (unsigned int)MmTryIdentifyPage(a1, v5) && (v5[0] & 0x70) >= 0x60 )
  {
    if ( (unsigned __int64)(v6 + 0x800000000000LL) <= 0x7FFFFFFFFFFFLL )
    {
      v4 = a2 + 424;
LABEL_8:
      RtlSetBitsEx(v4, a1, 1uLL);
      return;
    }
    if ( (*(_DWORD *)(a2 + 40) & 4) != 0 && (unsigned __int64)(v6 - 1) <= 0x7FFFFFFEFFFELL )
    {
      v4 = a2 + 464;
      goto LABEL_8;
    }
  }
}
