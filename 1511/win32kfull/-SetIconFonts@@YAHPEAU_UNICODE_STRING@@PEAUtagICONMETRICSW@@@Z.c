/*
 * XREFs of ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C00D0D74
 * Callers:
 *     SetIconMetrics @ 0x1C00D0E24 (SetIconMetrics.c)
 * Callees:
 *     UserSetFont @ 0x1C00CDA38 (UserSetFont.c)
 *     UserSetAltScaleFont @ 0x1C00CDBB4 (UserSetAltScaleFont.c)
 *     GreMarkDeletableFont @ 0x1C00CDCAC (GreMarkDeletableFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00D0E04 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall SetIconFonts(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2)
{
  __int128 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+30h] [rbp-68h]
  __int128 v17; // [rsp+40h] [rbp-58h]
  __int128 v18; // [rsp+50h] [rbp-48h]
  __int128 v19; // [rsp+60h] [rbp-38h]
  __int64 v20; // [rsp+70h] [rbp-28h]
  int v21; // [rsp+78h] [rbp-20h]

  if ( a2 )
  {
    v10 = *((_OWORD *)a2 + 1);
    v3 = &v15;
    v11 = *((_OWORD *)a2 + 2);
    v21 = *((_DWORD *)a2 + 26);
    v15 = v10;
    v12 = *((_OWORD *)a2 + 3);
    v16 = v11;
    v13 = *((_OWORD *)a2 + 4);
    v17 = v12;
    v14 = *((_OWORD *)a2 + 5);
    v18 = v13;
    *(_QWORD *)&v13 = *((_QWORD *)a2 + 12);
    v19 = v14;
    v20 = v13;
  }
  else
  {
    v3 = 0LL;
  }
  v6 = UserSetFont((__int64)a1, (__int64)v3, 154LL, (struct HLFONT__ **)&gdpiSystem[4]);
  if ( v6 )
  {
    v6 = UserSetAltScaleFont(gdpiSystem[4], &gdpi96[4]);
    if ( !v6 )
    {
      GreMarkDeletableFont((struct HLFONT__ *)gdpiSystem[4]);
      GreDeleteObject(gdpiSystem[4]);
      gdpiSystem[4] = 0LL;
    }
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS(
    v5,
    v4,
    v7,
    v8,
    v15,
    *((_QWORD *)&v15 + 1),
    v16,
    *((_QWORD *)&v16 + 1),
    v17,
    *((_QWORD *)&v17 + 1),
    v18,
    *((_QWORD *)&v18 + 1));
  return v6;
}
