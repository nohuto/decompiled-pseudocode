/*
 * XREFs of ?SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z @ 0x1400169F0
 * Callers:
 *     ?SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z @ 0x140016A60 (-SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z.c)
 * Callees:
 *     ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x140016D30 (-RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConst.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualProtectedOutput::SetPolicy(CVirtualProtectedOutput *this, enum EAudioConstriction a2)
{
  __int64 (__fastcall *v4)(CProtectedOutputController *__hidden, struct CVirtualProtectedOutput *, enum EAudioConstriction); // rbp
  int v5; // eax
  unsigned int v6; // ebx

  v4 = *(__int64 (__fastcall **)(CProtectedOutputController *__hidden, struct CVirtualProtectedOutput *, enum EAudioConstriction))(**((_QWORD **)this + 1) + 48LL);
  if ( v4 == CProtectedOutputController::RequestPolicyChange )
    v5 = CProtectedOutputController::RequestPolicyChange(*((CProtectedOutputController **)this + 1), this, a2);
  else
    v5 = v4(*((CProtectedOutputController **)this + 1), this, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        14LL,
        &WPP_6577effb2eb0b4bf7989f7c48aedbf30_Traceguids,
        (unsigned int)v5);
    }
  }
  else
  {
    *((_DWORD *)this + 5) = a2;
  }
  return v6;
}
