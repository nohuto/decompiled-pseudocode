/*
 * XREFs of ??1CPropertyBag@@MEAA@XZ @ 0x180135C60
 * Callers:
 *     ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x180135D30 (--_GCPropertyBag@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CPropertyBag::~CPropertyBag(CPropertyBag *this)
{
  struct _RTL_GENERIC_TABLE *v2; // rsi
  ULONG i; // ebp
  __int64 v4; // r15
  PVOID v5; // rax
  __int64 v6; // rdx
  const GUID *v7; // r8
  const GUID *v8; // r9
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 48);
  *(_QWORD *)this = &CPropertyBag::`vftable';
  for ( i = 0; i < RtlNumberGenericTableElements(v2); ++i )
  {
    v4 = *((_QWORD *)RtlGetElementGenericTable(v2, i) + 1);
    if ( v4 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v4);
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
    if ( !v5 )
      break;
    RtlDeleteElementGenericTable(v2, v5);
  }
  CPropertyBagBase::~CPropertyBagBase(this, v6, v7, v8);
}
