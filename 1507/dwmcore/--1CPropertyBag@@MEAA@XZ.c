/*
 * XREFs of ??1CPropertyBag@@MEAA@XZ @ 0x1801209DC
 * Callers:
 *     ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x180120AB0 (--_GCPropertyBag@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CPropertyBag::~CPropertyBag(CPropertyBag *this)
{
  struct _RTL_GENERIC_TABLE *v2; // rsi
  ULONG v3; // ebp
  __int64 v4; // r15
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CPropertyBag::`vftable'{for `CResource'};
  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 56);
  v3 = 0;
  for ( *((_QWORD *)this + 5) = &CPropertyBagBase::`vftable'{for `IExpressionSource'};
        v3 < RtlNumberGenericTableElements(v2);
        ++v3 )
  {
    v4 = *((_QWORD *)RtlGetElementGenericTable(v2, v3) + 1);
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
  CPropertyBagBase::~CPropertyBagBase(this);
}
