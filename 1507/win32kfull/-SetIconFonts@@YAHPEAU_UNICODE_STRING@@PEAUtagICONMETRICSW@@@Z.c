/*
 * XREFs of ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C0137568
 * Callers:
 *     SetIconMetrics @ 0x1C01372AC (SetIconMetrics.c)
 * Callees:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C01375F8 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetAltScaleFont @ 0x1C0137ED0 (UserSetAltScaleFont.c)
 *     UserSetFont @ 0x1C0137F98 (UserSetFont.c)
 *     GreMarkDeletableFont @ 0x1C0138114 (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall SetIconFonts(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2)
{
  __int128 *v3; // rcx
  unsigned int v4; // ebx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // [rsp+20h] [rbp-78h] BYREF
  __int128 v12; // [rsp+30h] [rbp-68h]
  __int128 v13; // [rsp+40h] [rbp-58h]
  __int128 v14; // [rsp+50h] [rbp-48h]
  __int128 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+70h] [rbp-28h]
  int v17; // [rsp+78h] [rbp-20h]

  if ( a2 )
  {
    v6 = *((_OWORD *)a2 + 1);
    v3 = &v11;
    v7 = *((_OWORD *)a2 + 2);
    v17 = *((_DWORD *)a2 + 26);
    v11 = v6;
    v8 = *((_OWORD *)a2 + 3);
    v12 = v7;
    v9 = *((_OWORD *)a2 + 4);
    v13 = v8;
    v10 = *((_OWORD *)a2 + 5);
    v14 = v9;
    *(_QWORD *)&v9 = *((_QWORD *)a2 + 12);
    v15 = v10;
    v16 = v9;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = UserSetFont(
         a1,
         v3,
         154LL,
         &gdpiSystem[8],
         v11,
         *((_QWORD *)&v11 + 1),
         v12,
         *((_QWORD *)&v12 + 1),
         v13,
         *((_QWORD *)&v13 + 1),
         v14,
         *((_QWORD *)&v14 + 1),
         v15,
         *((_QWORD *)&v15 + 1),
         v16,
         v17);
  if ( v4 )
  {
    v4 = UserSetAltScaleFont(*(_QWORD *)&gdpiSystem[8], (char *)&gdpi96 + 32);
    if ( !v4 )
    {
      GreMarkDeletableFont(*(struct HLFONT__ **)&gdpiSystem[8]);
      GreDeleteObject(*(_QWORD *)&gdpiSystem[8]);
      *(_QWORD *)&gdpiSystem[8] = 0LL;
    }
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  return v4;
}
