/*
 * XREFs of ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180022280
 * Callers:
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x180022E44 (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 * Callees:
 *     ?IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180022D00 (-IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?HasLazyRequest@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180023330 (-HasLazyRequest@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180023350 (-IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z @ 0x180075BBC (-UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupConnected(CSaDeviceProxy *this, struct IStreamGroupProxy *a2)
{
  bool (__fastcall *v4)(CBaseStreamGroupProxy *__hidden); // rax
  bool IsFormatSensitive; // al
  int v6; // ebp
  bool (__fastcall *v7)(CBaseStreamGroupProxy *__hidden); // rax
  bool IsPeriodicitySensitive; // al
  bool (__fastcall *v9)(CBaseStreamGroupProxy *__hidden); // rax
  bool HasLazyRequest; // al
  BOOL v11; // edi
  BOOL v12; // ebx

  v4 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)a2 + 216LL);
  if ( v4 == CBaseStreamGroupProxy::IsFormatSensitive )
    IsFormatSensitive = CBaseStreamGroupProxy::IsFormatSensitive(a2);
  else
    IsFormatSensitive = v4(a2);
  v6 = 0;
  if ( IsFormatSensitive
    || ((v7 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)a2 + 208LL),
         v7 != CBaseStreamGroupProxy::IsPeriodicitySensitive)
      ? (IsPeriodicitySensitive = v7(a2))
      : (IsPeriodicitySensitive = CBaseStreamGroupProxy::IsPeriodicitySensitive(a2)),
        IsPeriodicitySensitive
     || ((v9 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)a2 + 224LL),
          v9 != CBaseStreamGroupProxy::HasLazyRequest)
       ? (HasLazyRequest = v9(a2))
       : (HasLazyRequest = CBaseStreamGroupProxy::HasLazyRequest(a2)),
         HasLazyRequest)) )
  {
    v11 = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 224LL))(a2) != 0;
    v12 = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 208LL))(a2) != 0;
    LOBYTE(v6) = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 216LL))(a2) != 0;
    CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity((CSaDeviceProxy *)((char *)this - 8), v6, v12, v11);
  }
  ++*((_DWORD *)this + 20);
}
