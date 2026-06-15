/*
 * XREFs of ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14001775C
 * Callers:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x140014FE4 (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140017510 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall ATL::CAtlComModule::ExecuteObjectMain(ATL::CAtlComModule *this, char a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  v2 = qword_140055C70;
  v4 = qword_140055C78;
  while ( v2 < v4 )
  {
    if ( *(_QWORD *)v2 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)v2 + 64LL);
      LOBYTE(v5) = a2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v5);
      v4 = qword_140055C78;
    }
    v2 += 8LL;
  }
}
