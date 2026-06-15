/*
 * XREFs of ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x140027AE8
 * Callers:
 *     ??1CAtlComModule@ATL@@QEAA@XZ @ 0x140018838 (--1CAtlComModule@ATL@@QEAA@XZ.c)
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x140018940 (--1CAudioDGModule@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall ATL::CAtlComModule::Term(ATL::CAtlComModule *this)
{
  __int64 *v1; // rdi
  unsigned __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r14

  if ( ATL::_AtlComModule )
  {
    v1 = (__int64 *)qword_140055C70;
    v2 = qword_140055C78;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( v4 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*(_QWORD *)(v3 + 32));
        *(_QWORD *)(v3 + 32) = 0LL;
        v2 = qword_140055C78;
      }
      ++v1;
    }
    DeleteCriticalSection(&stru_140055C80);
    ATL::_AtlComModule = 0;
  }
}
