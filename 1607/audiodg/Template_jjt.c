/*
 * XREFs of Template_jjt @ 0x140011698
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x14000ED50 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 */

ULONG __fastcall Template_jjt(__int64 a1, __int64 a2, ULONGLONG a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-20h]
  int *v9; // [rsp+48h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp-10h]

  UserData.Ptr = a3;
  v5 = 0;
  v7 = a4;
  *(_QWORD *)&UserData.Size = 16LL;
  v8 = 16LL;
  v9 = &v5;
  v10 = 4LL;
  return EventWrite(Microsoft_Windows_AudioHandle, &EVT_SYSTEM_EFFECT_APO_INITIALIZED, 3u, &UserData);
}
