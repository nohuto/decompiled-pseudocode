/*
 * XREFs of ??_ECWindowManager@@UEAAPEAXI@Z @ 0x1801046E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void **__fastcall CWindowManager::`vector deleting destructor'(void **this, char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rbx
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *this = &CWindowManager::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)(this + 6); ; RtlDeleteElementGenericTable(i, v5) )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v5 )
      break;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  *this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
