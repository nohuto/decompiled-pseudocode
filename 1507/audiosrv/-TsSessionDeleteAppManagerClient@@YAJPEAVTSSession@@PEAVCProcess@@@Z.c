/*
 * XREFs of ?TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z @ 0x18009FAB0
 * Callers:
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009FD64 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Find@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCProcess@@PEAU3@@Z @ 0x1800070F0 (-Find@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@A.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180007114 (-RemoveAt@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITI.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 */

__int64 __fastcall TsSessionDeleteAppManagerClient(struct TSSession *a1, struct CProcess *a2)
{
  struct CProcess *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // r8
  __int64 result; // rax
  ATL::CAtlException *v6; // rbx
  ATL::CAtlException *v7; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+40h] [rbp+8h]
  struct CProcess *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = a2;
  v3 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::Find((_QWORD *)a1 + 7, &v9);
  if ( !v3 )
    return 0LL;
  try
  {
    ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAt(v4, v3);
  }
  catch ( ATL::CAtlException *v7 )
  {
    v6 = v7;
    if ( *(_DWORD *)v7 == -1073741571 )
      _resetstkoflw();
    v8 = *(_DWORD *)v6;
    result = (unsigned int)v8;
    if ( v8 >= 0 )
    {
      v2 = v9;
      goto LABEL_5;
    }
    return result;
  }
LABEL_5:
  *((_DWORD *)v2 + 108) = 0;
  CUnknown::Release(v2);
  return 0LL;
}
