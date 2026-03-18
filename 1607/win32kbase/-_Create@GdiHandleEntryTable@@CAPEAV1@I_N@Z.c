/*
 * XREFs of ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0079944
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002AAF0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     HmgAlloc @ 0x1C00300B0 (HmgAlloc.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C00798AC (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x1C00799D8 (-Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

struct GdiHandleEntryTable *__fastcall GdiHandleEntryTable::_Create(unsigned int a1, char a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbx
  struct GdiHandleEntryTable::EntryDataLookupTable *v6; // rax

  v2 = 0;
  if ( a2 )
  {
    v2 = 24 * a1;
    if ( 24 * (unsigned __int64)a1 > 0xFFFFFFFF || v2 + 32 < v2 )
      return 0LL;
  }
  v5 = Win32AllocPool();
  if ( !v5 )
    return (struct GdiHandleEntryTable *)v5;
  v6 = GdiHandleEntryTable::EntryDataLookupTable::Create(a1);
  *(_QWORD *)(v5 + 24) = v6;
  if ( v6 )
  {
    if ( a2 )
    {
      *(_QWORD *)v5 = v5 + 32;
      memset((void *)(v5 + 32), 0, v2);
    }
    *(_DWORD *)(v5 + 20) = 0;
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 8) = a1;
    *(_DWORD *)(v5 + 12) = -1;
    return (struct GdiHandleEntryTable *)v5;
  }
  Win32FreePool();
  return 0LL;
}
