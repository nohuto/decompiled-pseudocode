/*
 * XREFs of ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x14000D234
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14000C0D0 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     MNInitUAHMenuItem @ 0x14000D444 (MNInitUAHMenuItem.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     MNUpdateUAHMaxPopupWidths @ 0x1402358D4 (MNUpdateUAHMaxPopupWidths.c)
 *     GetDpiServerInfoForDpi @ 0x1403025B0 (GetDpiServerInfoForDpi.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxMNGetBitmapSize(__int64 **a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagMENU *v11; // rcx
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int64 *v19; // rcx
  int v20; // eax
  int v21; // edx
  __int64 v22; // [rsp+20h] [rbp-51h] BYREF
  int v23; // [rsp+28h] [rbp-49h]
  int v24; // [rsp+2Ch] [rbp-45h]
  int v25; // [rsp+30h] [rbp-41h]
  __int64 v26; // [rsp+38h] [rbp-39h]
  __int64 v27; // [rsp+40h] [rbp-31h]
  __int64 v28; // [rsp+48h] [rbp-29h]
  int v29; // [rsp+50h] [rbp-21h]
  char v30[4]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v31; // [rsp+5Ch] [rbp-15h]
  __int128 v32; // [rsp+6Ch] [rbp-5h]

  memset_0(&v22, 0, 0x70uLL);
  v9 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 104LL) != -1 )
    return 0LL;
  v22 = 1LL;
  v23 = *(_DWORD *)(v9 + 8);
  v24 = 0;
  v25 = *(_DWORD *)(GetDpiServerInfoForDpi(a4) + 36);
  v10 = *(_QWORD *)a2;
  v26 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
  if ( (*(_DWORD *)v10 & 0x100) != 0 || *(_QWORD *)(v10 + 96) == -1LL && a3 )
  {
    xxxSendMessage(a3, 44LL, 0LL, &v22);
    v17 = (__int64)a1[2];
    if ( !v17 )
      v17 = **a1;
    if ( !MNIspItemValid(v17, a2) )
      return 0LL;
  }
  v11 = (struct tagMENU *)a1[2];
  if ( !v11 )
    v11 = (struct tagMENU *)**a1;
  if ( !(unsigned int)MNIsUAHMenu(v11) || !a3 )
    goto LABEL_27;
  v12 = a1[2];
  if ( v12 )
  {
    v13 = a1[2];
    v14 = (__int64)v13;
    goto LABEL_10;
  }
  v13 = a1[2];
  v14 = (__int64)v13;
  v12 = (__int64 *)**a1;
  if ( v12 )
  {
LABEL_10:
    v27 = *v12;
    goto LABEL_11;
  }
  v27 = 0LL;
LABEL_11:
  v28 = a5;
  v29 = *(_DWORD *)(v12[5] + 40);
  if ( !v13 )
    v14 = **a1;
  MNInitUAHMenuItem(v14, a2, v30);
  xxxSendMessage(a3, 148LL, 0LL, &v22);
  v15 = (__int64)a1[2];
  if ( !v15 )
    v15 = **a1;
  if ( !MNIspItemValid(v15, a2) )
    return 0LL;
  v18 = v32;
  *(_OWORD *)(a2 + 52) = v31;
  *(_OWORD *)(a2 + 68) = v18;
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1) != 0 )
  {
    v19 = a1[2];
    if ( !v19 )
      v19 = (__int64 *)**a1;
    v20 = MNUpdateUAHMaxPopupWidths(v19, a2);
    v21 = v20 + v24;
    goto LABEL_26;
  }
LABEL_27:
  v21 = v24;
LABEL_26:
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)a2 + 104LL) = v21;
  *(_DWORD *)(*(_QWORD *)a2 + 108LL) = v25;
  return result;
}
