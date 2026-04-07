/*
 * XREFs of ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800402A0
 * Callers:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourceProperty@@@Z @ 0x1800134C0 (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourcePro.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::_EnsureResources(CAnimationResource *this)
{
  unsigned int v1; // ebx
  CBaseObject **v2; // rsi
  int v4; // eax
  __int64 v5; // r8
  int v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // eax

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) )
    return v1;
  v4 = CResource::Create(0, *((_QWORD *)this + 1), (_QWORD *)this + 2);
  v1 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x136u);
  }
  else if ( *((_BYTE *)this + 81) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 808LL))(
           *((_QWORD *)*v2 + 2),
           *((unsigned int *)*v2 + 6),
           *((_QWORD *)this + 9),
           0LL);
    v1 = v9;
    if ( v9 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x13Du);
  }
  else
  {
    v5 = *((_QWORD *)this + 12);
    if ( !v5
      || (v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 832LL))(
                 *((_QWORD *)*v2 + 2),
                 *((unsigned int *)*v2 + 6),
                 *(unsigned int *)(v5 + 24)),
          v1 = v6,
          v6 >= 0) )
    {
LABEL_6:
      if ( *((_QWORD *)this + 4)
        && (v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 824LL))(
                    *((_QWORD *)*v2 + 2),
                    *((unsigned int *)*v2 + 6)),
            v1 = v10,
            v10 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x14Au);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 816LL))(
               *((_QWORD *)*v2 + 2),
               *((unsigned int *)*v2 + 6),
               *((_QWORD *)this + 5),
               *((unsigned int *)this + 16));
        v1 = v7;
        if ( v7 >= 0 )
          return v1;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x151u);
      }
      goto LABEL_16;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x143u);
  }
LABEL_16:
  if ( *v2 )
  {
    CBaseObject::Release(*v2);
    *v2 = 0LL;
  }
  return v1;
}
