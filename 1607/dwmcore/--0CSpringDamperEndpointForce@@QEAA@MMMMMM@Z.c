/*
 * XREFs of ??0CSpringDamperEndpointForce@@QEAA@MMMMMM@Z @ 0x180168C14
 * Callers:
 *     ?CheckInertiaModifiers@CScrollAnimation@@AEAA?AW4InertiaModifierType@@XZ @ 0x18015DB38 (-CheckInertiaModifiers@CScrollAnimation@@AEAA-AW4InertiaModifierType@@XZ.c)
 * Callees:
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

CSpringDamperEndpointForce *__fastcall CSpringDamperEndpointForce::CSpringDamperEndpointForce(
        CSpringDamperEndpointForce *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  int v8; // eax
  CSpringDamperEndpointForce *result; // rax

  memset_0(this, 0, 0x48uLL);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CSpringDamperEndpointForce::`vftable'{for `IAccelerator'};
  *((_QWORD *)this + 1) = &CSpringDamperEndpointForce::`vftable'{for `CMILRefCountBase'};
  *((float *)this + 15) = a2;
  *((float *)this + 16) = a3;
  *((float *)this + 17) = a4;
  *((float *)this + 18) = a7;
  *((float *)this + 11) = a5;
  *((float *)this + 10) = a6 - a7;
  *((_QWORD *)this + 4) = 0LL;
  v8 = *((_DWORD *)this + 11);
  *((_QWORD *)this + 6) = *(_QWORD *)((char *)this + 36);
  *((_DWORD *)this + 14) = v8;
  result = this;
  *((_QWORD *)this + 3) = 0LL;
  return result;
}
