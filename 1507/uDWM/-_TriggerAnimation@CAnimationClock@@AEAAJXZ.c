/*
 * XREFs of ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000AC7C
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18000AB14 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?DuplicateSharedResourceOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAXPEAI@Z @ 0x180009700 (-DuplicateSharedResourceOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAXPEAI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800159F4 (-WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationClock::_TriggerAnimation(CAnimationClock *this)
{
  int v1; // ebx
  __int64 v4; // rax
  unsigned int v5; // [rsp+20h] [rbp-38h] BYREF
  CResource *v6; // [rsp+28h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-20h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 23)
                                                             + 224LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
           *((_QWORD *)this + 13),
           &hObject);
    if ( v1 >= 0 )
    {
      v1 = DuplicateSharedResourceOnChannel(
             *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
             0x53u,
             (__int64)hObject,
             &v5);
      if ( v1 >= 0 )
      {
        v1 = CResource::WrapExistingResource(
               *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
               v5,
               &v6);
        if ( v1 >= 0 )
        {
          v4 = *((_QWORD *)this + 11);
          v8[0] = _mm_load_si128(&_xmm).m128i_u64[0];
          v8[1] = v4;
          v1 = CResource::Send(v6, v8, 0x10u);
          CBaseObject::Release(v6);
        }
        MilResource_ReleaseOnChannel(
          *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v5,
          0LL);
      }
      CloseHandle(hObject);
    }
  }
  return (unsigned int)v1;
}
