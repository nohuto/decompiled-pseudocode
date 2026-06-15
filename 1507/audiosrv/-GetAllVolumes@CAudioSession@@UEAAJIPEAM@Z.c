/*
 * XREFs of ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x1800780A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetAllVolumes(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v4; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  LPCRITICAL_SECTION v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v6 = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Eu,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((const wchar_t **)this + 88));
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)this + 18);
  if ( (_DWORD)v4 == *((_DWORD *)this + 193) )
  {
    if ( (_DWORD)v4 )
    {
      v7 = 0LL;
      v8 = v4;
      do
      {
        a3[v7] = *(float *)(v7 * 4 + *((_QWORD *)this + 97));
        ++v7;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v6 = -2147024809;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Fu,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        -2147024809);
    }
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  return v6;
}
