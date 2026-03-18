/*
 * XREFs of HUBID_BuildCompatibleID @ 0x1C0016730
 * Callers:
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0010E50 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_AssignPDOIds @ 0x1C006865C (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     HUBID_AssignIDString @ 0x1C0015CC4 (HUBID_AssignIDString.c)
 *     HUBID_GetUnknownId @ 0x1C0016060 (HUBID_GetUnknownId.c)
 *     HUBID_BuildDeviceCompatibleID @ 0x1C0016274 (HUBID_BuildDeviceCompatibleID.c)
 *     HUBID_BuildHubCompatibleID @ 0x1C0016414 (HUBID_BuildHubCompatibleID.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C00164E8 (HUBID_BuildClassCompatibleID.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildCompatibleID(__int64 a1, __int64 a2, _QWORD *a3)
{
  const wchar_t *UnknownId; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  const void **v6; // rcx
  __int64 v7; // r10
  __int64 v8; // r8
  int v10; // eax
  int v11; // [rsp+20h] [rbp-78h] BYREF
  _OWORD *v12; // [rsp+28h] [rbp-70h]
  _OWORD v13[4]; // [rsp+30h] [rbp-68h] BYREF
  int v14; // [rsp+70h] [rbp-28h]

  v13[0] = *(_OWORD *)L"USB\\Class_11&SubClass_00&Prot_00";
  v13[1] = *(_OWORD *)L"s_11&SubClass_00&Prot_00";
  v14 = *(_DWORD *)L"";
  v13[2] = *(_OWORD *)L"Class_00&Prot_00";
  v13[3] = *(_OWORD *)L"&Prot_00";
  v11 = 4456514;
  v12 = v13;
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 1620) & 0x2002) == 0 )
  {
    UnknownId = HUBID_GetUnknownId(a1);
    v5 = v4;
    v6 = (const void **)UnknownId;
    v8 = v7;
    return HUBID_AssignIDString(v6, 2, v8, v5);
  }
  v10 = *(_DWORD *)(a1 + 1616);
  if ( (v10 & 4) != 0 )
    return HUBID_BuildDeviceCompatibleID(a1, a2, a3);
  if ( (v10 & 2) != 0 )
    return HUBID_BuildHubCompatibleID(a1, a2, a3);
  if ( (v10 & 0x20000) != 0 )
  {
    v5 = (__int64)a3;
    v6 = (const void **)&v11;
    v8 = a2;
    return HUBID_AssignIDString(v6, 2, v8, v5);
  }
  return HUBID_BuildClassCompatibleID(a1, a2, a3);
}
