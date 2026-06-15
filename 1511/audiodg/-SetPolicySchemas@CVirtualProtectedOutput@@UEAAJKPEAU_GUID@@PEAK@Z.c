/*
 * XREFs of ?SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z @ 0x140016A60
 * Callers:
 *     AudioDGSetStreamVpoPolicySchemas @ 0x140017110 (AudioDGSetStreamVpoPolicySchemas.c)
 * Callees:
 *     ?SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z @ 0x1400169F0 (-SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualProtectedOutput::SetPolicySchemas(
        CVirtualProtectedOutput *this,
        unsigned int a2,
        struct _GUID *a3,
        unsigned int *a4)
{
  enum EAudioConstriction v4; // edi
  int v5; // ebx
  __int64 v6; // r10
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(CVirtualProtectedOutput *, enum EAudioConstriction); // rbx
  int v12; // eax
  struct _GUID v14; // [rsp+20h] [rbp-28h]

  v4 = eAudioConstrictionOff;
  v5 = 0;
  v6 = 0LL;
  while ( (unsigned int)v6 < a2 )
  {
    v8 = a4[v6];
    v14 = a3[(unsigned int)v6];
    v9 = *(_QWORD *)&MFPROTECTION_DISABLE.Data1 - *(_QWORD *)&v14.Data1;
    if ( *(_QWORD *)&MFPROTECTION_DISABLE.Data1 == *(_QWORD *)&v14.Data1 )
      v9 = *(_QWORD *)MFPROTECTION_DISABLE.Data4 - *(_QWORD *)v14.Data4;
    if ( v9 )
    {
      v10 = *(_QWORD *)&MFPROTECTION_CONSTRICTAUDIO.Data1 - *(_QWORD *)&v14.Data1;
      if ( *(_QWORD *)&MFPROTECTION_CONSTRICTAUDIO.Data1 == *(_QWORD *)&v14.Data1 )
        v10 = *(_QWORD *)MFPROTECTION_CONSTRICTAUDIO.Data4 - *(_QWORD *)v14.Data4;
      if ( v10 )
      {
        v5 = -2147467263;
      }
      else
      {
        if ( (v8 & 0xFFFFFF00) != 0 )
          goto LABEL_23;
        if ( v4 <= (unsigned __int8)v8 )
          v4 = (unsigned __int8)v8;
      }
    }
    else
    {
      if ( (v8 & 0xFFFFFFFE) != 0 )
      {
LABEL_23:
        v5 = -2147024809;
LABEL_24:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            13LL,
            &WPP_6577effb2eb0b4bf7989f7c48aedbf30_Traceguids,
            (unsigned int)v5);
        }
        return (unsigned int)v5;
      }
      if ( (v8 & 1) != 0 && v4 <= eAudioConstrictionMute )
        v4 = eAudioConstrictionMute;
    }
    v6 = (unsigned int)(v6 + 1);
    if ( v5 < 0 )
      break;
  }
  if ( v5 < 0 )
    goto LABEL_24;
  v11 = *(__int64 (__fastcall **)(CVirtualProtectedOutput *, enum EAudioConstriction))(*(_QWORD *)this + 40LL);
  v12 = v11 == CVirtualProtectedOutput::SetPolicy
      ? CVirtualProtectedOutput::SetPolicy(this, v4)
      : ((__int64 (__fastcall *)(CVirtualProtectedOutput *, _QWORD, struct _GUID *, unsigned int *))v11)(
          this,
          (unsigned int)v4,
          a3,
          a4);
  v5 = v12;
  if ( v12 < 0 )
    goto LABEL_24;
  return (unsigned int)v5;
}
