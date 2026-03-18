/*
 * XREFs of KiDetectBpbMsr @ 0x1401CBD0C
 * Callers:
 *     KiSetFeatureBits @ 0x1403A7FB8 (KiSetFeatureBits.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall KiDetectBpbMsr(__int64 a1, char a2)
{
  char v2; // r9
  unsigned int v15; // edx
  char v16; // al

  v2 = KiFeatureSettings;
  if ( (KiFeatureSettings & 1) != 0 )
    return;
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
  {
    v15 = 0;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v15 = _RDX & 0xC000000;
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    if ( v15 != (_DWORD)dword_1402FDEF0 )
      KeBugCheckEx(0x5Du, 0x42504249uLL, (unsigned int)dword_1402FDEF0, v15, 0LL);
  }
  else
  {
    LODWORD(dword_1402FDEF0) = v15;
  }
  if ( (v15 & 0x4000000) != 0 )
  {
    *(_BYTE *)(a1 + 11568) |= 1u;
    if ( (v15 & 0x8000000) != 0 )
      *(_BYTE *)(a1 + 11568) |= 2u;
    if ( (v2 & 4) != 0 )
      *(_BYTE *)(a1 + 11568) |= 8u;
    if ( (v2 & 8) != 0 )
      *(_BYTE *)(a1 + 11568) |= 0x10u;
  }
  else if ( (KiFeatureSettings & 0xC) != 0 )
  {
    *(_BYTE *)(a1 + 11568) |= 0x19u;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (v2 & 0x10) != 0 )
      goto LABEL_23;
  }
  else if ( (v2 & 0x10) == 0 )
  {
    goto LABEL_23;
  }
  *(_BYTE *)(a1 + 11568) |= 4u;
LABEL_23:
  v16 = *(_BYTE *)(a1 + 11568);
  if ( (v16 & 1) != 0 && (v16 & 8) == 0 )
    __writemsr(0x48u, ((v16 & 2) != 0) + 1);
}
