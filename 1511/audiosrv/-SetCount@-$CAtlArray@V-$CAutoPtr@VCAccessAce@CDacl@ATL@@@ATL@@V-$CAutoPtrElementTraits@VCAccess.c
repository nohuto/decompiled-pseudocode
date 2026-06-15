/*
 * XREFs of ?SetCount@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x18002E340
 * Callers:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x18002DCA0 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18002DDDC (--1CDacl@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18002D8D0 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::SetCount(
        __int64 a1)
{
  _QWORD *v1; // r14
  unsigned __int64 v3; // rbp
  unsigned __int64 i; // rdi
  void **(__fastcall ***v5)(void **, char); // rsi
  void **(__fastcall *v6)(void **, char); // r15
  char result; // al

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    for ( i = 0LL; i < v3; ++i )
    {
      v5 = (void **(__fastcall ***)(void **, char))v1[i];
      if ( v5 )
      {
        v6 = **v5;
        if ( v6 == ATL::CDacl::CAccessAce::`vector deleting destructor' )
          ATL::CDacl::CAccessAce::`vector deleting destructor'((void **)v1[i], 1);
        else
          v6((void **)v1[i], 1);
      }
      v1[i] = 0LL;
    }
    free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  result = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
