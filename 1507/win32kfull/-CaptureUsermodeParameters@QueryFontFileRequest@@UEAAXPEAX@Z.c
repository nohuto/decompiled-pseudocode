/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z @ 0x1C02D6730
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

void __fastcall QueryFontFileRequest::CaptureUsermodeParameters(QueryFontFileRequest *this, int *a2)
{
  const void *v3; // r9
  size_t v4; // rbx
  int v5; // ecx
  void *v6; // rcx

  v3 = (const void *)*((_QWORD *)a2 + 2);
  v4 = a2[6];
  if ( (v4 & 0x80000000) == 0LL && v3 == *((const void **)this + 7) )
  {
    v5 = *((_DWORD *)this + 8) - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
    }
    else
    {
      if ( (v4 & 1) != 0 )
        return;
      v6 = (void *)*((_QWORD *)this + 5);
      if ( v6 )
      {
        if ( (unsigned int)v4 > *((_DWORD *)this + 9) )
          return;
        if ( (int)v4 > 0 )
        {
          memmove(v6, v3, v4);
          *(_WORD *)(*((_QWORD *)this + 5) + 2 * (v4 >> 1) - 2) = 0;
        }
      }
    }
    *((_DWORD *)this + 12) = v4;
  }
}
