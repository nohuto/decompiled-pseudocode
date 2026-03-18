/*
 * XREFs of ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1C02DA920
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C02DA71C (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 */

void __fastcall QueryAdvanceWidthsRequest::CaptureUsermodeParameters(QueryAdvanceWidthsRequest *this, _QWORD *a2)
{
  struct _FONTOBJ *v3; // rax
  __int64 v4; // rsi
  const void *v5; // r14
  int v6; // edi
  char v7; // al
  int v8; // ecx
  const void *v9; // rdx

  v3 = (struct _FONTOBJ *)a2[1];
  v4 = a2[3];
  v5 = (const void *)a2[4];
  v6 = *((_DWORD *)a2 + 11);
  if ( v3 == *((struct _FONTOBJ **)this + 9) )
  {
    v7 = FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 4), v3);
    v8 = 0;
    if ( v7 )
    {
      LOBYTE(v8) = *((_DWORD *)this + 10) != 1;
      if ( v6 != v8 - 1 && v4 == *((_QWORD *)this + 10) )
      {
        v9 = (const void *)*((_QWORD *)this + 11);
        if ( v5 == v9 )
        {
          memmove(*((void **)this + 7), v9, 2LL * *((unsigned int *)this + 16));
          *((_DWORD *)this + 17) = v6;
        }
      }
    }
  }
}
