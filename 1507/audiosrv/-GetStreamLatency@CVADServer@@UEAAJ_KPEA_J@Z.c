/*
 * XREFs of ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x18008AC20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 *     ?GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z @ 0x180081F7C (-GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z.c)
 */

__int64 __fastcall CVADServer::GetStreamLatency(CVADServer *this, __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int StreamLatency; // ebx
  CAudioStream *v8; // rcx
  __int64 v9; // rax

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  if ( a3 )
  {
    if ( *((_DWORD *)this + 54) && (v8 = (CAudioStream *)*((_QWORD *)this + 28)) != 0LL )
    {
      v9 = *((_QWORD *)v8 + 7);
      if ( a2 == v9 )
      {
        StreamLatency = CAudioStream::GetStreamLatency(v8, a3);
        if ( StreamLatency >= 0 )
          StreamLatency = 0;
      }
      else
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_qq(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x38u,
            (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
            a2,
            v9);
        }
        StreamLatency = -2147024809;
      }
    }
    else
    {
      StreamLatency = -2004287487;
    }
  }
  else
  {
    StreamLatency = -2147467261;
  }
  LeaveCriticalSection(v3);
  if ( StreamLatency < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x39u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      StreamLatency);
  }
  return (unsigned int)StreamLatency;
}
