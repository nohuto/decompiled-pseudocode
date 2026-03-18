/*
 * XREFs of ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1C02D7840
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C02D764C (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 */

void __fastcall QueryAdvanceWidthsRequest::CaptureUsermodeParameters(QueryAdvanceWidthsRequest *this, _QWORD *a2)
{
  struct _FONTOBJ *v3; // rcx
  int v4; // edi

  v3 = (struct _FONTOBJ *)a2[1];
  v4 = *((_DWORD *)a2 + 11);
  if ( v4 != (*((_DWORD *)this + 10) != 1) - 1
    && v3 == *((struct _FONTOBJ **)this + 9)
    && a2[3] == *((_QWORD *)this + 10)
    && a2[4] == *((_QWORD *)this + 11) )
  {
    if ( FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 4), v3) )
    {
      memmove(*((void **)this + 7), *((const void **)this + 11), 2LL * *((unsigned int *)this + 16));
      *((_DWORD *)this + 17) = v4;
    }
  }
}
