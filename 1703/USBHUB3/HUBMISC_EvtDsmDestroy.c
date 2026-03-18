/*
 * XREFs of HUBMISC_EvtDsmDestroy @ 0x1C0028ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_EvtDsmDestroy(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C005B048);
  v2 = v1;
  if ( v1[185] )
  {
    (*(void (**)(void))(*v1 + 512LL))();
    (*(void (__fastcall **)(_QWORD))(*v2 + 496LL))(v2[185]);
    v2[185] = 0LL;
  }
  v3 = (void *)v2[267];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x64334855u);
  RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 263));
  v4 = (void *)v2[304];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x64334855u);
  v5 = (void *)v2[269];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x64334855u);
  v6 = (void *)v2[250];
  if ( v6 )
    ExFreePoolWithTag(v6, 0x64334855u);
  v7 = (void *)v2[261];
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  v8 = (void *)v2[251];
  if ( v8 )
    ExFreePoolWithTag(v8, 0x64334855u);
  v9 = (void *)v2[252];
  if ( v9 )
    ExFreePoolWithTag(v9, 0x64334855u);
  v10 = (void *)v2[255];
  if ( v10 )
    ExFreePoolWithTag(v10, 0x64334855u);
  v11 = (void *)v2[318];
  if ( v11 )
    ExFreePoolWithTag(v11, 0x64334855u);
  v12 = (void *)v2[309];
  if ( v12 )
    ExFreePoolWithTag(v12, 0x64334855u);
  *((_DWORD *)v2 + 24) = 0;
  v13 = (void *)v2[13];
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x64334855u);
    v2[13] = 0LL;
  }
  v14 = (void *)v2[17];
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x64334855u);
    v2[17] = 0LL;
  }
  v15 = (void *)v2[15];
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x64334855u);
    v2[15] = 0LL;
  }
  if ( v2[29] )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[29],
      "DSM Tag",
      6874LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[29] = 0LL;
  }
  v16 = v2[50];
  if ( v16 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[50],
      "DSM Tag",
      6874LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[50] = 0LL;
  }
  v17 = v2[191];
  if ( v17 )
  {
    LOBYTE(v16) = 1;
    ExDeleteTimer(v17, v16, 0LL, 0LL);
    v2[191] = 0LL;
  }
  if ( v2[300] )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[300],
      "DSM Tag",
      6874LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[300] = 0LL;
  }
  if ( v2[52] )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v2[52],
      "DSM Tag",
      6874LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[52] = 0LL;
  }
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2[1]);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v18,
           "DSM Create Tag",
           6955LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
}
