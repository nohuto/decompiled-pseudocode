/*
 * XREFs of ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x180088F8C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18008874C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTracingCookie(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTRACINGCOOKIE *a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct CResourceTable *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  if ( (unsigned int)CBaseExpression::GetTracingCookie(this) )
  {
    if ( !*(_DWORD *)(v4 + 8) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 168LL);
      --*(_DWORD *)(v7 + 176);
      --*(_DWORD *)(v7 + 96);
    }
  }
  else if ( *(_DWORD *)(v4 + 8) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 168LL);
    ++*(_DWORD *)(v6 + 176);
    ++*(_DWORD *)(v6 + 96);
  }
  LODWORD(v8) = *(_DWORD *)(v4 + 8);
  if ( (_DWORD)v8 == `CBaseExpression::SetTracingCookie'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)(v3 + 264) + 4LL) &= ~0x40000000u;
  else
    CSparseStorage::SetData((CSparseStorage *)(v3 + 264), 2u, 4u, &v8);
  return 0LL;
}
