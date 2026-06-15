/*
 * XREFs of Template_jjt @ 0x1800A9DB8
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001E820 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 */

ULONG __fastcall Template_jjt(__int64 a1, __int64 a2, ULONGLONG a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+38h] [rbp-30h]
  __int64 *v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-20h]

  v6.Ptr = a3;
  v7 = a4;
  v9 = &a5;
  *(_QWORD *)&v6.Size = 16LL;
  v8 = 16LL;
  v10 = 4LL;
  return EventWrite(Microsoft_Windows_AudioHandle, &EVT_SYSTEM_EFFECT_APO_INITIALIZED, 3u, &v6);
}
