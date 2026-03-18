/*
 * XREFs of ??0CCD_BTL@@AEAA@XZ @ 0x1C00F9E08
 * Callers:
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C00F9DB8 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
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
  _BYTE v12[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v13; // [rsp+B0h] [rbp+67h] BYREF
  int v14; // [rsp+B8h] [rbp+6Fh] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY(this, 8u, 0);
  v13 = 0;
  v14 = 0;
  v3 = 0LL;
  v10 = 0LL;
  v11 = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  v5 = L"UnsupportedMonitorModesAllowed";
  v6 = &v13;
  v8 = &v14;
  *((_BYTE *)this + 128) = 0;
  v4 = 288;
  v7 = 67108868;
  v9 = 4;
  memset(v12, 0, sizeof(v12));
  *((_BYTE *)this + 128) = (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v3, 0LL, 0LL) >= 0 && v13 != 0;
  return this;
}
