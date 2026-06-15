/*
 * XREFs of ?CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400019F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
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
  __int64 v10; // r14
  unsigned __int64 v11; // r12
  GUID v12; // xmm0
  signed int LastError; // eax
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+98h] [rbp+10h] BYREF
  struct IAudioGraphCallback *v17; // [rsp+A8h] [rbp+20h]

  v17 = a4;
  v5 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    if ( !a3 && !*(_DWORD *)a2 && !*((_DWORD *)a2 + 31) )
    {
      lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
      v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 28))(
             *((_QWORD *)this + 28),
             &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
             &v16);
      if ( v8 < 0 )
        goto LABEL_18;
      v8 = CoImpersonateClient();
      if ( v8 < 0 )
        goto LABEL_18;
      v9 = OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
      CoRevertToSelf();
      if ( !v9 )
      {
        LastError = GetLastError();
        v8 = LastError;
        if ( LastError > 0 )
          v8 = (unsigned __int16)LastError | 0x80070000;
LABEL_18:
        LeaveCriticalSection(lpCriticalSection);
        v5 = v16;
        if ( v8 >= 0 )
          goto LABEL_19;
        goto LABEL_25;
      }
      v10 = *((_QWORD *)a2 + 5);
      if ( (*((_DWORD *)this + 54) & 0x40000) != 0 )
      {
        if ( v10 )
        {
          if ( v10 >= *((_QWORD *)this + 46) && v10 <= 6000000000LL )
          {
            v11 = *((_QWORD *)a2 + 4);
            if ( v10 == v11 )
            {
LABEL_13:
              v8 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64, unsigned __int64, _DWORD, char *, char *))(*(_QWORD *)v16 + 48LL))(
                     v16,
                     v9,
                     v10,
                     v11,
                     *((_DWORD *)this + 94),
                     (char *)a5 + 16,
                     (char *)a5 + 24);
              if ( v8 >= 0 )
              {
                v8 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, CSystemAudioDeviceOffload *))(*(_QWORD *)v17 + 32LL))(
                       v17,
                       this);
                if ( v8 >= 0 )
                {
                  if ( *(_DWORD *)a2 )
                    v12 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
                  else
                    v12 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
                  *(GUID *)a5 = v12;
                  goto LABEL_18;
                }
              }
              goto LABEL_33;
            }
            v8 = -2005139371;
LABEL_33:
            if ( v9 != (HANDLE)-1LL )
              CloseHandle(v9);
            goto LABEL_18;
          }
LABEL_36:
          v8 = -2005139386;
          goto LABEL_33;
        }
      }
      else
      {
        if ( v10 )
        {
          if ( v10 < *((_QWORD *)this + 46) || v10 > 6000000000LL )
            goto LABEL_36;
        }
        else
        {
          v10 = *((_QWORD *)this + 45);
        }
        v11 = *((_QWORD *)a2 + 4);
        if ( v11 <= 0x165A0BC00LL )
          goto LABEL_13;
      }
      v8 = -2005139379;
      goto LABEL_33;
    }
    v8 = -2147024809;
  }
  else
  {
    v8 = -2147467261;
  }
LABEL_25:
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      13,
      (unsigned int)&WPP_defc16d433e2f54121a67667cf2bcce9_Traceguids,
      v8,
      (__int64)"CSystemAudioDeviceOffload::CreateStream");
    v5 = v16;
  }
LABEL_19:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v8;
}
