/*
 * XREFs of ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800741C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetProcessId(const wchar_t **this, unsigned int *a2)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      this[107]);
  }
  if ( *((_DWORD *)this + 212) )
  {
    v4 = 143196173;
    *a2 = *((_DWORD *)this + 87);
  }
  else
  {
    *a2 = *((_DWORD *)this + 210);
  }
  return v4;
}
