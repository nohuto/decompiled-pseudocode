/*
 * XREFs of ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x18003BB84
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003BDB0 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18003B748 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 */

__int64 __fastcall CAnimationClock::Initialize(union _LARGE_INTEGER *this, struct _GUID *a2, DWORD a3)
{
  LONGLONG v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int128 v9; // xmm0
  union _LARGE_INTEGER *v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = this + 3;
  EnterCriticalSection((LPCRITICAL_SECTION)&this[3]);
  v6 = this[14].QuadPart - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v6 )
    v6 = this[15].QuadPart - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    v7 = -2147023649;
  }
  else
  {
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( v8 && a3 - 10001 > 0xFFFFD8ED )
    {
      v9 = (__int128)*a2;
      this[16].LowPart = a3;
      *(_OWORD *)&this[14].LowPart = v9;
      v7 = CAnimationClock::_SetState(this, 1LL);
    }
    else
    {
      v7 = -2147024809;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&v11);
  return v7;
}
