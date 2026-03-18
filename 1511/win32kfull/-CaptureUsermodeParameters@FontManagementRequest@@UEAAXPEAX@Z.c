/*
 * XREFs of ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1C02D76D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C02D764C (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 */

void __fastcall FontManagementRequest::CaptureUsermodeParameters(FontManagementRequest *this, _QWORD *a2)
{
  const void *v4; // rsi
  struct _FONTOBJ *v5; // rax
  struct _FONTOBJ *v6; // rcx
  void *v7; // rcx

  v4 = (const void *)a2[5];
  v5 = (struct _FONTOBJ *)a2[1];
  if ( a2[3] == *((_QWORD *)this + 11) && v4 == *((const void **)this + 12) )
  {
    v6 = (struct _FONTOBJ *)*((_QWORD *)this + 4);
    if ( v6 )
    {
      if ( v5 != *((struct _FONTOBJ **)this + 10) || !FontDriverDdiRequest::CaptureUsermodeFontObj(v6, v5) )
        return;
    }
    else if ( v5 )
    {
      return;
    }
    v7 = (void *)*((_QWORD *)this + 8);
    if ( v7 )
      memmove(v7, v4, *((unsigned int *)this + 14));
    *((_DWORD *)this + 18) = *((_DWORD *)a2 + 12);
  }
}
