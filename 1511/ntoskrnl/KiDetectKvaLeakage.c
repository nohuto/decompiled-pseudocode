/*
 * XREFs of KiDetectKvaLeakage @ 0x1403B17B8
 * Callers:
 *     KiSetFeatureBits @ 0x1403A7FB8 (KiSetFeatureBits.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall KiDetectKvaLeakage(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rcx
  unsigned __int64 v14; // rax

  if ( *(_BYTE *)(a1 + 1597) == 2 )
  {
    LOBYTE(v1) = *(_BYTE *)(a1 + 1523);
    if ( *(_BYTE *)(a1 + 1520) != 6 || (unsigned __int8)v1 > 0x36u || (v3 = 0x6000C010000000LL, !_bittest64(&v3, v1)) )
    {
      _RAX = 0LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX < 7 )
        goto LABEL_15;
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RDX & 0x20000000) == 0 || (v14 = __readmsr(0x10Au), (v14 & 1) == 0) )
      {
LABEL_15:
        if ( *(_DWORD *)(a1 + 36) )
        {
          if ( !KiKvaLeakage )
            KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
        }
        KiKvaLeakage = 1;
      }
    }
  }
}
