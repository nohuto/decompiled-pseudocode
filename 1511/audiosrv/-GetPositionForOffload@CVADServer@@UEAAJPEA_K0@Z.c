/*
 * XREFs of ?GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z @ 0x180087E40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?GetPositionForOffload@CAudioStream@@QEAAJPEA_K0@Z @ 0x18007D284 (-GetPositionForOffload@CAudioStream@@QEAAJPEA_K0@Z.c)
 *     WPP_SF_ii @ 0x18008A7B8 (WPP_SF_ii.c)
 */

__int64 __fastcall CVADServer::GetPositionForOffload(CVADServer *this, unsigned __int64 *a2, unsigned __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  CAudioStream *v7; // rcx
  int PositionForOffload; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 50) && (v7 = (CAudioStream *)*((_QWORD *)this + 26)) != 0LL )
  {
    PositionForOffload = CAudioStream::GetPositionForOffload(v7, a2, a3);
    if ( PositionForOffload >= 0 )
      goto LABEL_10;
  }
  else
  {
    PositionForOffload = -2004287487;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Bu,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      PositionForOffload);
  }
LABEL_10:
  LeaveCriticalSection(v3);
  if ( PositionForOffload >= 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ii(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, *a2, *a3);
  }
  return (unsigned int)PositionForOffload;
}
