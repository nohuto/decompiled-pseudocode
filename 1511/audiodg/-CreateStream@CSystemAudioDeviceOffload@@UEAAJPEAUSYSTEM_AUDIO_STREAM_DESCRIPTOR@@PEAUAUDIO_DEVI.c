/*
 * XREFs of ?CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002D670
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x14002A548 (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::CreateStream(
        CSystemAudioDeviceOffload *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  __int64 v5; // rbx
  int v8; // esi
  HANDLE v9; // rbx
  signed int LastError; // eax
  __int64 v11; // r14
  struct SYSTEM_AUDIO_STREAM *v12; // r12
  GUID v13; // xmm0
  unsigned __int64 v15; // [rsp+48h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+50h] [rbp-48h]
  __int64 v17; // [rsp+A8h] [rbp+10h] BYREF
  struct IAudioGraphCallback *v18; // [rsp+B8h] [rbp+20h]

  v18 = a4;
  v5 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    if ( a3 || *(_DWORD *)a2 || *((_DWORD *)a2 + 33) )
    {
      v8 = -2147024809;
      goto LABEL_34;
    }
    lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
    v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 28))(
           *((_QWORD *)this + 28),
           &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
           &v17);
    if ( v8 < 0 || (v8 = CoImpersonateClient(), v8 < 0) )
    {
LABEL_33:
      LeaveCriticalSection(lpCriticalSection);
      v5 = v17;
      if ( v8 >= 0 )
        goto LABEL_38;
      goto LABEL_34;
    }
    v9 = OpenProcess(0x40u, 0, *((_DWORD *)a2 + 4));
    CoRevertToSelf();
    if ( !v9 )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      goto LABEL_33;
    }
    v11 = *((_QWORD *)a2 + 6);
    if ( (*((_DWORD *)this + 54) & 0x40000) != 0 )
    {
      if ( !v11 )
      {
LABEL_14:
        v8 = -2005139379;
        goto LABEL_31;
      }
      if ( v11 >= *((_QWORD *)this + 46) && v11 <= 6000000000LL )
      {
        v15 = *((_QWORD *)a2 + 5);
        if ( v11 != v15 )
        {
          v8 = -2005139371;
          goto LABEL_31;
        }
LABEL_25:
        v12 = a5;
        v8 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64, unsigned __int64, _DWORD, char *, char *))(*(_QWORD *)v17 + 48LL))(
               v17,
               v9,
               v11,
               v15,
               *((_DWORD *)this + 94),
               (char *)a5 + 16,
               (char *)a5 + 24);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, CSystemAudioDeviceOffload *))(*(_QWORD *)v18 + 32LL))(
                 v18,
                 this);
          if ( v8 >= 0 )
          {
            if ( *(_DWORD *)a2 )
              v13 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
            else
              v13 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
            *(GUID *)v12 = v13;
            *((_DWORD *)v12 + 18) = 1;
            goto LABEL_33;
          }
        }
        goto LABEL_31;
      }
LABEL_19:
      v8 = -2005139386;
LABEL_31:
      if ( v9 != (HANDLE)-1LL )
        CloseHandle(v9);
      goto LABEL_33;
    }
    if ( v11 )
    {
      if ( v11 < *((_QWORD *)this + 46) || v11 > 6000000000LL )
        goto LABEL_19;
    }
    else
    {
      v11 = *((_QWORD *)this + 45);
    }
    v15 = *((_QWORD *)a2 + 5);
    if ( v15 > 0x165A0BC00LL )
      goto LABEL_14;
    goto LABEL_25;
  }
  v8 = -2147467261;
LABEL_34:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_Ds(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_0c9f4c97d2e4db079a99cda1b29d38b3_Traceguids,
      v8,
      (__int64)"CSystemAudioDeviceOffload::CreateStream");
    v5 = v17;
  }
LABEL_38:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v8;
}
