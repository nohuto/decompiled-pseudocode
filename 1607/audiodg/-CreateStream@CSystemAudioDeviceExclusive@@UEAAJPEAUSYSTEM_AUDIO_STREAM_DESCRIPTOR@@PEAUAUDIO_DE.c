/*
 * XREFs of ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140029FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140013390 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Ds @ 0x140029210 (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::CreateStream(
        CSystemAudioDeviceExclusive *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  struct IUnknown *v5; // rax
  struct IUnknown *v7; // rcx
  HRESULT v9; // ebx
  char *v10; // r15
  __int64 v11; // r8
  struct SYSTEM_AUDIO_STREAM *v12; // r14
  struct IUnknown *v13; // rcx
  GUID v14; // xmm0
  struct IUnknown *v16; // [rsp+40h] [rbp-10h] BYREF
  struct IUnknown *v17; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !a2 )
  {
    v9 = -2147467261;
    goto LABEL_36;
  }
  if ( !a3 && *(_DWORD *)a2 <= 2u )
  {
    if ( *(_DWORD *)a2 == 2 || *((_DWORD *)a2 + 31) )
    {
      v9 = -2147024809;
LABEL_35:
      if ( v9 >= 0 )
        goto LABEL_41;
      goto LABEL_36;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 28))(
           *((_QWORD *)this + 28),
           &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
           &v17);
    if ( v9 < 0 )
      goto LABEL_33;
    v9 = CoImpersonateClient();
    if ( v9 < 0 )
      goto LABEL_33;
    v10 = (char *)OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
    CoRevertToSelf();
    v11 = *((_QWORD *)a2 + 5);
    if ( (*((_DWORD *)this + 54) & 0x40000) != 0 )
    {
      if ( !v11 )
      {
LABEL_12:
        v9 = -2005139379;
        goto LABEL_31;
      }
      if ( v11 >= *((_QWORD *)this + 43) && v11 <= 50000000 )
      {
        if ( v11 != *((_QWORD *)a2 + 4) )
        {
          v9 = -2005139371;
          goto LABEL_31;
        }
        goto LABEL_21;
      }
    }
    else if ( !v11 || v11 >= *((_QWORD *)this + 43) && v11 <= 50000000 )
    {
      if ( *((_QWORD *)a2 + 4) > 0x2FAF080uLL )
        goto LABEL_12;
LABEL_21:
      v12 = a5;
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v17->lpVtbl[2].QueryInterface)(v17, v10);
      if ( v9 < 0 )
        goto LABEL_31;
      v13 = v16;
      if ( v16 != v17 )
      {
        ATL::AtlComQIPtrAssign(&v16, v17, &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63);
        v13 = v16;
      }
      if ( v13 )
      {
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v13->lpVtbl[2].Release)(v13, (__int64)v12 + 40);
        if ( v9 < 0 )
          goto LABEL_31;
      }
      if ( *(_DWORD *)a2 )
        v14 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
      else
        v14 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
      *(GUID *)v12 = v14;
      *((_DWORD *)v12 + 22) = 1;
LABEL_33:
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
      v7 = v17;
      v5 = v16;
      goto LABEL_35;
    }
    v9 = -2005139386;
LABEL_31:
    if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v10);
    goto LABEL_33;
  }
  v9 = -2147024809;
LABEL_36:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_Ds(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDu,
      (__int64)&WPP_9057bc299ae43b117cc58bcfd1dc47e8_Traceguids,
      v9,
      (__int64)"CSystemAudioDeviceExclusive::CreateStream");
  }
  AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::CreateStream", 383, v9);
  v7 = v17;
  v5 = v16;
LABEL_41:
  if ( v5 )
  {
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
    v7 = v17;
  }
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  return (unsigned int)v9;
}
