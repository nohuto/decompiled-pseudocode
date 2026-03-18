/*
 * XREFs of ??0CCD_BTL@@AEAA@XZ @ 0x1C00D77C4
 * Callers:
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C00D7774 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00660CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 */

CCD_BTL *__fastcall CCD_BTL::CCD_BTL(CCD_BTL *this)
{
  __int64 v3; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+38h] [rbp-11h]
  const WCHAR *v5; // [rsp+40h] [rbp-9h]
  int *v6; // [rsp+48h] [rbp-1h]
  int v7; // [rsp+50h] [rbp+7h]
  int *v8; // [rsp+58h] [rbp+Fh]
  int v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  _BYTE v13[32]; // [rsp+80h] [rbp+37h] BYREF
  int v14; // [rsp+B0h] [rbp+67h] BYREF
  int v15; // [rsp+B8h] [rbp+6Fh] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY(this, 8u, 0);
  v14 = 0;
  v15 = 0;
  v3 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  v5 = L"UnsupportedMonitorModesAllowed";
  v6 = &v14;
  v8 = &v15;
  *((_BYTE *)this + 128) = 0;
  v4 = 288;
  v7 = 67108868;
  v9 = 4;
  memset(v13, 0, sizeof(v13));
  *((_BYTE *)this + 128) = (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v3, 0LL, 0LL) >= 0 && v14 != 0;
  return this;
}
