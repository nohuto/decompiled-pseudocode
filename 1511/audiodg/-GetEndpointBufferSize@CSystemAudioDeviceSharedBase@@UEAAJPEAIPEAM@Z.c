/*
 * XREFs of ?GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z @ 0x14002C030
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetEndpointBufferSize(
        CSystemAudioDeviceSharedBase *this,
        unsigned int *a2,
        float *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD *v8; // rcx
  int v9; // r9d
  unsigned __int16 v10; // dx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 176));
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, float *))(**((_QWORD **)this + 38) + 40LL))(
         *((_QWORD *)this + 38),
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v10 = 19;
      v9 = v6;
      goto LABEL_10;
    }
  }
  else
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v9 = *a2;
      v10 = 18;
LABEL_10:
      WPP_SF_D(v8[2], v10, (__int64)&WPP_c59105ced4022a196d4cc1b91b2ab5a7_Traceguids, v9);
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
