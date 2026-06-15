/*
 * XREFs of ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18000C2B4
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x180012F34 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCAppl.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x18000F580 (-SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010414 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
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

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = 0;
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  while ( 1 )
  {
LABEL_2:
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
LABEL_7:
  if ( v9 >= 0 && v8 < *(_DWORD *)(v4 + 272) )
  {
    v10 = *(_DWORD **)(v9 + *(_QWORD *)(v4 + 264));
    v11 = *(_QWORD *)(v9 + *(_QWORD *)(v4 + 256));
    v16 = v11;
    v12 = 0;
    while ( 1 )
    {
      if ( *v10 )
      {
        if ( (*(unsigned int (__fastcall **)(char *, _QWORD, __int64, _QWORD, _DWORD, bool))(*((_QWORD *)g_StreamClassPolicyManager
                                                                                             + 2)
                                                                                           + 24LL))(
               (char *)g_StreamClassPolicyManager + 16,
               *(unsigned int *)(v4 + 172),
               v11,
               v12,
               0,
               *(_DWORD *)(*(_QWORD *)(v4 + 224) + 168LL) != 0) )
        {
          v5 = 1;
LABEL_16:
          ++v8;
          v9 += 8LL;
          if ( v8 >= *(_DWORD *)(v4 + 272) )
          {
            if ( v5 )
            {
              v2 = 1;
              goto LABEL_20;
            }
            goto LABEL_2;
          }
          goto LABEL_7;
        }
        v11 = v16;
      }
      ++v12;
      ++v10;
      if ( v12 >= 0x15 )
        goto LABEL_16;
    }
  }
  ATL::_AtlRaiseException(v7, v6);
LABEL_20:
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
