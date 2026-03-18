/*
 * XREFs of ??1CDropShadow@@UEAA@XZ @ 0x18014ED34
 * Callers:
 *     ??_GCDropShadow@@UEAAPEAXI@Z @ 0x18014EE70 (--_GCDropShadow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CVisualTree@@UEAAKXZ @ 0x180038B80 (-Release@CVisualTree@@UEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ @ 0x18014FB20 (-ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ.c)
 */

void __fastcall CDropShadow::~CDropShadow(struct CResource **this)
{
  struct CResource *v2; // rcx
  volatile signed __int32 *v3; // rcx
  struct CResource *v4; // rcx
  CVisualTree *v5; // rcx
  struct CResource *v6; // rcx

  *this = (struct CResource *)&CDropShadow::`vftable';
  CDropShadow::ReleaseFastShadowIfInUse((CDropShadow *)this);
  v2 = this[25];
  if ( v2 )
  {
    v3 = (volatile signed __int32 *)((char *)v2 + 16);
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      --*((_DWORD *)v3 + 2);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
    }
    this[25] = 0LL;
  }
  v4 = this[26];
  if ( v4 )
  {
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v4 + 16LL))(v4);
    this[26] = 0LL;
  }
  v5 = this[27];
  if ( v5 )
  {
    CVisualTree::Release(v5);
    this[27] = 0LL;
  }
  v6 = this[28];
  if ( v6 )
  {
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v6 + 16LL))(v6);
    this[28] = 0LL;
  }
  CResource::UnRegisterNotifierInternal((CResource *)this, this[24]);
  this[24] = 0LL;
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
