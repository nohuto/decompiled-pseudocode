/*
 * XREFs of ?UnregisterSourcesForAnimation@CExpression@@QEAAXPEAVCBaseExpression@@@Z @ 0x18008B520
 * Callers:
 *     ?UnregisterSources@CKeyframeAnimation@@MEAAXXZ @ 0x180086920 (-UnregisterSources@CKeyframeAnimation@@MEAAXXZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x18008B7C0 (--1CExpression@@UEAA@XZ.c)
 *     ?UnregisterSources@CExpression@@MEAAXXZ @ 0x18010A740 (-UnregisterSources@CExpression@@MEAAXXZ.c)
 *     ?UnregisterSources@CConditionalExpression@@MEAAXXZ @ 0x1801494B0 (-UnregisterSources@CConditionalExpression@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CAnimationSourceMapEntry@@QEAA@XZ @ 0x18011E2B0 (--1CAnimationSourceMapEntry@@QEAA@XZ.c)
 *     ??_GCAnimationSourceMapEntry@@QEAAPEAXI@Z @ 0x18011E2DC (--_GCAnimationSourceMapEntry@@QEAAPEAXI@Z.c)
 */

void __fastcall CExpression::UnregisterSourcesForAnimation(CExpression *this, struct CBaseExpression *a2)
{
  unsigned int i; // edi
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 *v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  struct _RTL_GENERIC_TABLE *v10; // rbp
  CAnimationSourceMapEntry *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h]

  for ( i = 0; i < *((_DWORD *)this + 124); ++i )
  {
    v5 = *((_QWORD *)this + 59);
    v6 = 32LL * i;
    v7 = *(__int64 **)(*((_QWORD *)this + 47) + 16LL * *(unsigned int *)(v6 + v5 + 28) + 8);
    if ( v7 )
    {
      v8 = *v7;
      if ( *v7 )
      {
        v9 = *(_DWORD *)(v6 + v5 + 4);
        v10 = (struct _RTL_GENERIC_TABLE *)(v8 + 40);
        v16 = 0LL;
        Buffer = v9;
        v11 = (CAnimationSourceMapEntry *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v8 + 40), &Buffer);
        CAnimationSourceMapEntry::~CAnimationSourceMapEntry((CAnimationSourceMapEntry *)&Buffer);
        if ( v11 )
        {
          v12 = *((_QWORD *)v11 + 1);
          v13 = v12;
          while ( v12 )
          {
            if ( *(struct CBaseExpression **)v12 == a2 )
            {
              v14 = *(_QWORD *)(v12 + 8);
              if ( v12 == *((_QWORD *)v11 + 1) )
                *((_QWORD *)v11 + 1) = v14;
              else
                *(_QWORD *)(v13 + 8) = v14;
              (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
              break;
            }
            v13 = v12;
            v12 = *(_QWORD *)(v12 + 8);
          }
          if ( !*((_QWORD *)v11 + 1) )
          {
            CAnimationSourceMapEntry::`scalar deleting destructor'(v11, v12);
            RtlDeleteElementGenericTable(v10, v11);
          }
        }
      }
    }
  }
}
