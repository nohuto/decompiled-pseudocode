/*
 * XREFs of WPP_SF_SSd @ 0x1800A104C
 * Callers:
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001C150 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@@Z @ 0x1800A0BA8 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800A20D0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_SSd(TRACEHANDLE LoggerHandle, USHORT a2, const GUID *a3, const wchar_t *a4, const wchar_t *a5, ...)
{
  __int64 v5; // r10
  __int64 v9; // r11
  __int64 v10; // r8
  __int64 v11; // rcx
  const wchar_t *v12; // rcx
  const wchar_t *v13; // rdx
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = -1LL;
  v9 = 14LL;
  if ( a5 )
  {
    if ( *a5 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a5[v11] );
      v10 = 2 * v11 + 2;
    }
    else
    {
      v10 = 14LL;
    }
  }
  else
  {
    v10 = 10LL;
  }
  v12 = L"<NULL>";
  if ( a5 )
  {
    v13 = L"<NULL>";
    if ( *a5 )
      v13 = a5;
  }
  else
  {
    v13 = L"NULL";
  }
  if ( a4 )
  {
    if ( *a4 )
    {
      do
        ++v5;
      while ( a4[v5] );
      v9 = 2 * v5 + 2;
    }
  }
  else
  {
    v9 = 10LL;
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
  return TraceMessage(LoggerHandle, 0x2Bu, a3, a2, v12, v9, v13, v10, va, 4LL, 0LL);
}
