/*
 * XREFs of ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180078850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EF60 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x180030500 (MIDL_user_allocate.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetIconPath(CAudioSession *this, unsigned __int16 **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  const wchar_t *v5; // r9
  size_t v6; // rbx
  unsigned __int16 *v7; // rax
  int v8; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 272);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  v5 = (const wchar_t *)*((_QWORD *)this + 31);
  v6 = 2LL * (*((_DWORD *)v5 - 4) + 1);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xDu,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v5);
  }
  v7 = (unsigned __int16 *)MIDL_user_allocate(v6);
  *a2 = v7;
  if ( v7 )
  {
    v8 = StringCbCopyW((char *)v7, v6, *((char **)this + 31));
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xEu,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
