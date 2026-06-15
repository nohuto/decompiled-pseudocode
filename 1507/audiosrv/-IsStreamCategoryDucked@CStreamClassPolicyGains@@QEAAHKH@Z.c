/*
 * XREFs of ?IsStreamCategoryDucked@CStreamClassPolicyGains@@QEAAHKH@Z @ 0x1800AB43C
 * Callers:
 *     ?TsSessionIdIsStreamCategoryDucked@@YAHKPEBGKH@Z @ 0x1800A0080 (-TsSessionIdIsStreamCategoryDucked@@YAHKPEBGKH@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

__int64 __fastcall CStreamClassPolicyGains::IsStreamCategoryDucked(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        int a3)
{
  __int64 v3; // rbp
  unsigned int v6; // esi
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  __int64 v8; // rcx
  __int64 *Next; // rax
  LPCRITICAL_SECTION v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]
  _QWORD *p_Type; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, this);
  v6 = 0;
  if ( a3 )
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 1048);
  else
    v7 = this + 1;
  if ( (unsigned int)v3 < 0x15 )
  {
    v8 = 6 * v3;
    p_Type = &(&v7->DebugInfo)[6 * v3]->Type;
    if ( p_Type )
    {
      while ( 1 )
      {
        Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v8, &p_Type);
        v8 = *Next;
        if ( *(_BYTE *)(*(_QWORD *)(*Next + 48) + 4LL) )
          break;
        if ( !p_Type )
          goto LABEL_10;
      }
      v6 = 1;
    }
  }
LABEL_10:
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return v6;
}
