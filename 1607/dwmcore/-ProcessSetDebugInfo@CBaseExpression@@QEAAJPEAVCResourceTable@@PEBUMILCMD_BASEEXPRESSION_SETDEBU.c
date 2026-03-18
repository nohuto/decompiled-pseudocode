/*
 * XREFs of ?ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBUGINFO@@PEBXI@Z @ 0x18010ABEC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800A9608 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetDebugInfo(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETDEBUGINFO *a3,
        char *a4)
{
  int v4; // ebx
  __int64 v8; // rdx
  char *v9; // rax
  char *v10; // rdi
  struct CResourceTable *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v4 = 0;
  if ( a4 )
  {
    v8 = 2LL * *((unsigned int *)a3 + 2);
    if ( !is_mul_ok(*((unsigned int *)a3 + 2), 2uLL) )
      v8 = -1LL;
    v9 = (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   v8);
    v10 = v9;
    if ( v9 )
    {
      v4 = StringCchCopyW(v9, *((unsigned int *)a3 + 2), a4);
      if ( v4 < 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, char *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v10);
        return 0;
      }
      else
      {
        v12 = (struct CResourceTable *)v10;
        if ( v10 == (char *)`CBaseExpression::SetDebugInfo'::`2'::sc_defaultValue )
          *(_DWORD *)(*((_QWORD *)this + 33) + 4LL) &= ~0x80000000;
        else
          CSparseStorage::SetData((char **)this + 33, 1, 8u, &v12);
      }
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x124u);
    }
  }
  return (unsigned int)v4;
}
