/*
 * XREFs of ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BF30
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180020B70 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180068DB0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001A650 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E7A0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002947C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18006D814 (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDevicePipeFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        int (*a4)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001),
        struct tWAVEFORMATEX **a5)
{
  unsigned int v8; // edx
  __int64 v9; // rax
  int v10; // eax
  BYTE *pData; // rbx
  BYTE *v12; // rsi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  struct tWAVEFORMATEX *v17; // rax
  struct tWAVEFORMATEX *v18; // rdi
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v22; // [rsp+38h] [rbp-A1h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+40h] [rbp-99h] BYREF
  int v24; // [rsp+58h] [rbp-81h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v26[2]; // [rsp+68h] [rbp-71h] BYREF
  __int64 v27; // [rsp+70h] [rbp-69h]
  struct _GUID v28; // [rsp+78h] [rbp-61h]
  __int64 v29; // [rsp+88h] [rbp-51h]
  __int128 v30; // [rsp+90h] [rbp-49h] BYREF
  int v31; // [rsp+A0h] [rbp-39h]
  void *v32; // [rsp+A8h] [rbp-31h] BYREF
  int v33; // [rsp+B0h] [rbp-29h]
  int v34; // [rsp+B4h] [rbp-25h]
  void *v35; // [rsp+B8h] [rbp-21h]
  int v36; // [rsp+C0h] [rbp-19h]
  int v37; // [rsp+C4h] [rbp-15h]
  const char *v38; // [rsp+C8h] [rbp-11h]
  __int64 v39; // [rsp+D0h] [rbp-9h]
  int *v40; // [rsp+D8h] [rbp-1h]
  __int64 v41; // [rsp+E0h] [rbp+7h]
  __int64 *v42; // [rsp+E8h] [rbp+Fh]
  __int64 v43; // [rsp+F0h] [rbp+17h]

  v29 = -2LL;
  LODWORD(v22) = 0;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 448, &lpCriticalSection, a3, a4);
  memset(&pvar, 0, sizeof(pvar));
  *a5 = 0LL;
  v28 = *a3;
  v8 = 0;
  while ( 1 )
  {
    v9 = qword_1800CA460[2 * v8] - *(_QWORD *)&v28.Data1;
    if ( !v9 )
      v9 = qword_1800CA460[2 * v8 + 1] - *(_QWORD *)v28.Data4;
    if ( !v9 )
      break;
    if ( ++v8 >= 7 )
    {
      LODWORD(v22) = -2147023728;
      goto LABEL_27;
    }
  }
  v30 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
  if ( a2 == eKeywordDetectorConnector )
    v10 = 600;
  else
    v10 = 0;
  v31 = v8 + 2 + v10;
  LODWORD(v22) = 0;
  LODWORD(v22) = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *, _QWORD))(**((_QWORD **)this + 4)
                                                                                                + 40LL))(
                   *((_QWORD *)this + 4),
                   &v30,
                   &pvar,
                   *(_QWORD *)&v28.Data1);
  if ( (int)v22 < 0
    || pvar.vt != 65
    || pvar.lVal < 0x12u
    || (pData = pvar.bstrblobVal.pData, pvar.ulVal != *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL) )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
    LODWORD(v22) = CPolicyConfig::RefreshDeviceFormat(this, a2);
    if ( (int)v22 < 0 )
      goto LABEL_27;
    if ( (*(int (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
           *((_QWORD *)this + 4),
           &v30,
           &pvar) < 0
      || pvar.vt != 65
      || !(unsigned int)IsValidWfxBlob(&pvar) )
    {
      goto LABEL_42;
    }
    pData = pvar.bstrblobVal.pData;
  }
  v12 = pData;
  if ( !pData )
  {
LABEL_42:
    LODWORD(v22) = -2004287480;
    goto LABEL_27;
  }
  v13 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pData);
  if ( v13 < 0 )
  {
LABEL_39:
    LODWORD(v22) = v13;
    if ( !v13 )
      goto LABEL_24;
    goto LABEL_42;
  }
  if ( ((*(_WORD *)pData - 1) & 0xFFFD) == 0 )
  {
    v13 = 0;
    goto LABEL_39;
  }
  if ( *(_WORD *)pData != 0xFFFE )
    goto LABEL_42;
  v14 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
    v14 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
  if ( v14 )
  {
    v15 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v15 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( v15 )
      goto LABEL_42;
  }
  LODWORD(v22) = 0;
LABEL_24:
  v16 = *((unsigned __int16 *)pData + 8);
  v17 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v16 + 18);
  v18 = v17;
  if ( v17 )
  {
    memcpy_0(v17, v12, v16 + 18);
    v19 = 0;
  }
  else
  {
    v19 = -2147024882;
  }
  *a5 = v18;
  LODWORD(v22) = v19;
LABEL_27:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( (unsigned int)hProvider > 2 )
  {
    v38 = "CEndpointCharacteristics::GetDevicePipeFormat";
    v39 = 46LL;
    v24 = 5522;
    v40 = &v24;
    v41 = 4LL;
    v42 = &v22;
    v43 = 4LL;
    v26[0] = ((unsigned int)&unk_1800A877D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v26[1] = 2;
    v27 = 0LL;
    v32 = off_1800CA088;
    v33 = *(unsigned __int16 *)off_1800CA088;
    v34 = 2;
    v35 = &unk_1800A8788;
    v36 = 35;
    v37 = 1;
    EtwEventWriteTransfer(qword_1800CA0A0, v26, 0LL, 0LL, 5, &v32);
  }
  v20 = v22;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v20;
}
