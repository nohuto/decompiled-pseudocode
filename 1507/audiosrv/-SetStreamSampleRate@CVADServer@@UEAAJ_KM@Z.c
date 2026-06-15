/*
 * XREFs of ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x18008C1F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 *     ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x180082A98 (-SetSampleRate@CAudioStream@@QEAAJM@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamSampleRate(CVADServer *this, __int64 a2, float a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  CAudioStream *v6; // rcx
  int v7; // ebx
  __int64 v8; // rax

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  if ( *((_DWORD *)this + 54) && (v6 = (CAudioStream *)*((_QWORD *)this + 28)) != 0LL )
  {
    v8 = *((_QWORD *)v6 + 7);
    if ( a2 == v8 )
    {
      v7 = CAudioStream::SetSampleRate(v6, a3);
      if ( v7 >= 0 )
        v7 = 0;
    }
    else
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_qq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x3Au,
          (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
          a2,
          v8);
      }
      v7 = -2147024809;
    }
  }
  else
  {
    v7 = -2004287487;
  }
  LeaveCriticalSection(v3);
  if ( v7 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Bu,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
