/*
 * XREFs of ??1CLogicalSurfaceHandleMap@@UEAA@XZ @ 0x18011B674
 * Callers:
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18011B598 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ??_GCLogicalSurfaceHandleMap@@UEAAPEAXI@Z @ 0x18011B890 (--_GCLogicalSurfaceHandleMap@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLogicalSurfaceHandleMap::~CLogicalSurfaceHandleMap(CLogicalSurfaceHandleMap *this)
{
  struct _RTL_GENERIC_TABLE *i; // rbx
  PVOID v2; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CLogicalSurfaceHandleMap::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; RtlDeleteElementGenericTable(i, v2) )
  {
    RestartKey = 0LL;
    v2 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v2 )
      break;
  }
}
