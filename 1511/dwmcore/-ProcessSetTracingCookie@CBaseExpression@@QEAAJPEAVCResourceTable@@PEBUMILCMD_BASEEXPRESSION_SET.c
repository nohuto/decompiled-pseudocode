/*
 * XREFs of ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1801295C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::ProcessSetTracingCookie(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTRACINGCOOKIE *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( *((_DWORD *)this + 30) )
  {
    if ( !*((_DWORD *)a3 + 2) )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 168LL);
      --*(_DWORD *)(v5 + 176);
      --*(_DWORD *)(v5 + 96);
    }
  }
  else if ( *((_DWORD *)a3 + 2) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 168LL);
    ++*(_DWORD *)(v4 + 176);
    ++*(_DWORD *)(v4 + 96);
  }
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 2);
  return 0LL;
}
