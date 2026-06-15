/*
 * XREFs of WPP_SF_SSSSSSS @ 0x1800A2444
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001BF14 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001C2F0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_SSSSSSS(
        TRACEHANDLE a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  __int64 v10; // r11
  __int64 v11; // rcx
  const wchar_t *v12; // rbx
  const wchar_t *v13; // r12
  __int64 v14; // r13
  __int64 v15; // rcx
  const wchar_t *v16; // r15
  __int64 v17; // r14
  __int64 v18; // rcx
  const wchar_t *v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rcx
  const wchar_t *v22; // rdi
  __int64 v23; // r9
  __int64 v24; // rcx
  const wchar_t *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  const wchar_t *v28; // rcx
  __int64 v29; // r10
  __int64 v32; // [rsp+F0h] [rbp+18h]

  v10 = -1LL;
  if ( a10 )
  {
    if ( *a10 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a10[v11] );
      v32 = 2 * v11 + 2;
    }
    else
    {
      v32 = 14LL;
    }
  }
  else
  {
    v32 = 10LL;
  }
  v12 = L"<NULL>";
  if ( a10 )
  {
    v13 = L"<NULL>";
    if ( *a10 )
      v13 = a10;
  }
  else
  {
    v13 = L"NULL";
  }
  if ( a9 )
  {
    if ( *a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
      v14 = 2 * v15 + 2;
    }
    else
    {
      v14 = 14LL;
    }
  }
  else
  {
    v14 = 10LL;
  }
  if ( a9 )
  {
    v16 = L"<NULL>";
    if ( *a9 )
      v16 = a9;
  }
  else
  {
    v16 = L"NULL";
  }
  if ( a8 )
  {
    if ( *a8 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a8[v18] );
      v17 = 2 * v18 + 2;
    }
    else
    {
      v17 = 14LL;
    }
  }
  else
  {
    v17 = 10LL;
  }
  if ( a8 )
  {
    v19 = L"<NULL>";
    if ( *a8 )
      v19 = a8;
  }
  else
  {
    v19 = L"NULL";
  }
  if ( a7 )
  {
    if ( *a7 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a7[v21] );
      v20 = 2 * v21 + 2;
    }
    else
    {
      v20 = 14LL;
    }
  }
  else
  {
    v20 = 10LL;
  }
  if ( a7 )
  {
    v22 = L"<NULL>";
    if ( *a7 )
      v22 = a7;
  }
  else
  {
    v22 = L"NULL";
  }
  if ( a6 )
  {
    if ( *a6 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a6[v24] );
      v23 = 2 * v24 + 2;
    }
    else
    {
      v23 = 14LL;
    }
  }
  else
  {
    v23 = 10LL;
  }
  if ( a6 )
  {
    v25 = L"<NULL>";
    if ( *a6 )
      v25 = a6;
  }
  else
  {
    v25 = L"NULL";
  }
  if ( a5 )
  {
    if ( *a5 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( a5[v27] );
      v26 = 2 * v27 + 2;
    }
    else
    {
      v26 = 14LL;
    }
  }
  else
  {
    v26 = 10LL;
  }
  if ( a5 )
  {
    v28 = L"<NULL>";
    v12 = L"<NULL>";
    if ( *a5 )
      v28 = a5;
  }
  else
  {
    v28 = L"NULL";
  }
  if ( a4 )
  {
    v29 = 14LL;
    if ( *a4 )
    {
      do
        ++v10;
      while ( a4[v10] );
      v29 = 2 * v10 + 2;
    }
  }
  else
  {
    v29 = 10LL;
  }
  if ( a4 )
  {
    if ( *a4 )
      v12 = a4;
  }
  else
  {
    v12 = L"NULL";
  }
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
           0x2Du,
           v12,
           v29,
           v28,
           v26,
           v25,
           v23,
           v22,
           v20,
           v19,
           v17,
           v16,
           v14,
           v13,
           v32,
           0LL);
}
