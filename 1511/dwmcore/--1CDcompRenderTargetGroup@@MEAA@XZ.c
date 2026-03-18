/*
 * XREFs of ??1CDcompRenderTargetGroup@@MEAA@XZ @ 0x1800B2B80
 * Callers:
 *     ??_GCDcompRenderTargetGroup@@MEAAPEAXI@Z @ 0x1800B29E0 (--_GCDcompRenderTargetGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800B2B00 (-UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ.c)
 */

void __fastcall CDcompRenderTargetGroup::~CDcompRenderTargetGroup(CDcompRenderTargetGroup *this)
{
  *(_QWORD *)this = &CDcompRenderTargetGroup::`vftable';
  CDcompRenderTargetGroup::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
