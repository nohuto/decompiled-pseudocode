/*
 * XREFs of ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x1800221C0
 * Callers:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180022D10 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 * Callees:
 *     ?IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180022D00 (-IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?HasLazyRequest@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180023330 (-HasLazyRequest@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180023350 (-IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z @ 0x180075BBC (-UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupDisconnected(CSaDeviceProxy *this, struct IStreamGroupProxy *a2)
{
  bool (__fastcall *v4)(CBaseStreamGroupProxy *__hidden); // rax
  bool IsFormatSensitive; // al
  bool (__fastcall *v6)(CBaseStreamGroupProxy *__hidden); // rax
  bool IsPeriodicitySensitive; // al
  bool (__fastcall *v8)(CBaseStreamGroupProxy *__hidden); // rax
  bool HasLazyRequest; // al
  int v10; // edi
  int v11; // ebx
  char v12; // al

  v4 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)a2 + 216LL);
  if ( v4 == CBaseStreamGroupProxy::IsFormatSensitive )
    IsFormatSensitive = CBaseStreamGroupProxy::IsFormatSensitive(a2);
  else
    IsFormatSensitive = v4(a2);
  if ( IsFormatSensitive
    || ((v6 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)a2 + 208LL),
         v6 != CBaseStreamGroupProxy::IsPeriodicitySensitive)
      ? (IsPeriodicitySensitive = v6(a2))
      : (IsPeriodicitySensitive = CBaseStreamGroupProxy::IsPeriodicitySensitive(a2)),
        IsPeriodicitySensitive
     || ((v8 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)a2 + 224LL),
          v8 != CBaseStreamGroupProxy::HasLazyRequest)
       ? (HasLazyRequest = v8(a2))
       : (HasLazyRequest = CBaseStreamGroupProxy::HasLazyRequest(a2)),
         HasLazyRequest)) )
  {
    v10 = -((*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 224LL))(a2) != 0);
    v11 = -((*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 208LL))(a2) != 0);
    v12 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 216LL))(a2);
    CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity((CSaDeviceProxy *)((char *)this - 8), -(v12 != 0), v11, v10);
  }
  --*((_DWORD *)this + 20);
}
