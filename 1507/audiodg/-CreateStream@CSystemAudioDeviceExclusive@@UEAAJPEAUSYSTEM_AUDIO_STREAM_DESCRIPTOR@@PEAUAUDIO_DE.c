/*
 * XREFs of ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002B000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::CreateStream(
        CSystemAudioDeviceExclusive *this,
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
  unsigned __int64 v12; // r12
  GUID v13; // xmm0
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+48h] [rbp-30h]
  __int64 v16; // [rsp+88h] [rbp+10h] BYREF

  v5 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    if ( a3 || *(_DWORD *)a2 > 2u )
    {
      v8 = -2147024809;
      goto LABEL_36;
    }
    if ( *(_DWORD *)a2 == 2 || *((_DWORD *)a2 + 31) )
    {
      v8 = -2147024809;
LABEL_35:
      if ( v8 >= 0 )
        goto LABEL_40;
      goto LABEL_36;
    }
    lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
    v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 28))(
           *((_QWORD *)this + 28),
           &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
           &v16);
    if ( v8 < 0 || (v8 = CoImpersonateClient(), v8 < 0) )
    {
LABEL_33:
      LeaveCriticalSection(lpCriticalSection);
      v5 = v16;
      goto LABEL_35;
    }
    v9 = OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
    CoRevertToSelf();
    if ( !v9 )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      goto LABEL_33;
    }
    v11 = *((_QWORD *)a2 + 5);
    if ( (*((_DWORD *)this + 54) & 0x40000) != 0 )
    {
      if ( !v11 )
      {
LABEL_15:
        v8 = -2005139379;
        goto LABEL_31;
      }
      if ( v11 >= *((_QWORD *)this + 43) && v11 <= 50000000 )
      {
        v12 = *((_QWORD *)a2 + 4);
        if ( v11 != v12 )
        {
          v8 = -2005139371;
          goto LABEL_31;
        }
LABEL_26:
        v8 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64, unsigned __int64, _DWORD, char *, char *))(*(_QWORD *)v16 + 48LL))(
               v16,
               v9,
               v11,
               v12,
               *((_DWORD *)this + 88),
               (char *)a5 + 16,
               (char *)a5 + 24);
        if ( v8 >= 0 )
        {
          if ( *(_DWORD *)a2 )
            v13 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
          else
            v13 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
          *(GUID *)a5 = v13;
          goto LABEL_33;
        }
LABEL_31:
        if ( v9 != (HANDLE)-1LL )
          CloseHandle(v9);
        goto LABEL_33;
      }
LABEL_20:
      v8 = -2005139386;
      goto LABEL_31;
    }
    if ( v11 )
    {
      if ( v11 < *((_QWORD *)this + 43) || v11 > 50000000 )
        goto LABEL_20;
    }
    else
    {
      v11 = *((_QWORD *)this + 42);
    }
    v12 = *((_QWORD *)a2 + 4);
    if ( v12 > 0x2FAF080 )
      goto LABEL_15;
    goto LABEL_26;
  }
  v8 = -2147467261;
LABEL_36:
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xDu,
      (__int64)&WPP_d3b4cdd49e8fc862a9bb16878894ce0c_Traceguids,
      v8,
      (__int64)"CSystemAudioDeviceExclusive::CreateStream");
    v5 = v16;
  }
LABEL_40:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v8;
}
