/*
 * XREFs of ?SetCount@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x18002D1D8
 * Callers:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x18002CFC0 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 * Callees:
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18000CD90 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::SetCount(
        __int64 a1)
{
  _QWORD *v1; // rsi
  unsigned __int64 v3; // rbp
  unsigned __int64 i; // rdi
  void **v5; // rcx
  void **(__fastcall *v6)(void **, char); // rax
  char result; // al

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    for ( i = 0LL; i < v3; ++i )
    {
      v5 = (void **)v1[i];
      if ( v5 )
      {
        v6 = *(void **(__fastcall **)(void **, char))*v5;
        if ( v6 == ATL::CDacl::CAccessAce::`vector deleting destructor' )
          ATL::CDacl::CAccessAce::`vector deleting destructor'(v5, 1);
        else
          v6(v5, 1);
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
