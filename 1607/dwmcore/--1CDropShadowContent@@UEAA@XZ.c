/*
 * XREFs of ??1CDropShadowContent@@UEAA@XZ @ 0x180160060
 * Callers:
 *     ??_GCDropShadowContent@@UEAAPEAXI@Z @ 0x1801600A0 (--_GCDropShadowContent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CDropShadowContent::~CDropShadowContent(struct CResource **this)
{
  *this = (struct CResource *)&CDropShadowContent::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  this[16] = 0LL;
  CResource::~CResource((CResource *)this);
}
