/*
 * XREFs of ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@IEAA_NU_LUID@@@Z @ 0x180037D0C
 * Callers:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800993EC (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceManager::RemoveFromSurfaceMap(CCompositionSurfaceManager *this, struct _LUID a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rdi
  char v3; // bl
  PVOID v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  v6[0] = a2;
  v3 = 0;
  v6[1] = 0LL;
  v4 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v6);
  if ( v4 )
  {
    RtlDeleteElementGenericTable(v2, v4);
    return 1;
  }
  return v3;
}
