/*
 * XREFs of ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18000C928
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x18001461C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCAppl.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x18000FEC0 (-SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010DA4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::HasDuckedStream(CApplication *this)
{
  unsigned int v2; // r12d
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  int v5; // r13d
  unsigned int v6; // edx
  unsigned int v7; // ecx
  int v8; // esi
  __int64 v9; // r14
  _DWORD *v10; // r15
  __int64 v11; // r8
  unsigned int v12; // ebp
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v15; // [rsp+50h] [rbp-38h]
  __int64 v16; // [rsp+90h] [rbp+8h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = 0;
  v3 = (_QWORD *)*((_QWORD *)this + 8);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        goto LABEL_20;
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      if ( !*(_DWORD *)(v4 + 416) )
      {
        v5 = 0;
        if ( (unsigned int)CProcess::SubjectToStreamClassPolicyGains((CProcess *)(v4 + 16)) )
        {
          v8 = 0;
          if ( *(int *)(v4 + 272) > 0 )
            break;
        }
      }
    }
    v9 = 0LL;
    do
    {
      if ( v9 < 0 || v8 >= *(_DWORD *)(v4 + 272) )
      {
        ATL::_AtlRaiseException(v7, v6);
        __debugbreak();
      }
      v10 = *(_DWORD **)(v9 + *(_QWORD *)(v4 + 264));
      v11 = *(_QWORD *)(v9 + *(_QWORD *)(v4 + 256));
      v16 = v11;
      v12 = 0;
      while ( !*v10 )
      {
LABEL_13:
        ++v12;
        ++v10;
        if ( v12 >= 0x15 )
          goto LABEL_16;
      }
      if ( !(*(unsigned int (__fastcall **)(char *, _QWORD, __int64, _QWORD, _DWORD, bool))(*((_QWORD *)g_StreamClassPolicyManager
                                                                                            + 2)
                                                                                          + 24LL))(
              (char *)g_StreamClassPolicyManager + 16,
              *(unsigned int *)(v4 + 172),
              v11,
              v12,
              0,
              *(_DWORD *)(*(_QWORD *)(v4 + 224) + 112LL) != 0) )
      {
        v11 = v16;
        goto LABEL_13;
      }
      v5 = 1;
LABEL_16:
      ++v8;
      v9 += 8LL;
    }
    while ( v8 < *(_DWORD *)(v4 + 272) );
  }
  while ( !v5 );
  v2 = 1;
LABEL_20:
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
