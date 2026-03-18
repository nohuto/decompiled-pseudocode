/*
 * XREFs of ??1CCompositionSurfaceManager@@MEAA@XZ @ 0x1800E90D0
 * Callers:
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x1800E91F4 (--1CSurfaceManager@@MEAA@XZ.c)
 *     ??_GCCompositionSurfaceManager@@MEAAPEAXI@Z @ 0x1800E9320 (--_GCCompositionSurfaceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceManager::~CCompositionSurfaceManager(CCompositionSurfaceManager *this)
{
  struct _RTL_GENERIC_TABLE *i; // rbx
  PVOID v2; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CCompositionSurfaceManager::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; RtlDeleteElementGenericTable(i, v2) )
  {
    RestartKey = 0LL;
    v2 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v2 )
      break;
  }
}
