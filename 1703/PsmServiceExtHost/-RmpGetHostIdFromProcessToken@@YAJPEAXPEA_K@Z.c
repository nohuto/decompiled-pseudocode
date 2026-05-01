/*
 * XREFs of ?RmpGetHostIdFromProcessToken@@YAJPEAXPEA_K@Z @ 0x18001875C
 * Callers:
 *     ?RmpQueryRpcClientInformation@@YAJPEAXPEAT_RM_SID@@PEAK2PEA_K@Z @ 0x18000218C (-RmpQueryRpcClientInformation@@YAJPEAXPEAT_RM_SID@@PEAK2PEA_K@Z.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800184DC (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGetHostIdFromProcessToken(void *a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  _BYTE v4[8]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v5[4]; // [rsp+38h] [rbp-70h] BYREF
  int v6; // [rsp+3Ch] [rbp-6Ch]
  __int64 v7; // [rsp+40h] [rbp-68h]

  result = NtQuerySecurityAttributesToken(a1, &unk_18003A120, 1LL, v5, 96, v4);
  if ( (int)result >= 0 )
  {
    if ( v6 )
    {
      *a2 = **(_QWORD **)(v7 + 32);
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
