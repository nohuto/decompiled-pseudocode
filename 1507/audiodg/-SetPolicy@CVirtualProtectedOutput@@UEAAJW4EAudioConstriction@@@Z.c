/*
 * XREFs of ?SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z @ 0x140031370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualProtectedOutput::SetPolicy(CVirtualProtectedOutput *this, unsigned int a2)
{
  int v4; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, CVirtualProtectedOutput *, _QWORD))(**((_QWORD **)this + 1) + 48LL))(
         *((_QWORD *)this + 1),
         this,
         a2);
  if ( v4 < 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xEu,
        (__int64)&WPP_6577effb2eb0b4bf7989f7c48aedbf30_Traceguids,
        v4);
    }
  }
  else
  {
    *((_DWORD *)this + 5) = a2;
  }
  return (unsigned int)v4;
}
