/*
 * XREFs of ndisOidPostMediaState @ 0x1C0041D20
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C0018460 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memset @ 0x1C0023A40 (memset.c)
 */

void __fastcall ndisOidPostMediaState(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  bool v4; // dl
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+28h] [rbp-49h] BYREF
  _DWORD v6[4]; // [rsp+98h] [rbp+27h] BYREF
  __int64 v7; // [rsp+A8h] [rbp+37h]
  __int64 v8; // [rsp+B0h] [rbp+3Fh]
  int v9; // [rsp+B8h] [rbp+47h]
  int v10; // [rsp+BCh] [rbp+4Bh]

  v1 = a1[4];
  v3 = *a1;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x4Du, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v3, v1);
  if ( *a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v3 + 32) < 6u )
  {
    v4 = **(_DWORD **)(v1 + 40) == 0;
    if ( ((*(_DWORD *)(v3 + 120) >> 29) & 1) != v4 )
    {
      v6[0] = 2621824;
      v6[1] = 2 - v4;
      v8 = *(_QWORD *)(v3 + 2808);
      v7 = *(_QWORD *)(v3 + 2800);
      v6[2] = *(_DWORD *)(v3 + 348);
      v9 = *(_DWORD *)(v3 + 808);
      v10 = *(_DWORD *)(v3 + 468);
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = v6;
      StatusIndication.SourceHandle = (void *)v3;
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBufferSize = -2;
      NdisMIndicateStatusEx((NDIS_HANDLE)v3, &StatusIndication);
    }
    **(_DWORD **)(v1 + 40) = (*(_DWORD *)(v3 + 120) & 0x20000000) == 0;
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x4Eu, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v3, v1);
}
