/*
 * XREFs of NtUserResolveDesktopForWOW @ 0x1402BADC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x1401DABA8 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxResolveDesktopForWOW @ 0x1402A5F20 (xxxResolveDesktopForWOW.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserResolveDesktopForWOW(struct _UNICODE_STRING *a1)
{
  __int64 v2; // rcx
  unsigned __int64 ULong64FromUser; // rax
  const void *v4; // rbx
  struct _UNICODE_STRING v5; // xmm0
  unsigned __int16 epi16; // dx
  ULONG64 v7; // rcx
  WCHAR *v8; // rax
  int v9; // ebx
  __int64 v10; // rcx
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-58h] BYREF
  __m128i v13; // [rsp+40h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+60h] [rbp-28h] BYREF

  DestinationString = 0LL;
  EnterCrit(0LL, 0LL);
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1150);
  PtiCurrent(v2);
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  v13.m128i_i32[1] = 0;
  v13.m128i_i32[0] = RtlReadULongFromUser(a1);
  ULong64FromUser = RtlReadULong64FromUser(&a1->Buffer);
  v4 = (const void *)ULong64FromUser;
  v13.m128i_i64[1] = ULong64FromUser;
  v5 = (struct _UNICODE_STRING)v13;
  SourceString = (UNICODE_STRING)v13;
  if ( (ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  epi16 = _mm_extract_epi16(v13, 1);
  v7 = epi16 + ULong64FromUser;
  if ( v7 <= ULong64FromUser || v7 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)_mm_cvtsi128_si32(v13) > epi16
    || (v13.m128i_i8[0] = _mm_cvtsi128_si32(v13), (v13.m128i_i8[0] & 1) != 0) )
  {
    if ( (v13.m128i_i8[0] & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1161);
    ExRaiseAccessViolation();
  }
  DestinationString = v5;
  if ( epi16 )
  {
    v8 = (WCHAR *)Win32AllocPoolWithQuotaZInit(epi16, 2037674837LL);
    SourceString.Buffer = v8;
    if ( !v8 )
      ExRaiseStatus(-1073741801);
    Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
      BugCheckParameter2,
      (ULONG_PTR)v8,
      (__int64)Win32FreePool);
    memmove(SourceString.Buffer, v4, SourceString.Length);
  }
  else
  {
    SourceString.Buffer = 0LL;
  }
  v9 = xxxResolveDesktopForWOW(&SourceString);
  if ( v9 >= 0 )
  {
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    *a1 = DestinationString;
  }
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  UserSessionSwitchLeaveCrit(v10);
  return (unsigned int)v9;
}
