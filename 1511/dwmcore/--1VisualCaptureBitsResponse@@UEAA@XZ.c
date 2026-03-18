/*
 * XREFs of ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18010A0E8
 * Callers:
 *     ??_GVisualCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18010A120 (--_GVisualCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VisualCaptureBitsResponse::~VisualCaptureBitsResponse(VisualCaptureBitsResponse *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &VisualCaptureBitsResponse::`vftable';
  v2 = (void *)*((_QWORD *)this + 20);
  if ( v2 )
    CloseHandle(v2);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
