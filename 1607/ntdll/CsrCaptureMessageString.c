/*
 * XREFs of CsrCaptureMessageString @ 0x180075B10
 * Callers:
 *     CsrCaptureMessageMultiUnicodeStringsInPlace @ 0x1800759F0 (CsrCaptureMessageMultiUnicodeStringsInPlace.c)
 * Callees:
 *     CsrAllocateMessagePointer @ 0x180075BD0 (CsrAllocateMessagePointer.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

void __fastcall CsrCaptureMessageString(__int64 a1, const void *a2, int a3, unsigned int a4, unsigned __int16 *a5)
{
  void **v8; // rsi

  if ( !LdrpIsSecureProcess )
  {
    if ( a2 )
    {
      *a5 = a3;
      v8 = (void **)(a5 + 4);
      a5[1] = CsrAllocateMessagePointer(a1, a4, a5 + 4);
      if ( a3 )
        memmove(*v8, a2, a4);
      if ( *a5 < a5[1] )
        *((_BYTE *)*v8 + *a5) = 0;
    }
    else
    {
      *a5 = 0;
      a5[1] = a4;
      CsrAllocateMessagePointer(a1, a4, a5 + 4);
      if ( a4 )
        **((_BYTE **)a5 + 1) = 0;
    }
  }
}
