/*
 * XREFs of ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z @ 0x1800129DC
 * Callers:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18001EFBC (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CClientArea::SetMaximizedClipMargins(CResource **this, const struct _MARGINS *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _DWORD v5[6]; // [rsp+30h] [rbp-28h] BYREF

  v5[0] = 82;
  memset(&v5[1], 0, 20);
  if ( a2 )
    *(struct _MARGINS *)&v5[2] = *a2;
  v2 = CResource::Send(this[2], v5, 0x18u);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0xBBu);
  return v3;
}
