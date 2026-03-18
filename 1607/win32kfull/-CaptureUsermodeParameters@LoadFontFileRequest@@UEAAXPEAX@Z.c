/*
 * XREFs of ?CaptureUsermodeParameters@LoadFontFileRequest@@UEAAXPEAX@Z @ 0x1C02DA8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LoadFontFileRequest::CaptureUsermodeParameters(LoadFontFileRequest *this, _DWORD *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax

  *((_DWORD *)this + 56) = a2[25];
  v3 = *((_QWORD *)a2 + 13);
  *((_QWORD *)this + 27) = v3;
  if ( v3 && *((_DWORD *)this + 56) <= 3u )
  {
    v4 = EngAllocMem(0, 0x10u, 0x46464855u);
    *((_QWORD *)this + 29) = v4;
    if ( v4 )
    {
      *v4 = *((_QWORD *)this + 27);
      *(_DWORD *)(*((_QWORD *)this + 29) + 8LL) = *((_DWORD *)this + 56);
      *(_BYTE *)(*((_QWORD *)this + 29) + 12LL) = 0;
    }
  }
}
