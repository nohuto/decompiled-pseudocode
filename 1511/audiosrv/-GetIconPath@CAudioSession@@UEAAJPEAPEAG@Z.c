/*
 * XREFs of ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180073A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x180038320 (MIDL_user_allocate.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetIconPath(CAudioSession *this, unsigned __int16 **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  const wchar_t *v5; // r9
  size_t v6; // rbx
  unsigned __int16 *v7; // rax
  int v8; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 416);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  v5 = (const wchar_t *)*((_QWORD *)this + 49);
  v6 = 2LL * (*((_DWORD *)v5 - 4) + 1);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, v5);
  }
  v7 = (unsigned __int16 *)MIDL_user_allocate(v6);
  *a2 = v7;
  if ( v7 )
  {
    v8 = StringCbCopyW(v7, v6, *((size_t **)this + 49));
    if ( v8 < 0 )
    {
      operator delete(*a2);
      *a2 = 0LL;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  LeaveCriticalSection(v2);
  if ( v8 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, v8);
  }
  return (unsigned int)v8;
}
