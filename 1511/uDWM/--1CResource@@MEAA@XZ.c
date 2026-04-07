/*
 * XREFs of ??1CResource@@MEAA@XZ @ 0x18001D228
 * Callers:
 *     ??_ECGaussianBlurEffect@@UEAAPEAXI@Z @ 0x180010EE0 (--_ECGaussianBlurEffect@@UEAAPEAXI@Z.c)
 *     ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x180013FB0 (--1CCachedVisualImageBrushResource@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CResource::~CResource(CResource *this)
{
  unsigned int v1; // edx

  v1 = *((_DWORD *)this + 6);
  *(_QWORD *)this = &CResource::`vftable';
  MilResource_ReleaseOnChannel(*((struct MIL_CHANNEL__ **)this + 2), v1, 0LL);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
