/*
 * XREFs of ?CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002C090
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140013390 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Ds @ 0x140029210 (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::CreateStream(
        CSystemAudioDeviceOffload *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  HRESULT v8; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // r12
  char *v10; // r14
  __int64 v11; // r8
  struct SYSTEM_AUDIO_STREAM *v12; // rbp
  struct IUnknown *v13; // rcx
  GUID v14; // xmm0
  struct IUnknown *v16; // [rsp+40h] [rbp-38h] BYREF
  struct IUnknown *v17; // [rsp+88h] [rbp+10h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  if ( !a2 )
  {
    v8 = -2147467261;
    goto LABEL_34;
  }
  if ( !a3 && !*(_DWORD *)a2 && !*((_DWORD *)a2 + 31) )
  {
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
    v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 28))(
           *((_QWORD *)this + 28),
           &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
           &v16);
    if ( v8 < 0 )
      goto LABEL_33;
    v8 = CoImpersonateClient();
    if ( v8 < 0 )
      goto LABEL_33;
    v10 = (char *)OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
    CoRevertToSelf();
    v11 = *((_QWORD *)a2 + 5);
    if ( (*((_DWORD *)this + 54) & 0x40000) != 0 )
    {
      if ( !v11 )
      {
LABEL_11:
        v8 = -2005139379;
        goto LABEL_31;
      }
      if ( v11 >= *((_QWORD *)this + 46) && v11 <= 6000000000LL )
      {
        if ( v11 != *((_QWORD *)a2 + 4) )
        {
          v8 = -2005139371;
          goto LABEL_31;
        }
        goto LABEL_20;
      }
    }
    else if ( !v11 || v11 >= *((_QWORD *)this + 46) && v11 <= 6000000000LL )
    {
      if ( *((_QWORD *)a2 + 4) > 0x165A0BC00uLL )
        goto LABEL_11;
LABEL_20:
      v12 = a5;
      v8 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v16->lpVtbl[2].QueryInterface)(v16, v10);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, CSystemAudioDeviceOffload *))(*(_QWORD *)a4 + 32LL))(
               a4,
               this);
        if ( v8 >= 0 )
        {
          v13 = v17;
          if ( v17 != v16 )
          {
            ATL::AtlComQIPtrAssign(&v17, v16, &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63);
            v13 = v17;
          }
          if ( !v13
            || (v8 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v13->lpVtbl[2].Release)(
                       v13,
                       (__int64)v12 + 40),
                v8 >= 0) )
          {
            if ( *(_DWORD *)a2 )
              v14 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
            else
              v14 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
            *(GUID *)v12 = v14;
            *((_DWORD *)v12 + 22) = 1;
            goto LABEL_33;
          }
        }
      }
LABEL_31:
      if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v10);
LABEL_33:
      LeaveCriticalSection(v9);
      if ( v8 >= 0 )
        goto LABEL_39;
      goto LABEL_34;
    }
    v8 = -2005139386;
    goto LABEL_31;
  }
  v8 = -2147024809;
LABEL_34:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_Ds(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_e6e3cf044f7b3ed66ff982009b51436b_Traceguids,
      v8,
      (__int64)"CSystemAudioDeviceOffload::CreateStream");
  }
  AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::CreateStream", 403, v8);
LABEL_39:
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  if ( v16 )
    ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
  return (unsigned int)v8;
}
