/*
 * XREFs of ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x180078FA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetProcessId(const wchar_t **this, unsigned int *a2)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x17u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this[88]);
  }
  if ( *((_DWORD *)this + 174) )
  {
    v4 = 143196173;
    *a2 = *((_DWORD *)this + 51);
  }
  else
  {
    *a2 = *((_DWORD *)this + 172);
  }
  return v4;
}
