/*
 * XREFs of ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02DADF0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C02DA71C (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C02DC248 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 */

void __fastcall QueryGlyphAttrsRequest::CaptureUsermodeParameters(QueryGlyphAttrsRequest *this, struct _FONTOBJ **a2)
{
  struct _FONTOBJ *v4; // rdx
  struct _FONTOBJ *v5; // rdi
  unsigned __int64 iUniq; // rsi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ecx

  v4 = *a2;
  v5 = a2[2];
  if ( v4 == *((struct _FONTOBJ **)this + 6) )
  {
    if ( FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 3), v4) )
    {
      if ( v5 )
      {
        Win32ProbeForRead(v5, 0x10uLL, 8u);
        iUniq = v5->iUniq;
        if ( (unsigned int)iUniq >= 0x10 )
        {
          Win32ProbeForRead(v5, iUniq, 8u);
          v7 = EngAllocMem(0, iUniq, 0x74614446u);
          v8 = v7;
          if ( v7 )
          {
            memmove(v7, v5, iUniq);
            *v8 = iUniq;
            v9 = v8[1];
            if ( v9 + 7 >= v9 && (v10 = ((v9 + 7) >> 3) + 12, v10 >= 0xC) && v10 == (_DWORD)iUniq )
              *((_QWORD *)this + 5) = v8;
            else
              EngFreeMem(v8);
          }
        }
      }
    }
  }
}
