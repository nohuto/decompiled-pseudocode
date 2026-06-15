/*
 * XREFs of ?PropertyStoreSetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180076230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qS @ 0x18006BDEC (WPP_SF_qS.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x18007148C (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreSetValue(
        CAudioSession *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xDAu,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      this,
      0LL);
  }
  v6 = &AllowedSessionPropertyKeys;
  do
  {
    if ( (unsigned int)operator==((__int64)a2, (__int64)v6) )
      break;
    ++v8;
    v6 = (void *)(v7 + 20);
  }
  while ( (unsigned __int64)(v10 + 20) < 0x28 );
  if ( v8 != 2 )
    return (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, const struct tagPROPVARIANT *))(**((_QWORD **)this + 77) + 48LL))(
             *((_QWORD *)this + 77),
             a2,
             a3);
  if ( (TraceLoggingHProvider *)v9 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v9 + 28) & 0x40) != 0
    && *(_BYTE *)(v9 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v9 + 16), 0xDBu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, -2147024809);
  }
  return 2147942487LL;
}
