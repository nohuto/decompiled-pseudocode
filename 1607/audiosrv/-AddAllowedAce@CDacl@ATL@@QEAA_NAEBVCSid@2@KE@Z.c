/*
 * XREFs of ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002CFF0
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002CA38 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18006A8E0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x18000CAF4 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18002890C (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall ATL::CDacl::AddAllowedAce(ATL::CDacl *this, const struct ATL::CSid *a2, int a3)
{
  ATL::CDacl *v5; // rsi
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rbx
  unsigned __int64 v8; // r15
  _QWORD *v9; // rcx
  _DWORD *v10; // rax
  _DWORD *v13; // [rsp+58h] [rbp+10h]

  v5 = this;
  if ( !*((_BYTE *)a2 + 76) || !IsValidSid((char *)a2 + 8) )
    return 0;
  if ( *((_BYTE *)v5 + 16) )
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)v5 + 16LL))(v5);
    *((_BYTE *)v5 + 16) = 0;
  }
  try
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
    if ( v7 )
    {
      *(_QWORD *)v7 = &ATL::CAcl::CAce::`vftable';
      ATL::CSid::CSid((ATL::CSid *)(v7 + 2), a2);
      v7[32] = a3;
      *((_BYTE *)v7 + 132) = 0;
      *((_QWORD *)v7 + 17) = 0LL;
      *(_QWORD *)v7 = &ATL::CDacl::CAccessAce::`vftable';
      *((_BYTE *)v7 + 144) = 1;
    }
    else
    {
      v7 = 0LL;
    }
    v13 = v7;
  }
  catch ( ... )
  {
    v5 = this;
    v7 = v13;
  }
  if ( !v7 )
    ATL::AtlThrowImpl(-2147024882);
  v8 = *((_QWORD *)v5 + 4);
  if ( v8 >= *((_QWORD *)v5 + 5)
    && !ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
          (__int64)v5 + 24,
          v8 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  v9 = (_QWORD *)(*((_QWORD *)v5 + 3) + 8 * v8);
  if ( v9 )
  {
    v10 = v7;
    v7 = 0LL;
    *v9 = v10;
  }
  ++*((_QWORD *)v5 + 4);
  free(*((void **)v5 + 1));
  *((_QWORD *)v5 + 1) = 0LL;
  if ( v7 )
    (**(void (__fastcall ***)(LPVOID, __int64))v7)(v7, 1LL);
  return 1;
}
