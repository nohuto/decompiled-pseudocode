/*
 * XREFs of ?TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z @ 0x18001C2E0
 * Callers:
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001CD34 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180010814 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TsSessionDeleteAppManagerClient(struct TSSession *a1, struct CProcess *a2)
{
  volatile signed __int32 *v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *i; // rdx
  __int64 result; // rax
  ATL::CAtlException *v6; // rbx
  ATL::CAtlException *v7; // [rsp+28h] [rbp-10h] BYREF
  int v9; // [rsp+50h] [rbp+18h]

  v2 = (volatile signed __int32 *)a2;
  v3 = (_QWORD *)((char *)a1 + 56);
  for ( i = (_QWORD *)*v3; i && (volatile signed __int32 *)i[2] != v2; i = (_QWORD *)*i )
    ;
  if ( !i )
    return 0LL;
  try
  {
    ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt(v3, i);
  }
  catch ( ATL::CAtlException *v7 )
  {
    v6 = v7;
    if ( *(_DWORD *)v7 == -1073741571 )
      _resetstkoflw();
    v9 = *(_DWORD *)v6;
    result = (unsigned int)v9;
    if ( v9 >= 0 )
    {
      v2 = (volatile signed __int32 *)a2;
      goto LABEL_9;
    }
    return result;
  }
LABEL_9:
  *((_DWORD *)v2 + 111) = 0;
  if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 32LL))(v2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  }
  return 0LL;
}
