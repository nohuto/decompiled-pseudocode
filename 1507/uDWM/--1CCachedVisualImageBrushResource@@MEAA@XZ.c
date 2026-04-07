/*
 * XREFs of ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x180012430
 * Callers:
 *     ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x1800123D0 (--_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180017980 (--1CResource@@MEAA@XZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

void __fastcall CCachedVisualImageBrushResource::~CCachedVisualImageBrushResource(
        CCachedVisualImageBrushResource *this)
{
  int v2; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v3[124]; // [rsp+24h] [rbp-94h] BYREF

  v2 = 250;
  *(_QWORD *)this = &CCachedVisualImageBrushResource::`vftable';
  memset_0(v3, 0, 0x70uLL);
  CResource::Send(this, &v2, 0x74u);
  CResource::~CResource(this);
}
