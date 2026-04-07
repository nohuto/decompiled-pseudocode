/*
 * XREFs of ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x180013FB0
 * Callers:
 *     ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x180013F50 (--_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18001D228 (--1CResource@@MEAA@XZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

void __fastcall CCachedVisualImageBrushResource::~CCachedVisualImageBrushResource(
        CCachedVisualImageBrushResource *this)
{
  int v2; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v3[124]; // [rsp+24h] [rbp-94h] BYREF

  v2 = 257;
  *(_QWORD *)this = &CCachedVisualImageBrushResource::`vftable';
  memset_0(v3, 0, 0x70uLL);
  CResource::Send(this, &v2, 0x74u);
  CResource::~CResource(this);
}
