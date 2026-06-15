/*
 * XREFs of ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x18008C060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_qdg @ 0x180071214 (WPP_SF_qdg.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x180082B38 (-SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z.c)
 */

__int64 __fastcall CVADServer::SetChannelVolume(CVADServer *this, unsigned int a2, float a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  CAudioStream *v6; // rcx
  int v7; // ebx

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qdg(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Eu,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      this,
      a2,
      a3);
  }
  if ( a3 < 0.0 || a3 > 1.0 )
    return 2147942487LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v6 = (CAudioStream *)*((_QWORD *)this + 28);
  if ( v6 && *((_DWORD *)this + 54) )
    v7 = CAudioStream::SetStreamChannelVolume(v6, a2, a3);
  else
    v7 = -2004287487;
  LeaveCriticalSection(v5);
  if ( v7 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Fu,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
