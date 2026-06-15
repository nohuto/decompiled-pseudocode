/*
 * XREFs of ?SimulateStreamStateChange@CApplication@@IEAAXHPEAH@Z @ 0x180065B38
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@I@Z @ 0x18001C720 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x18002A328 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 */

void __fastcall CApplication::SimulateStreamStateChange(CApplication *this, int a2, int *a3)
{
  _QWORD *v3; // rax
  _QWORD *Next; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)*((_QWORD *)this + 8);
  v7 = 0;
  *a3 = 0;
  v8 = v3;
  while ( v8 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)this, &v8);
    this = (CApplication *)*Next;
    if ( !*(_DWORD *)(*Next + 416LL) )
    {
      CProcess::SimulateStreamStateChange(this, a2, &v7);
      *a3 |= v7;
    }
  }
}
