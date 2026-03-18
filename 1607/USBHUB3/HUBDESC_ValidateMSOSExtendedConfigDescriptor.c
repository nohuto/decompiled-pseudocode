/*
 * XREFs of HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C002E828
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C0019500 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C0028C00 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall HUBDESC_ValidateMSOSExtendedConfigDescriptor(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  bool v7; // bl
  char v8; // r8
  _BYTE *v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r9
  unsigned __int8 v12; // al
  char v13; // dl
  unsigned int v14; // ecx
  _BYTE *v15; // rsi
  unsigned __int8 v16; // al

  v7 = 1;
  if ( a2 != *a1 )
  {
    WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x108u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, a2, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 126LL);
    v7 = !HUBDESC_ShouldEnforceWin8ValidationImmutable(a3);
  }
  v8 = 0;
  v9 = (char *)a1 + 18;
  v10 = 0;
  v11 = 0x87FFFFFE03FFLL;
  do
  {
    if ( *v9 )
    {
      if ( v8 || (v12 = *v9 - 48, v12 > 0x2Fu) || !_bittest64(&v11, v12) )
      {
        WPP_RECORDER_SF_(a4, 2u, 5u, 0x10Au, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 123LL);
        v7 = 0;
        goto LABEL_22;
      }
    }
    else
    {
      v8 = 1;
    }
    ++v10;
    ++v9;
  }
  while ( v10 < 8 );
  v13 = 0;
  v14 = 0;
  v15 = (char *)a1 + 26;
  while ( !*v15 )
  {
    v13 = 1;
LABEL_16:
    ++v14;
    ++v15;
    if ( v14 >= 8 )
      goto LABEL_19;
  }
  if ( !v13 )
  {
    v16 = *v15 - 48;
    if ( v16 <= 0x2Fu )
    {
      if ( _bittest64(&v11, v16) )
        goto LABEL_16;
    }
  }
  WPP_RECORDER_SF_(a4, 2u, 5u, 0x10Bu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
  (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 124LL);
  v7 = 0;
LABEL_19:
  if ( !v7 )
LABEL_22:
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x10Cu, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
  return v7;
}
